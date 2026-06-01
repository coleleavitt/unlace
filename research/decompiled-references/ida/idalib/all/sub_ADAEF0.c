void __fastcall sub_ADAEF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  double v7; // xmm0_8
  __int64 *v8; // rbx
  int v9; // eax
  __int64 *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  char v19; // al
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  const __m128i *v25; // rax
  const __m128i *v26; // rbx
  __int64 m128i_i64; // r13
  unsigned __int64 v28; // rax
  const __m128i *v29; // rsi
  char v30[48]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_B77B20(a2);
  if ( v4 )
  {
    sub_ADA760(a1, *(_DWORD **)(v4 + 24));
  }
  else
  {
    v24 = sub_B77C50(a2);
    if ( v24 )
    {
      v25 = *(const __m128i **)(v24 + 8);
      if ( v25 )
      {
        v26 = v25 + 1;
        m128i_i64 = (__int64)v25[2 * v25->m128i_u32[2] + 1].m128i_i64;
        if ( &v25[1] != (const __m128i *)m128i_i64 )
        {
          do
          {
            v28 = sub_F1E510(v26);
            v29 = v26;
            v26 += 2;
            sub_AD68F0(a1, v29, v28);
          }
          while ( (const __m128i *)m128i_i64 != v26 );
        }
      }
    }
  }
  v5 = *(_QWORD *)(a2 + 120);
  v7 = sub_B76070(a2);
  if ( v5 )
  {
    v8 = *(__int64 **)(a2 + 120);
    v7 = sub_B76070(a2);
    v10 = &v8[v9];
    while ( v10 != v8 )
    {
      v11 = *v8++;
      sub_AD13F0(a1, v11);
    }
  }
  v12 = *(_QWORD *)(a2 + 56);
  if ( (v12 & 4) != 0 )
  {
    v23 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    if ( v23 )
      sub_AD2220(a1 + 8, 0, 0, v23, a1, v6);
  }
  if ( *(_DWORD *)(a1 + 4) != 1 || (*(_BYTE *)(a2 + 83) & 2) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 )
    {
      v13 = a2;
      v14 = sub_B98F20(a2) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 84) >> 13);
      v15 = sub_B98F20(a2);
      if ( v14 != v15 )
      {
        v16 = v15;
        do
        {
          if ( *(_DWORD *)(a1 + 4) != 1 || (*(_BYTE *)(*(_QWORD *)v16 + 28LL) & 4) != 0 )
          {
            v17 = sub_ACAA10(v13);
            v13 = a1 + 8;
            sub_AD4060(a1 + 8, &byte_22F0C30, v17, a1, v18);
          }
          v16 += 8;
        }
        while ( v14 != v16 );
      }
    }
    v19 = *(_BYTE *)(a2 + 83);
    if ( (v19 & 8) == 0 && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128)) || (v19 & 0x40) != 0 )
    {
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
      if ( v20 == sub_6EF210 )
        v21 = sub_B7F750(a2, v30);
      else
        v21 = ((__int64 (__fastcall *)(__int64, double))v20)(a2, v7);
      sub_AD2220(a1 + 8, 0, 0, v21, a1, v22);
    }
  }
}
