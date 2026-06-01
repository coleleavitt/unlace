void __fastcall Clp_clearCallBack(__int64 a1)
{
  void *v2; // rbx
  CMessageHandler *v3; // rdi
  void (__fastcall *v4)(CMessageHandler *); // rax

  v2 = *(void **)(a1 + 8);
  if ( !v2 )
    goto LABEL_4;
  v3 = *(CMessageHandler **)(a1 + 8);
  v4 = *(void (__fastcall **)(CMessageHandler *))(*(_QWORD *)v2 + 24LL);
  if ( v4 == CMessageHandler::~CMessageHandler )
  {
    CMessageHandler::~CMessageHandler(v3);
    operator delete(v2);
LABEL_4:
    *(_QWORD *)(a1 + 8) = 0;
    return;
  }
  v4(v3);
  *(_QWORD *)(a1 + 8) = 0;
}

