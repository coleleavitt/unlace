unsigned __int64 __fastcall sub_1F6C0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, double a6, __m128 a7)
{
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdi
  int v15; // r13d
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // r14
  __int64 *v19; // rdx
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 flags; // rax
  __int64 v24; // r9
  int func_chunknum; // eax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 *func; // rcx
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  char v38; // al
  _QWORD *v40; // rax
  __int64 v42; // [rsp+8h] [rbp-248h]
  __int64 *v43; // [rsp+18h] [rbp-238h]
  __int64 v44; // [rsp+18h] [rbp-238h]
  __int64 v45; // [rsp+18h] [rbp-238h]
  __int64 v46; // [rsp+18h] [rbp-238h]
  int v47; // [rsp+18h] [rbp-238h]
  __int64 v48; // [rsp+18h] [rbp-238h]
  __int64 *v50; // [rsp+28h] [rbp-228h]
  __int64 v51; // [rsp+28h] [rbp-228h]
  unsigned __int64 v52; // [rsp+28h] [rbp-228h]
  int v53; // [rsp+34h] [rbp-21Ch]
  __int64 v55; // [rsp+40h] [rbp-210h]
  int v56; // [rsp+40h] [rbp-210h]
  __int64 *v57; // [rsp+50h] [rbp-200h] BYREF
  __int128 v58; // [rsp+58h] [rbp-1F8h]
  __int64 v59; // [rsp+70h] [rbp-1E0h] BYREF
  __int128 v60; // [rsp+78h] [rbp-1D8h]
  __int64 v61; // [rsp+90h] [rbp-1C0h] BYREF
  __int128 v62; // [rsp+98h] [rbp-1B8h]
  __int128 v63; // [rsp+B0h] [rbp-1A0h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-190h]
  __int64 v65; // [rsp+C8h] [rbp-188h]
  __int64 v66; // [rsp+D0h] [rbp-180h]
  _BYTE v67[320]; // [rsp+D8h] [rbp-178h] BYREF
  _QWORD v68[7]; // [rsp+218h] [rbp-38h] BYREF

  v68[0] = __readfsqword(0x28u);
  v58 = 0;
  v57 = nullptr;
  sub_110D0(nullptr, (__int64 *)&v57, nullptr, a3, 18);
  v8 = (__int64)v57;
  v9 = v58;
  v10 = &v57[v58];
  if ( v57 == v10 )
    goto LABEL_79;
  v11 = v57;
  while ( a3 != *v11 )
  {
    if ( v10 == ++v11 )
      goto LABEL_79;
  }
  if ( v11 == v10 )
  {
LABEL_79:
    if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
    {
      v57 = (__int64 *)qvector_reserve(&v57, v57, v58 + 1, 8);
      v10 = &v57[v58];
    }
    *v10 = a3;
    v8 = (__int64)v57;
    v9 = v58 + 1;
    *(_QWORD *)&v58 = v58 + 1;
  }
  if ( v9 )
  {
    v12 = 0;
    v13 = 0;
    v53 = 0;
    do
    {
      v59 = 0;
      v60 = v13;
      sub_110D0(nullptr, &v59, nullptr, *(_QWORD *)(v8 + 8 * v12), 2);
      v14 = v59;
      v13 = 0;
      if ( !(_QWORD)v60 )
      {
        if ( v59 )
        {
          qfree(v59);
          v13 = 0;
        }
        goto LABEL_10;
      }
      v15 = 0;
      v16 = 0;
      do
      {
        v17 = v57;
        v18 = *(_QWORD *)(v14 + 8 * v16);
        v19 = &v57[v58];
        if ( v57 == v19 )
          goto LABEL_21;
        while ( v18 != *v17 )
        {
          if ( v19 == ++v17 )
            goto LABEL_21;
        }
        if ( v19 == v17 )
        {
LABEL_21:
          v20 = -1;
          do
          {
            v21 = v67;
            v64 = -1;
            v65 = 0;
            v66 = 0;
            v63 = -1;
            do
            {
              *(_WORD *)v21 = 0;
              v21 += 5;
              *((_WORD *)v21 - 19) = 0;
              *((_WORD *)v21 - 18) = 0;
              *((_DWORD *)v21 - 2) = 0;
              *((_WORD *)v21 - 17) = 0;
              *((_OWORD *)v21 - 2) = v13;
              *(v21 - 2) = 0;
            }
            while ( v68 != v21 );
            v18 = decode_prev_insn(&v63, v18);
            v13 = 0;
            if ( v18 != -1 )
            {
              if ( v20 == -1 )
                v20 = sub_13740(a1, (__int64)&v63, -1);
              flags = get_flags_ex(v18, 4, v22);
              v13 = 0;
              if ( (~(_WORD)flags & 0x600) == 0 )
                continue;
            }
            goto LABEL_34;
          }
          while ( (flags & 0x10000) != 0 );
          if ( (flags & 0x1000) == 0 || v20 == -1 )
            goto LABEL_34;
          v55 = flags & 0x10000;
          v61 = 0;
          v62 = 0;
          sub_110D0(nullptr, nullptr, &v61, v18, 4);
          v13 = 0;
          if ( !(_QWORD)v62 )
          {
            if ( v61 )
            {
              qfree(v61);
              v13 = 0;
            }
LABEL_34:
            v14 = v59;
            goto LABEL_18;
          }
          set_abits(v18, 0x20000000);
          v24 = v55;
          v13 = 0;
          v56 = 0;
          if ( !(_QWORD)v62 )
          {
LABEL_57:
            if ( v61 )
            {
              *(_QWORD *)&v62 = 0;
              qfree(v61);
              v13 = 0;
            }
            goto LABEL_34;
          }
          while ( 2 )
          {
            v51 = 8 * v24;
            func = (__int64 *)get_func(*(_QWORD *)(v61 + 8 * v24));
            v13 = 0;
            if ( a2 == -1 )
            {
              if ( func )
                goto LABEL_39;
              v13 = 0;
              if ( (~((unsigned __int16)get_flags_ex(*(_QWORD *)(v61 + v51), 4, v27) >> 8) & 6) == 0 )
              {
                v44 = *(_QWORD *)(v61 + v51);
                v29 = get_flags_ex(v44, 4, v44);
                v30 = 0;
                if ( (~(_WORD)v29 & 0x600) == 0 )
                {
                  v31 = v44;
                  if ( (v29 & 0x1000) == 0 && (v29 & 0x10000) != 0 )
                  {
                    while ( 1 )
                    {
                      a7 = (__m128)-1LL;
                      v32 = v67;
                      v64 = -1;
                      v65 = 0;
                      v66 = 0;
                      v63 = -1;
                      do
                      {
                        *(_WORD *)v32 = 0;
                        v32 += 5;
                        *((_WORD *)v32 - 19) = 0;
                        *((_WORD *)v32 - 18) = 0;
                        *((_DWORD *)v32 - 2) = 0;
                        *((_WORD *)v32 - 17) = 0;
                        *((_OWORD *)v32 - 2) = v30;
                        *(v32 - 2) = 0;
                      }
                      while ( v68 != v32 );
                      v45 = v31;
                      v33 = decode_prev_insn(&v63, v31);
                      v34 = v45;
                      if ( v33 == -1 )
                        break;
                      if ( v45 != v33 + WORD1(v65) )
                        break;
                      v42 = v45;
                      v46 = v33;
                      v35 = get_flags_ex(v33, 4, v34);
                      v34 = v42;
                      v30 = 0;
                      if ( (~v35 & 0x600) != 0 )
                        break;
                      v36 = v46;
                      if ( (v35 & 0x1000) != 0 || (v35 & 0x10000) == 0 )
                        goto LABEL_73;
                      v31 = v46;
                    }
                    v36 = v34;
LABEL_73:
                    v31 = v36;
                  }
                  if ( v31 != -1 )
                  {
                    v48 = v31;
                    if ( (unsigned __int8)is_mapped(v31) )
                      sub_1A480(a1, v48);
                  }
                }
                func = (__int64 *)get_func(*(_QWORD *)(v61 + v51));
                v13 = 0;
                if ( func )
                {
LABEL_39:
                  v43 = func;
                  func_chunknum = get_func_chunknum(func, v18);
                  v26 = v43;
                  if ( func_chunknum >= 0 )
                    goto LABEL_41;
                  if ( (unsigned __int8)sub_EB40(a1, (__int64)v43, v18) )
                  {
                    v40 = (_QWORD *)get_func(*(_QWORD *)(v61 + v51));
                    sub_EAB0(v40);
                  }
                  else
                  {
                    auto_apply_tail(v18, *v43);
                  }
                  v26 = (__int64 *)get_func(*(_QWORD *)(v61 + v51));
                  v13 = 0;
                  if ( v26 )
                  {
LABEL_41:
                    v50 = v26;
                    v13 = 0;
                    if ( (unsigned __int8)sub_1F560(a1, v26, 1) )
                    {
                      if ( (a4 & 1) == 0 )
                      {
                        sub_11A90((__int64)v50);
                        v47 = 4;
                        while ( 1 )
                        {
                          sub_F260(a1, (__int64)v50, v18);
                          v37 = v50[1];
                          v52 = *v50;
                          v38 = sub_1DF80(a1, v52, v37, v20, 0, 0, *(double *)&v13, NAN, a7, a4 | 2u, 0);
                          v13 = 0;
                          if ( !v38 )
                            break;
                          v50 = (__int64 *)get_func(v52);
                          v13 = 0;
                          if ( !(unsigned __int8)sub_1F560(a1, v50, 1) )
                            break;
                          if ( !--v47 )
                            break;
                          sub_11A90((__int64)v50);
                        }
                      }
                    }
                  }
                }
              }
            }
            else if ( func && *func == a2 )
            {
              goto LABEL_39;
            }
            v24 = ++v56;
            if ( v56 >= (unsigned __int64)v62 )
              goto LABEL_57;
            continue;
          }
        }
LABEL_18:
        v16 = ++v15;
      }
      while ( v15 < (unsigned __int64)v60 );
      if ( v14 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(v14);
        v13 = 0;
      }
LABEL_10:
      ++v53;
      v8 = (__int64)v57;
      v12 = v53;
    }
    while ( v53 < (unsigned __int64)v58 );
  }
  if ( v8 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v8);
  }
  return v68[0] - __readfsqword(0x28u);
}
