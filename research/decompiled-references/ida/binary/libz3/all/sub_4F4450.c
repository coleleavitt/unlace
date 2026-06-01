__int64 __fastcall sub_4F4450(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  __int64 v9; // rdi

  *a1 = &off_1C4FE88;
  v2 = a1[16];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[15];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[14];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  result = sub_180C0E0(a1 + 7);
  v6 = a1[6];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = a1[5];
  if ( v7 )
    result = sub_186B220((void *)(v7 - 8));
  v8 = (void *)a1[4];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = a1[1];
  if ( v9 )
    return sub_186B220((void *)(v9 - 8));
  return result;
}

