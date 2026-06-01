__int64 __fastcall sub_ACA480(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 result; // rax
  void *v10; // rdi
  __int64 v11; // rdi
  void *v12; // rdi
  void (__fastcall ***v13)(_QWORD); // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  __int64 *v21; // rbp
  __int64 v22; // rdi

  *a1 = &off_1C56C10;
  v2 = a1[13];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  sub_1600000(a1 + 9);
  sub_AC9EC0((__int64)a1, 0);
  v3 = (__int64 *)a1[15];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[14];
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (__int64 *)a1[15];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = a1[13];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  result = sub_1600000(a1 + 9);
  v10 = (void *)a1[10];
  if ( v10 )
    result = sub_186B220(v10);
  v11 = a1[8];
  if ( v11 )
    result = sub_186B220((void *)(v11 - 8));
  v12 = (void *)a1[5];
  if ( v12 )
    result = sub_186B220(v12);
  v13 = (void (__fastcall ***)(_QWORD))a1[4];
  if ( v13 )
  {
    (**v13)(a1[4]);
    result = sub_186B220(v13);
  }
  v14 = (_QWORD *)a1[3];
  if ( v14 )
  {
    v15 = v14[57];
    if ( v15 )
      sub_186B220((void *)(v15 - 8));
    v16 = v14[56];
    if ( v16 )
      sub_186B220((void *)(v16 - 8));
    v17 = (void *)v14[53];
    if ( v17 )
      sub_186B220(v17);
    v18 = (void *)v14[50];
    if ( v18 )
      sub_186B220(v18);
    sub_157EB20(v14 + 32);
    v19 = (void *)v14[27];
    if ( v19 )
      sub_186B220(v19);
    sub_AC6F60(v14[24], v14[25]);
    v20 = (void *)v14[14];
    if ( v20 )
      sub_186B220(v20);
    v21 = (__int64 *)v14[11];
    if ( v21 )
    {
      sub_2334C0(v21 + 11);
      v22 = v21[10];
      if ( v22 )
        sub_186B220((void *)(v22 - 8));
      sub_186B220(v21);
    }
    return sub_186B220(v14);
  }
  return result;
}

