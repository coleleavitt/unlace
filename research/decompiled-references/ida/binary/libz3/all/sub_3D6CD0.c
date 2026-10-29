_QWORD *__fastcall sub_3D6CD0(_QWORD *a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __m128i v9; // xmm0
  char v10; // al
  __int64 *v11; // rbx
  __int64 *v12; // r13
  __int64 v13; // r15
  _QWORD *v14; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // r12
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  _DWORD *v26; // rdx
  char i; // al
  _DWORD *v29; // rax
  int v30; // edx
  unsigned int v31; // esi
  __int64 *v32; // rdx
  __int64 v33; // rax
  _DWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rdx
  _DWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // al
  __int64 v41; // rcx
  char v42; // al
  char v43; // al
  __int64 v44; // rcx
  char v45; // al
  __int64 *v46; // [rsp+0h] [rbp-198h]
  __int64 *v47; // [rsp+8h] [rbp-190h]
  __int64 v48; // [rsp+10h] [rbp-188h]
  __int64 v49; // [rsp+18h] [rbp-180h]
  int v50[2]; // [rsp+20h] [rbp-178h]
  int v51[2]; // [rsp+20h] [rbp-178h]
  int v52[2]; // [rsp+20h] [rbp-178h]
  int v53[2]; // [rsp+20h] [rbp-178h]
  void *v54; // [rsp+28h] [rbp-170h]
  __int64 v55; // [rsp+30h] [rbp-168h]
  __int64 *v56; // [rsp+38h] [rbp-160h]
  __int64 v57; // [rsp+38h] [rbp-160h]
  __int64 v58; // [rsp+38h] [rbp-160h]
  __int64 v59; // [rsp+40h] [rbp-158h]
  __int64 *v60; // [rsp+48h] [rbp-150h]
  int v61; // [rsp+50h] [rbp-148h]
  __int64 v62; // [rsp+58h] [rbp-140h] BYREF
  __int64 v63; // [rsp+60h] [rbp-138h] BYREF
  void *v64; // [rsp+68h] [rbp-130h] BYREF
  __int64 *v65; // [rsp+70h] [rbp-128h] BYREF
  __int64 *v66; // [rsp+78h] [rbp-120h] BYREF
  __int64 v67; // [rsp+80h] [rbp-118h] BYREF
  __int64 v68; // [rsp+88h] [rbp-110h] BYREF
  __int64 *v69; // [rsp+90h] [rbp-108h] BYREF
  __int64 v70; // [rsp+98h] [rbp-100h] BYREF
  __int64 *v71; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-F0h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+D8h] [rbp-C0h] BYREF
  int v79[2]; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-B0h]
  _BYTE v81[32]; // [rsp+F0h] [rbp-A8h] BYREF
  int v82[4]; // [rsp+110h] [rbp-88h] BYREF
  char v83[16]; // [rsp+120h] [rbp-78h] BYREF
  __int64 v84; // [rsp+130h] [rbp-68h] BYREF
  _QWORD *v85; // [rsp+138h] [rbp-60h] BYREF
  char v86[8]; // [rsp+140h] [rbp-58h] BYREF
  __int64 v87; // [rsp+148h] [rbp-50h]
  void *s; // [rsp+150h] [rbp-48h]

  v6 = *a3;
  a1[1] = 0;
  *a1 = v6;
  sub_15EE300(a3);
  v7 = a3[1];
  if ( v7 && *(_DWORD *)(v7 - 4) )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)v8);
    *(__m128i *)v82 = v9;
    sub_16669D0(v83, v8);
    v85 = nullptr;
    v87 = 0;
    v84 = v9.m128i_i64[1];
    s = nullptr;
    v48 = v9.m128i_i64[0] + 128;
    HIBYTE(v49) = sub_13608A0(v9.m128i_i64[0] + 128);
    sub_1360B80(v9.m128i_i64[0] + 128, 0);
    if ( s )
      memset(s, 0, 4LL * HIDWORD(v87));
    LODWORD(v87) = 0;
    v10 = sub_1374330(*(_QWORD *)v82, a3);
    v11 = (__int64 *)a3[1];
    BYTE6(v49) = v10;
    if ( v11 )
    {
      v12 = &v11[*((unsigned int *)v11 - 1)];
      if ( v11 != v12 )
      {
        v46 = &v84;
        v47 = &v76;
        while ( 1 )
        {
          v13 = *v11;
          if ( !BYTE6(v49) )
          {
            for ( i = sub_1374270(*(_QWORD *)v82, v13); !i; i = sub_1374270(*(_QWORD *)v82, *v11) )
            {
              if ( v12 == ++v11 )
                goto LABEL_42;
              v13 = *v11;
            }
          }
          if ( (*(_DWORD *)v13 >= (unsigned int)v87
             || (*((_DWORD *)s + (*(_DWORD *)v13 >> 5)) & (1 << *(_DWORD *)v13)) == 0)
            && !*(_WORD *)(v13 + 4) )
          {
            break;
          }
LABEL_41:
          if ( v12 == ++v11 )
            goto LABEL_42;
        }
        v14 = v85;
        v77 = *(_QWORD *)&v82[2];
        if ( v85 )
        {
          v15 = (unsigned __int64)&v85[*((unsigned int *)v85 - 1)];
          if ( (unsigned __int64)v85 >= v15 )
            goto LABEL_20;
          do
          {
            while ( 1 )
            {
              v16 = *v14;
              if ( *v14 )
              {
                v17 = v84;
                if ( (*(_DWORD *)(v16 + 8))-- == 1 )
                  break;
              }
              if ( (unsigned __int64)++v14 >= v15 )
                goto LABEL_19;
            }
            sub_15D7BC0(v17, v16);
            ++v14;
          }
          while ( (unsigned __int64)v14 < v15 );
LABEL_19:
          v14 = v85;
          if ( v85 )
LABEL_20:
            *((_DWORD *)v14 - 1) = 0;
        }
        ++*(_DWORD *)(v13 + 8);
        v76 = v13;
        sub_3D5DC0(&v85, v47);
        v19 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v85 || (v20 = *((_DWORD *)v85 - 1)) == 0 )
            {
              v78 = v19;
              sub_2334C0(&v77);
              goto LABEL_41;
            }
            v21 = v85[v20 - 1];
            *(_QWORD *)v79 = v21;
            if ( v21 )
              ++*(_DWORD *)(v21 + 8);
            v78 = v19;
            sub_3D5DC0(&v78, v79);
            v19 = v78;
            sub_39BF70(v46);
            if ( v19 )
              break;
            v22 = MEMORY[0x7FFFFFFF8];
            if ( !*(_WORD *)(MEMORY[0x7FFFFFFF8] + 4LL) )
              goto LABEL_28;
          }
          v22 = *(_QWORD *)(v19 + 8LL * (unsigned int)(*(_DWORD *)(v19 - 4) - 1));
          if ( !*(_WORD *)(v22 + 4) )
          {
LABEL_28:
            if ( *(_DWORD *)v22 >= (unsigned int)v87
              || (*((_DWORD *)s + (*(_DWORD *)v22 >> 5)) & (1 << *(_DWORD *)v22)) == 0 )
            {
              v23 = *(_QWORD *)v82;
              v55 = *(_QWORD *)&v82[2];
              sub_1374250(v79, *(_QWORD *)v82, v22);
              v24 = *(_QWORD *)&v82[2];
              v25 = *(_QWORD *)(*(_QWORD *)&v82[2] + 856LL);
              v54 = *(void **)v79;
              if ( *(_QWORD *)v79 == v25 || *(_QWORD *)v79 == *(_QWORD *)(*(_QWORD *)&v82[2] + 864LL) )
              {
                if ( v25 == v22 || *(_QWORD *)(*(_QWORD *)&v82[2] + 864LL) == v22 )
                  goto LABEL_39;
                v26 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
                if ( v26 && !*v26 )
                {
                  if ( *(_WORD *)(v22 + 4) )
                    goto LABEL_36;
                  v30 = v26[1];
                  if ( v30 == 8 )
                  {
                    if ( *(_DWORD *)(v22 + 24) == 1 )
                    {
                      v38 = *(_QWORD *)(v22 + 32);
                      v62 = v38;
                      if ( v38 )
                        ++*(_DWORD *)(v38 + 8);
                      sub_3D5DC0(&v85, &v62);
                      goto LABEL_39;
                    }
                    if ( *(_QWORD *)v79 != v25
                      || *(_DWORD *)(v22 + 24) != 1
                      || (v33 = *(_QWORD *)(v22 + 32), *(_WORD *)(v33 + 4))
                      || (v34 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL)) == nullptr
                      || *v34
                      || v34[1] != 7
                      || *(_DWORD *)(v33 + 24) != 2 )
                    {
LABEL_36:
                      sub_180B130(*(_QWORD *)&v82[2]);
                      if ( (unsigned __int8)sub_186A530(*(double *)v9.m128i_i64) )
                      {
                        sub_186A4C0(*(double *)v9.m128i_i64);
                        v57 = sub_180B150(v24, v23);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_1606360(v79, v22, *(_QWORD *)&v82[2], 0, 0, 0);
                        sub_160E8B0(v57, v79);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_18572D0(v81);
                        sub_186A500(v81, "\n");
                      }
                      else
                      {
                        v58 = sub_180B150(v24, v23);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_1606360(v79, v22, *(_QWORD *)&v82[2], 0, 0, 0);
                        sub_160E8B0(v58, v79);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_18572D0(v81);
                      }
                      sub_1872CE0("");
                      sub_1873130(114, 513);
                    }
                    v35 = *(_QWORD *)(v33 + 32);
                    v36 = *(__int64 **)(v33 + 40);
                    goto LABEL_90;
                  }
                  if ( v30 == 3 )
                  {
                    if ( *(_QWORD *)v79 != v25 )
                    {
                      sub_EBD670(v79, *(_QWORD *)&v82[2], *(_QWORD *)v82, v22);
                      v64 = *(void **)v79;
                      if ( *(_QWORD *)v79 )
                        ++*(_DWORD *)(*(_QWORD *)v79 + 8LL);
                      sub_3D5DC0(&v85, &v64);
                      sub_3D2CD0(*(__int64 *)v79, v80);
                      goto LABEL_39;
                    }
                    if ( *(_DWORD *)(v22 + 24) != 2 )
                    {
                      v39 = sub_15DDD30(
                              v82[2],
                              (int)v46,
                              (int)v47,
                              v48,
                              v49,
                              (int)v79,
                              v79[0],
                              v55,
                              (int)v56,
                              v59,
                              (int)v60,
                              v61,
                              v62,
                              v63,
                              v64);
                      v63 = v39;
                      if ( v39 )
                        ++*(_DWORD *)(v39 + 8);
                      sub_3D5DC0(&v85, &v63);
                      goto LABEL_39;
                    }
                  }
                  else
                  {
                    if ( v30 == 5 )
                    {
                      v31 = *(_DWORD *)(v22 + 24);
                      v32 = (__int64 *)(v22 + 32);
                      if ( *(_QWORD *)v79 != v25 )
                      {
                        *(_QWORD *)v50 = &v32[v31];
                        if ( 8LL * v31 )
                        {
                          while ( 1 )
                          {
                            v59 = (__int64)v32;
                            v56 = (__int64 *)*v32;
                            if ( (unsigned __int8)sub_13742D0(*(_QWORD *)v82, *v32) )
                              break;
                            v32 = (__int64 *)(v59 + 8);
                            if ( *(_QWORD *)v50 == v59 + 8 )
                              goto LABEL_39;
                          }
                          v65 = v56;
                          if ( v56 )
                            ++*((_DWORD *)v56 + 2);
                          sub_3D5DC0(&v85, &v65);
                        }
                        goto LABEL_39;
                      }
LABEL_79:
                      sub_3A6490((__int64)v46, v31, v32);
                      goto LABEL_39;
                    }
                    if ( v30 == 6 )
                    {
                      v31 = *(_DWORD *)(v22 + 24);
                      v32 = (__int64 *)(v22 + 32);
                      if ( *(_QWORD *)v79 == v25 )
                      {
                        v56 = &v32[v31];
                        if ( 8LL * v31 )
                        {
                          while ( 1 )
                          {
                            v60 = v32;
                            v59 = *v32;
                            if ( (unsigned __int8)sub_1374270(*(_QWORD *)v82, *v32) )
                              break;
                            v32 = v60 + 1;
                            if ( v56 == v60 + 1 )
                              goto LABEL_39;
                          }
                          *(_QWORD *)v79 = v59;
                          if ( v59 )
                            ++*(_DWORD *)(v59 + 8);
                          sub_3D5DC0(&v85, v79);
                        }
                        goto LABEL_39;
                      }
                      goto LABEL_79;
                    }
                    if ( v30 != 2 )
                    {
                      if ( v30 != 4 )
                      {
                        if ( v30 == 7 )
                        {
                          if ( *(_DWORD *)(v22 + 24) != 2 )
                            goto LABEL_36;
                        }
                        else
                        {
                          if ( v30 != 9 || *(_DWORD *)(v22 + 24) != 2 )
                            goto LABEL_36;
                          if ( *(_QWORD *)v79 == v25 )
                          {
                            v56 = *(__int64 **)(v22 + 32);
                            *(_QWORD *)v53 = *(_QWORD *)(v22 + 40);
                            if ( (unsigned __int8)sub_1374270(*(_QWORD *)v82, *(_QWORD *)v53) )
                            {
                              v67 = *(_QWORD *)v53;
                              if ( *(_QWORD *)v53 )
                                ++*(_DWORD *)(*(_QWORD *)v53 + 8LL);
                              sub_3D5DC0(&v85, &v67);
                            }
                            else if ( (unsigned __int8)sub_13742D0(*(_QWORD *)v82, v56) )
                            {
                              v66 = v56;
                              if ( v56 )
                                ++*((_DWORD *)v56 + 2);
                              sub_3D5DC0(&v85, &v66);
                            }
                            goto LABEL_39;
                          }
                        }
                        v32 = (__int64 *)(v22 + 32);
                        v31 = 2;
                        goto LABEL_79;
                      }
                      v56 = *(__int64 **)(v22 + 32);
                      v59 = *(_QWORD *)(v22 + 40);
                      *(_QWORD *)v52 = *(_QWORD *)(v22 + 48);
                      if ( (unsigned __int8)sub_15D2760(*(_QWORD *)&v82[2], v59, *(_QWORD *)v52) )
                      {
                        v76 = v59;
                        if ( v59 )
                          ++*(_DWORD *)(v59 + 8);
                        sub_3D5DC0(&v85, v47);
                      }
                      else
                      {
                        v40 = sub_1374270(*(_QWORD *)v82, v59);
                        v41 = v59;
                        if ( v40 && (v42 = sub_1374270(*(_QWORD *)v82, *(_QWORD *)v52), v41 = v59, v42) )
                        {
                          v75 = v59;
                          if ( v59 )
                            ++*(_DWORD *)(v59 + 8);
                          sub_3D5DC0(&v85, &v75);
                          v74 = *(_QWORD *)v52;
                          if ( *(_QWORD *)v52 )
                            ++*(_DWORD *)(*(_QWORD *)v52 + 8LL);
                          sub_3D5DC0(&v85, &v74);
                        }
                        else
                        {
                          v59 = v41;
                          v43 = sub_13742D0(*(_QWORD *)v82, v41);
                          v44 = v59;
                          if ( v43 && (v45 = sub_13742D0(*(_QWORD *)v82, *(_QWORD *)v52), v44 = v59, v45) )
                          {
                            v73 = v59;
                            if ( v59 )
                              ++*(_DWORD *)(v59 + 8);
                            sub_3D5DC0(&v85, &v73);
                            v72 = *(_QWORD *)v52;
                            if ( *(_QWORD *)v52 )
                              ++*(_DWORD *)(*(_QWORD *)v52 + 8LL);
                            sub_3D5DC0(&v85, &v72);
                          }
                          else
                          {
                            v59 = v44;
                            if ( (unsigned __int8)sub_1374270(*(_QWORD *)v82, v56) )
                            {
                              v71 = v56;
                              if ( v56 )
                                ++*((_DWORD *)v56 + 2);
                              sub_3D5DC0(&v85, &v71);
                              v70 = v59;
                              if ( v59 )
                                ++*(_DWORD *)(v59 + 8);
                              sub_3D5DC0(&v85, &v70);
                            }
                            else if ( (unsigned __int8)sub_13742D0(*(_QWORD *)v82, v56) )
                            {
                              v69 = v56;
                              if ( v56 )
                                ++*((_DWORD *)v56 + 2);
                              sub_3D5DC0(&v85, &v69);
                              v68 = *(_QWORD *)v52;
                              if ( *(_QWORD *)v52 )
                                ++*(_DWORD *)(*(_QWORD *)v52 + 8LL);
                              sub_3D5DC0(&v85, &v68);
                            }
                          }
                        }
                      }
LABEL_39:
                      sub_3D2CD0((__int64)v54, v55);
                      goto LABEL_53;
                    }
                    if ( *(_DWORD *)(v22 + 24) != 2 )
                      goto LABEL_36;
                    v35 = *(_QWORD *)(v22 + 32);
                    v36 = *(__int64 **)(v22 + 40);
LABEL_90:
                    v56 = v36;
                    *(_QWORD *)v51 = v35;
                    if ( (unsigned __int8)sub_15D2760(*(_QWORD *)&v82[2], v35, v36)
                      || (unsigned __int8)sub_15D27F0(*(_QWORD *)&v82[2], *(_QWORD *)v51, v56) )
                    {
                      goto LABEL_39;
                    }
                    if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)&v82[2], *(_QWORD *)v51) )
                    {
                      if ( *(_WORD *)(*(_QWORD *)v51 + 4LL)
                        || *(_DWORD *)(*(_QWORD *)v51 + 24LL)
                        || (v37 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v51 + 16LL) + 24LL)) != nullptr && *v37 != -1
                        || *((_WORD *)v56 + 2)
                        || *((_DWORD *)v56 + 6)
                        || (v29 = *(_DWORD **)(v56[2] + 24)) != nullptr && *v29 != -1 )
                      {
                        sub_3A6490((__int64)v46, *(_DWORD *)(v22 + 24), (__int64 *)(v22 + 32));
                        goto LABEL_39;
                      }
                    }
                  }
                }
                sub_3D5E80(v82, v22, (__int64)a1, *(double *)v9.m128i_i64);
                goto LABEL_39;
              }
              sub_3D2CD0(*(__int64 *)v79, v55);
            }
LABEL_53:
            sub_3D2BC0((__int64)v86, (unsigned int *)v22);
          }
        }
      }
    }
    v46 = &v84;
LABEL_42:
    if ( s )
      memset(s, 0, 4LL * HIDWORD(v87));
    LODWORD(v87) = 0;
    sub_1360B80(v48, HIBYTE(v49));
    if ( s )
      sub_186B220(s);
    sub_2334C0(v46);
  }
  return a1;
}

