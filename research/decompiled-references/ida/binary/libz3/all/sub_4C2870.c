__int64 __fastcall sub_4C2870(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  *a1 = &off_1C4ED10;
  result = sub_4C2790((__int64)a1);
  v3 = (void *)a1[22];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = (void *)a1[18];
  if ( v4 )
    result = sub_186B220(v4);
  v5 = (void *)a1[15];
  if ( v5 )
    result = sub_186B220(v5);
  v6 = (void *)a1[10];
  if ( v6 )
    result = sub_186B220(v6);
  v7 = (void *)a1[7];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = (void *)a1[4];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = a1[3];
  if ( v9 )
    result = sub_186B220((void *)(v9 - 8));
  v10 = a1[2];
  if ( v10 )
    return sub_186B220((void *)(v10 - 8));
  return result;
}

