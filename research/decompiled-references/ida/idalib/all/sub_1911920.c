void __fastcall sub_1911920(__m128 *a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  _BOOL4 v5; // r14d
  _BYTE *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx

  v5 = 1;
  v8 = *(_BYTE **)(a2 + 16);
  v9 = v8[28] & 0x7F;
  if ( (unsigned int)(v9 - 35) <= 3 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 32LL))(*(_QWORD *)(a2 + 16));
    if ( (*(_QWORD *)(v10 + 80) & 0x40000LL) != 0
      || ((*(_QWORD *)(v10 + 80) >> 16) & 8) != 0
      || (unsigned int)sub_B984E0(v10) )
    {
      v5 = sub_B9DD50((__int64)v8, a3, (*(_BYTE *)(a1[14].m128_u64[1] + 12) & 0x10) != 0, v11, v12, v13) != 0;
    }
    v8 = *(_BYTE **)(a2 + 16);
    v9 = v8[28] & 0x7F;
  }
  if ( (unsigned int)(v9 - 34) <= 5 )
  {
    v14 = a1[288].m128_u64[1] + 640LL * a1[289].m128_u32[0] - 640;
    v15 = *(_DWORD *)v14;
    if ( (unsigned int)(*(_DWORD *)v14 - 3) > 2 && v15 > 1 && !a1[152].m128_i8[8] )
    {
      if ( v15 == 2 || v15 == 6 )
      {
        if ( *(_BYTE *)(v14 + 597) )
          goto LABEL_10;
      }
      else if ( v15 == 7 )
      {
        goto LABEL_10;
      }
      if ( *(_BYTE *)(v14 + 599) )
        goto LABEL_10;
      if ( !(unsigned __int8)sub_B7D7F0((__int64)v8)
        || a1[287].m128_i8[8]
        || (unsigned __int8)sub_B8E180((unsigned __int64)(v8 + 72)) )
      {
LABEL_18:
        v8 = *(_BYTE **)(a2 + 16);
        goto LABEL_10;
      }
      v16 = a1[288].m128_u64[1] + 640LL * a1[289].m128_u32[0] - 640;
      if ( !*(_BYTE *)(v16 + 476) )
        goto LABEL_37;
      v17 = *(_QWORD **)(v16 + 456);
      v18 = *(unsigned int *)(v16 + 468);
      v19 = v17;
      v20 = &v17[v18];
      if ( v17 != v20 )
      {
        if ( a2 == *v17 )
          goto LABEL_30;
        do
        {
          if ( v20 == ++v19 )
            break;
        }
        while ( a2 != *v19 );
      }
      if ( (unsigned int)v18 < *(_DWORD *)(v16 + 464) )
      {
        *(_DWORD *)(v16 + 468) = v18 + 1;
        *v20 = a2;
        v17 = *(_QWORD **)(v16 + 456);
        v19 = &v17[v18];
      }
      else
      {
LABEL_37:
        v19 = (_QWORD *)sub_2236760(v16 + 456, a2);
        v17 = *(_QWORD **)(v16 + 456);
        if ( !*(_BYTE *)(v16 + 476) )
        {
          v21 = &v17[*(unsigned int *)(v16 + 464)];
          goto LABEL_31;
        }
      }
LABEL_30:
      v21 = &v17[*(unsigned int *)(v16 + 468)];
LABEL_31:
      if ( v21 != v19 && *v19 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v22 = v19 + 1;
        do
        {
          v23 = v22;
          if ( v21 == v22 )
            break;
          ++v22;
        }
        while ( *v23 >= 0xFFFFFFFFFFFFFFFELL );
      }
      goto LABEL_18;
    }
  }
LABEL_10:
  sub_19116F0(a1, *(_DWORD *)(a2 + 4), (__int64)v8, (_QWORD *)a2, v5, (__int64)&a1[280].m128_i64[1], a4, a5);
}
