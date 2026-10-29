void __fastcall sub_228E730(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  char *v12; // rdx
  char *v13; // rcx
  char v14; // si
  const void *v15; // rsi
  unsigned __int64 v16; // rdx
  const void *v17; // rsi

  if ( a1 == a2 )
    return;
  v2 = (_QWORD *)*a1;
  v3 = a2[1];
  if ( a1 + 3 != (_QWORD *)*a1 && (_QWORD *)*a2 != a2 + 3 )
  {
    *a1 = *a2;
    *a2 = v2;
    v4 = a1[1];
    a1[1] = v3;
    v5 = a2[2];
    a2[1] = v4;
    v6 = a1[2];
    a1[2] = v5;
    a2[2] = v6;
    return;
  }
  if ( a1[2] < v3 )
  {
    sub_2236E10((__int64)a1, a1 + 3, v3, 1);
    v8 = a1[1];
    if ( a2[2] >= v8 )
      goto LABEL_7;
    goto LABEL_23;
  }
  v8 = a1[1];
  if ( a2[2] < v8 )
  {
LABEL_23:
    sub_2236E10((__int64)a2, a2 + 3, v8, 1);
    v8 = a1[1];
  }
LABEL_7:
  v9 = a2[1];
  v10 = v8;
  if ( v9 <= v8 )
    v10 = a2[1];
  if ( v10 )
  {
    v11 = 0;
    do
    {
      v12 = (char *)(v11 + *a2);
      v13 = (char *)(v11 + *a1);
      ++v11;
      v14 = *v13;
      *v13 = *v12;
      *v12 = v14;
    }
    while ( v11 != v10 );
    v8 = a1[1];
    v9 = a2[1];
  }
  if ( v9 >= v8 )
  {
    if ( v9 > v8 )
    {
      v16 = v8;
      v17 = (const void *)(*a2 + v10);
      if ( v17 != (const void *)(v9 + *a2) )
      {
        memcpy((void *)(v8 + *a1), v17, v9 - v10);
        v16 = a1[1];
      }
      a1[1] = v16 + v9 - v8;
      a2[1] = v10;
    }
  }
  else
  {
    v15 = (const void *)(*a1 + v10);
    if ( v15 != (const void *)(v8 + *a1) )
    {
      memcpy((void *)(v9 + *a2), v15, v8 - v10);
      v8 = a2[1] + v8 - v9;
    }
    a2[1] = v8;
    a1[1] = v10;
  }
}
