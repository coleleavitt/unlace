_OWORD *__fastcall sub_57B5B0(
        _OWORD *a1,
        __int64 a2,
        __m128i a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8,
        __int128 a9)
{
  __int64 v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // r15d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r13
  unsigned int v43; // eax
  int v44; // r11d
  __int64 v45; // r10
  unsigned int v46; // ebp
  unsigned int v47; // r11d
  unsigned int v48; // r10d
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __m128i v51; // xmm2
  char v52; // r12
  int v53; // edi
  _OWORD *v54; // r15
  __int64 v55; // r12
  __int64 v56; // rax
  unsigned int v57; // r14d
  unsigned int v58; // ebx
  int v59; // eax
  bool v61; // al
  __m128i v62; // xmm0
  unsigned int v63; // ebx
  unsigned int v64; // r15d
  unsigned int v65; // ebp
  __int32 v66; // eax
  __int32 v67; // eax
  __int32 v68; // eax
  __int32 v69; // eax
  unsigned __int64 *v70; // rax
  __m128i v72; // [rsp+0h] [rbp-148h]
  __m128i v73; // [rsp+0h] [rbp-148h]
  __m128i v74; // [rsp+0h] [rbp-148h]
  unsigned __int64 *v75; // [rsp+20h] [rbp-128h]
  __m128i v76; // [rsp+28h] [rbp-120h]
  unsigned int v77; // [rsp+38h] [rbp-110h]
  unsigned int v78; // [rsp+3Ch] [rbp-10Ch]
  __m128i v79; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v80; // [rsp+50h] [rbp-F8h]
  unsigned int v81; // [rsp+54h] [rbp-F4h]
  unsigned __int64 *v82; // [rsp+58h] [rbp-F0h]
  unsigned int v83; // [rsp+60h] [rbp-E8h]
  unsigned int v84; // [rsp+64h] [rbp-E4h]
  __int64 v85; // [rsp+68h] [rbp-E0h]
  int v86; // [rsp+70h] [rbp-D8h]
  unsigned int v87; // [rsp+74h] [rbp-D4h]
  __int64 v88; // [rsp+78h] [rbp-D0h]
  unsigned __int64 *v89; // [rsp+80h] [rbp-C8h]
  __int64 v90; // [rsp+88h] [rbp-C0h]
  __m128i v91; // [rsp+90h] [rbp-B8h]
  unsigned int v92; // [rsp+A0h] [rbp-A8h]
  __int32 v93; // [rsp+A4h] [rbp-A4h]
  __int32 v94; // [rsp+A8h] [rbp-A0h]
  __int32 v95; // [rsp+ACh] [rbp-9Ch]
  __int32 v96; // [rsp+B0h] [rbp-98h]
  char v97; // [rsp+B5h] [rbp-93h]
  char v98; // [rsp+B6h] [rbp-92h]
  char v99; // [rsp+B7h] [rbp-91h]
  _OWORD *v100; // [rsp+B8h] [rbp-90h]
  unsigned __int64 v101; // [rsp+C4h] [rbp-84h]
  int v102; // [rsp+CCh] [rbp-7Ch]
  __m128i v103; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v104; // [rsp+E0h] [rbp-68h] BYREF
  __m128i v105; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v106; // [rsp+100h] [rbp-48h] BYREF

  v97 = a2;
  v10 = *(_QWORD *)a9;
  v75 = (unsigned __int64 *)a9;
  v11 = *(_QWORD *)a9;
  v12 = sub_55C590(*(_QWORD *)a9);
  v86 = v12;
  v101 = v12;
  v102 = v13;
  v17 = sub_566CC0(
          v11,
          a2,
          v13,
          v14,
          v15,
          v16,
          (__int128)_mm_loadu_si128((const __m128i *)&a8),
          (__int128)_mm_loadu_si128((const __m128i *)&a9));
  v18 = (unsigned __int64)&v103;
  v77 = v17;
  sub_57A9A0(
    &v103,
    a3,
    a2,
    v19,
    v20,
    v21,
    v22,
    (__int128)_mm_loadu_si128((const __m128i *)&a8),
    (__int128)_mm_loadu_si128((const __m128i *)&a9));
  v90 = v104.m128i_i64[1];
  v82 = (unsigned __int64 *)v104.m128i_i64[0];
  v95 = 0;
  v93 = 0;
  v94 = 0;
  v99 = 0;
  v96 = 0;
  v91 = 0u;
  v100 = a1;
  while ( 1 )
  {
LABEL_2:
    v104.m128i_i64[0] = (__int64)v82;
    v104.m128i_i64[1] = v90;
    v72 = _mm_load_si128(&v103);
    if ( sub_567740(v18, a2, v23, v24, v25, v26, v72.m128i_i32[0], v72.m128i_i32[2], _mm_load_si128(&v104).m128i_i64[0]) )
    {
      v54 = v100;
      *v100 = 0;
      v54[1] = 0;
      return v54;
    }
    v31 = *v82;
    if ( (*v82 & 1) == 0 )
      break;
    v76 = 0u;
    v80 = 0;
    v83 = 0;
    v81 = 0;
    v78 = 0;
LABEL_75:
    v63 = v80;
    v64 = v83;
    v65 = v81;
    v105.m128i_i64[0] = __PAIR64__(v83, v80);
    v105.m128i_i64[1] = __PAIR64__(v78, v81);
    v106 = v76;
    v74 = _mm_load_si128(&v105);
    if ( sub_567740(
           v18,
           a2,
           v27,
           v28,
           (__int64)v29,
           v30,
           v74.m128i_i32[0],
           v74.m128i_i32[2],
           _mm_load_si128(&v106).m128i_i64[0]) )
    {
      if ( v99 )
      {
        v83 = v94;
        v80 = v96;
        v54 = v100;
        v81 = v93;
        v76 = v91;
        v78 = v95;
        goto LABEL_47;
      }
      v66 = v96;
      v96 = 0;
      v103.m128i_i32[0] = v66;
      v67 = v94;
      v94 = 0;
      v103.m128i_i32[1] = v67;
      v68 = v93;
      v93 = 0;
      v103.m128i_i32[2] = v68;
      v69 = v95;
      v95 = 0;
      v103.m128i_i32[3] = v69;
      v90 = v91.m128i_i64[1];
      v70 = (unsigned __int64 *)v91.m128i_i64[0];
      v91 = 0u;
      v82 = v70;
    }
    else
    {
      v103.m128i_i64[0] = __PAIR64__(v64, v63);
      v103.m128i_i64[1] = __PAIR64__(v78, v65);
      v90 = v76.m128i_i64[1];
      v82 = (unsigned __int64 *)v76.m128i_i64[0];
    }
  }
  v78 = *(_DWORD *)(v31 + 36);
  if ( !v78 )
  {
    v80 = 0;
    v83 = 0;
    v81 = 0;
    v76 = 0u;
    goto LABEL_75;
  }
  v32 = *(unsigned __int16 *)(v31 + 66);
  v85 = 0;
  v33 = *(_QWORD *)(v90 + 8);
  if ( (_DWORD)v32 )
  {
    v34 = *(unsigned __int16 *)(v33 + 36);
    v33 = *(_QWORD *)(v33 + 128);
    v85 = v33 + 2LL * (unsigned int)(v32 * v34);
  }
  v35 = sub_565DC0(v18, a2, v33, v32, (__int64)v29, v30, _mm_load_si128(&v103).m128i_u32[0]);
  v40 = sub_565DD0(v18, a2, v36, v37, v38, v39, (__int128)_mm_load_si128(&v103));
  v18 = (unsigned int)v40;
  a2 = HIDWORD(v40);
  v79.m128i_i64[0] = *(unsigned int *)(v31 + 36);
  v27 = v90;
  v29 = (unsigned __int64 *)(v31 - 8 * v79.m128i_i64[0]);
  v41 = 0;
  v98 = 0;
  v84 = 0;
  v76 = 0u;
  v78 = 0;
  v81 = 0;
  v83 = 0;
  v80 = 0;
  while ( 2 )
  {
    if ( v41 != v79.m128i_i64[0] )
    {
      v28 = *v29;
      v82 = v29;
      if ( (v28 & 1) != 0 )
      {
        if ( (v28 & 8) != 0 )
          goto LABEL_36;
      }
      else if ( (*(_BYTE *)(v28 + 44) & 4) != 0 )
      {
LABEL_36:
        v43 = 0;
        v42 = 0;
        if ( !v41 )
          goto LABEL_37;
LABEL_12:
        if ( (v28 & 1) != 0 )
        {
          v44 = BYTE6(v28);
          v45 = (v28 >> 40) & 0xF;
          v46 = BYTE4(v28);
        }
        else
        {
          v44 = *(_DWORD *)(v28 + 4);
          LODWORD(v45) = *(_DWORD *)(v28 + 8);
          v46 = *(_DWORD *)(v28 + 12);
        }
        v47 = v35 + v44;
        if ( (_DWORD)v45 )
        {
          v48 = v18 + v45;
        }
        else
        {
          v46 += a2;
          v48 = v18;
        }
        goto LABEL_16;
      }
      if ( v85 )
      {
        v42 = *(unsigned __int16 *)(v85 + 2LL * v84);
        v43 = (unsigned __int16)v42;
      }
      else
      {
        v43 = 0;
        v42 = 0;
      }
      ++v84;
      if ( v41 )
        goto LABEL_12;
LABEL_37:
      v46 = a2;
      v48 = v18;
      v47 = v35;
LABEL_16:
      v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(v48));
      v50 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(v43));
      v51 = _mm_unpacklo_epi64(v49, v50);
      if ( (v28 & 1) != 0 )
      {
        a2 = HIBYTE(v28);
        v35 = v47 + HIBYTE(v28);
LABEL_18:
        a2 = v46 + (unsigned int)a2;
        v18 = v48;
        if ( v75 == v29 )
          break;
      }
      else
      {
        v53 = *(_DWORD *)(v28 + 20);
        a2 = *(unsigned int *)(v28 + 24);
        v35 = v47 + *(_DWORD *)(v28 + 16);
        if ( !v53 )
          goto LABEL_18;
        v18 = v48 + v53;
        if ( v75 == v29 )
          break;
      }
      if ( v77 < v35 )
        goto LABEL_70;
      if ( v77 == v35 )
      {
        if ( v86 )
          goto LABEL_70;
        if ( (v28 & 1) == 0 )
        {
          v55 = *(unsigned int *)(v28 + 36);
          if ( (_DWORD)v55 )
          {
            v92 = a2;
            v87 = v43;
            v56 = v10;
            v57 = v55 - 1;
            v88 = v41;
            v30 = v56;
            v58 = v18;
            v89 = v29;
            v29 = (unsigned __int64 *)v27;
            while ( 1 )
            {
              v18 = *(_QWORD *)(v28 + 8 * (v57 - v55));
              if ( (v18 & 1) != 0 )
              {
                a2 = HIBYTE(v18);
                v59 = BYTE6(v18);
              }
              else
              {
                a2 = *(unsigned int *)(v18 + 16);
                v59 = *(_DWORD *)(v18 + 4);
              }
              if ( (_DWORD)a2 + v59 )
              {
LABEL_58:
                v27 = (__int64)v29;
                v29 = v89;
                v18 = v58;
                v43 = v87;
                v41 = v88;
                a2 = v92;
                v10 = v30;
                v28 = *v89;
                goto LABEL_21;
              }
              if ( v18 == v30 )
                break;
              a2 = v30;
              if ( (unsigned __int8)sub_55E2C0(v18, v30) )
                break;
              if ( v57-- == 0 )
                goto LABEL_58;
            }
            v10 = v30;
LABEL_70:
            v79 = _mm_unpacklo_epi64(v49, v50);
            v105.m128i_i64[0] = __PAIR64__(v83, v80);
            v105.m128i_i64[1] = __PAIR64__(v78, v81);
            v106 = v76;
            v73 = _mm_load_si128(&v105);
            v61 = sub_567740(
                    v18,
                    a2,
                    v27,
                    v28,
                    (__int64)v29,
                    v30,
                    v73.m128i_i32[0],
                    v73.m128i_i32[2],
                    _mm_load_si128(&v106).m128i_i64[0]);
            v62 = _mm_load_si128(&v79);
            if ( v61 )
            {
              v76 = v91;
            }
            else
            {
              v95 = v78;
              v93 = v81;
              v94 = v83;
              v96 = v80;
              v99 = v98;
            }
            v103 = v62;
            v91 = v76;
            goto LABEL_2;
          }
        }
      }
LABEL_21:
      v30 = (*(_BYTE *)v29 & 4) != 0;
      v52 = (*(_BYTE *)v29 & 2) != 0;
      if ( v97 )
      {
        if ( (v28 & 1) == 0 )
          v52 = *(_BYTE *)(v28 + 44) & 1;
        if ( v43 || v52 )
          goto LABEL_42;
      }
      else
      {
        if ( (_WORD)v42 )
        {
          if ( (_WORD)v42 != 0xFFFF )
          {
            if ( (_WORD)v42 == 0xFFFE )
              goto LABEL_26;
            v30 = *(_QWORD *)(v27 + 8);
            v28 = *(_QWORD *)(v30 + 104) + 3 * v42;
            if ( !*(_BYTE *)(v28 + 1) )
              goto LABEL_26;
          }
LABEL_42:
          v106.m128i_i64[0] = (__int64)v29;
          v106.m128i_i64[1] = v27;
          v76.m128i_i64[1] = v27;
          v76.m128i_i64[0] = (__int64)v29;
          v78 = v43;
          v81 = v46;
          v83 = v48;
          v80 = v47;
          v98 = 1;
          v105 = v51;
LABEL_32:
          ++v41;
          ++v29;
          continue;
        }
        if ( (v28 & 1) != 0 )
        {
          if ( (*(_BYTE *)v29 & 2) != 0 )
            goto LABEL_63;
        }
        else
        {
          v30 = *(unsigned __int8 *)(v28 + 44);
          if ( (v30 & 1) != 0 )
          {
            v30 = (v30 & 2) != 0;
LABEL_63:
            if ( (_BYTE)v30 )
              goto LABEL_42;
          }
        }
      }
LABEL_26:
      v28 = *v29;
      if ( (*v29 & 1) == 0 )
      {
        v30 = *(unsigned int *)(v28 + 36);
        if ( (_DWORD)v30 )
        {
          v30 = *(unsigned int *)(v28 + 52);
          if ( v97 )
            v30 = *(unsigned int *)(v28 + 48);
          if ( (_DWORD)v30 )
          {
            v106.m128i_i64[0] = (__int64)v29;
            v106.m128i_i64[1] = v27;
            v76.m128i_i64[1] = v27;
            v76.m128i_i64[0] = (__int64)v29;
            v78 = v43;
            v81 = v46;
            v83 = v48;
            v80 = v47;
            v98 = 0;
            v105 = v51;
          }
        }
      }
      goto LABEL_32;
    }
    break;
  }
  if ( !v98 )
    goto LABEL_75;
  v54 = v100;
LABEL_47:
  *(_DWORD *)v54 = v80;
  *((_DWORD *)v54 + 1) = v83;
  *((_DWORD *)v54 + 2) = v81;
  *((_DWORD *)v54 + 3) = v78;
  v54[1] = v76;
  return v54;
}
