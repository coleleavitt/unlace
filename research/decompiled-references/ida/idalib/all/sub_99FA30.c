unsigned __int64 *__fastcall sub_99FA30(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  int v9; // r15d
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  unsigned __int64 *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rax
  _WORD *v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r13
  __int64 v38; // rax
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  __int64 v41; // rax
  unsigned __int16 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbp
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r11
  __int64 v57; // r9
  __int64 v58; // rax
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // r13
  __int64 v77; // rax
  __m128i v78; // xmm7
  __m128i v79; // xmm4
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rbx
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // rdx
  __int64 v92; // [rsp+8h] [rbp-F0h]
  __int64 v93; // [rsp+10h] [rbp-E8h]
  __int64 v94; // [rsp+18h] [rbp-E0h]
  __int64 v95; // [rsp+18h] [rbp-E0h]
  int v96; // [rsp+18h] [rbp-E0h]
  __m128i v97; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v98; // [rsp+30h] [rbp-C8h]
  const __m128i *v99; // [rsp+38h] [rbp-C0h]
  __int64 v100; // [rsp+40h] [rbp-B8h]
  __int64 v101; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v102; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v103; // [rsp+58h] [rbp-A0h]
  __m128i v104; // [rsp+68h] [rbp-90h]
  __m128i v105; // [rsp+88h] [rbp-70h] BYREF
  __int64 v106; // [rsp+98h] [rbp-60h]
  __m128i v107; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v104 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  if ( v3 )
    sub_999430(a1, v3);
  v92 = *(_QWORD *)(a1 + 128);
  v93 = *(_QWORD *)(a1 + 136);
  v4 = sub_EEE130(a2);
  if ( v4 )
    sub_998FE0(a1, v4, 0, v5, v6, v7);
  v8 = *(_QWORD *)(a1 + 128);
  v9 = *(_DWORD *)(a1 + 136);
  v10 = (_QWORD *)v8;
  sub_99A450((_QWORD *)a1, v8, *(_QWORD *)(a1 + 136), v104.m128i_i64[0], v104.m128i_i64[1], a2);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 328) + 61LL) )
  {
    v15 = *(_QWORD *)(a1 + 16);
    if ( !v15 )
    {
      v15 = sub_999AE0(a1, v8, v11, v12, v13, v14);
      *(_QWORD *)(a1 + 16) = v15;
    }
    v16 = *(unsigned __int64 **)(v15 + 8);
    if ( (unsigned __int64)v16 >= *(_QWORD *)(v15 + 16) )
    {
      v10 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      sub_999590((const __m128i **)v15, v10, 1u, v12, v13, v14);
      v16 = *(unsigned __int64 **)(v15 + 8);
    }
    *v16 = a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
    v16[1] = 1;
    *(_QWORD *)(v15 + 8) += 16LL;
  }
  v17 = *(_QWORD *)(a1 + 16);
  if ( v17 )
  {
    if ( *(_BYTE *)(a1 + 320) )
    {
      v50 = nullptr;
      goto LABEL_39;
    }
    v18 = *(_QWORD *)(a1 + 16);
    v94 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v94 = *(_QWORD *)(a1 + 24);
    v18 = v94;
  }
  v19 = *(_QWORD *)(a1 + 72);
  v20 = *(_QWORD *)(a1 + 128);
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v22 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  *(_QWORD *)(a1 + 56) = v18;
  v106 = v19;
  LODWORD(v19) = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 64) = v20;
  *(_DWORD *)(a1 + 72) = v19;
  v23 = *(_QWORD *)(a1 + 48);
  v105 = v21;
  v107 = v22;
  v108 = v23;
  v24 = sub_999B20(a1, (__int64)v10, v20, v12, v13, v14);
  v97.m128i_i64[0] = v24;
  v25 = _mm_loadl_epi64(&v97);
  v26 = *(_QWORD *)(a1 + 128);
  v97.m128i_i64[1] = v24;
  v27 = *(_QWORD *)(a1 + 136);
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v25, v25);
  *(_QWORD *)(v24 + 40) = a2;
  sub_99A450((_QWORD *)a1, v26, v27, v92, v93, a2);
  v30 = *(_QWORD *)(a2 + 32);
  if ( v30 )
    *(_QWORD *)(a1 + 24) = sub_99D480(a1, v30, 1, 0, v28, v29);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 320) )
      goto LABEL_37;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v31 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v8;
  *(_DWORD *)(a1 + 48) = v9;
  *(_QWORD *)(a1 + 32) = v31;
  *(_QWORD *)(v31 + 40) = a2;
  v32 = *(_WORD **)(a2 + 40);
  if ( (*v32 & 0x1FF) != 0xF9 )
  {
    v75 = *(_QWORD *)(a2 + 40);
    v76 = *(_QWORD *)(a1 + 136);
    v97.m128i_i64[0] = *(_QWORD *)(a1 + 128);
    sub_999430(a1, v75);
    sub_99A450((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), v97.m128i_i64[0], v76, (__int64)v32);
    v32 = *(_WORD **)(a2 + 40);
  }
  v37 = sub_99D480(a1, (__int64)v32, 1, 0, v28, v29);
  if ( !v37 )
  {
    v37 = *(_QWORD *)(a1 + 32);
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a1 + 320) )
  {
LABEL_37:
    v77 = v108;
    *(_QWORD *)(a1 + 16) = v17;
    v50 = nullptr;
    v78 = _mm_loadu_si128(&v107);
    *(_QWORD *)(a1 + 48) = v77;
    *(__m128i *)(a1 + 32) = v78;
    *(_QWORD *)(a1 + 24) = v94;
    goto LABEL_38;
  }
