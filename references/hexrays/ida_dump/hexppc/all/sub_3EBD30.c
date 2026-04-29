unsigned __int64 __fastcall sub_3EBD30(__int64 a1, __int64 a2, __int16 a3, int a4, double a5)
{
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r14d
  _DWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(_DWORD *, unsigned int); // rax
  int v17; // eax
  unsigned int v18; // eax
  int dtype_size; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // r14d
  __int64 v26; // rax
  int v27; // r15d
  __int64 v28; // rax
  int v29; // r13d
  int v30; // eax
  __int64 v31; // rsi
  const char *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm0
  _QWORD *v36; // r14
  __int64 v37; // rax
  signed int v39; // ecx
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // [rsp+8h] [rbp-C8h]
  unsigned int v43; // [rsp+Ch] [rbp-C4h]
  __int64 v45; // [rsp+10h] [rbp-C0h]
  __int64 v46; // [rsp+18h] [rbp-B8h]
  int v47; // [rsp+20h] [rbp-B0h]
  signed int v48; // [rsp+24h] [rbp-ACh]
  __int64 v49; // [rsp+28h] [rbp-A8h]
  __int64 v50; // [rsp+28h] [rbp-A8h]
  int v51; // [rsp+28h] [rbp-A8h]
  __int64 v52[2]; // [rsp+30h] [rbp-A0h] BYREF
  _QWORD v53[2]; // [rsp+40h] [rbp-90h] BYREF
  __m128i si128; // [rsp+50h] [rbp-80h] BYREF
  __int64 v55; // [rsp+60h] [rbp-70h]
  __int128 v56; // [rsp+68h] [rbp-68h]
  _QWORD v57[2]; // [rsp+78h] [rbp-58h] BYREF
  int v58; // [rsp+88h] [rbp-48h]
  unsigned __int64 v59; // [rsp+98h] [rbp-38h]

  v6 = (unsigned __int8)a2;
  v7 = a1;
  v59 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v8 + 80) == 4 && (_BYTE)a2 == 7 )
    v6 = 2;
  v9 = *(_QWORD *)(v8 + 4464);
  if ( !v9 )
    goto LABEL_27;
  v10 = *(_DWORD *)(*(_QWORD *)(v8 + 4456) + 4 * v9 - 4);
  *(_QWORD *)(v8 + 4464) = v9 - 1;
  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(_QWORD *)(v11 + 4464);
  if ( !v12 )
    goto LABEL_27;
  v13 = *(_DWORD *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4);
  *(_QWORD *)(v11 + 4464) = v12 - 1;
  sub_3EB290(a1, a1 + 104, v13);
  v14 = *(_DWORD **)(a1 + 832);
  v15 = *(unsigned __int16 *)(v7 + 150);
  v16 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v14 + 168LL);
  if ( v16 == sub_3E59C0 )
  {
    v17 = sub_3E59C0(v14, v15);
  }
  else
  {
    v17 = v16(v14, v15);
    v14 = *(_DWORD **)(v7 + 832);
  }
  v49 = v17;
  v18 = 2;
  v46 = v10;
  if ( v14[20] == 8 )
    v18 = 7;
  dtype_size = get_dtype_size(v18);
  sub_1D2710(v7, 0xCu, dtype_size, v13, v49, v10, 0);
  v20 = *(_QWORD **)(v7 + 832);
  v21 = v20[558];
  a2 = v20[557];
  v22 = v20;
  if ( v20[559] < (unsigned __int64)(v21 + 1) )
  {
    v40 = qvector_reserve(v20 + 557, a2, v21 + 1, 4);
    v22[557] = v40;
    a2 = v40;
    v21 = v22[558];
  }
  *(_DWORD *)(a2 + 4 * v21) = v13;
  a1 = v6;
  ++v22[558];
  v47 = a3 & 0x1000;
  v23 = get_dtype_size(v6);
  v24 = *(_QWORD *)(v7 + 832);
  v43 = v23;
  v25 = v23;
  v26 = *(_QWORD *)(v24 + 4464);
  if ( (a3 & 0x1000) == 0 )
  {
    if ( v26 )
    {
      v27 = a4;
      v39 = *(_DWORD *)(*(_QWORD *)(v24 + 4456) + 4 * v26 - 4);
      *(_QWORD *)(v24 + 4464) = v26 - 1;
      v48 = v39;
      goto LABEL_15;
    }
LABEL_27:
    sub_3E6800(a5, a1, a2);
  }
  if ( !v26 )
    goto LABEL_27;
  v27 = *(_DWORD *)(*(_QWORD *)(v24 + 4456) + 4 * v26 - 4);
  *(_QWORD *)(v24 + 4464) = v26 - 1;
  v28 = *(_QWORD *)(v7 + 832);
  v29 = *(_DWORD *)(v28 + 80);
  v50 = *(int *)(v28 + 64);
  v30 = get_dtype_size(v6);
  sub_1D2710(v7, 2u, v30, v50, v46, v27, v29);
  v48 = a4;
LABEL_15:
  v31 = *(_QWORD *)(v7 + 832);
  v53[0] = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
  v53[1] = 0;
  v55 = 0;
  v57[0] = 0;
  v57[1] = 0;
  v58 = 0;
  v56 = 0;
  v42 = get_dtype_size(v6);
  sub_328100(v52, v31, v42, 2);
  sub_32AD90((__int64)v53, v27, v42, (__int64)v52);
  clear_tinfo_t(v52);
  sub_328100(v52, *(_QWORD *)(v7 + 832), v43, 2);
  copy_tinfo_t(&si128.m128i_u64[1], v52);
  clear_tinfo_t(v52);
  v32 = "_byteswap_ushort";
  if ( v25 != 2 )
  {
    v32 = "_byteswap_uint64";
    if ( v25 == 4 )
      v32 = "_byteswap_ulong";
  }
  v33 = sub_331530(*(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 40), (__int64)v32, &si128.m128i_i64[1], 1, (__int64)v53, 1);
  v34 = *(_QWORD *)(v33 + 72);
  *(_DWORD *)(v34 + 280) |= 0x10u;
  *(_DWORD *)(v34 + 284) = 12;
  v35 = _mm_cvtsi32_si128(*(_DWORD *)(v33 + 68));
  LODWORD(v52[0]) = 1;
  *(__int64 *)((char *)v52 + 4) = _mm_unpacklo_epi32(v35, _mm_cvtsi32_si128(v48)).m128i_u64[0];
  v36 = sub_121770(v33, (unsigned __int8 *)v52);
  sub_119360((__int64)v52);
  sub_B1850(*(_QWORD **)(v7 + 16), (__int64)v36);
  v37 = *(_QWORD *)(v7 + 832);
  v51 = *(_DWORD *)(v37 + 80);
  if ( v47 )
  {
    sub_1D2C40(v7, v6, 5 * (*(_DWORD *)(v37 + 80) == 8) + 2, v48, a4, 0);
  }
  else
  {
    v45 = *(int *)(v37 + 64);
    v41 = get_dtype_size(v6);
    sub_1D2710(v7, 1u, v41, v48, v45, v46, v51);
  }
  cleanup_argloc(v57);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  sub_119360((__int64)v53);
  return v59 - __readfsqword(0x28u);
}
