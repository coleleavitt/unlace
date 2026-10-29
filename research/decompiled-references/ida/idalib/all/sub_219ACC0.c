__int64 *__fastcall sub_219ACC0(__int64 *a1, __int64 a2, unsigned int **a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int32 v6; // r12d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int *v21; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // esi
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int32 v33; // r10d
  const char *v34; // rax
  _BYTE *v35; // rax
  _BYTE *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // [rsp+0h] [rbp-208h] BYREF
  unsigned int v49; // [rsp+8h] [rbp-200h]
  char v50; // [rsp+10h] [rbp-1F8h]
  __m128i v51[2]; // [rsp+20h] [rbp-1E8h] BYREF
  __int16 v52; // [rsp+40h] [rbp-1C8h]
  __m128i v53[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int16 v54; // [rsp+70h] [rbp-198h]
  __m128i v55[3]; // [rsp+80h] [rbp-188h] BYREF
  __m128i v56[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int16 v57; // [rsp+D0h] [rbp-138h]
  __m128i v58[3]; // [rsp+E0h] [rbp-128h] BYREF
  __m128i v59[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int16 v60; // [rsp+130h] [rbp-D8h]
  __m128i v61[3]; // [rsp+140h] [rbp-C8h] BYREF
  __m128i v62[2]; // [rsp+170h] [rbp-98h] BYREF
  __int16 v63; // [rsp+190h] [rbp-78h]
  __m128i v64[2]; // [rsp+1A0h] [rbp-68h] BYREF
  __int16 v65; // [rsp+1C0h] [rbp-48h]

  v6 = a5;
  if ( (unsigned int)a4 > 0xB )
  {
    v21 = *a3;
    if ( (unsigned __int64)v21 < sub_215DEC0(a2)
      || (v26 = sub_215DEC0(a2), v25 = (__int64)(v21 + 3), (unsigned __int64)(v21 + 3) > v24 + v26) )
    {
      v64[0].m128i_i64[0] = (__int64)"Structure read out-of-range";
      v65 = 259;
      sub_21967F0(v62[0].m128i_i64, v64[0].m128i_i64, v24, v25);
      v50 |= 1u;
      v48 = 0;
      *a1 = v62[0].m128i_i64[0];
    }
    else
    {
      v27 = *v21;
      v28 = v21[1];
      v29 = v21[2];
      v30 = *(_DWORD *)(a2 + 8);
      v31 = _byteswap_ulong(*v21);
      v32 = _byteswap_ulong(v28);
      v33 = _byteswap_ulong(v29);
      if ( v30 <= 0x14 && ((0x155800uLL >> v30) & 1) != 0 )
      {
        v29 = v33;
        v28 = v32;
        v27 = v31;
      }
      v48 = __PAIR64__(v28, v27);
      v34 = " name.offset field too small, not past the end of the dylinker_command struct";
      v50 &= ~1u;
      v49 = v29;
      if ( v29 <= 0xB || (v34 = " name.offset field extends past the end of the load command", v29 >= v28) )
      {
LABEL_18:
        v62[0].m128i_i64[0] = (__int64)v34;
        v63 = 259;
        v60 = 257;
        if ( *a6 )
        {
          v59[0].m128i_i64[0] = (__int64)a6;
          LOBYTE(v60) = 3;
        }
        v53[0].m128i_i32[0] = v6;
        v56[0].m128i_i64[0] = (__int64)" ";
        v54 = 265;
        v52 = 259;
        v57 = 259;
        v51[0].m128i_i64[0] = (__int64)"load command ";
        sub_A41580(v55, v51, v53, 259, v31, v32);
        sub_A41580(v58, v55, v56, v37, v38, v39);
        sub_A41580(v61, v58, v59, v40, v41, v42);
        sub_A41580(v64, v61, v62, v43, v44, v45);
        sub_21967F0(a1, v64[0].m128i_i64, v46, v47);
        goto LABEL_8;
      }
      if ( *((_BYTE *)*a3 + v29) )
      {
        v35 = (char *)*a3 + v29 + 1;
        v36 = &v35[v28 - 1 - v29];
        while ( v35 != v36 )
        {
          if ( !*v35++ )
            goto LABEL_24;
        }
        v34 = " dyld name extends past the end of the load command";
        goto LABEL_18;
      }
LABEL_24:
      *a1 = 0;
    }
LABEL_8:
    sub_219ACA0((__int64 *)&v48);
    return a1;
  }
  v8 = *a6 == 0;
  v62[0].m128i_i64[0] = (__int64)" cmdsize too small";
  v63 = 259;
  v60 = 257;
  if ( !v8 )
  {
    v59[0].m128i_i64[0] = (__int64)a6;
    LOBYTE(v60) = 3;
  }
  v53[0].m128i_i32[0] = a5;
  v56[0].m128i_i64[0] = (__int64)" ";
  v57 = 259;
  v51[0].m128i_i64[0] = (__int64)"load command ";
  v54 = 265;
  v52 = 259;
  sub_A41580(v55, v51, v53, a4, a5, 259);
  sub_A41580(v58, v55, v56, v9, v10, v11);
  sub_A41580(v61, v58, v59, v12, v13, v14);
  sub_A41580(v64, v61, v62, v15, v16, v17);
  sub_21967F0(a1, v64[0].m128i_i64, v18, v19);
  return a1;
}
