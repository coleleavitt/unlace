__int64 __fastcall sub_67A250(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // r12
  unsigned int v17; // ebx
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rdx
  __int64 *v23; // r13
  __int64 *v24; // r12

  v7 = *(_QWORD *)(a2 + 48);
  if ( !v7 )
  {
    v10 = 0;
    goto LABEL_5;
  }
  v8 = v7 >> 2;
  if ( (v7 & 4) == 0 )
  {
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v10 = 0;
    if ( (v8 & 1) == 0 )
      v10 = v9;
LABEL_5:
    if ( !(unsigned __int8)sub_66D270(a1, v10, a3, a4, a5, a6) )
      return 0;
    goto LABEL_6;
  }
  v10 = 0;
  v19 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v19 )
    goto LABEL_5;
  if ( !(unsigned __int8)sub_673BB0(a1, *v19, (unsigned __int64)(v19 + 1), a3, a4, a5, a6) )
    return 0;
LABEL_6:
  v11 = 0;
  v12 = *(unsigned int *)(a2 + 36);
  v13 = 8 * v12;
  if ( (_DWORD)v12 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v11);
      v15 = (__int64 *)(v14 + 24);
      v16 = v14 + (unsigned int)(8 * *(_DWORD *)(v14 + 20)) + 24;
      if ( 8 * *(_DWORD *)(v14 + 20) )
        break;
LABEL_16:
      v11 += 8;
      if ( v11 == v13 )
        goto LABEL_17;
    }
    while ( (unsigned __int8)sub_66D270(a1, *v15, a3, a4, a5, a6) )
    {
      if ( ++v15 == (__int64 *)v16 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_17:
    v20 = 0;
    if ( (unsigned __int8)sub_79B790(a2) )
      v20 = sub_79AC10(a2);
    v17 = sub_66F3A0(a1, v20, a3, a4, a5, a6);
    if ( (_BYTE)v17 )
    {
      v21 = sub_6434A0(a2);
      v23 = v22;
      v24 = (__int64 *)v21;
      if ( v22 == (__int64 *)v21 )
        return v17;
      while ( (unsigned __int8)sub_6777E0(a1, *v24, a3, a4, a5, a6) )
      {
        if ( v23 == ++v24 )
          return v17;
      }
    }
  }
  return 0;
}

