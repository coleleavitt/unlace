__m128 *__fastcall sub_B74FC0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9,
        int a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // r12d
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  char v20; // r11
  __m128 *v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // rax
  unsigned __int64 v26; // rax
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  int v30; // [rsp+28h] [rbp-50h]
  int v31; // [rsp+2Ch] [rbp-4Ch]
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+38h] [rbp-40h]

  v15 = a2;
  v30 = a10;
  v33 = a6;
  v32 = a5;
  v29 = a13;
  v31 = a9;
  v16 = 16LL * (a12 != 0) + 8LL * ((a7 & 0xFFFFFFFFFFFFFFFCLL) != 0);
  if ( a2 )
  {
    v15 = a2 + 64;
    v17 = sub_B6C590(176, a1, a2 + 64, v16);
    v18 = v33;
    v19 = v32;
    v20 = v31;
    v21 = (__m128 *)v17;
  }
  else
  {
    v26 = sub_B6C590(176, a1, 0, v16);
    v20 = v31;
    v19 = v32;
    v21 = (__m128 *)v26;
    v18 = v33;
  }
  sub_B58BF0((__int64)v21, 0x26u, (__int64)a1, v15, a3, a4, v19, v18, 0, a8, v20, a11, a14);
  v21[10].m128_u64[1] = 0;
  v21->m128_u64[0] = (unsigned __int64)&off_2BD8DC8;
  v22 = v21[5].m128_i32[1] & 0xE0001FFF;
  v21[5].m128_i32[1] = v22;
  LOBYTE(v14) = a12 != 0;
  v23 = HIBYTE(v22) & 0xFFFFFFDF | (32 * v14);
  v21[5].m128_i8[7] = v23;
  v21[1].m128_i8[13] = (2 * (v30 & 1)) | v21[1].m128_i8[13] & 0xFD;
  if ( (a7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v21[5].m128_i8[7] = v23 | 0x40;
    if ( a12 )
      v21[11] = _mm_loadh_ps((const double *)&v29);
    v24 = sub_B4CC80((__int64)v21);
    *(_QWORD *)(v24 + 16LL * ((*(_BYTE *)(v24 + 87) & 0x20) != 0) + 176) = a7;
  }
  else
  {
    v21[5].m128_i8[7] = v23 & 0xBF;
    if ( a12 )
      v21[11] = _mm_loadh_ps((const double *)&v29);
    v21[5].m128_i8[7] = (((_DWORD)a7 == 1) << 7) | v21[5].m128_i8[7] & 0x7F;
  }
  return v21;
}

