__int64 __fastcall sub_216E690(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // cf
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+8h] [rbp-1E0h] BYREF
  unsigned __int64 v41; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-1D0h] BYREF
  __m128i v43; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-1B8h]
  __int16 v45; // [rsp+40h] [rbp-1A8h]
  __m128i v46[2]; // [rsp+50h] [rbp-198h] BYREF
  __int16 v47; // [rsp+70h] [rbp-178h]
  __m128i v48[3]; // [rsp+80h] [rbp-168h] BYREF
  __m128i v49[2]; // [rsp+B0h] [rbp-138h] BYREF
  __int16 v50; // [rsp+D0h] [rbp-118h]
  __m128i v51[2]; // [rsp+E0h] [rbp-108h] BYREF
  __int16 v52; // [rsp+100h] [rbp-E8h]
  __m128i v53; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+120h] [rbp-C8h]
  __int16 v55; // [rsp+130h] [rbp-B8h]
  __m128i v56; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+150h] [rbp-98h]
  __int16 v58; // [rsp+160h] [rbp-88h]
  __m128i v59[2]; // [rsp+170h] [rbp-78h] BYREF
  __int16 v60; // [rsp+190h] [rbp-58h]
  __m128i v61[2]; // [rsp+1A0h] [rbp-48h] BYREF
  __int16 v62; // [rsp+1C0h] [rbp-28h]

  v7 = *a2;
  v8 = *(_QWORD *)(*a2 + 40LL);
  v40 = v8;
  if ( v8 )
  {
    v12 = *(unsigned __int16 *)(v7 + 58);
    if ( (_WORD)v12 == 64 )
    {
      v12 = a2[1];
      if ( v8 + 64 <= v12 && v8 <= 0xFFFFFFFFFFFFFFBFLL )
      {
        v17 = v7 + v8;
        v18 = *(unsigned __int16 *)(v7 + 60);
        v41 = v18;
        if ( v18 || (v18 = *(_QWORD *)(v17 + 32), v41 = v18, v18 <= 0x3FFFFFFFFFFFFFFLL) )
        {
          v25 = __CFADD__(v18 << 6, v8);
          v26 = (v18 << 6) + v8;
          if ( v25 )
          {
            v60 = 259;
            v59[0].m128i_i64[0] = (__int64)")";
            v53.m128i_i64[0] = (__int64)&v41;
            v49[0].m128i_i64[0] = (__int64)") or invalid number of sections specified in the first section header's sh_size field (0x";
            v43.m128i_i64[0] = (__int64)&v40;
            v46[0].m128i_i64[0] = (__int64)"invalid section header table offset (e_shoff = 0x";
            v54 = 0;
            v55 = 271;
            v50 = 259;
            v44 = 0;
            v45 = 271;
            v47 = 259;
            sub_A41580(v48, v46, &v43, v12, a5, a6);
            sub_A41580(v51, v48, v49, v28, v29, v30);
            sub_A41580(&v56, v51, &v53, v31, v32, v33);
            sub_A41580(v61, &v56, v59, v34, v35, v36);
            sub_2162BF0(&v42, (__int64)v61, v37, v38);
            v39 = v42;
            *(_BYTE *)(a1 + 16) |= 1u;
            *(_QWORD *)a1 = v39;
          }
          else if ( v26 > v12 )
          {
            v61[0].m128i_i64[0] = (__int64)"section table goes past the end of file";
            v62 = 259;
            sub_2162BF0(v59, (__int64)v61, v18, v12);
            v27 = v59[0].m128i_i64[0];
            *(_BYTE *)(a1 + 16) |= 1u;
            *(_QWORD *)a1 = v27;
          }
          else
          {
            *(_BYTE *)(a1 + 16) &= ~1u;
            *(_QWORD *)a1 = v17;
            *(_QWORD *)(a1 + 8) = v18;
          }
        }
        else
        {
          v59[0].m128i_i64[0] = (__int64)")";
          v60 = 259;
          v51[0].m128i_i64[0] = (__int64)&v41;
          v55 = 259;
          v53.m128i_i64[0] = (__int64)"invalid number of sections specified in the NULL section's sh_size field (";
          v52 = 267;
          sub_A41580(&v56, &v53, v51, 267, a5, a6);
          sub_A41580(v61, &v56, v59, v19, v20, v21);
          sub_2162BF0(v49, (__int64)v61, v22, v23);
          v24 = v49[0].m128i_i64[0];
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_QWORD *)a1 = v24;
        }
        return a1;
      }
      a5 = 271;
      v57 = 0;
      v56.m128i_i64[0] = (__int64)&v40;
      v13 = "section header table goes past the end of the file: e_shoff = 0x";
      v58 = 271;
    }
    else
    {
      a6 = 266;
      v56.m128i_i32[0] = *(unsigned __int16 *)(v7 + 58);
      v13 = "invalid e_shentsize in ELF header: ";
      v58 = 266;
    }
    v59[0].m128i_i64[0] = (__int64)v13;
    v60 = 259;
    sub_A41580(v61, v59, &v56, v12, a5, a6);
    sub_2162BF0(&v53, (__int64)v61, v14, v15);
    v16 = v53.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v16;
    return a1;
  }
  else
  {
    v9 = a2[3];
    v10 = a2[2];
    *(_BYTE *)(a1 + 16) &= ~1u;
    if ( v10 != v9 )
    {
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = (v9 - v10) >> 6;
      return a1;
    }
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
}
