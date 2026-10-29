__int64 __fastcall sub_549A80(__int64 *a1, unsigned __int64 a2, bool a3)
{
  bool v5; // bp
  unsigned __int64 *v6; // r13
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // dl
  unsigned __int64 v22; // r14
  int v23; // r13d
  __int64 v24; // rbx
  __int64 v25; // rax
  const __m128i *v26; // r15
  int v27; // eax
  __int64 v28; // rdi
  __m128i v29; // xmm0
  unsigned __int64 v30; // rbx
  unsigned int v31; // eax
  char v32; // dl
  unsigned int v33; // eax
  __int64 v34; // rdi
  char v35; // dl
  unsigned int v36; // eax
  char v37; // al
  char v38; // dl
  int v39; // eax
  int v40; // ebp
  char v41; // r13
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rdi
  int v45; // r14d
  unsigned int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  char tinfo_property; // al
  int v54; // r8d
  int v55; // r9d
  int v56; // eax
  int v57; // eax
  char v58; // al
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int tinfo_size; // eax
  int v62; // eax
  int v63; // [rsp+0h] [rbp-88h]
  unsigned int v64; // [rsp+0h] [rbp-88h]
  unsigned int v65; // [rsp+0h] [rbp-88h]
  unsigned int v66; // [rsp+0h] [rbp-88h]
  void *v67; // [rsp+8h] [rbp-80h]
  __int64 v68; // [rsp+10h] [rbp-78h] BYREF
  int v69[2]; // [rsp+18h] [rbp-70h]
  void *v70; // [rsp+20h] [rbp-68h] BYREF
  __int128 v71; // [rsp+28h] [rbp-60h]
  __int64 v72; // [rsp+38h] [rbp-50h]
  __int64 v73; // [rsp+40h] [rbp-48h]
  unsigned __int64 v74; // [rsp+48h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( a2 <= 0xFF )
    goto LABEL_14;
  v5 = a3;
  v6 = (unsigned __int64 *)sub_5340D0((__int64)a1, a2);
  if ( (~*((_BYTE *)v6 + 68) & 0x70) == 0 )
  {
    if ( *v6 <= 0xFF )
      goto LABEL_14;
    v6 = (unsigned __int64 *)sub_5340D0((__int64)a1, *v6);
  }
  if ( !v6 )
  {
LABEL_14:
    if ( (a2 & 0xF) - 3 > 3 )
      return 0;
    v11 = 1561;
    if ( (~(_BYTE)a2 & 0x30) != 0 )
      return 0;
    return v11;
  }
  v7 = (_DWORD *)a1[24];
  v8 = a1[25];
  v9 = &v7[v8];
  if ( v7 == v9 )
    goto LABEL_17;
  v10 = (_DWORD *)a1[24];
  while ( (_DWORD)a2 != *v10 )
  {
    if ( v9 == ++v10 )
      goto LABEL_17;
  }
  if ( v9 == v10 )
  {
LABEL_17:
    v13 = v8 + 1;
    if ( a1[26] < v13 )
    {
      v19 = qvector_reserve(a1 + 24, a1[24], v13, 4);
      v20 = a1[25];
      a1[24] = v19;
      v9 = (_DWORD *)(v19 + 4 * v20);
    }
    *v9 = a2;
    v14 = *a1;
    ++a1[25];
    if ( sub_53CE30((__int64)v6, v14, a2, 1) )
    {
      switch ( *((_BYTE *)v6 + 70) & 0xF )
      {
        case 0:
          break;
        case 0xA:
          v11 = sub_549A80(
                  *(_QWORD *)(v14 + 1824),
                  *v6,
                  1,
                  v15,
                  v16,
                  v17,
                  v63,
                  (int)v67,
                  v68,
                  *(void **)v69,
                  (__int64)v70,
                  v71,
                  SDWORD2(v71),
                  v72,
                  v73);
          goto LABEL_28;
        case 0xB:
          tinfo_property = get_tinfo_property(*v6, 2);
          v11 = 1061;
          if ( (tinfo_property & 0xF) == 0xC )
            goto LABEL_28;
          if ( a3 )
          {
            v11 = sub_549A80(
                    *(_QWORD *)(v14 + 1824),
                    *v6,
                    1,
                    1061,
                    v54,
                    v55,
                    v63,
                    (int)v67,
                    v68,
                    *(void **)v69,
                    (__int64)v70,
                    v71,
                    SDWORD2(v71),
                    v72,
                    v73);
            goto LABEL_28;
          }
          v56 = verify_tinfo(*v6);
          v11 = 1218;
          if ( v56 )
            goto LABEL_28;
          goto LABEL_27;
        case 0xC:
          if ( a3 )
            goto LABEL_27;
          v30 = *v6;
          v31 = *(_DWORD *)(*v6 + 24);
          if ( v31 > 0x1FFF )
          {
            v11 = 919;
            goto LABEL_28;
          }
          if ( (v31 & 1) == 0 && *(_QWORD *)(v30 + 72) )
          {
            v11 = 920;
            goto LABEL_28;
          }
          v32 = *(_BYTE *)(v30 + 88);
          v33 = v32 & 0xF0;
          if ( (v32 & 0xF0) == 0xC0 )
            v33 = *(_DWORD *)(v30 + 28);
          if ( v33 <= 0x10 )
          {
            v33 = getinf(99);
            if ( v33 == 64 )
              goto LABEL_116;
            if ( v33 <= 0x40 )
            {
              v11 = 1075;
              if ( !v33 )
                goto LABEL_28;
LABEL_62:
              if ( v33 == 32 && *(_QWORD *)(v30 + 8) )
              {
                v11 = 923;
                goto LABEL_28;
              }
LABEL_64:
              v34 = *(_QWORD *)(v30 + 32);
              if ( !(_BYTE)v34 )
                goto LABEL_113;
              v11 = verify_tinfo(v34);
              if ( v11 )
                goto LABEL_113;
              v35 = *(_BYTE *)(v30 + 88);
              v36 = v35 & 0xF0;
              if ( (v35 & 0xF0) == 0xC0 )
                v36 = *(_DWORD *)(v30 + 28);
              if ( v36 <= 0x10 )
              {
                v36 = getinf(99);
                v11 = 0;
              }
              if ( v36 != 176 && v36 != 256 )
              {
                v64 = v11;
                v37 = get_tinfo_property(*(_QWORD *)(v30 + 32), 2);
                v11 = v64;
                if ( (v37 & 0xF) == 0xB )
                {
LABEL_113:
                  v11 = 921;
                  goto LABEL_28;
                }
              }
              v38 = *(_BYTE *)(v30 + 88);
              v39 = v38 & 0xF0;
              if ( (v38 & 0xF0) == 0xC0 )
                v39 = *(_DWORD *)(v30 + 28);
              v40 = *(_DWORD *)(v30 + 24) & 0x100;
              v41 = ((unsigned __int16)(*(_WORD *)(v30 + 24) & 0x100) >> 8) | ((unsigned int)(v39 - 208) <= 0x2F);
              if ( v41 )
              {
                v66 = v11;
                v58 = get_tinfo_property(*(_QWORD *)(v30 + 32), 2);
                v11 = v66;
                if ( (v58 & 0x3F) != 1 )
                {
                  v59 = *(unsigned int *)(v14 + 932);
                  if ( (unsigned int)v59 <= 0xF )
                  {
                    v60 = 40961;
                    if ( _bittest64(&v60, v59) )
                    {
                      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v30 + 32), 0);
                      v62 = verify_argloc(v30 + 40, tinfo_size, 0);
                      v11 = v66;
                      if ( v62 )
                      {
                        v11 = 922;
                        goto LABEL_28;
                      }
                    }
                  }
                }
              }
              LODWORD(v73) = -1;
              v70 = nullptr;
              v72 = 0;
              v71 = 0;
              if ( !*(_QWORD *)(v30 + 8) )
                goto LABEL_28;
              v42 = 0;
              while ( 1 )
              {
                v65 = v11;
                v43 = *(_QWORD *)v30 + 80 * v42;
                v44 = *(_QWORD *)(v43 + 64);
                if ( !(_BYTE)v44 )
                {
                  v45 = 924;
                  goto LABEL_120;
                }
                v45 = verify_tinfo(v44);
                if ( v45 )
                  break;
                v46 = v65;
                if ( v40 || v41 && *(_DWORD *)v43 != 1 )
                {
                  v47 = get_tinfo_size(0, *(_QWORD *)(v43 + 64), 0);
                  if ( v47 <= 0 )
                  {
                    v45 = 1077;
                    goto LABEL_120;
                  }
                  if ( (unsigned int)verify_argloc(v43, (unsigned int)v47, 0) )
                  {
                    v45 = 925;
                    goto LABEL_120;
                  }
                  v46 = v65;
                  if ( *(_DWORD *)v43 == 1 )
                  {
                    *(_QWORD *)v69 = 0;
                    v68 = *(_QWORD *)(v43 + 8);
                    if ( v68 )
                    {
                      HIDWORD(v67) = v65;
                      v48 = get_tinfo_size(0, *(_QWORD *)(v43 + 64), 0);
                      if ( v48 == -1 )
                      {
                        v45 = 1059;
                        goto LABEL_120;
                      }
                      *(_QWORD *)v69 = v68 + v48;
                      if ( (unsigned __int8)rangeset_t_has_common(&v70, &v68, 0) )
                      {
                        v45 = 1060;
                        goto LABEL_120;
                      }
                      rangeset_t_add(
                        (int)&v70,
                        (int)&v68,
                        v49,
                        v50,
                        v51,
                        v52,
                        (int)&v68,
                        v67,
                        v68,
                        v69[0],
                        (int)v70,
                        v71,
                        *((__int64 *)&v71 + 1));
                      v46 = HIDWORD(v67);
                    }
                  }
                }
                v11 = v46 + 1;
                v42 = (int)v11;
                if ( (unsigned __int64)(int)v11 >= *(_QWORD *)(v30 + 8) )
                  goto LABEL_120;
              }
              v45 = 1773;
LABEL_120:
              if ( v70 )
              {
                *(_QWORD *)&v71 = 0;
                qfree(v70);
              }
              v11 = v45;
              goto LABEL_28;
            }
          }
          else
          {
            if ( v33 == 64 )
              goto LABEL_116;
            if ( v33 <= 0x40 )
              goto LABEL_62;
          }
          if ( v33 == 128 )
          {
            if ( !*(_QWORD *)(v30 + 8) )
            {
              v11 = 1074;
              goto LABEL_28;
            }
            goto LABEL_64;
          }
          if ( v33 != 208 )
            goto LABEL_64;
LABEL_116:
          if ( !*(_QWORD *)(v30 + 8) )
          {
            v11 = 1076;
            goto LABEL_28;
          }
          goto LABEL_64;
        case 0xD:
          if ( a3 )
            goto LABEL_27;
          v21 = *((_BYTE *)v6 + 70) & 0x30;
          if ( v21 == 16 )
            goto LABEL_34;
          if ( v21 == 32 )
          {
            if ( (*(_BYTE *)(*v6 + 52) & 7) != 0 )
              v57 = 1 << ((*(_BYTE *)(*v6 + 52) & 7) - 1);
            else
              v57 = (unsigned __int8)getinf(61);
            v11 = 1216;
            if ( v57 <= 16 )
              goto LABEL_27;
            goto LABEL_28;
          }
          if ( v21 )
            goto LABEL_27;
LABEL_34:
          v22 = *v6;
          if ( (*((_BYTE *)v6 + 68) & 2) != 0 )
            v5 = v6[6] != -1;
          v11 = 926;
          if ( (*(_DWORD *)(v22 + 44) & 0xFFFF800F) != 0 )
            goto LABEL_28;
          v11 = 927;
          if ( *(_QWORD *)(v22 + 24) < *(_QWORD *)(v22 + 32) )
            goto LABEL_28;
          if ( !*(_QWORD *)(v22 + 8) )
            goto LABEL_27;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          do
          {
            v26 = (const __m128i *)v24;
            v24 = *(_QWORD *)v22 + 144 * v25;
            if ( (get_tinfo_property(*(_QWORD *)(v24 + 64), 2) & 0xF) != 0xE
              && (unsigned int)verify_tinfo(*(_QWORD *)(v24 + 64)) )
            {
              v11 = 1217;
              goto LABEL_28;
            }
            v27 = *(_DWORD *)(v24 + 132);
            if ( (v27 & 0xFFFF800F) != 0 )
            {
              v11 = 928;
              goto LABEL_28;
            }
            if ( (v27 & 0x20) != 0 )
            {
              v28 = *(_QWORD *)(v24 + 64);
              if ( (v28 & 0x100) == 0 )
              {
                v11 = 929;
                goto LABEL_28;
              }
              if ( (get_tinfo_property(v28, 2) & 0x3F) != 0xD )
              {
                v11 = 1560;
                goto LABEL_28;
              }
            }
            if ( *(_BYTE *)(v22 + 51) )
            {
              if ( *(_QWORD *)v24 )
              {
                v11 = 930;
                goto LABEL_28;
              }
            }
            else if ( v26 )
            {
              if ( v5 && (v26[8].m128i_i8[4] & 0x20) == 0 )
              {
                v29 = _mm_loadu_si128(v26);
                if ( *(_QWORD *)v24 < _mm_add_epi64(v29, _mm_srli_si128(v29, 8)).m128i_u64[0] )
                {
                  v11 = 931;
                  goto LABEL_28;
                }
              }
            }
            v25 = ++v23;
          }
          while ( (unsigned __int64)v23 < *(_QWORD *)(v22 + 8) );
          if ( v5 && *(_QWORD *)(v22 + 24) < (unsigned __int64)(*(_QWORD *)v24 + *(_QWORD *)(v24 + 8) + 7LL) >> 3 )
          {
            v11 = 932;
            goto LABEL_28;
          }
          goto LABEL_27;
        case 0xE:
          v11 = 2047;
          goto LABEL_28;
        default:
          goto LABEL_27;
      }
    }
    if ( a3 )
    {
      if ( v6[4] )
      {
        v70 = nullptr;
        v71 = 0;
        if ( !(unsigned int)sub_534380(*(_QWORD *)(v14 + 1672), (__int64 *)&v70, (__int64)v6, 0)
          && (unsigned __int64)v71 <= 1 )
        {
          if ( v70 )
          {
            *(_QWORD *)&v71 = 0;
            qfree(v70);
          }
          v11 = 2222;
          goto LABEL_28;
        }
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70);
        }
      }
LABEL_27:
      v11 = 0;
    }
    else
    {
      v11 = 968;
    }
LABEL_28:
    v18 = a1[25];
    if ( v18 )
      a1[25] = v18 - 1;
    return v11;
  }
  v11 = 1232;
  if ( a3 )
    return 0;
  return v11;
}
