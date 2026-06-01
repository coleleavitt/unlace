__int64 (__fastcall **__fastcall sub_B3AC00(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rdi

  *a1 = off_1C56F70;
  v2 = a1[8];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[7];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[5];
  result = off_1C56ED0;
  *a1 = off_1C56ED0;
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v6 = a1[4];
  if ( v6 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v6 - 8));
  return result;
}

