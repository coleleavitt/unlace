__int64 __fastcall sub_147E630(const __m128i *a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r13
  __int32 v7; // eax
  __int64 v8; // r13
  __int16 v9; // r15
  unsigned __int32 v10; // r14d
  __int64 v11; // rax
  __int32 v12; // edx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  unsigned int *v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  char v21; // [rsp+3h] [rbp-C5h] BYREF
  unsigned int v22; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v23; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-B0h] BYREF
  __m128i v26; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v28[17]; // [rsp+40h] [rbp-88h] BYREF

  v3 = a1[2].m128i_u16[0];
  v4 = sub_141A630(v3);
  if ( (_WORD)v3 == 1 || v4 )
    v5 = 0;
  else
    v5 = a1[1].m128i_i64[1];
  v6 = a1->m128i_i64[1];
  if ( (**(_BYTE **)(v6 + 56) & 8) != 0 )
  {
    v18 = *(unsigned int **)(v5 + 16);
    v19 = j__strlen("__");
    if ( *v18 < v19 || v19 && memcmp(v18 + 4, "__", v19) )
    {
      sub_1564820(v28, a1, a1[1].m128i_u32[0], 2071);
      v20 = sub_10CBF50(a1[2].m128i_u16[0]);
      sub_1478320(v28, v20);
      sub_AEA040((__int64)v28);
      v6 = a1->m128i_i64[1];
    }
  }
  v27 = a1[2].m128i_i64[0];
  v7 = a1[1].m128i_i32[0];
  v26 = _mm_loadu_si128(a1 + 1);
  a1[2].m128i_i32[2] = v7;
  sub_14634E0((__int64 *)v6, a1[1].m128i_i32);
  v8 = a1[6].m128i_i64[0];
  v9 = a1[2].m128i_i16[0];
  v10 = a1[2].m128i_u32[2];
  sub_18C79B0(v8, 0, 0, 4);
  v23 = 0;
  v25 = 0;
  v11 = sub_14C3CF0(a1, &v26, &v21, &v23, &v25);
  v12 = HIDWORD(v25);
  if ( v9 == 22 )
    *(_QWORD *)(a2 + 212) = v25;
  if ( !v12 )
    v12 = a1[1].m128i_i32[0];
  v13 = v21 == 0;
  *(_DWORD *)(a2 + 164) = v12;
  if ( !v13 )
  {
    if ( v23 )
    {
      v17 = a1[6].m128i_i64[0];
      v24 = 0;
      if ( !(unsigned __int8)sub_15AD370(
                               a2,
                               2 * (unsigned int)((_WORD)v3 == 180) + 29,
                               v10,
                               (unsigned int)&v24,
                               (unsigned int)&v22,
                               v23,
                               *(_QWORD *)(v17 + 248) + 17464LL) )
        return sub_190D5E0(v8);
LABEL_16:
      sub_1564820(v28, a1, v10, v22);
      sub_1478320(v28, v24);
      sub_AEA040((__int64)v28);
      return sub_190D5E0(v8);
    }
LABEL_22:
    sub_15AEFC0(a2);
    return sub_190D5E0(v8);
  }
  if ( v11 == 1 )
    goto LABEL_22;
  v14 = sub_1934300(a1[6].m128i_i64[0], v11 & 0xFFFFFFFFFFFFFFFELL);
  if ( v14 == 1 )
    goto LABEL_22;
  v15 = a1[6].m128i_i64[0];
  v24 = 0;
  if ( (unsigned __int8)sub_15AD4E0(
                          a2,
                          2 * (unsigned int)((_WORD)v3 == 180) + 30,
                          v10,
                          &v24,
                          &v22,
                          v14 & 0xFFFFFFFFFFFFFFFELL,
                          *(_QWORD *)(v15 + 248) + 17464LL) )
    goto LABEL_16;
  return sub_190D5E0(v8);
}
