unsigned __int64 __fastcall sub_2E2680(__int64 a1, char **p_s, double a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // r12
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r13d
  char *v14; // r14
  __int64 v15; // rdi
  char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const char *v21; // rbp
  char v22; // r15
  __int64 v23; // rcx
  char *v24; // r14
  size_t v25; // rax
  size_t v26; // r15
  size_t v27; // r13
  __int64 v28; // rdi
  char *v29; // r13
  _QWORD *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rdi
  int v33; // eax
  size_t v34; // r13
  __int64 v35; // rdx
  const char *v36; // rdx
  const char *v37; // rdx
  const char *v38; // r13
  size_t v39; // rax
  size_t v40; // r14
  void *v41; // rax
  const void *v42; // rsi
  size_t v43; // rdx
  __int64 v44; // [rsp+8h] [rbp-6E0h]
  size_t v45; // [rsp+8h] [rbp-6E0h]
  int v46; // [rsp+10h] [rbp-6D8h]
  char v47; // [rsp+17h] [rbp-6D1h]
  char *s; // [rsp+20h] [rbp-6C8h] BYREF
  __int128 v49; // [rsp+28h] [rbp-6C0h]
  void *dest; // [rsp+40h] [rbp-6A8h] BYREF
  __int128 v51; // [rsp+48h] [rbp-6A0h]
  int v52; // [rsp+60h] [rbp-688h] BYREF
  __int64 v53; // [rsp+68h] [rbp-680h] BYREF
  __int128 v54; // [rsp+70h] [rbp-678h]
  void *v55; // [rsp+80h] [rbp-668h] BYREF
  __int128 v56; // [rsp+88h] [rbp-660h]
  char v57; // [rsp+98h] [rbp-650h]
  __int128 v58; // [rsp+A0h] [rbp-648h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-638h]
  int v60; // [rsp+B8h] [rbp-630h]
  __int64 v61; // [rsp+C0h] [rbp-628h]
  __int128 v62; // [rsp+C8h] [rbp-620h]
  __m128i si128; // [rsp+D8h] [rbp-610h] BYREF
  int v64; // [rsp+E8h] [rbp-600h]
  char v65; // [rsp+F0h] [rbp-5F8h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-5F0h]
  int v67; // [rsp+100h] [rbp-5E8h]
  __int64 v68; // [rsp+108h] [rbp-5E0h]
  __int128 v69; // [rsp+110h] [rbp-5D8h]
  __int64 v70; // [rsp+120h] [rbp-5C8h]
  char v71; // [rsp+128h] [rbp-5C0h]
  __int128 v72; // [rsp+130h] [rbp-5B8h] BYREF
  __int128 v73; // [rsp+140h] [rbp-5A8h]
  __int64 v74; // [rsp+150h] [rbp-598h]
  _BYTE v75[320]; // [rsp+158h] [rbp-590h] BYREF
  char v76; // [rsp+298h] [rbp-450h] BYREF
  char src[1032]; // [rsp+2A0h] [rbp-448h] BYREF
  unsigned __int64 v78; // [rsp+6A8h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v4 = (__int64)p_s;
  sub_2D1400((__int64)p_s, (const char *)p_s);
  sub_1F6580(a1, (__int64)p_s, v5, v6, a3);
  v7 = p_s[1];
  if ( v7
    || *((_DWORD *)p_s + 25) == -1
    || !dword_8BA8F4
    || !(unsigned __int8)netnode_inited(a3)
    || !qword_8CD7E8
    || !byte_8BA8EC && (unsigned __int8)is_debugger_on() )
  {
    return v78 - __readfsqword(0x28u);
  }
  v9 = sub_1F7CC0(a1, (__int64)p_s, a3);
  v62 = 0;
  v46 = v9;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  LODWORD(v58) = 0;
  *((_QWORD *)&v58 + 1) = 0;
  v59 = -1;
  v60 = -1;
  v61 = 0;
  v64 = -1;
  v65 = 0;
  v66 = -1;
  v67 = -2;
  v68 = -1;
  v70 = 0xFFFFFFFFLL;
  v71 = 0;
  v69 = 0;
  if ( (unsigned int)sub_1ED900(a1, &v58, 3, v10, 0.0) )
  {
    v13 = v60;
    v14 = &v65;
    if ( !v71 )
      v14 = nullptr;
    if ( dword_8CC5F0 < 0 && v60 != -1 )
    {
      v15 = sub_1F3B50(a1, 1, v11, v12, 0.0);
      if ( v15 )
      {
        v73 = 0xFFFFFFFFFFFFFFFFLL;
        v16 = v75;
        v74 = 0;
        v72 = -1;
        do
        {
          *(_WORD *)v16 = 0;
          v16 += 40;
          *((_WORD *)v16 - 19) = 0;
          *((_WORD *)v16 - 18) = 0;
          *((_DWORD *)v16 - 2) = 0;
          *((_WORD *)v16 - 17) = 0;
          *((_OWORD *)v16 - 2) = 0;
          *((_QWORD *)v16 - 2) = 0;
        }
        while ( v16 != &v76 );
        v44 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v15 + 128LL))(v15, 0.0);
        if ( (~(unsigned __int16)get_flags_ex(v44, 4) & 0x600) == 0
          && (int)decode_insn(&v72, v44, v17, v18, v19, v20, 0.0) > 0 )
        {
          v47 = v75[40 * v13 + 1];
          if ( v47 == 1 )
          {
            if ( v14 && *((_DWORD *)v14 + 4) == -2 )
            {
LABEL_29:
              v21 = (const char *)si128.m128i_i64[0];
              s = nullptr;
              dest = nullptr;
              v49 = 0;
              v51 = 0;
              if ( si128.m128i_i64[0] == -1 )
                v21 = (const char *)v66;
              v22 = is_mapped(v21);
              if ( v22 && ((unsigned __int8)(v47 - 6) <= 1u || v47 == 2) )
                goto LABEL_46;
              if ( !(unsigned __int8)print_operand(&s, v44, v13, 0, 0) )
                goto LABEL_35;
              if ( (unsigned __int64)v49 > 1 )
                tag_remove(&s, s, 0);
              LODWORD(v72) = -2;
              *((_QWORD *)&v72 + 1) = -1;
              v73 = 0;
              if ( v14 )
              {
                v33 = *((_DWORD *)v14 + 4);
                if ( v33 < -1 )
                {
                  *((_QWORD *)&v72 + 1) = *((_QWORD *)v14 + 3);
                }
                else
                {
                  v34 = *((_QWORD *)v14 + 4);
                  *((_QWORD *)&v72 + 1) = 0;
                  v73 = 0;
                  if ( v34 )
                  {
                    v41 = (void *)qalloc_or_throw(v34);
                    v42 = *((const void **)v14 + 3);
                    *((_QWORD *)&v72 + 1) = v41;
                    *((_QWORD *)&v73 + 1) = v34;
                    memcpy(v41, v42, v34);
                    *(_QWORD *)&v73 = v34;
                    v33 = *((_DWORD *)v14 + 4);
                  }
                }
                LODWORD(v72) = v33;
                if ( v21 == (const char *)-1LL )
                {
                  if ( !v71 || v67 != -2 || (v38 = (const char *)v68, v68 == -1) || !(unsigned __int8)is_mapped(v68) )
                  {
LABEL_71:
                    if ( v47 == 1 )
                    {
                      if ( v14 )
                      {
                        v35 = *((unsigned int *)v14 + 12);
                        if ( (_DWORD)v35 != -1 )
                        {
                          sub_24B690((__int64 *)&dest, (unsigned int *)&v72, v35, v23, 0.0);
                          if ( (unsigned __int64)v51 > 1 )
                          {
LABEL_75:
                            v36 = (const char *)dest;
LABEL_76:
                            sub_16FAA0((__int64 *)&s, (__int64)"=%s", v36);
                            if ( (int)v72 >= -1 && *((_QWORD *)&v72 + 1) )
                            {
                              *(_QWORD *)&v73 = 0;
                              qfree(*((_QWORD *)&v72 + 1), "=%s", v37);
                            }
LABEL_35:
                            if ( !v22 )
                            {
                              p_s = &s;
                              sub_2D4060(v4, &s);
                              ++*(_DWORD *)(v4 + 100);
LABEL_37:
                              if ( dest )
                              {
                                *(_QWORD *)&v51 = 0;
                                qfree(dest, (const char *)p_s);
                              }
                              if ( s )
                              {
                                *(_QWORD *)&v49 = 0;
                                qfree(s, (const char *)p_s);
                              }
                              goto LABEL_15;
                            }
LABEL_46:
                            v24 = s;
                            v53 = 0;
                            v55 = nullptr;
                            v54 = 0;
                            v52 = v46 + 1;
                            v56 = 0;
                            if ( s )
                            {
                              v25 = strlen(s);
                              v26 = v25 + 1;
                              v27 = v25;
                              v55 = (void *)qvector_reserve(&v55, 0, v25 + 1, 1);
                              *(_QWORD *)&v56 = v26;
                              memmove(v55, v24, v27);
                              *((_BYTE *)v55 + v27) = 0;
                            }
                            v57 = 1;
                            sub_2D2A20(&v53, v21);
                            p_s = (char **)v21;
                            sub_2D4CE0(v4, v21, &v52, -1, 0);
                            if ( v55 )
                            {
                              *(_QWORD *)&v56 = 0;
                              qfree(v55, v21);
                            }
                            v28 = v53;
                            if ( v53 )
                            {
                              v29 = (char *)v54;
                              if ( (_QWORD)v54 )
                              {
                                do
                                {
                                  v30 = (_QWORD *)(v28 + 80LL * (_QWORD)v7);
                                  v31 = v30[4];
                                  if ( v31 )
                                  {
                                    v30[5] = 0;
                                    qfree(v31, (const char *)p_s);
                                  }
                                  v32 = v30[1];
                                  if ( v32 )
                                  {
                                    v30[2] = 0;
                                    qfree(v32, (const char *)p_s);
                                  }
                                  ++v7;
                                  v28 = v53;
                                }
                                while ( v29 != v7 );
                              }
                              *(_QWORD *)&v54 = 0;
                              qfree(v28, (const char *)p_s);
                            }
                            goto LABEL_37;
                          }
                          get_nice_colored_name(&dest, -1, 2);
LABEL_82:
                          v36 = &s1;
                          if ( !(_QWORD)v51 )
                            goto LABEL_76;
                          goto LABEL_75;
                        }
                      }
                    }
                    if ( (_DWORD)v72 != -2 )
                    {
                      if ( (_DWORD)v72 == -1 )
                      {
                        print_fpval(src, 1024, *((_QWORD *)&v72 + 1), (unsigned int)v73);
                        v39 = strlen(src);
                        v40 = v39;
                        if ( v39 )
                        {
                          v43 = v39 + 1;
                          if ( *((_QWORD *)&v51 + 1) < v39 + 1 )
                          {
                            v45 = v39 + 1;
                            dest = (void *)qvector_reserve(&dest, dest, v43, 1);
                            v43 = v45;
                          }
                          *(_QWORD *)&v51 = v43;
                          memmove(dest, src, v40);
                          *((_BYTE *)dest + v40) = 0;
                        }
                        else
                        {
                          *(_QWORD *)&v51 = 0;
                        }
                      }
                      else
                      {
                        if ( *((_QWORD *)&v51 + 1) <= 1u )
                          dest = (void *)qvector_reserve(&dest, dest, 2, 1);
                        *(_QWORD *)&v51 = 2;
                        *(_BYTE *)dest = 63;
                        *((_BYTE *)dest + 1) = 0;
                      }
                      if ( (unsigned __int64)v51 <= 1 )
                      {
                        get_nice_colored_name(&dest, -1, 2);
                        if ( !(_QWORD)v51 )
                        {
                          v36 = &s1;
                          goto LABEL_76;
                        }
                      }
                      goto LABEL_75;
                    }
LABEL_80:
                    if ( (unsigned __int64)v51 > 1 )
                      goto LABEL_75;
                    get_nice_colored_name(&dest, *((_QWORD *)&v72 + 1), 2);
                    goto LABEL_82;
                  }
                  v21 = v38;
                }
              }
              else if ( v21 == (const char *)-1LL )
              {
                goto LABEL_80;
              }
              if ( (unsigned __int8)is_mapped(v21) )
              {
                if ( (unsigned __int64)v51 > 1 || (get_nice_colored_name(&dest, v21, 2), (_QWORD)v51) )
                  sub_16FAA0((__int64 *)&s, (__int64)"=[%s]", (const char *)dest);
                else
                  sub_16FAA0((__int64 *)&s, (__int64)"=[%s]", &s1);
                if ( (int)v72 >= -1 && *((_QWORD *)&v72 + 1) )
                {
                  *(_QWORD *)&v73 = 0;
                  qfree(*((_QWORD *)&v72 + 1), "=[%s]");
                }
                goto LABEL_46;
              }
              goto LABEL_71;
            }
          }
          else if ( v47 != 5 )
          {
            goto LABEL_29;
          }
        }
      }
    }
    sub_201EC0(a1, p_s, &v58);
LABEL_15:
    if ( *(int *)(v4 + 100) <= 0 )
      sub_2D1400(v4, (const char *)p_s);
    if ( v67 >= -1 && v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68, (const char *)p_s);
    }
    clear_tinfo_t(&si128.m128i_u64[1]);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61, (const char *)p_s);
    }
    return v78 - __readfsqword(0x28u);
  }
  if ( v67 >= -1 && v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68, (const char *)&v58);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61, (const char *)&v58);
  }
  return v78 - __readfsqword(0x28u);
}
