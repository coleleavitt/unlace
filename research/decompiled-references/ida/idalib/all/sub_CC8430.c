__int64 __fastcall sub_CC8430(const __m128i *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int8 v13; // al
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  char *v17; // r12
  __int8 v18; // al
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rbx
  unsigned int v26; // r8d
  _QWORD *v27; // rsi
  _WORD *v28; // r10
  _QWORD *v29; // r15
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 *v32; // r15
  __int64 v33; // rax
  _QWORD *v34; // rax
  _WORD *v35; // rdi
  __int64 v36; // rax
  __int64 m128i_i64; // rcx
  __int64 v38; // rdx
  int v39; // esi
  int v40; // r10d
  unsigned __int64 v41; // [rsp+10h] [rbp-B8h]
  char *v42; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+20h] [rbp-A8h]
  __int8 v44; // [rsp+2Eh] [rbp-9Ah]
  unsigned __int8 v45; // [rsp+2Fh] [rbp-99h]
  __m128 v46; // [rsp+30h] [rbp-98h] BYREF
  __m128i v47; // [rsp+48h] [rbp-80h] BYREF
  void *v48; // [rsp+60h] [rbp-68h] BYREF
  const __m128i *v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+70h] [rbp-58h]
  __int64 v51; // [rsp+78h] [rbp-50h]
  int v52; // [rsp+80h] [rbp-48h]
  unsigned int v53; // [rsp+84h] [rbp-44h]
  char v54; // [rsp+88h] [rbp-40h]

  v8 = a2[2];
  v45 = sub_CC7500((__int64)a1, v8, a3, a4, a5);
  if ( !v45 )
    return v45;
  v41 = a2[3];
  v11 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v11 + 16) - 2) > 4u )
    v11 = sub_F63050(v11, v8, (unsigned int)*(unsigned __int8 *)(v11 + 16) - 2, v9);
  v12 = *(_QWORD *)(v11 + 40);
  v13 = *(_BYTE *)(v11 + 19);
  if ( (v13 & 2) != 0 )
  {
    LODWORD(v49) = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)v49 <= 0x40 )
    {
      v48 = *(void **)v12;
LABEL_8:
      v42 = (char *)v48;
      goto LABEL_13;
    }
    sub_2205510(&v48);
    v14 = (int)v49;
  }
  else
  {
    v14 = 8 * ((v13 >> 2) & 0x1F);
    LODWORD(v49) = v14;
    if ( v14 > 64 )
    {
      sub_2205470(&v48, v12, 0);
      v14 = (int)v49;
    }
    else
    {
      v48 = (void *)v12;
    }
  }
  if ( (unsigned int)v14 <= 0x40 )
    goto LABEL_8;
  v42 = *(char **)v48;
  operator delete[](v48);
