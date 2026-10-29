unsigned __int64 __fastcall sub_7096F0(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6,
        char a7)
{
  __int64 v11; // r15
  __int64 v12; // r14
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned __int16 v25; // si
  unsigned __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r9d
  int v30; // r8d
  int v31; // r10d
  __int64 v32; // r8
  unsigned __int16 v33; // cx
  __int16 v34; // di
  __int64 v35; // r12
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  char v40; // dl
  char v41; // cl
  __int64 v42; // rsi
  int v43; // eax
  char v44; // r14
  unsigned __int64 *v45; // rbx
  __int64 v46; // r15
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rbp
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r12
  unsigned __int64 v52; // rsi
  char v53; // bl
  char v54; // r13
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rbp
  _BYTE *v60; // rsi
  void *v61; // rax
  void *src[2]; // [rsp+0h] [rbp-2D8h]
  void *srca[2]; // [rsp+0h] [rbp-2D8h]
  __m128i v64; // [rsp+10h] [rbp-2C8h]
  __m128i v65; // [rsp+10h] [rbp-2C8h]
  void *v66[2]; // [rsp+20h] [rbp-2B8h]
  void *v67[2]; // [rsp+20h] [rbp-2B8h]
  __m128i si128; // [rsp+30h] [rbp-2A8h]
  __m128i v69; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 v71; // [rsp+40h] [rbp-298h]
  unsigned __int64 v72; // [rsp+40h] [rbp-298h]
  unsigned __int64 v73; // [rsp+40h] [rbp-298h]
  __int64 v74; // [rsp+48h] [rbp-290h]
  unsigned int v75; // [rsp+48h] [rbp-290h]
  __int64 v76; // [rsp+48h] [rbp-290h]
  __int64 v77; // [rsp+50h] [rbp-288h]
  char v79; // [rsp+5Fh] [rbp-279h]
  char v81; // [rsp+68h] [rbp-270h]
  unsigned int v82; // [rsp+70h] [rbp-268h]
  char v83; // [rsp+74h] [rbp-264h]
  __int64 v84; // [rsp+88h] [rbp-250h]
  unsigned __int64 v85; // [rsp+90h] [rbp-248h]
  unsigned __int64 v86; // [rsp+98h] [rbp-240h]
  char v87; // [rsp+ACh] [rbp-22Ch] BYREF
  char v88; // [rsp+ADh] [rbp-22Bh] BYREF
  __int16 v89; // [rsp+AEh] [rbp-22Ah] BYREF
  unsigned __int64 v90; // [rsp+B0h] [rbp-228h] BYREF
  unsigned __int64 v91; // [rsp+B8h] [rbp-220h] BYREF
  unsigned __int64 v92; // [rsp+C0h] [rbp-218h] BYREF
  unsigned __int64 v93; // [rsp+C8h] [rbp-210h] BYREF
  void *v94[2]; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v95[2]; // [rsp+E0h] [rbp-1F8h] BYREF
  void *v96[2]; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v97[2]; // [rsp+100h] [rbp-1D8h] BYREF
  void *ptr; // [rsp+110h] [rbp-1C8h] BYREF
  __m128i v99; // [rsp+118h] [rbp-1C0h]
  char v100; // [rsp+128h] [rbp-1B0h] BYREF
  void *v101; // [rsp+130h] [rbp-1A8h] BYREF
  __int64 v102; // [rsp+138h] [rbp-1A0h]
  _BYTE v103[80]; // [rsp+140h] [rbp-198h] BYREF
  __m128i v104; // [rsp+190h] [rbp-148h] BYREF
  __int64 v105; // [rsp+1A0h] [rbp-138h]
  __int64 v106; // [rsp+1A8h] [rbp-130h]
  void *v107; // [rsp+1D8h] [rbp-100h]
  __int128 v108; // [rsp+1E8h] [rbp-F0h]
  __int64 v109; // [rsp+1F8h] [rbp-E0h]
  __int64 v110; // [rsp+200h] [rbp-D8h]
  _OWORD v111[12]; // [rsp+210h] [rbp-C8h] BYREF

  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 25 > 1 )
    v11 = sub_B0D320(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  v12 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(v12 + 16);
  if ( (unsigned int)(v13 - 25) > 1 )
  {
    v14 = sub_B0D320(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
    LOBYTE(v13) = *(_BYTE *)(v14 + 16);
    v12 = v14;
  }
  v74 = v11;
  if ( *(_BYTE *)(v11 + 16) != 26 )
    v74 = 0;
  v15 = 0;
  v16 = (_BYTE)v13 == 26;
  v17 = *(_QWORD *)(v11 + 24);
  v18 = *(_QWORD *)(v12 + 24);
  if ( v16 )
    v15 = v12;
  v77 = v15;
  if ( a4 )
  {
    v19 = 1;
    if ( !a5 )
    {
      v19 = 0;
      if ( (v18 & 7) == 0 && (v18 & 8) == 0 )
      {
        v27 = *(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v27 & 7) == 0 && (v27 & 8) == 0 )
        {
          v19 = 1;
          if ( (v17 & 7) == 0 && (v17 & 8) == 0 )
          {
            v28 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v28 & 7) == 0 )
              v19 = (v28 >> 3) & 1;
          }
        }
      }
    }
    v20 = sub_707EF0(a1, v17, v18, 1u, v19, 1u, 0);
  }
  else
  {
    v20 = sub_707EF0(a1, v17, v18, 0, a5, 0, 0);
  }
  v21 = v20;
  v90 = v20;
  if ( (v20 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  if ( a5 )
  {
    v90 = v20;
    v90 = sub_6B3060(&v90, v17);
    v21 = v90;
  }
  v22 = *(_QWORD *)&byte_8[*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v11 + 24) & 7LL;
  v23 = *(_QWORD *)&byte_8[*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v12 + 24) & 7LL;
  if ( a5 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
        & 0xFFFFFFFFFFFFFFF0LL;
    v23 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
        & 0xFFFFFFFFFFFFFFF0LL;
  }
  v24 = *(unsigned __int16 *)(v12 + 18);
  LOWORD(v24) = (unsigned __int16)v24 >> 3;
  v25 = *(_WORD *)(v11 + 18) >> 3;
  if ( (((unsigned __int8)v25 ^ (unsigned __int8)v24) & 0x1F) != 0 || ((v24 & 0x700) != 0) != ((v25 & 0x700) != 0) )
    return 0;
  v29 = (v24 >> 8) & 7;
  if ( (((int)v25 >> 8) & 7) == 0 )
  {
    if ( !v29 )
      goto LABEL_34;
    v30 = 0;
    goto LABEL_32;
  }
  v30 = (((int)v25 >> 8) & 7) - 1;
  v31 = 0;
  if ( v29 )
LABEL_32:
    v31 = v29 - 1;
  if ( v31 != v30 )
    return 0;
LABEL_34:
  if ( ((v24 & 0x40) != 0) != (((*(_WORD *)(v11 + 18) >> 3) & 0x40) != 0)
    || (unsigned __int8)v24 >> 7 != (unsigned __int8)v25 >> 7
    || ((v24 & 0x800) != 0) != ((v25 & 0x800) != 0) )
  {
    return 0;
  }
  v32 = *(_QWORD *)&byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL] | v21 & 7;
  v81 = v32 == v22;
  v83 = v32 == v23;
  v33 = v24 & 0x20;
  if ( !a7 )
  {
    if ( (v25 & 0x20) != 0 )
    {
      v83 &= v33 >> 5;
    }
    else
    {
      if ( !v33 )
        goto LABEL_41;
      v81 = 0;
    }
LABEL_75:
    v34 = v25 | 0x20;
    goto LABEL_42;
  }
  if ( (v25 & 0x20) == 0 )
  {
    v83 &= (v33 >> 5) ^ 1;
    goto LABEL_41;
  }
  if ( v33 )
    goto LABEL_75;
  v81 = 0;
LABEL_41:
  v34 = v25 & 0x1FDF;
LABEL_42:
  v89 = v34;
  memset(v111, 0, 0x88u);
  if ( v74 && v77 )
  {
    if ( (unsigned __int16)(*(_DWORD *)(v77 + 20) >> 6) == (unsigned __int16)(*(_DWORD *)(v74 + 20) >> 6)
      && ((*(_BYTE *)(v77 + 23) & 0x10) != 0) == ((*(_BYTE *)(v74 + 23) & 0x10) != 0) )
    {
      v35 = sub_6B26F0(v77);
      if ( sub_6B26F0(v74) == v35 )
      {
        sub_6B27F0(v94, v74);
        sub_6B27F0(v96, v77);
        if ( !(unsigned __int8)sub_6B2660((__int64)v94, (__int64)v96) )
        {
          if ( a7 )
          {
            *(__m128i *)v66 = _mm_load_si128((const __m128i *)v96);
            si128 = _mm_load_si128((const __m128i *)v97);
            *(__m128i *)src = _mm_load_si128((const __m128i *)v94);
            v64 = _mm_load_si128((const __m128i *)v95);
            sub_B186B0(
              (unsigned int)&v104,
              (unsigned int)v96,
              v36,
              v37,
              v38,
              v39,
              (__int64)src[0],
              (__int64)src[1],
              v64.m128i_i64[0],
              v64.m128i_i64[1],
              (__int64)v66[0],
              (__int64)v66[1],
              si128.m128i_i64[0],
              si128.m128i_i64[1]);
            sub_6AF700((__int64)v111, (__int64)&v104);
            sub_6CD250((__int64)&v104);
          }
          else
          {
            v101 = v103;
            v102 = 0x100000000LL;
            *(__m128i *)v67 = _mm_load_si128((const __m128i *)v96);
            v69 = _mm_load_si128((const __m128i *)v97);
            *(__m128i *)srca = _mm_load_si128((const __m128i *)v94);
            v65 = _mm_load_si128((const __m128i *)v95);
            sub_B18960(
              (int)&v104,
              (int)&v101,
              v36,
              v37,
              v38,
              v39,
              srca[0],
              (size_t)srca[1],
              v65.m128i_i64[0],
              v65.m128i_i64[1],
              v67[0],
              (size_t)v67[1],
              v69.m128i_i64[0],
              v69.m128i_i64[1]);
            sub_6AF700((__int64)v111, (__int64)&v104);
            sub_6CD250((__int64)&v104);
            if ( v101 != v103 )
              free(v101);
          }
          v104 = (__m128i)v111[0];
          v105 = *(_QWORD *)&v111[4];
          v106 = DWORD2(v111[4]);
          v81 &= sub_6B2660((__int64)&v104, (__int64)v94);
          v83 &= sub_6B2660((__int64)&v104, (__int64)v96);
        }
        ptr = &v100;
        v99 = _mm_load_si128((const __m128i *)&xmmword_3C7E660);
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD *, __int64, __int64, char *, char *, void **))loc_6CD2C0)(
                                a1,
                                v74,
                                v77,
                                &v87,
                                &v88,
                                &ptr) )
        {
          v84 = v21;
          v101 = v103;
          v51 = 0;
          v52 = (unsigned __int8)(v87 & v81);
          v85 = a2;
          v86 = a3;
          v53 = v87 & v81;
          v54 = v88 & v83;
          v102 = 0xA00000000LL;
          v82 = (unsigned __int16)(*(_DWORD *)(v74 + 20) >> 6);
          while ( (unsigned int)v51 < v82 )
          {
            v104.m128i_i64[0] = *(_QWORD *)(v74 + 8 * v51 + 48);
            v91 = sub_6B3060(&v104, v52);
            v104.m128i_i64[0] = *(_QWORD *)(v77 + 8 * v51 + 48);
            v58 = sub_6B3060(&v104, v52);
            v60 = (_BYTE *)v91;
            v92 = v58;
            v93 = sub_709660(a1, v91, v58, a4, a5);
            v59 = v93;
            if ( (v93 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
            {
              result = 0;
              goto LABEL_103;
            }
            if ( a5 )
            {
              v93 = sub_6B3060(&v93, (__int64)v60);
              v59 = v93;
            }
            v55 = (unsigned int)v102;
            v56 = (unsigned int)v102 + 1LL;
            if ( HIDWORD(v102) < v56 )
            {
              v60 = v103;
              sub_25D6060(&v101, v103, v56, 8);
              v55 = (unsigned int)v102;
            }
            *((_QWORD *)v101 + v55) = v59;
            LODWORD(v102) = v102 + 1;
            if ( a5 )
            {
              v91 = sub_6B3060(&v91, (__int64)v60);
              v92 = sub_6B3060(&v92, (__int64)v60);
            }
            v52 = v59 & 0xFFFFFFFFFFFFFFF0LL;
            v57 = *(_QWORD *)&byte_8[v59 & 0xFFFFFFFFFFFFFFF0LL] | v59 & 7;
            v53 &= v57 == (*(_QWORD *)&byte_8[v91 & 0xFFFFFFFFFFFFFFF0LL] | v91 & 7);
            ++v51;
            v54 &= v57 == (*(_QWORD *)&byte_8[v92 & 0xFFFFFFFFFFFFFFF0LL] | v92 & 7);
          }
          result = v85;
          if ( !v53 )
          {
            if ( v54 )
            {
              result = v86;
            }
            else
            {
              sub_6B29F0((__int64)&v104, v74);
              v104.m128i_i16[0] = v89;
              v61 = nullptr;
              if ( v99.m128i_i64[0] )
                v61 = ptr;
              v107 = v61;
              if ( LOBYTE(v111[8]) )
              {
                v108 = v111[0];
                v109 = *(_QWORD *)&v111[4];
                v110 = DWORD2(v111[4]);
              }
              result = sub_6DB070((__int64)a1, v84, (__int64)v101, (unsigned int)v102, &v104, 0);
            }
          }
LABEL_103:
          if ( v101 != v103 )
          {
            v73 = result;
            free(v101);
            result = v73;
          }
        }
        else
        {
          result = 0;
        }
        if ( ptr != &v100 )
        {
          v72 = result;
          free(ptr);
          result = v72;
        }
        goto LABEL_46;
      }
    }
    goto LABEL_45;
  }
  v40 = v83 & (v74 == 0);
  v41 = v81 & (v77 == 0);
  if ( v74 )
  {
    v77 = v74;
    goto LABEL_63;
  }
  if ( v77 )
  {
LABEL_63:
    if ( (*(_BYTE *)(v77 + 23) & 0x10) != 0 )
    {
LABEL_45:
      result = 0;
      goto LABEL_46;
    }
    v42 = v77;
    v75 = *(_DWORD *)(v77 + 20);
    v43 = (unsigned __int16)(v75 >> 6);
    if ( (unsigned __int16)(v75 >> 6) )
    {
      v76 = v21;
      v44 = v41;
      v45 = (unsigned __int64 *)(v77 + 48);
      v79 = v40;
      v46 = v77 + 8LL * (unsigned int)(v43 - 1) + 56;
      v47 = a3;
      while ( 1 )
      {
        v48 = *v45;
        v49 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v45 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v49 + 16LL) == 46 )
        {
          v50 = sub_B14A40(*v49);
          v48 = sub_6B31C0(v50, v42);
          if ( (v48 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
            goto LABEL_45;
        }
        if ( sub_6BF150((__int64)a1, v48) )
          goto LABEL_45;
        v42 = (__int64)a1;
        if ( (*(_QWORD *)(*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == a1[2330] )
          goto LABEL_45;
        if ( ++v45 == (unsigned __int64 *)v46 )
        {
          v21 = v76;
          v40 = v79;
          v41 = v44;
          a3 = v47;
          break;
        }
      }
    }
    if ( !v41 )
    {
      if ( !v40 )
      {
        sub_6B29F0((__int64)&v104, v77);
        v104.m128i_i16[0] = v89;
        if ( LOBYTE(v111[8]) )
        {
          v108 = v111[0];
          v109 = *(_QWORD *)&v111[4];
          v110 = DWORD2(v111[4]);
        }
        result = sub_6DB070((__int64)a1, v21, v77 + 48, (unsigned __int16)(*(_DWORD *)(v77 + 20) >> 6), &v104, 0);
        goto LABEL_46;
      }
      goto LABEL_81;
    }
    goto LABEL_88;
  }
  if ( v41 )
  {
LABEL_88:
    result = a2;
    goto LABEL_46;
  }
  if ( v40 )
  {
LABEL_81:
    result = a3;
    goto LABEL_46;
  }
  v90 = v21;
  result = sub_6C7100((__int64)a1, v21, (unsigned __int16 *)&v89);
LABEL_46:
  if ( LOBYTE(v111[8]) )
  {
    v71 = result;
    LOBYTE(v111[8]) = 0;
    sub_6CD250((__int64)v111);
    return v71;
  }
  return result;
}

