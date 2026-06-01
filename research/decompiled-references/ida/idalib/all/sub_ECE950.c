_QWORD *__fastcall sub_ECE950(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // r13
  const __m128i *v14; // rbx
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  const __m128i *v22; // rbp
  unsigned int v23; // [rsp+8h] [rbp-40h]
  unsigned __int8 v24; // [rsp+Ch] [rbp-3Ch]

  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  v7 = *(_BYTE *)(v6 + 8) & 0x7F;
  if ( v7 != 24 )
  {
    a2 = (unsigned int)v7 - 58;
    if ( (unsigned int)a2 > 4 )
    {
      v24 = a3;
      if ( (unsigned int)v7 - 64 > 2 || (v23 = a4, v12 = sub_B8C1B0(v6), a4 = v23, (v13 = v12) == 0) )
      {
LABEL_14:
        if ( (_BYTE)a4 && (*(_BYTE *)(v6 + 8) & 0x7F) == 0 )
          return sub_E91110(a1, a2, a3, a4, a5, a6);
        return nullptr;
      }
      v22 = *(const __m128i **)(v12 + 48);
      if ( (unsigned __int8)(v22[1].m128i_i8[0] - 48) <= 1u )
        v22 = sub_ECE210(a1, v22, (unsigned __int8)v23, v23, a5);
      v17 = sub_ECE950(a1, v13, v24, (unsigned __int8)v23);
      v18 = (__int64)v22;
    }
    else
    {
      if ( v6 == 64 )
        goto LABEL_14;
      v14 = *(const __m128i **)(v6 - 16);
      v15 = (unsigned __int8)a4;
      v16 = (unsigned __int8)a3;
      if ( (unsigned __int8)(v14[1].m128i_i8[0] - 48) <= 1u )
        v14 = sub_ECE210(a1, *(const __m128i **)(v6 - 16), (unsigned __int8)a4, a4, a5);
      v17 = sub_ECE950(a1, v6 - 64, v16, v15);
      v18 = (__int64)v14;
    }
    return sub_E91A00(a1, v17, v18);
  }
  v8 = v6 - 48;
  if ( v6 == 48 )
    goto LABEL_14;
  while ( (*(_BYTE *)(v8 + 57) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 4) != 0 )
    {
      v10 = *(_QWORD *)v10;
      if ( (*(_BYTE *)(v10 + 8) & 0x7F) != 0x18 )
        return nullptr;
    }
    else if ( (*(_BYTE *)(v10 + 8) & 0x7F) != 0x18 )
    {
      return nullptr;
    }
    v8 = v10 - 48;
    if ( !v8 )
      return nullptr;
  }
  if ( !*(_QWORD *)(v8 + 40) )
    return nullptr;
  while ( (*(_BYTE *)(v8 + 57) & 0x20) != 0 )
  {
    v19 = *(_QWORD *)(v8 + 16);
    v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v19 & 4) != 0 )
      v20 = *(_QWORD *)v20;
    if ( (*(_BYTE *)(v20 + 8) & 0x7F) == 0x18 )
    {
      v8 = v20 - 48;
      if ( v8 )
        continue;
    }
    return nullptr;
  }
  v21 = sub_ECE950(a1, v8, 1, (unsigned __int8)a4);
  return sub_E91C40(a1, v21, v8);
}