LABEL_13:
  LOBYTE(v15) = 1;
  LODWORD(v16) = 13;
  if ( (*(_BYTE *)(v41 + 1) & 6) == 0 )
  {
    v16 = sub_CE6180(a1[30].m128i_i64[1], *(_QWORD *)(v41 + 8));
    v5 = v16;
    v15 = HIDWORD(v16);
  }
  v43 = ((unsigned __int64)(unsigned __int8)v15 << 32) | (unsigned int)v16 | v5 & 0xFFFFFF0000000000LL;
  if ( !v42 )
    return v45;
  v17 = nullptr;
  while ( 1 )
  {
    v18 = a1[35].m128i_i8[8];
    v49 = a1;
    v19 = _mm_loadu_si128(a1 + 35);
    a1[35].m128i_i64[0] = (__int64)v17;
    v44 = v18;
    v20 = a1[34].m128i_i64[1];
    a1[35].m128i_i8[8] = 1;
    v50 = v20;
    v47 = v19;
    a1[34].m128i_i64[1] = (__int64)&v48;
    v51 = 0;
    v52 = 1;
    v54 = 0;
    v48 = &off_2B4B5F8;
    if ( !(unsigned __int8)sub_CC6FE0((__int64)a1, (unsigned int)v17, v41, v43) )
      goto LABEL_42;
    if ( !v54 )
      goto LABEL_39;
    v21 = (__int64)v49;
    v22 = v53;
    v23 = v49[4].m128i_i64[0] + 144LL * v53;
    v24 = *(_QWORD *)v23;
    v25 = *(_QWORD *)v23 + 16LL * *(unsigned int *)(v23 + 8);
    if ( *(_QWORD *)v23 != v25 )
      break;
LABEL_38:
    v46.m128_u64[0] = 4;
    sub_CA4500(v21, v22, (__int64 *)&v46);
LABEL_39:
    ++v17;
    v48 = &off_2B4B5F8;
    sub_CBB210((__int64)&v48);
    v47.m128i_i8[8] = v44;
    a1[35] = _mm_loadu_si128(&v47);
    if ( v17 == v42 )
      return v45;
  }
  while ( 1 )
  {
    v25 -= 16;
    if ( (unsigned __int8)sub_CEF950(*(_QWORD *)(v25 + 8)) )
      goto LABEL_25;
    v46.m128_u64[0] = 4;
    if ( !(unsigned __int8)sub_CA4BA0((__int64)v49, *(_DWORD *)v25, (__int64 *)&v46) )
      break;
    v32 = (__int64 *)v49;
    v33 = sub_CEF930(*(_QWORD *)(v25 + 8));
    if ( !(unsigned __int8)sub_CB2510(v32, *(_QWORD *)(v25 + 8), v33) )
      break;
    v46.m128_u64[0] = 4;
    if ( !(unsigned __int8)sub_CA2800((__int64)v49, (__int64 *)&v46) )
      break;
    v34 = *(_QWORD **)(v25 + 8);
    if ( (*v34 & 2) != 0 )
    {
      v35 = (_WORD *)(*v34 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v35 )
      {
        if ( (*v35 & 0x1FF) == 0x1A )
        {
          v36 = v49[34].m128i_u32[0];
          m128i_i64 = (__int64)v49[33].m128i_i64;
          v38 = v49[33].m128i_i64[0];
          if ( !(_DWORD)v36 )
            goto LABEL_34;
          v26 = (v36 - 1) & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
          v27 = (_QWORD *)(v38 + 16LL * v26);
          v28 = (_WORD *)*v27;
          if ( v35 == (_WORD *)*v27 )
          {
LABEL_22:
            sub_CBAA70(&v46, v27, (_QWORD *)(16 * v36 + v38), m128i_i64, 1);
            v29 = (_QWORD *)v46.m128_u64[0];
          }
          else
          {
            v39 = 1;
            if ( v28 != (_WORD *)-4096LL )
            {
              while ( 1 )
              {
                v40 = v39 + 1;
                v26 = (v36 - 1) & (v39 + v26);
                v27 = (_QWORD *)(v38 + 16LL * v26);
                if ( v35 == (_WORD *)*v27 )
                  goto LABEL_22;
                if ( *v27 == -4096 )
                  break;
                v39 = v40;
              }
            }
LABEL_34:
            sub_CBAA70(
              &v46,
              (_QWORD *)(v38 + 16LL * (unsigned int)v36),
              (_QWORD *)(v38 + 16LL * (unsigned int)v36),
              m128i_i64,
              1);
            v29 = (_QWORD *)v46.m128_u64[0];
          }
          v30 = (_QWORD *)(v49[33].m128i_i64[0] + 16LL * v49[34].m128i_u32[0]);
          sub_CBAA70(&v46, v30, v30, (__int64)v49[33].m128i_i64, 1);
          if ( v29 != (_QWORD *)v46.m128_u64[0] )
          {
            v31 = (__int64)v49;
            *v29 = -8192;
            --*(_DWORD *)(v31 + 536);
            ++*(_DWORD *)(v31 + 540);
          }
        }
      }
    }
LABEL_25:
    if ( v24 == v25 )
    {
      v21 = (__int64)v49;
      v22 = v53;
      goto LABEL_38;
    }
  }
  v46.m128_u64[0] = 4;
  sub_CA4500((__int64)v49, v53, (__int64 *)&v46);
LABEL_42:
  v48 = &off_2B4B5F8;
  sub_CBB210((__int64)&v48);
  v45 = 0;
  v47.m128i_i8[8] = v44;
  a1[35] = _mm_loadu_si128(&v47);
  return v45;
}
