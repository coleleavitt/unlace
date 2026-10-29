__int64 __fastcall ClpSimplex::passInEventHandler(ClpSimplex *this, const ClpEventHandler *a2)
{
  __int64 v3; // rdi
  ClpEventHandler *v4; // rax

  v3 = *((_QWORD *)this + 45);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v4 = (ClpEventHandler *)(*(__int64 (__fastcall **)(const ClpEventHandler *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_QWORD *)this + 45) = v4;
  return ClpEventHandler::setSimplex(v4, this);
}

