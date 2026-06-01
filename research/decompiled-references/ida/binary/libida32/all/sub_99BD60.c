__int64 __fastcall sub_99BD60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 i; // r14
  __int64 v7; // rbp
  _QWORD *v8; // r15
  __int64 v9; // r13
  _QWORD *v10; // r14
  __int64 v12; // rax
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = (a3 - 1) / 2;
  v16 = a5;
  v14 = a3 & 1;
  if ( a2 >= v5 )
  {
    v8 = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v7 = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == v7 )
    {
      v12 = *(_QWORD *)(a1 + 8 * (2 * v7 + 2) - 8);
      v7 = 2 * v7 + 1;
      *v8 = v12;
      v8 = (_QWORD *)(a1 + 8 * v7);
    }
    goto LABEL_8;
  }
  for ( i = a2; ; i = v7 )
  {
    v7 = 2 * (i + 1);
    v8 = (_QWORD *)(a1 + 16 * (i + 1));
    if ( !(unsigned __int8)sub_9A2060(&v16, *(v8 - 1), *v8) )
      break;
    --v7;
    v8 = (_QWORD *)(a1 + 8 * v7);
    *(_QWORD *)(a1 + 8 * i) = *v8;
    if ( v7 >= v5 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  *(_QWORD *)(a1 + 8 * i) = *v8;
  if ( v7 < v5 )
    goto LABEL_4;
LABEL_7:
  if ( !v14 )
    goto LABEL_16;
LABEL_8:
  v17[0] = v16;
  v9 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)(a1 + 8 * v9);
      v8 = (_QWORD *)(a1 + 8 * v7);
      if ( !(unsigned __int8)sub_9A2060(v17, a4, *v10) )
        break;
      v7 = v9;
      *v8 = *v10;
      if ( a2 >= v9 )
      {
        v8 = (_QWORD *)(a1 + 8 * v9);
        break;
      }
      v9 = (v9 - 1) / 2;
    }
  }
LABEL_13:
  *v8 = a4;
  return a4;
}

