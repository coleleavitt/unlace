void __fastcall sub_152D110(__int64 a1, __int64 *a2, __int64 a3, __m128i *a4)
{
  unsigned int v6; // r12^4
  __int32 v7; // ebp
  unsigned int *v8; // rdx
  __int64 v9; // rax
  char v10; // cl
  char v11; // si
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __m128i *v16; // rcx
  const __m128i *v17; // rax
  __int16 v18; // dx
  unsigned int v19; // eax
  char *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // [rsp+8h] [rbp-100h]
  void *v23; // [rsp+8h] [rbp-100h]
  _BYTE *v24; // [rsp+8h] [rbp-100h]
  __int128 v25; // [rsp+10h] [rbp-F8h]
  __int64 v26; // [rsp+20h] [rbp-E8h]
  __int128 v27; // [rsp+30h] [rbp-D8h]
  __int64 v28; // [rsp+40h] [rbp-C8h]
  void *ptr; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h]
  _BYTE v31[32]; // [rsp+60h] [rbp-A8h] BYREF
  void *dest[2]; // [rsp+80h] [rbp-88h] BYREF
  int v33; // [rsp+90h] [rbp-78h]

  v6 = HIDWORD(a3);
  v7 = a4->m128i_i32[0];
  v26 = a4[1].m128i_i64[0];
  ptr = v31;
  v25 = (__int128)_mm_loadu_si128(a4);
  v30 = 0x100000000LL;
  sub_14634E0(a2, a4->m128i_i32);
  if ( a4[1].m128i_i16[0] != 5 )
  {
    sub_FC70B0((__int64)dest, a2[6], a4->m128i_i32[0], 1864);
    sub_1520C80((unsigned __int8 **)dest, 1);
    sub_1520A40((unsigned __int8 **)dest, (__int64)&byte_22F0C30);
    sub_AEA040((__int64)dest);
    goto LABEL_13;
  }
  do
  {
    v8 = *(unsigned int **)(a4->m128i_i64[1] + 16);
    v28 = a4[1].m128i_i64[0];
    v27 = (__int128)_mm_loadu_si128(a4);
    v9 = *v8;
    if ( v9 == 9 )
    {
      if ( *((_QWORD *)v8 + 2) != 0x7A69726F74636576LL || (v10 = 1, v11 = 1, *((_BYTE *)v8 + 24) != 101) )
      {
        v10 = 0;
        v11 = 1;
      }
      goto LABEL_5;
    }
    if ( v9 != 10 )
    {
      v11 = v9 != 19;
      if ( v9 == 6 )
      {
        if ( v8[4] == 1869770357 && *((_WORD *)v8 + 10) == 27756 )
          goto LABEL_42;
        v10 = 0;
LABEL_6:
        if ( !((unsigned __int8)v10 | (v9 != 15)) )
        {
          if ( *((_QWORD *)v8 + 2) == 0x7A69726F74636576LL && v8[6] == 1769430885 && *((_WORD *)v8 + 14) == 29796 )
          {
            v10 = v11;
            if ( *((_BYTE *)v8 + 30) != 104 )
              v10 = 0;
          }
          else
          {
            v10 = 0;
          }
          goto LABEL_9;
        }
        goto LABEL_22;
      }
      v10 = 0;
LABEL_5:
      v11 |= v10;
      if ( !v11 )
      {
        if ( !(*((_QWORD *)v8 + 2) ^ 0x7A69726F74636576LL | *((_QWORD *)v8 + 3) ^ 0x6369646572705F65LL)
          && *((_WORD *)v8 + 16) == 29793
          && *((_BYTE *)v8 + 34) == 101 )
        {
          v10 = 1;
          goto LABEL_23;
        }
        goto LABEL_22;
      }
      goto LABEL_6;
    }
    if ( *((_QWORD *)v8 + 2) == 0x61656C7265746E69LL && *((_WORD *)v8 + 12) == 25974 )
    {
LABEL_42:
      v10 = 1;
      goto LABEL_23;
    }
    if ( *((_QWORD *)v8 + 2) == 0x7562697274736964LL )
    {
      if ( *((_WORD *)v8 + 12) == 25972 )
        goto LABEL_42;
      v10 = 0;
    }
    else
    {
      v10 = 0;
    }
LABEL_22:
    if ( !((unsigned __int8)v10 | (v9 != 16)) )
    {
      if ( !(*((_QWORD *)v8 + 2) ^ 0x61656C7265746E69LL | *((_QWORD *)v8 + 3) ^ 0x746E756F635F6576LL) )
        goto LABEL_30;
      goto LABEL_9;
    }
LABEL_23:
    if ( v9 == 12 && !v10 )
    {
      if ( *((_QWORD *)v8 + 2) == 0x635F6C6C6F726E75LL && v8[6] == 1953396079 )
        goto LABEL_30;
      goto LABEL_11;
    }
LABEL_9:
    if ( !((unsigned __int8)v10 | (v9 != 8)) )
    {
      if ( *((_QWORD *)v8 + 2) == 0x656E696C65706970LL )
        goto LABEL_30;
LABEL_11:
      if ( !v10 )
        goto LABEL_12;
      goto LABEL_30;
    }
    if ( (unsigned __int8)v10 | (v9 != 28) )
      goto LABEL_11;
    if ( *((_QWORD *)v8 + 2) ^ 0x656E696C65706970LL | *((_QWORD *)v8 + 3) ^ 0x74616974696E695FLL
      || *((_QWORD *)v8 + 4) != 0x65746E695F6E6F69LL
      || v8[10] != 1818326642 )
    {
LABEL_12:
      v22 = a4->m128i_i64[1];
      sub_FC70B0((__int64)dest, a2[6], a4->m128i_i32[0], 1864);
      sub_1520C80((unsigned __int8 **)dest, 0);
      sub_AE9DF0((unsigned __int8 **)dest, v22, 5u);
      sub_AEA040((__int64)dest);
      goto LABEL_13;
    }
LABEL_30:
    sub_14634E0(a2, a4->m128i_i32);
    if ( a4[1].m128i_i16[0] != 22 )
    {
      sub_FC70B0((__int64)dest, a2[6], a4->m128i_i32[0], 14);
      sub_AE9DF0((unsigned __int8 **)dest, 22, 4u);
      sub_AEA040((__int64)dest);
      goto LABEL_13;
    }
    sub_14634E0(a2, a4->m128i_i32);
    v13 = a2[16];
    a2[26] += 64;
    v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a2[17] >= (unsigned __int64)(v14 + 64) && v13 )
      a2[16] = v14 + 64;
    else
      v14 = sub_986170((__int64)(a2 + 16), 64, 64, 4, v12, v14);
    LODWORD(v25) = v7;
    *(_QWORD *)(v14 + 48) = 0;
    *(_QWORD *)(v14 + 56) = 0;
    v23 = (void *)v14;
    if ( (unsigned __int8)sub_152CDC0(a2, (unsigned __int64)a4, 1u, v14, v12, v14, v25, v26, v27, v28) )
      goto LABEL_13;
    v33 = 452;
    dest[0] = (void *)__PAIR64__(v7, v6);
    dest[1] = v23;
    v15 = (unsigned int)v30 + 1LL;
    v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v30);
    v17 = (const __m128i *)dest;
    if ( v15 > HIDWORD(v30) )
    {
      if ( ptr > dest || v16 <= (__m128i *)dest )
      {
        sub_2237220(&ptr, v31, v15, 24);
        v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v30);
        v17 = (const __m128i *)dest;
      }
      else
      {
        v24 = ptr;
        sub_2237220(&ptr, v31, v15, 24);
        v17 = (const __m128i *)((char *)ptr + (char *)dest - v24);
        v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v30);
      }
    }
    *v16 = _mm_loadu_si128(v17);
    v16[1].m128i_i64[0] = v17[1].m128i_i64[0];
    v18 = a4[1].m128i_i16[0];
    v19 = v30 + 1;
    LODWORD(v30) = v30 + 1;
  }
  while ( v18 == 5 );
  if ( v18 == 2 )
  {
    sub_1528200(dest, v19);
    v20 = (char *)dest[0];
    v21 = (unsigned int)v30;
    if ( 24LL * (unsigned int)v30 )
    {
      memmove(dest[0], ptr, 24LL * (unsigned int)v30);
      v21 = (unsigned int)v30;
      v20 = (char *)dest[0];
    }
    dest[0] = nullptr;
    sub_14368B0((__int64)a2, v20, v21, 0, 1u, 0);
    if ( dest[0] )
      operator delete[](dest[0]);
  }
  else
  {
    sub_FC70B0((__int64)dest, a2[6], a4->m128i_i32[0], 2202);
    sub_1520A40((unsigned __int8 **)dest, (__int64)"clang loop");
    sub_AEA040((__int64)dest);
  }
LABEL_13:
  if ( ptr != v31 )
    free(ptr);
}