LABEL_23:
  v38 = v108;
  *(_QWORD *)(a1 + 16) = v17;
  v39 = _mm_loadu_si128(&v107);
  v40 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  *(_QWORD *)(a1 + 48) = v38;
  *(__m128i *)(a1 + 32) = v39;
  *(_QWORD *)(a1 + 24) = v94;
  v41 = *(_QWORD *)(a2 + 24);
  v107 = v40;
  v95 = v41;
  if ( !v41 )
  {
    v47 = sub_999B20(a1, (__int64)v32, v33, v34, v35, v36);
    v50 = (unsigned __int64 *)v47;
    *(_QWORD *)(v47 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
    v18 = 0;
    sub_999860(v47, v37, 2LL * (v37 == 0), (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v81, v82);
    v74 = 2;
    goto LABEL_43;
  }
  v42 = (unsigned __int16 *)sub_BFB9F0(v41);
  if ( v42 )
  {
    v44 = *v42;
    v43 = (unsigned int)(v44 + 394);
    LOWORD(v43) = (v44 + 394) & 0x1FF;
    if ( (unsigned __int16)v43 <= 1u )
    {
      v43 = ((v42[1] >> 3) & 0x3Fu) - 19;
      if ( (unsigned int)v43 <= 1 )
      {
        v50 = (unsigned __int64 *)sub_99D930(a1, (__int64)v42, a2, v37, v18);
        *(_QWORD *)(a1 + 128) = v107.m128i_i64[0];
        *(_DWORD *)(a1 + 136) = v107.m128i_i32[2];
LABEL_44:
        sub_999860(
          v97.m128i_i64[1],
          (__int64)v50,
          2LL * (v50 == nullptr),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL),
          v83,
          v84);
        v88 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a1 + 24) = v50;
        if ( v88 )
        {
          v100 = v92;
          *(_QWORD *)(a1 + 128) = v92;
          v101 = v93;
          *(_DWORD *)(a1 + 136) = v93;
          *(_QWORD *)(a1 + 16) = sub_999AE0(a1, (__int64)v50, v85, v93, v86, v87);
          v50 = (unsigned __int64 *)sub_99D480(a1, v88, 1, 0, v89, v90);
        }
        else
        {
          *(_QWORD *)(a1 + 16) = 0;
        }
        goto LABEL_38;
      }
    }
  }
  v47 = sub_999B20(a1, (__int64)v32, v43, v44, v45, v46);
  *(_QWORD *)(v47 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)(a1 + 16) = v47;
  v50 = (unsigned __int64 *)sub_99D480(a1, v95, 1, 0, v48, v49);
  v51 = sub_EEE130(a2);
  if ( v51 )
  {
    v97.m128i_i64[0] = v51;
    v52 = sub_B73640(v51);
    v56 = v52;
    if ( v52 )
    {
      v57 = v97.m128i_i64[0];
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v98 = v52;
        sub_99A2D0(a1, v95, v53, v54, v55, v97.m128i_i64[0]);
        v56 = v98;
        v57 = v97.m128i_i64[0];
      }
      v58 = *(_QWORD *)(a1 + 8);
      v59 = *(_QWORD *)(a2 + 16);
      v98 = v57;
      v97.m128i_i64[0] = v56;
      v102 = v59;
      v99 = (const __m128i *)&v102;
      v103 = 0;
      v60 = sub_9A94C0(v58 + 32, &v102, 0);
      sub_99C950(a1, v60, v97.m128i_i64[0], v61, v62, v63);
      sub_99C220((_QWORD *)a1, *(_QWORD *)(a1 + 16), v59);
      v50 = (unsigned __int64 *)sub_99D480(a1, v97.m128i_i64[0], 1, 0, v64, v65);
      v68 = *(_QWORD *)(a1 + 128);
      if ( (v68 || *(_DWORD *)(a1 + 136)) && v98 == **(_QWORD **)(v68 + 8) && *(_BYTE *)(*(_QWORD *)(a1 + 328) + 63LL) )
      {
        v91 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
        v102 = v98 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v103 = v95 & 0xFFFFFFFFFFFFFFFCLL;
        sub_99A360(v50, v99, v91, v66, v67, v102);
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 16) || !*(_BYTE *)(a1 + 320) )
  {
    v69 = sub_997D80((__int64 *)a1, v95);
    if ( v69 )
    {
      v96 = v69;
      sub_999860(v47, v37, 2LL * (v37 == 0), (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v70, v71);
      if ( v96 == 1 )
      {
        v74 = 2;
        v18 = 0;
        goto LABEL_43;
      }
    }
    else
    {
      sub_999860(v47, 0, 2, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v70, v71);
    }
    v74 = 2LL * (v18 == 0);
LABEL_43:
    sub_999860(v47, v18, v74, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v72, v73);
    *(_QWORD *)(a1 + 128) = v107.m128i_i64[0];
    *(_DWORD *)(a1 + 136) = v107.m128i_i32[2];
    goto LABEL_44;
  }
  v50 = nullptr;
LABEL_38:
  v79 = _mm_loadu_si128(&v105);
  *(_QWORD *)(a1 + 72) = v106;
  *(__m128i *)(a1 + 56) = v79;
LABEL_39:
  *(_QWORD *)(a1 + 128) = v104.m128i_i64[0];
  *(_DWORD *)(a1 + 136) = v104.m128i_i32[2];
  return v50;
}
