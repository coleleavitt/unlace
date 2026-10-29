__int64 (__fastcall **__fastcall sub_B3AC70(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  result = off_1C57150;
  *a1 = off_1C57150;
  v3 = a1[9];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[8];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v5 = a1[7];
  if ( v5 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v5 - 8));
  v6 = a1[4];
  if ( v6 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v6 - 8));
  return result;
}

