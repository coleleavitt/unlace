__int64 (__fastcall **__fastcall sub_B3A9D0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *v7; // rdi

  result = off_1C57290;
  *a1 = off_1C57290;
  v3 = (void *)a1[13];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  v4 = (void *)a1[10];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220(v4);
  v5 = a1[9];
  if ( v5 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v5 - 8));
  v6 = a1[8];
  if ( v6 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v6 - 8));
  v7 = (void *)a1[3];
  if ( v7 )
    return (__int64 (__fastcall **)())sub_186B220(v7);
  return result;
}

