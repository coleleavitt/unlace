unsigned __int64 __fastcall sub_1E130(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  __int16 v7; // ax
  _BYTE *v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  char *v13; // r15
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rbp
  __int16 v16; // ax
  __int16 v17; // si
  __int64 v19; // r13
  unsigned int v20; // r14d
  _QWORD *v21; // r15
  __int64 v22; // rsi
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v3 = a2;
  if ( !sub_BFF0(a2) )
    return 0;
  v5 = sub_BFF0(a2);
  v6 = 0;
  if ( v5 )
    v6 = *(_QWORD *)sub_C020((_BYTE *)v3);
  v7 = *(_WORD *)(v6 + 16);
  if ( v7 != 73 && v7 != 143 && v7 != 68 )
  {
    v19 = sub_1E130(a1, v6, (unsigned int)(a3 + 1));
    if ( !v19 )
      return 0;
    v20 = 1;
    v23 = sub_C400(*(_QWORD **)(a1 + 40), *(_WORD *)(v3 + 16));
    sub_C080(v23, v19, *(_QWORD **)(a1 + 40));
    while ( v20 < (unsigned __int64)sub_BFF0(v3) )
    {
      v21 = *(_QWORD **)(a1 + 40);
      v22 = 0;
      if ( v20 < (unsigned __int64)sub_BFF0(v3) )
        v22 = *(_QWORD *)&sub_C020((_BYTE *)v3)[8 * v20];
      ++v20;
      sub_C080(v23, v22, v21);
    }
    v3 = v23;
  }
  v11 = sub_C400(*(_QWORD **)(a1 + 40), 224);
  v12 = *(_QWORD *)(a1 + 32);
  if ( v12 )
    goto LABEL_10;
  while ( 1 )
  {
    v13 = sub_1C940((_QWORD *)a1, a3 + 1, (_DWORD)v8, v9, v10);
    if ( !v13 )
      break;
    v14 = sub_C400(*(_QWORD **)(a1 + 40), 221);
    sub_C080(v14, (__int64)v13, *(_QWORD **)(a1 + 40));
    if ( !v14 )
      break;
    sub_C080(v11, v14, *(_QWORD **)(a1 + 40));
    v12 = *(_QWORD *)(a1 + 32);
    if ( !v12 )
      break;
LABEL_10:
    v8 = *(_BYTE **)(a1 + 24);
    if ( *v8 == 95 )
    {
      *(_QWORD *)(a1 + 24) = v8 + 1;
      *(_QWORD *)(a1 + 32) = v12 - 1;
      if ( !sub_BFF0(v11) )
        return v3;
      v15 = sub_C400(*(_QWORD **)(a1 + 40), 221);
      sub_C080(v15, v3, *(_QWORD **)(a1 + 40));
      v16 = *(_WORD *)(v3 + 16);
      if ( v16 == 58 )
      {
        v17 = 13;
      }
      else if ( v16 == 208 )
      {
        v17 = 14;
      }
      else
      {
        v3 = 0;
        v17 = 12;
        if ( v16 != 22 )
          return v3;
      }
      v3 = sub_C400(*(_QWORD **)(a1 + 40), v17);
      sub_C080(v3, v15, *(_QWORD **)(a1 + 40));
      sub_C080(v3, v11, *(_QWORD **)(a1 + 40));
      return v3;
    }
  }
  return 0;
}
