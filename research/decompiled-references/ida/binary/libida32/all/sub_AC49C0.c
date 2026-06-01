void __fastcall sub_AC49C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  double v6; // xmm0_8
  __int64 *v7; // rbx
  int v8; // eax
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  size_t v16; // rax
  __int64 v17; // r8
  char v18; // al
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  const __m128i *v23; // rax
  const __m128i *v24; // rbx
  __int64 m128i_i64; // r13
  unsigned __int64 v26; // rax
  const __m128i *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31[48]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_B53DE0(a2);
  if ( v4 )
  {
    sub_AC3020(a1, *(unsigned int **)(v4 + 24));
  }
  else
  {
    v22 = sub_B53F10(a2);
    if ( v22 )
    {
      v23 = *(const __m128i **)(v22 + 8);
      if ( v23 )
      {
        v24 = v23 + 1;
        m128i_i64 = (__int64)v23[2 * v23->m128i_u32[2] + 1].m128i_i64;
        if ( &v23[1] != (const __m128i *)m128i_i64 )
        {
          do
          {
            v26 = sub_EFA7D0(v24);
            v27 = v24;
            v24 += 2;
            sub_AC0110(a1, v27, v26, v28, v29, v30);
          }
          while ( (const __m128i *)m128i_i64 != v24 );
        }
      }
    }
  }
  v5 = *(_QWORD *)(a2 + 120);
  v6 = sub_B52330(a2);
  if ( v5 )
  {
    v7 = *(__int64 **)(a2 + 120);
    v6 = sub_B52330(a2);
    v9 = &v7[v8];
    while ( v9 != v7 )
    {
      v10 = *v7++;
      sub_AB9DD0(a1, v10);
    }
  }
  v11 = *(_QWORD *)(a2 + 56);
  if ( (v11 & 4) != 0 )
  {
    v21 = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    if ( v21 )
      sub_ABAAB0(a1 + 8, 0, 0, v21, a1);
  }
  if ( *(_DWORD *)(a1 + 4) != 1 || (*(_BYTE *)(a2 + 83) & 2) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 )
    {
      v12 = a2;
      v13 = sub_B751E0(a2) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 84) >> 13);
      v14 = sub_B751E0(a2);
      if ( v13 != v14 )
      {
        v15 = v14;
        do
        {
          if ( *(_DWORD *)(a1 + 4) != 1 || (*(_BYTE *)(*(_QWORD *)v15 + 28LL) & 4) != 0 )
          {
            v16 = sub_AA6CD0(v12);
            v12 = a1 + 8;
            sub_ABC1A0((char *)(a1 + 8), (char *)&byte_22CD811, v16, a1, v17);
          }
          v15 += 8;
        }
        while ( v13 != v15 );
      }
    }
    v18 = *(_BYTE *)(a2 + 83);
    if ( (v18 & 8) == 0 && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128)) || (v18 & 0x40) != 0 )
    {
      v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
      if ( v19 == sub_6CEBD0 )
        v20 = sub_B5BA10(a2, v31);
      else
        v20 = ((__int64 (__fastcall *)(__int64, double))v19)(a2, v6);
      sub_ABAAB0(a1 + 8, 0, 0, v20, a1);
    }
  }
}

