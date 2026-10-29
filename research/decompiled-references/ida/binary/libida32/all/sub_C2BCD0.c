__int64 __fastcall sub_C2BCD0(__int64 *a1, const __m128i **a2, unsigned __int64 a3)
{
  __m128i *v6; // rbx
  __int64 v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 *v11; // r8
  unsigned int v12; // edi
  bool v13; // dl
  bool v14; // r9
  bool v15; // r10
  char v16; // r11
  __int8 v17; // al
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-C8h]
  __int64 v28; // [rsp+8h] [rbp-C0h]
  __m128i v29; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v30; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-98h]
  void *ptr[2]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v33[128]; // [rsp+48h] [rbp-80h] BYREF

  v6 = (__m128i *)*a2;
  v8 = *(_QWORD *)(*a1 + 32);
  v27 = *(_QWORD *)(a3 + 8);
  sub_A2B590(
    (__int64)&v29,
    a3,
    *(_DWORD *)(v8 + 128),
    *(_DWORD *)(*(_QWORD *)(v8 + 136) + 4LL * *(unsigned int *)(v8 + 144) - 4));
  v6[8].m128i_i8[0] &= ~2u;
  v9 = _mm_load_si128(&v29);
  v6[1].m128i_i64[0] = 0;
  *v6 = v9;
  v30 = v9;
  v10 = sub_A2B5D0(&v30);
  v30.m128i_i32[0] = 0;
  v30.m128i_i64[1] = 0;
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v31 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_3;
  }
  v21 = v10;
  v22 = *v11;
  if ( (unsigned int)*(unsigned __int8 *)(*v11 + 16) - 43 <= 1 )
    goto LABEL_7;
  v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v26 > 1 )
  {
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
  }
  else
  {
    v28 = v21;
    v22 = sub_F3F310(*v11, a3, v26, v21);
    if ( v22 )
    {
LABEL_7:
      while ( 1 )
      {
        v21 = *(_QWORD *)(v22 + 32);
        if ( (*(_BYTE *)(v22 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v23 = v21 & 0xFFFFFFFFFFFFFFF0LL;
          v22 = *(_QWORD *)v23;
          v24 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v23 + 16LL) - 43;
          if ( (unsigned int)v24 <= 1 )
            break;
          v25 = sub_F3F310(v22, a3, v24, v23);
          v21 = *(_QWORD *)(v25 + 32);
          if ( (*(_BYTE *)(v25 + 18) & 0x10) == 0 )
            goto LABEL_10;
        }
      }
LABEL_10:
      v11 = (__int64 *)v30.m128i_i64[1];
      v16 = v30.m128i_i8[0] & 1;
      v13 = (v30.m128i_i8[0] & 8) != 0;
      v15 = (v30.m128i_i8[0] & 2) != 0;
      v14 = (v30.m128i_i8[0] & 4) != 0;
      v12 = (unsigned __int32)v30.m128i_i32[0] >> 4;
      goto LABEL_14;
    }
    v11 = (__int64 *)v30.m128i_i64[1];
    v21 = v28;
    v16 = v30.m128i_i8[0] & 1;
    v13 = (v30.m128i_i8[0] & 8) != 0;
    v15 = (v30.m128i_i8[0] & 2) != 0;
    v14 = (v30.m128i_i8[0] & 4) != 0;
    v12 = (unsigned __int32)v30.m128i_i32[0] >> 4;
  }
LABEL_14:
  v31 = v21;
LABEL_3:
  ptr[0] = v33;
  ptr[1] = (void *)0x800000000LL;
  v17 = v6[1].m128i_i8[8];
  v6[2].m128i_i64[0] = (__int64)v11;
  v6[1].m128i_i8[8] = (8 * v13) | (4 * v14) | (2 * v15) & 0xF3 | v16 & 0xF3 | v17 & 0xF0;
  v6[1].m128i_i32[2] = v6[1].m128i_i32[2] & 0xF | (16 * v12);
  v6[2].m128i_i64[1] = v31;
  sub_C00390((char ***)&v6[3], (char ***)ptr);
  if ( ptr[0] != v33 )
    free(ptr[0]);
  v18 = v29.m128i_i64[0];
  v6[8].m128i_i16[0] &= 0xFEu;
  v19 = sub_C07FE0(v8, v18, v29.m128i_i64[1], a3, v27, 1);
  return sub_C2BC60(v19, *a1, *a2, a3);
}

