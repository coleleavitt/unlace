__int64 __fastcall sub_ACDAA0(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[57];
    if ( v2 )
      sub_186B220((void *)(v2 - 8));
    v3 = v1[56];
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    v4 = (void *)v1[53];
    if ( v4 )
      sub_186B220(v4);
    v5 = (void *)v1[50];
    if ( v5 )
      sub_186B220(v5);
    sub_157EB20(v1 + 32);
    v6 = (void *)v1[27];
    if ( v6 )
      sub_186B220(v6);
    sub_AC6F60(v1[24], v1[25]);
    v7 = (void *)v1[14];
    if ( v7 )
      sub_186B220(v7);
    v8 = (__int64 *)v1[11];
    if ( v8 )
    {
      sub_2334C0(v8 + 11);
      v9 = v8[10];
      if ( v9 )
        sub_186B220((void *)(v9 - 8));
      sub_186B220(v8);
    }
    return sub_186B220(v1);
  }
  return result;
}

