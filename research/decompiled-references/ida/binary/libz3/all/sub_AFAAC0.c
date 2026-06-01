__int64 (__fastcall **__fastcall sub_AFAAC0(_QWORD *a1))()
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v9; // rdi

  *a1 = off_1C71840;
  sub_AFA7C0((__int64)a1);
  v2 = (void *)a1[15];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[12];
  if ( v3 )
    sub_186B220(v3);
  v4 = a1[11];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[10];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[9];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[5];
  result = off_1C70148;
  *a1 = off_1C70148;
  if ( v7 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v7 - 8));
  v9 = a1[4];
  if ( v9 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v9 - 8));
  return result;
}

