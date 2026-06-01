__int64 __fastcall sub_958B60(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  void *v12; // rdi

  sub_957CC0((__int64)a1);
  result = sub_958AA0((__int64)a1);
  v3 = (void *)a1[26];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = (void *)a1[23];
  if ( v4 )
    result = sub_186B220(v4);
  v5 = a1[20];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = a1[19];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = (void *)a1[16];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = (void *)a1[13];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = (void *)a1[10];
  if ( v9 )
    result = sub_186B220(v9);
  v10 = a1[7];
  if ( v10 )
    result = sub_186B220((void *)(v10 - 8));
  v11 = a1[6];
  if ( v11 )
    result = sub_186B220((void *)(v11 - 8));
  v12 = (void *)a1[3];
  if ( v12 )
    return sub_186B220(v12);
  return result;
}

