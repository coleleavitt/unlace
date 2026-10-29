__int64 __fastcall sub_F5A0D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 i; // r15
  __int64 v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-50h]

  v4 = (a3 - 1) / 2;
  v14 = a3 & 1;
  if ( a2 >= v4 )
  {
    v7 = (__int64 *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v6 = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == v6 )
    {
      v12 = 2 * v6 + 2;
      v13 = *(_QWORD *)(a1 + 8 * v12 - 8);
      v6 = v12 - 1;
      *v7 = v13;
      v7 = (__int64 *)(a1 + 8 * v6);
    }
    goto LABEL_8;
  }
  for ( i = a2; ; i = v6 )
  {
    v6 = 2 * (i + 1);
    v7 = (__int64 *)(a1 + 16 * (i + 1));
    v8 = *v7;
    if ( !sub_F5A050(*v7 + 24, *(v7 - 1) + 24) )
      break;
    --v6;
    v7 = (__int64 *)(a1 + 8 * v6);
    *(_QWORD *)(a1 + 8 * i) = *v7;
    if ( v6 >= v4 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  *(_QWORD *)(a1 + 8 * i) = v8;
  if ( v6 < v4 )
    goto LABEL_4;
LABEL_7:
  if ( !v14 )
    goto LABEL_16;
LABEL_8:
  v9 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v7 = (__int64 *)(a1 + 8 * v6);
      v10 = *(_QWORD *)(a1 + 8 * v9);
      if ( !sub_F5A050(v10 + 24, a4 + 24) )
        break;
      *v7 = v10;
      v6 = v9;
      if ( a2 >= v9 )
      {
        v7 = (__int64 *)(a1 + 8 * v9);
        break;
      }
      v9 = (v9 - 1) / 2;
    }
  }
LABEL_13:
  *v7 = a4;
  return a4;
}

