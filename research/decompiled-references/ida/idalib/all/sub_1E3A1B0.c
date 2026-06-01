const __m128i *__fastcall sub_1E3A1B0(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128i a7)
{
  unsigned __int8 v10; // cl
  bool v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = *(_BYTE *)(a1[3] + 8) & 0x7F;
  if ( v10 > 0x12u )
    v11 = ((v10 + 94) & 0x7Fu) <= 5;
  else
    v11 = ((1LL << v10) & 0x40182) != 0;
  v12 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v12 )
  {
    v13 = *(_BYTE *)(v12 + 28) & 0x7F;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v12 + 64);
      v15 = v14;
      if ( v13 == 54 )
      {
        v15 = *(_QWORD *)(v12 + 80);
        if ( !v15 )
          v15 = *(_QWORD *)(v12 + 64);
      }
      v16 = *a1;
      if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x39 )
      {
        v17 = (__int64)sub_B9AA40(*(_QWORD **)(v16 + 248), a1[3], *(_DWORD *)(v14 + 24), *(_QWORD *)(v14 + 40));
        if ( !v17 )
          return nullptr;
      }
      else
      {
        v17 = sub_1E38470(v16, *(_DWORD *)(v12 + 24), v15, a1[4], 0, a5, a6, a7);
        if ( !v17 )
          return nullptr;
      }
      v29[0] = 0;
      if ( !a4 || !(unsigned __int8)sub_1853A70(*a1, a3, v17, a4, v29) )
        break;
LABEL_22:
      v12 = *(_QWORD *)(v12 + 72);
      if ( v12 )
      {
        v13 = *(_BYTE *)(v12 + 28) & 0x7F;
        if ( (unsigned int)v13 - 53 <= 1 )
          continue;
      }
      return a3;
    }
    v18 = *(_QWORD *)(v12 + 48);
    if ( (v18 & 3) != 0 )
      goto LABEL_27;
    v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v19 )
      goto LABEL_27;
    v20 = (_QWORD *)(*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
    {
      if ( (*(_BYTE *)(*v20 + 8LL) & 0x7Fu) - 59 <= 2 )
      {
        v20 = (_QWORD *)v20[1];
LABEL_16:
        v21 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v19 + 16) & 4) != 0 )
          v21 = *(_QWORD *)(v21 + 8);
        if ( (_QWORD *)v21 == v20 )
          goto LABEL_19;
LABEL_27:
        v22 = v29[0];
LABEL_20:
        v23 = sub_1846B70(*a1, 0, (__int64)a3, v17, v22);
        sub_A96960(*(_QWORD *)(*a1 + 248), v23, v12, v24, v25, v26);
        if ( v11 )
          sub_1DC20B0(*(_QWORD *)(*a1 + 11280), v12, v23, v27);
        goto LABEL_22;
      }
    }
    else if ( ((_BYTE)v20[1] & 0x7Fu) - 59 <= 2 )
    {
      goto LABEL_16;
    }
LABEL_19:
    v29[0] = sub_1E38470(*a1, *(_DWORD *)(v12 + 24), v19, a1[4], 0, a5, a6, a7);
    v22 = v29[0];
    goto LABEL_20;
  }
  return a3;
}
