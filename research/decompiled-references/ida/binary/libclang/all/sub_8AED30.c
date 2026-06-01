__int64 __fastcall sub_8AED30(__int64 *a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // ebp
  int v9; // edx
  char v10; // r13
  unsigned int v11; // ebp
  unsigned int v13; // ebp
  int v14; // edx
  char v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rdi
  char v18; // cl
  char v19; // r9
  unsigned int v20; // r15d
  unsigned __int64 v21; // rdx
  int v22; // eax
  void **v23; // r8
  unsigned int v24; // r14d
  unsigned __int64 v25; // r15
  bool v26; // r13
  void *v27; // rdi
  unsigned int v28; // eax
  bool v29; // r15
  __int32 v30; // eax
  void *v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  void *v34; // r9
  size_t v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // r14
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  _QWORD *v40; // r15
  _QWORD *v41; // rdi
  _QWORD *v42; // rdi
  _QWORD *v43; // r15
  _QWORD *v44; // rdi
  unsigned int v45; // ecx
  void **v46; // rsi
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  void *v49; // rax
  _QWORD *v50; // rdi
  void *v51; // rax
  __int128 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rdx
  size_t n; // [rsp+8h] [rbp-180h]
  int nc; // [rsp+8h] [rbp-180h]
  int nd; // [rsp+8h] [rbp-180h]
  int ne; // [rsp+8h] [rbp-180h]
  size_t na; // [rsp+8h] [rbp-180h]
  size_t nf; // [rsp+8h] [rbp-180h]
  unsigned __int8 **nb; // [rsp+8h] [rbp-180h]
  char src; // [rsp+10h] [rbp-178h]
  unsigned int srca; // [rsp+10h] [rbp-178h]
  void *srcb; // [rsp+10h] [rbp-178h]
  char v65; // [rsp+18h] [rbp-170h]
  void **v66; // [rsp+18h] [rbp-170h]
  char v67; // [rsp+20h] [rbp-168h]
  int v68; // [rsp+20h] [rbp-168h]
  char v69; // [rsp+27h] [rbp-161h]
  char v70; // [rsp+32h] [rbp-156h] BYREF
  char v71; // [rsp+33h] [rbp-155h] BYREF
  int v72; // [rsp+34h] [rbp-154h] BYREF
  size_t v73; // [rsp+38h] [rbp-150h]
  void *v74; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v75; // [rsp+48h] [rbp-140h]
  char v76; // [rsp+4Ch] [rbp-13Ch]
  unsigned int v77; // [rsp+50h] [rbp-138h]
  void *v78; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v79; // [rsp+68h] [rbp-120h]
  char v80; // [rsp+6Ch] [rbp-11Ch]
  unsigned int v81; // [rsp+70h] [rbp-118h]
  void *v82; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v83; // [rsp+88h] [rbp-100h]
  char v84; // [rsp+8Ch] [rbp-FCh]
  unsigned int v85; // [rsp+90h] [rbp-F8h]
  void *v86; // [rsp+A0h] [rbp-E8h] BYREF
  size_t v87; // [rsp+A8h] [rbp-E0h]
  _QWORD v88[2]; // [rsp+B0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v91[40]; // [rsp+D8h] [rbp-B0h] BYREF
  void *v92; // [rsp+100h] [rbp-88h] BYREF
  unsigned __int64 v93; // [rsp+108h] [rbp-80h]
  __int64 v94; // [rsp+110h] [rbp-78h]
  void *v95; // [rsp+120h] [rbp-68h]
  __int64 v96; // [rsp+130h] [rbp-58h] BYREF
  __int16 v97; // [rsp+140h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = sub_70B7E0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8));
  v7 = *(_QWORD *)(v4 + 8);
  v72 = v6;
  v8 = sub_70B7E0(*(_QWORD *)(*a1 + 16), v7);
  si128.m128i_i32[0] = (unsigned __int16)v8;
  v9 = HIBYTE(v8) & 0x20;
  v10 = ((unsigned __int8)v9 >> 5) ^ 1;
  if ( (unsigned __int16)v8 > 0x40u )
  {
    sub_2585A50(&ptr, 0, (v8 & 0x20000000) != 0);
    LODWORD(v93) = si128.m128i_i32[0];
    if ( si128.m128i_i32[0] <= 0x40u )
    {
      v75 = si128.m128i_i32[0];
      v76 = v10;
      v74 = ptr;
      v77 = v8;
    }
    else
    {
      sub_2585B30(&v92);
      v76 = v10;
      v77 = v8;
      v75 = v93;
      v74 = v92;
      if ( si128.m128i_i32[0] > 0x40u && ptr )
        operator delete[](ptr);
    }
  }
  else
  {
    v75 = (unsigned __int16)v8;
    v74 = nullptr;
    v76 = ((unsigned __int8)v9 >> 5) ^ 1;
    v77 = v8;
  }
  v11 = sub_8AEB10(v4, (__int64)&v74, *a1);
  if ( (_BYTE)v11 )
  {
    v13 = sub_70B7E0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v5 + 8));
    si128.m128i_i32[0] = (unsigned __int16)v13;
    v14 = HIBYTE(v13) & 0x20;
    v15 = ((unsigned __int8)v14 >> 5) ^ 1;
    if ( (unsigned __int16)v13 > 0x40u )
    {
      sub_2585A50(&ptr, 0, (v13 & 0x20000000) != 0);
      LODWORD(v93) = si128.m128i_i32[0];
      if ( si128.m128i_i32[0] <= 0x40u )
      {
        v79 = si128.m128i_i32[0];
        v80 = v15;
        v78 = ptr;
        v81 = v13;
      }
      else
      {
        sub_2585B30(&v92);
        v80 = v15;
        v81 = v13;
        v79 = v93;
        v78 = v92;
        if ( si128.m128i_i32[0] > 0x40u && ptr )
          operator delete[](ptr);
      }
    }
    else
    {
      v79 = (unsigned __int16)v13;
      v78 = nullptr;
      v80 = ((unsigned __int8)v14 >> 5) ^ 1;
      v81 = v13;
    }
    v11 = sub_8AEB10(v5, (__int64)&v78, *a1);
    if ( !(_BYTE)v11 )
      goto LABEL_20;
    v16 = v77;
    v70 = 0;
    v71 = 0;
    si128.m128i_i32[0] = (unsigned __int16)v77;
    if ( (unsigned __int16)v77 > 0x40u )
    {
      src = ((unsigned __int8)(HIBYTE(v77) & 0x20) >> 5) ^ 1;
      sub_2585A50(&ptr, 0, (v77 & 0x20000000) != 0);
      LODWORD(v93) = si128.m128i_i32[0];
      if ( si128.m128i_i32[0] <= 0x40u )
      {
        v83 = si128.m128i_i32[0];
        v84 = src;
        v82 = ptr;
        v85 = v16;
      }
      else
      {
        sub_2585B30(&v92);
        v85 = v16;
        v83 = v93;
        v84 = src;
        v82 = v92;
        if ( si128.m128i_i32[0] > 0x40u && ptr )
          operator delete[](ptr);
      }
    }
    else
    {
      v83 = (unsigned __int16)v77;
      v82 = nullptr;
      v84 = ((unsigned __int8)(HIBYTE(v77) & 0x20) >> 5) ^ 1;
      v85 = v77;
    }
    switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
    {
      case 2:
        sub_25702F0(&ptr, &v74, &v78, &v70);
        goto LABEL_63;
      case 3:
        v29 = (v81 & 0x20000000) == 0;
        v30 = v79;
        LODWORD(v93) = v79;
        if ( v79 > 0x40 )
        {
          sub_2585B30(&v92);
          v30 = v93;
          v31 = v92;
        }
        else
        {
          v31 = v78;
        }
        si128.m128i_i8[4] = v29;
        si128.m128i_i32[0] = v30;
        ptr = v31;
        LODWORD(v93) = 64;
        v92 = nullptr;
        BYTE4(v93) = 0;
        v32 = sub_804370((__int64 *)&ptr, (__int64 *)&v92);
        if ( (unsigned int)v93 > 0x40 && v92 )
        {
          nd = v32;
          operator delete[](v92);
          v32 = nd;
        }
        if ( si128.m128i_i32[0] > 0x40u && ptr )
        {
          ne = v32;
          operator delete[](ptr);
          v32 = ne;
        }
        if ( !v32 )
        {
          sub_A2E130(*a1, a2, 2306, 0);
          goto LABEL_16;
        }
        sub_2570D30(&ptr, &v74, &v78, &v70);
        sub_256E520(&v92, &ptr, &v72, &v71);
        if ( v83 > 0x40 )
        {
LABEL_64:
          if ( v82 )
            operator delete[](v82);
        }
LABEL_66:
        v82 = v92;
        v28 = v93;
        LODWORD(v93) = 0;
        v83 = v28;
        v84 = BYTE4(v93);
        v85 = v94;
        if ( si128.m128i_i32[0] <= 0x40u )
          goto LABEL_59;
        v27 = ptr;
        if ( !ptr )
          goto LABEL_59;
        goto LABEL_58;
      case 5:
        sub_256FD70(&ptr, &v74, &v78, &v70);
        goto LABEL_63;
      case 6:
        sub_2570030(&ptr, &v74, &v78, &v70);
LABEL_63:
        sub_256E520(&v92, &ptr, &v72, &v71);
        if ( v83 > 0x40 )
          goto LABEL_64;
        goto LABEL_66;
      case 7:
      case 8:
        v18 = v79;
        v19 = HIBYTE(v81) & 0x20;
        LODWORD(v93) = v79;
        srca = (unsigned __int16)v77 - (v77 >> 31);
        n = srca - 1;
        v20 = srca - 1;
        if ( v79 > 0x40 )
        {
          v67 = ((unsigned __int8)(HIBYTE(v81) & 0x20) >> 5) ^ 1;
          v65 = HIBYTE(v81) & 0x20;
          sub_2585B30(&v92);
          v18 = v93;
          v21 = (unsigned __int64)v92;
          v19 = v65;
          LODWORD(v87) = v93;
          v86 = v92;
          BYTE4(v87) = v67;
          if ( (unsigned int)v93 > 0x40 )
          {
            v69 = v65;
            v68 = v93;
            v66 = (void **)v92;
            if ( v68 - (unsigned int)sub_2587400(&v86) <= 0x40 )
            {
              v46 = v66;
              v21 = (unsigned __int64)*v66;
              if ( n >= (unsigned __int64)*v66 )
              {
                v20 = (unsigned int)*v66;
                if ( !v69 )
                  goto LABEL_40;
                v45 = v68 - 1;
                v47 = 1LL << ((unsigned __int8)v68 - 1);
              }
              else
              {
                if ( !v69 )
                  goto LABEL_39;
                v45 = v68 - 1;
                v21 = v20;
                v47 = 1LL << ((unsigned __int8)v68 - 1);
              }
            }
            else
            {
              if ( !v69 )
                goto LABEL_39;
              v45 = v68 - 1;
              v46 = v66;
              v21 = v20;
              v47 = 1LL << ((unsigned __int8)v68 - 1);
            }
            v48 = (unsigned __int64)v46[v45 >> 6];
            goto LABEL_120;
          }
        }
        else
        {
          v21 = (unsigned __int64)v78;
          LODWORD(v87) = v79;
          BYTE4(v87) = ((unsigned __int8)(HIBYTE(v81) & 0x20) >> 5) ^ 1;
          v86 = v78;
        }
        if ( n >= v21 )
        {
          v20 = v21;
          if ( !v19 )
            goto LABEL_40;
          v48 = v21;
          v47 = 1LL << (v18 - 1);
        }
        else
        {
          if ( !v19 )
          {
LABEL_39:
            v21 = v20;
            goto LABEL_40;
          }
          v48 = v21;
          v21 = v20;
          v47 = 1LL << (v18 - 1);
        }
LABEL_120:
        if ( (v47 & v48) != 0 )
        {
          v92 = (void *)sub_A2E240(*a1, a2, 2242, 0);
          if ( v92 )
            sub_829A30((unsigned __int8 ***)&v92, (__int64)&v86);
LABEL_44:
          if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 7 )
          {
            sub_2571A20(&v92, &v74, v20, &v70, v23);
            if ( v83 > 0x40 && v82 )
              operator delete[](v82);
            v82 = v92;
            v83 = v93;
            v84 = BYTE4(v93);
            v85 = v94;
LABEL_56:
            if ( (unsigned int)v87 > 0x40 )
            {
              v27 = v86;
              if ( v86 )
LABEL_58:
                operator delete[](v27);
            }
LABEL_59:
            if ( !v70 && !v71 )
              goto LABEL_61;
            v17 = *a1;
            if ( !*(_BYTE *)(*a1 + 963) )
            {
LABEL_15:
              if ( !(unsigned __int8)sub_82C2F0(v17, a2, (__int64)&v82, *(_QWORD *)(a2 + 8)) )
              {
LABEL_16:
                v11 = 0;
LABEL_17:
                if ( v83 > 0x40 && v82 )
                  operator delete[](v82);
LABEL_20:
                if ( v79 > 0x40 && v78 )
                  operator delete[](v78);
                break;
              }
LABEL_61:
              sub_821070((__int64)a1, (__int64)&v82);
              goto LABEL_17;
            }
            v33 = sub_6BB140(*(_QWORD *)(v17 + 16));
            sub_C6CF40(&v92, v33, *(unsigned int *)(a2 + 4), 2352);
            ptr = v91;
            si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
            sub_2572060(&v82, &ptr);
            v34 = ptr;
            v86 = v88;
            v35 = si128.m128i_i64[0];
            if ( !ptr && si128.m128i_i64[0] )
              std::__throw_logic_error("basic_string: construction from null is not valid");
            v73 = si128.m128i_i64[0];
            if ( si128.m128i_i64[0] > 0xFuLL )
            {
              srcb = ptr;
              nf = si128.m128i_i64[0];
              v49 = (void *)std::string::_M_create();
              v35 = nf;
              v34 = srcb;
              v86 = v49;
              v50 = v49;
              v88[0] = v73;
            }
            else
            {
              if ( si128.m128i_i64[0] == 1 )
              {
                LOBYTE(v88[0]) = *(_BYTE *)ptr;
                goto LABEL_87;
              }
              if ( !si128.m128i_i64[0] )
              {
LABEL_87:
                v36 = v88;
LABEL_88:
                v87 = v35;
                *((_BYTE *)v36 + v35) = 0;
                if ( ptr != v91 )
                  free(ptr);
                sub_838D50((unsigned __int8 **)&v92, v86, v87);
                sub_8356A0((unsigned __int8 **)&v92, *(_QWORD *)(a2 + 8), 8u);
                if ( v86 != v88 )
                  operator delete(v86, v88[0] + 1LL);
                if ( (_BYTE)v97 )
                {
                  sub_C69E80(v94, &v92, HIBYTE(v97));
                  v94 = 0;
                  v97 = 0;
                }
                if ( v95 != &v96 )
                  operator delete(v95, v96 + 1);
                v37 = v92;
                if ( v92 )
                {
                  v38 = v93;
                  if ( v93 )
                  {
                    if ( (unsigned __int64)v92 >= v93 && v93 + 14848 >= (unsigned __int64)v92 )
                    {
                      v54 = *(unsigned int *)(v93 + 14976);
                      *(_DWORD *)(v93 + 14976) = v54 + 1;
                      *(_QWORD *)(v38 + 8 * v54 + 14848) = v37;
                    }
                    else
                    {
                      v39 = (unsigned __int64)*((unsigned int *)v92 + 134) << 6;
                      na = *((_QWORD *)v92 + 66);
                      v40 = (_QWORD *)(na + v39);
                      if ( na != na + v39 )
                      {
                        do
                        {
                          v40 -= 8;
                          v41 = (_QWORD *)v40[3];
                          if ( v41 != v40 + 5 )
                            operator delete(v41, v40[5] + 1LL);
                        }
                        while ( (_QWORD *)na != v40 );
                        v40 = (_QWORD *)v37[66];
                      }
                      if ( v40 != v37 + 68 )
                        free(v40);
                      v42 = (_QWORD *)v37[52];
                      if ( v42 != v37 + 54 )
                        free(v42);
                      v43 = v37 + 50;
                      do
                      {
                        v44 = (_QWORD *)*(v43 - 2);
                        if ( v44 != v43 )
                          operator delete(v44, *v43 + 1LL);
                        v43 -= 4;
                      }
                      while ( v37 + 10 != v43 );
                      operator delete(v37, 0x3A0u);
                    }
                  }
                }
                v17 = *a1;
                goto LABEL_15;
              }
              v50 = v88;
            }
            memcpy(v50, v34, v35);
            v35 = v73;
            v36 = v86;
            goto LABEL_88;
          }
          v24 = v75;
          v70 = 0;
          LODWORD(v93) = v75;
          if ( v76 )
          {
            if ( v75 <= 0x40 )
            {
              v92 = v74;
LABEL_48:
              if ( v24 == v20 )
                v25 = 0;
              else
                v25 = (unsigned __int64)v92 >> v20;
              v26 = (v77 & 0x20000000) == 0;
              goto LABEL_51;
            }
            sub_2585B30(&v92);
            v24 = v93;
            if ( (unsigned int)v93 <= 0x40 )
              goto LABEL_48;
            sub_258EF20(&v92, v20);
            v24 = v93;
            si128.m128i_i8[4] = 1;
            v25 = (unsigned __int64)v92;
            si128.m128i_i32[0] = v93;
            ptr = v92;
LABEL_151:
            LODWORD(v93) = v24;
            v26 = (v77 & 0x20000000) == 0;
            if ( v24 > 0x40 )
            {
              sub_2585B30(&v92);
              v24 = v93;
              v25 = (unsigned __int64)v92;
              LODWORD(v94) = v77;
              if ( si128.m128i_i32[0] > 0x40u && ptr )
                operator delete[](ptr);
              goto LABEL_52;
            }
LABEL_51:
            LODWORD(v94) = v77;
LABEL_52:
            if ( v83 > 0x40 && v82 )
              operator delete[](v82);
            v82 = (void *)v25;
            v83 = v24;
            v84 = v26;
            v85 = v94;
            goto LABEL_56;
          }
          if ( v75 > 0x40 )
          {
            sub_2585B30(&v92);
            v24 = v93;
            if ( (unsigned int)v93 > 0x40 )
            {
              sub_2587FC0(&v92, v20);
              v24 = v93;
              si128.m128i_i8[4] = 0;
              v25 = (unsigned __int64)v92;
              si128.m128i_i32[0] = v93;
              ptr = v92;
              goto LABEL_151;
            }
            v51 = v92;
          }
          else
          {
            v51 = v74;
          }
          if ( v24 )
          {
            v52 = (__int64)((_QWORD)v51 << (64 - (unsigned __int8)v24)) >> (64 - (unsigned __int8)v24);
            *(_QWORD *)&v52 = (__int64)v52 >> v20;
            if ( v24 != v20 )
              *((_QWORD *)&v52 + 1) = v52;
            *(_QWORD *)&v52 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v24;
            v53 = *((_QWORD *)&v52 + 1);
          }
          else
          {
            v53 = 0;
            *(_QWORD *)&v52 = 0;
          }
          v25 = v52 & v53;
          v26 = (v77 & 0x20000000) == 0;
          goto LABEL_51;
        }
LABEL_40:
        LODWORD(v93) = 64;
        v92 = (void *)v21;
        BYTE4(v93) = 0;
        v22 = sub_804370((__int64 *)&v86, (__int64 *)&v92);
        v23 = &v92;
        if ( (unsigned int)v93 > 0x40 && v92 )
        {
          nc = v22;
          operator delete[](v92);
          v23 = &v92;
          v22 = nc;
        }
        if ( v22 )
        {
          v92 = (void *)sub_A2E240(*a1, a2, 2220, 0);
          nb = (unsigned __int8 **)v92;
          if ( v92 )
          {
            sub_829A30((unsigned __int8 ***)&v92, (__int64)&v86);
            sub_8356A0(nb, *(_QWORD *)(a2 + 8), 8u);
            sub_8356A0(nb, srca, 3u);
          }
        }
        goto LABEL_44;
      default:
        goto LABEL_16;
    }
  }
  if ( v75 > 0x40 && v74 )
    operator delete[](v74);
  return v11;
}

