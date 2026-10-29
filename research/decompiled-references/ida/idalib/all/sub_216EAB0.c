__int64 __fastcall sub_216EAB0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v11; // ax
  const char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int16 v18; // dx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // cf
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+8h] [rbp-1F0h] BYREF
  unsigned __int64 v42; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v43; // [rsp+18h] [rbp-1E0h] BYREF
  __m128i v44; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-1C8h]
  __int16 v46; // [rsp+40h] [rbp-1B8h]
  __m128i v47[2]; // [rsp+50h] [rbp-1A8h] BYREF
  __int16 v48; // [rsp+70h] [rbp-188h]
  __m128i v49[3]; // [rsp+80h] [rbp-178h] BYREF
  __m128i v50[2]; // [rsp+B0h] [rbp-148h] BYREF
  __int16 v51; // [rsp+D0h] [rbp-128h]
  __m128i v52[2]; // [rsp+E0h] [rbp-118h] BYREF
  __int16 v53; // [rsp+100h] [rbp-F8h]
  __m128i v54; // [rsp+110h] [rbp-E8h] BYREF
  __int64 v55; // [rsp+120h] [rbp-D8h]
  __int16 v56; // [rsp+130h] [rbp-C8h]
  __m128i v57; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+150h] [rbp-A8h]
  __int16 v59; // [rsp+160h] [rbp-98h]
  __m128i v60[2]; // [rsp+170h] [rbp-88h] BYREF
  __int16 v61; // [rsp+190h] [rbp-68h]
  __m128i v62[2]; // [rsp+1A0h] [rbp-58h] BYREF
  __int16 v63; // [rsp+1C0h] [rbp-38h]

  v6 = *a2;
  v7 = _byteswap_uint64(*(_QWORD *)(*a2 + 40LL));
  v41 = v7;
  if ( !v7 )
  {
    v8 = a2[3];
    v9 = a2[2];
    *(_BYTE *)(a1 + 16) &= ~1u;
    if ( v9 == v8 )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = (v8 - v9) >> 6;
    }
    return a1;
  }
  v11 = __ROL2__(*(_WORD *)(v6 + 58), 8);
  if ( v11 != 64 )
  {
    a6 = 266;
    v59 = 266;
    v57.m128i_i32[0] = v11;
    v12 = "invalid e_shentsize in ELF header: ";
LABEL_7:
    v60[0].m128i_i64[0] = (__int64)v12;
    v61 = 259;
    sub_A41580(v62, v60, &v57, a4, a5, a6);
    sub_2162BF0(&v54, (__int64)v62, v13, v14);
    v15 = v54.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v15;
    return a1;
  }
  v16 = a2[1];
  if ( v7 + 64 > v16 || v7 > 0xFFFFFFFFFFFFFFBFLL )
  {
    a5 = 271;
    v58 = 0;
    v57.m128i_i64[0] = (__int64)&v41;
    v12 = "section header table goes past the end of the file: e_shoff = 0x";
    v59 = 271;
    goto LABEL_7;
  }
  v17 = v6 + v7;
  v18 = __ROL2__(*(_WORD *)(v6 + 60), 8);
  v19 = v18;
  v42 = v18;
  if ( v18 || (v19 = sub_2162D00(*(_QWORD *)(v17 + 32)), v42 = v19, v19 <= 0x3FFFFFFFFFFFFFFLL) )
  {
    v26 = __CFADD__(v19 << 6, v7);
    v27 = (v19 << 6) + v7;
    if ( v26 )
    {
      v61 = 259;
      v60[0].m128i_i64[0] = (__int64)")";
      v54.m128i_i64[0] = (__int64)&v42;
      v50[0].m128i_i64[0] = (__int64)") or invalid number of sections specified in the first section header's sh_size field (0x";
      v44.m128i_i64[0] = (__int64)&v41;
      v47[0].m128i_i64[0] = (__int64)"invalid section header table offset (e_shoff = 0x";
      v55 = 0;
      v56 = 271;
      v51 = 259;
      v45 = 0;
      v46 = 271;
      v48 = 259;
      sub_A41580(v49, v47, &v44, a4, a5, a6);
      sub_A41580(v52, v49, v50, v29, v30, v31);
      sub_A41580(&v57, v52, &v54, v32, v33, v34);
      sub_A41580(v62, &v57, v60, v35, v36, v37);
      sub_2162BF0(&v43, (__int64)v62, v38, v39);
      v40 = v43;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v40;
    }
    else if ( v27 > v16 )
    {
      v62[0].m128i_i64[0] = (__int64)"section table goes past the end of file";
      v63 = 259;
      sub_2162BF0(v60, (__int64)v62, v19 << 6, a4);
      v28 = v60[0].m128i_i64[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v28;
    }
    else
    {
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = v19;
    }
  }
  else
  {
    v60[0].m128i_i64[0] = (__int64)")";
    v61 = 259;
    v52[0].m128i_i64[0] = (__int64)&v42;
    v56 = 259;
    v54.m128i_i64[0] = (__int64)"invalid number of sections specified in the NULL section's sh_size field (";
    v53 = 267;
    sub_A41580(&v57, &v54, v52, 267, a5, a6);
    sub_A41580(v62, &v57, v60, v20, v21, v22);
    sub_2162BF0(v50, (__int64)v62, v23, v24);
    v25 = v50[0].m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v25;
  }
  return a1;
}
