void __fastcall sub_180F2B0(__int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // dl
  char v11; // si
  __int64 v12; // rsi
  char *v13; // rax
  char v14; // al
  char v15; // al
  char v16; // dl
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __m128i *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // [rsp+Bh] [rbp-DDh] BYREF
  int v30; // [rsp+Ch] [rbp-DCh] BYREF
  unsigned int *v31; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-D0h]
  void *s1; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-C0h]
  __m128i v35[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int32 v36; // [rsp+50h] [rbp-98h]

  v6 = *(unsigned int **)(a3->m128i_i64[0] + 16);
  v7 = *v6;
  v31 = v6 + 4;
  v32 = v7;
  sub_1805A60(&v31);
  if ( v32 == 26 )
  {
    if ( *(_QWORD *)v31 ^ 0x65726464615F6F6ELL | *((_QWORD *)v31 + 1) ^ 0x74656661735F7373LL
      || *((_QWORD *)v31 + 2) != 0x73796C616E615F79LL
      || (v10 = 1, v11 = 1, *((_WORD *)v31 + 12) != 29545) )
    {
      v10 = 1;
      v11 = 0;
    }
    goto LABEL_3;
  }
  v10 = v32 != 18;
  v11 = 0;
  if ( v32 != 19 )
  {
LABEL_3:
    v10 |= v11;
    goto LABEL_4;
  }
  if ( !(*(_QWORD *)v31 ^ 0x74696E61735F6F6ELL | *((_QWORD *)v31 + 1) ^ 0x726464615F657A69LL)
    && *((_WORD *)v31 + 8) == 29541
    && *((_BYTE *)v31 + 18) == 115 )
  {
LABEL_29:
    v12 = 7;
    v13 = "address";
    goto LABEL_5;
  }
LABEL_4:
  v12 = 7;
  v13 = "address";
  if ( !v10 )
  {
    if ( *(_QWORD *)v31 ^ 0x74696E61735F6F6ELL | *((_QWORD *)v31 + 1) ^ 0x657268745F657A69LL
      || (v12 = 6, v13 = (char *)"thread", *((_WORD *)v31 + 8) != 25697) )
    {
      if ( *(_QWORD *)v31 ^ 0x74696E61735F6F6ELL | *((_QWORD *)v31 + 1) ^ 0x6F6D656D5F657A69LL )
        goto LABEL_29;
      v12 = 6;
      v13 = "memory";
      if ( *((_WORD *)v31 + 8) != 31090 )
        goto LABEL_29;
    }
  }
LABEL_5:
  s1 = v13;
  v14 = *(_BYTE *)(a2 + 28);
  v34 = v12;
  if ( (v14 & 0x7Fu) - 40 <= 6 && !sub_9B48E0(a2) )
  {
    v26 = j__strlen("address");
    if ( v26 != v34 || v26 && memcmp(s1, "address", v26) )
    {
      sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xCA8u, 0);
      v27 = sub_15DD120((__int64)v35, (__int64)a3);
      v29 = (a3[2].m128i_i8[3] & 2) != 0;
      v28 = sub_1588420(v27, (unsigned __int8 *)&v29);
      v30 = 0;
      sub_180E4C0(v28, &v30);
      sub_15F7200(v35);
    }
  }
  v15 = 1;
  v16 = a3[2].m128i_i8[2] & 0xF;
  if ( v16 != 2 )
    v15 = (v16 == 3) | a3[2].m128i_i8[3] & 1;
  v17 = _mm_loadu_si128(a3);
  v18 = _mm_loadu_si128(a3 + 1);
  v19 = *(_QWORD **)(a1 + 248);
  v36 = a3[2].m128i_i32[0];
  v35[0] = v17;
  v35[1] = v18;
  BYTE2(v36) = BYTE2(v36) & 0xF | (16 * v15);
  v20 = v19[294];
  v19[304] += 56LL;
  v21 = (__m128i *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v19[295] >= (unsigned __int64)&v21[3].m128i_u64[1] && v20 )
    v19[294] = (char *)v21 + 56;
  else
    v21 = (__m128i *)sub_986170((__int64)(v19 + 294), 56, 56, 3, v8, v9);
  sub_B38A40(v21, *(__int64 **)(a1 + 248), v35, (__int64)&s1, 1u);
  sub_B8CC60(a2, (__int64)v21, v22, v23, v24, v25);
}
