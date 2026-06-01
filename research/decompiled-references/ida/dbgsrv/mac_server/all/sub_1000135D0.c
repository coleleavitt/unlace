/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000135D0
// Address: 0x00000001000135D0

//----- (00000001000135D0) ----------------------------------------------------
__int64 __fastcall sub_1000135D0(_QWORD *a1, __int64 a2, _QWORD *a3, unsigned __int64 *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  _QWORD *v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 result; // rax
  __int64 v18; // r11
  __int64 v19; // rbx
  __int64 v20; // r11
  __int64 v21; // r14
  unsigned __int64 v22; // r15
  unsigned __int8 v23; // dl

  v4 = a3[1];
  if ( !v4 )
    goto LABEL_28;
  v5 = (unsigned int)a2;
  v6 = (_QWORD *)(*a3 + 72 * v4 - 24);
  while ( 1 )
  {
    v7 = *(v6 - 1);
    a2 = v5 - v7;
    if ( v5 >= v7 )
    {
      v8 = *v6 + v7;
      if ( v8 > v5 )
        break;
    }
    --v4;
    v6 -= 9;
    if ( !v4 )
      goto LABEL_28;
  }
  a2 += *(v6 - 3);
  if ( a2 == -1 )
  {
LABEL_28:
    if ( under_debugger == 1 )
      goto LABEL_29;
    interr(0x4EAFu);
LABEL_31:
    if ( under_debugger != 1 )
    {
      interr(0x4EB0u);
      return sub_100013750((_QWORD *)0x4EB0, a2, v23);
    }
LABEL_29:
    BUG();
  }
  if ( v8 == -1 )
    goto LABEL_31;
  v9 = *(_QWORD *)(*a1 + 16LL) & a2;
  v10 = 32LL * a1[67];
  if ( v10 )
  {
    v11 = a1[66];
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + v12);
      if ( v13 <= v9 && *(_QWORD *)(v11 + v12 + 8) + v13 > v9 )
        break;
      v12 += 32;
      if ( v10 == v12 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v14 = a1[99];
    if ( !(8 * v14) )
      return 0;
    v15 = a1[98];
    v16 = v15 + 8 * v14;
    result = 0;
    while ( 1 )
    {
      a1 = *(_QWORD **)v15;
      v18 = *(_QWORD *)(*(_QWORD *)v15 + 536LL);
      if ( (v18 & 0x7FFFFFFFFFFFFFFLL) != 0 )
        break;
LABEL_16:
      v15 += 8;
      if ( v15 == v16 )
        return result;
    }
    v19 = a1[66];
    v20 = 32 * v18;
    v21 = 0;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v19 + v21);
      if ( v22 <= v9 && *(_QWORD *)(v19 + v21 + 8) + v22 > v9 )
        break;
      v21 += 32;
      if ( v20 == v21 )
        goto LABEL_16;
    }
  }
  if ( !a1 )
    return 0;
  if ( a4 )
    *a4 = v8;
  return a1[1];
}
// 10001374B: variable 'v23' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
