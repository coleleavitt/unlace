__int64 __fastcall ClpModel::passInEventHandler(ClpModel *this, const ClpEventHandler *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *((_QWORD *)this + 45);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  result = (*(__int64 (__fastcall **)(const ClpEventHandler *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_QWORD *)this + 45) = result;
  return result;
}

