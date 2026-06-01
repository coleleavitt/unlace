char *__fastcall sub_230290(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 328);
  if ( v1 )
    return (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  else
    return "null";
}

