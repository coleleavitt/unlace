void __fastcall Clp_deleteModel(ClpSimplex **a1)
{
  ClpSimplex *v2; // rbp
  ClpSimplex *v3; // rbp
  CMessageHandler *v4; // rdi
  void (__fastcall *v5)(CMessageHandler *); // rax

  v2 = *a1;
  if ( *a1 )
  {
    ClpSimplex::~ClpSimplex(*a1);
    operator delete(v2);
  }
  v3 = a1[1];
  if ( !v3 )
    goto LABEL_6;
  v4 = a1[1];
  v5 = *(void (__fastcall **)(CMessageHandler *))(*(_QWORD *)v3 + 24LL);
  if ( v5 == CMessageHandler::~CMessageHandler )
  {
    CMessageHandler::~CMessageHandler(v4);
    operator delete(v3);
LABEL_6:
    operator delete(a1);
    return;
  }
  v5(v4);
  operator delete(a1);
}

