__int64 __fastcall sub_5A4C00(__int64 *a1, int *a2, __int64 (__fastcall *a3)(__m128i *))
{
  unsigned __int64 *v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned __int8 v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  _BYTE *v12; // r13
  unsigned int i; // ebp
  unsigned __int8 v14; // r12
  int v15; // eax
  __int64 v16; // r15
  __int64 tinfo_property; // rax
  _QWORD *v18; // r12
  __int64 v19; // rbp
  _QWORD *v20; // rax
  unsigned __int64 *v21; // r13
  unsigned __int64 v22; // rbx
  int *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rdi
  const char *v28; // r14
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  _QWORD *v31; // rsi
  char *v32; // r12
  char *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rbx
  __int64 v37; // rax
  int tinfo_udt_member; // ebp
  unsigned __int64 v39; // rdi
  char v40; // bl
  __int64 v41; // rax
  unsigned __int8 v42; // [rsp+7h] [rbp-261h]
  unsigned int v43; // [rsp+30h] [rbp-238h]
  unsigned int v44; // [rsp+34h] [rbp-234h]
  int v46; // [rsp+54h] [rbp-214h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-210h] BYREF
  void *ptr; // [rsp+60h] [rbp-208h] BYREF
  __int128 v49; // [rsp+68h] [rbp-200h]
  _QWORD v50[3]; // [rsp+80h] [rbp-1E8h] BYREF
  unsigned int v51; // [rsp+98h] [rbp-1D0h]
  __int64 v52; // [rsp+A0h] [rbp-1C8h] BYREF
  int v53; // [rsp+A8h] [rbp-1C0h] BYREF
  _QWORD *v54; // [rsp+B0h] [rbp-1B8h]
  int *v55; // [rsp+B8h] [rbp-1B0h]
  int *v56; // [rsp+C0h] [rbp-1A8h]
  __int64 v57; // [rsp+C8h] [rbp-1A0h]
  __int64 v58; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-190h]
  void *v60; // [rsp+E0h] [rbp-188h]
  __int128 v61; // [rsp+E8h] [rbp-180h]
  void *v62; // [rsp+F8h] [rbp-170h]
  __int128 v63; // [rsp+100h] [rbp-168h]
  _OWORD v64[2]; // [rsp+110h] [rbp-158h] BYREF
  __int64 v65; // [rsp+130h] [rbp-138h]
  int v66; // [rsp+138h] [rbp-130h]
  __int64 v67; // [rsp+140h] [rbp-128h]
  char v68; // [rsp+148h] [rbp-120h]
  __m128i v69; // [rsp+150h] [rbp-118h] BYREF
  __int64 v70; // [rsp+160h] [rbp-108h]
  _BYTE v71[192]; // [rsp+168h] [rbp-100h] BYREF
  unsigned __int64 v72; // [rsp+228h] [rbp-40h] BYREF

  v72 = __readfsqword(0x28u);
  v53 = 0;
  v55 = &v53;
  v56 = &v53;
  v69.m128i_i64[1] = 0xFFFFFFFFLL;
  v3 = (unsigned __int64 *)v71;
  v54 = nullptr;
  v57 = 0;
  v69.m128i_i64[0] = -1;
  v70 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 3;
    *((_WORD *)v3 - 11) = 0;
    *((_WORD *)v3 - 10) = 0;
    *((_DWORD *)v3 - 1) = 0;
    *((_WORD *)v3 - 9) = 0;
    *(v3 - 2) = 0;
    *((_DWORD *)v3 - 2) = 0;
  }
  while ( v3 != &v72 );
  v51 = -1;
  v50[1] = 0xFFFFFFFFLL;
  v50[0] = 0;
  v50[2] = 0;
  v47 = 0;
  if ( a2 )
  {
    v4 = sub_3B90A0(a1, *a2);
    if ( v4 != -1 )
      sub_532DA0(a1, &v47, v4);
    v5 = *a2;
  }
  else
  {
    v5 = -1;
  }
  v51 = v5;
  v6 = func_tail_iterator_set(v50, a2, 0xFFFFFFFFLL);
  v44 = 0;
  while ( v6 )
  {
    v43 = v51;
    v11 = sub_3B9AA0((__int64)a1, v51, 0);
    if ( (~BYTE1(v11) & 6) == 0 && (unsigned int)decode_insn(&v69, v43, v7, v8, v9, v10) )
    {
      LODWORD(ptr) = -1;
      BYTE4(ptr) = 0;
      if ( a3 )
      {
        v42 = a3(&v69);
        v6 = 0;
      }
      else
      {
        v42 = sub_3DC190(a1, (__int64)&ptr, v69.m128i_u32[2]);
      }
      v12 = v71;
      for ( i = 0; i != 8; ++i )
      {
        if ( !v12[1] )
          break;
        if ( (v6 & (v42 ^ 1)) != 0 )
        {
          if ( (unsigned int)sub_375980(0x2Eu, &v58, &v69, v12) )
            v42 = (_DWORD)v58 != 0;
          else
            v42 = v6 & (v42 ^ 1);
        }
        v14 = is_stkvar(v11, i);
        if ( v14 )
        {
          v15 = sub_59F380(a1, (__int64)a2, &v69, i);
          v16 = (unsigned int)v15;
          v46 = v15;
          if ( v15 >= 0 )
            sub_41BFC0(&v52, (unsigned int *)&v46);
          v58 = 8 * v16;
          v59 = 0;
          v60 = nullptr;
          v62 = nullptr;
          v65 = 1;
          v66 = -1;
          v67 = 0;
          v68 = 0;
          v61 = 0;
          v63 = 0;
          v64[0] = 0;
          if ( (unsigned int)find_tinfo_udt_member((int)&v58) == -1 || (v67 & 0x300000000000LL) != 0 )
          {
            sub_3CB3B0(a1, v43, i);
            ++v44;
            v11 = sub_3B9AA0((__int64)a1, v43, 0);
            clear_tinfo_t(v64);
            if ( v62 )
            {
              *(_QWORD *)&v63 = 0;
              qfree(v62);
            }
            if ( v60 )
            {
              *(_QWORD *)&v61 = 0;
              qfree(v60);
            }
            v42 = v14;
          }
          else
          {
            clear_tinfo_t(v64);
            if ( v62 )
            {
              *(_QWORD *)&v63 = 0;
              qfree(v62);
            }
            if ( v60 )
            {
              *(_QWORD *)&v61 = 0;
              qfree(v60);
            }
          }
        }
        v12 += 24;
      }
      if ( v42 )
        sub_3A1A90(a1, v43, v43 + 1, 0x28u);
    }
    v6 = func_item_iterator_next(v50, sub_39AFB0, 0);
  }
  tinfo_property = get_tinfo_property(v47, 309);
  v18 = (_QWORD *)tinfo_property;
  if ( tinfo_property )
  {
    ptr = nullptr;
    v49 = 0;
    if ( *(_QWORD *)(tinfo_property + 8) )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = v54;
        v21 = (unsigned __int64 *)(*v18 + (v19 << 7));
        v22 = *v21;
        if ( v54 )
        {
          v23 = &v53;
          do
          {
            while ( 1 )
            {
              v24 = v20[2];
              v25 = v20[3];
              if ( *((_DWORD *)v20 + 8) < (unsigned int)(*v21 >> 3) )
                break;
              v23 = (int *)v20;
              v20 = (_QWORD *)v20[2];
              if ( !v24 )
                goto LABEL_41;
            }
            v20 = (_QWORD *)v20[3];
          }
          while ( v25 );
LABEL_41:
          if ( v23 != &v53 && (unsigned int)v23[8] < (v22 + v21[1]) >> 3 )
            goto LABEL_44;
        }
        if ( (*((_BYTE *)v21 + 117) & 0x30) != 0 )
          goto LABEL_44;
        if ( v21[3] )
        {
          v28 = (const char *)v21[2];
          if ( v28 && strncmp((const char *)v21[2], "arg_", 4u) && strncmp(v28, "var_", 4u) )
          {
LABEL_65:
            if ( strncmp(v28, "anonymous", 9u) )
              goto LABEL_44;
          }
        }
        else
        {
          v28 = haystack;
          if ( haystack )
            goto LABEL_65;
        }
        if ( v21[6] <= 1 )
        {
          v29 = v21[8];
          if ( !(_BYTE)v29 || (v29 & 0xE) == 0 && (v29 & 0x30) != 0 )
            goto LABEL_60;
          v39 = v21[8];
          v58 = 0;
          v58 = get_tinfo_property(v39, 9);
          v40 = get_tinfo_property(v58, 2) & 0x3F;
          clear_tinfo_t(&v58);
          if ( v40 == 48 || (v41 = 0x200020002000200LL, _bittest64(&v41, v29)) )
          {
            v22 = *v21;
LABEL_60:
            v30 = v49;
            v31 = ptr;
            if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v49 + 1, 8);
              v31 = ptr;
              v30 = v49;
            }
            v31[v30] = v22;
            *(_QWORD *)&v49 = v49 + 1;
          }
        }
LABEL_44:
        if ( (unsigned __int64)++v19 >= v18[1] )
        {
          v26 = (__int64 *)ptr;
          if ( !(_QWORD)v49 )
            goto LABEL_46;
          v32 = (char *)ptr + 8 * v49;
          if ( v32 == ptr )
            goto LABEL_46;
          v33 = v32 - 8;
          if ( ptr >= v32 - 8 )
            goto LABEL_71;
          do
          {
            v34 = *v26;
            v35 = *(_QWORD *)v33;
            ++v26;
            v33 -= 8;
            *(v26 - 1) = v35;
            *((_QWORD *)v33 + 1) = v34;
          }
          while ( v26 < (__int64 *)v33 );
          v26 = (__int64 *)ptr;
          v32 = (char *)ptr + 8 * v49;
          if ( ptr == v32 )
          {
LABEL_46:
            if ( !v26 )
              break;
          }
          else
          {
LABEL_71:
            v36 = v26;
            do
            {
              v37 = *v36;
              v59 = 0;
              v60 = nullptr;
              v62 = nullptr;
              v65 = 1;
              v66 = -1;
              v67 = 0;
              v68 = 0;
              v58 = v37;
              v61 = 0;
              v63 = 0;
              v64[0] = 0;
              tinfo_udt_member = find_tinfo_udt_member((int)&v58);
              clear_tinfo_t(v64);
              if ( v62 )
              {
                *(_QWORD *)&v63 = 0;
                qfree(v62);
              }
              if ( v60 )
              {
                *(_QWORD *)&v61 = 0;
                qfree(v60);
              }
              if ( tinfo_udt_member != -1 )
                v44 += set_tinfo_property4(&v47, 10, tinfo_udt_member, tinfo_udt_member + 1LL, 0, 0) == 0;
              ++v36;
            }
            while ( v32 != (char *)v36 );
            v26 = (__int64 *)ptr;
            if ( !ptr )
              break;
          }
          *(_QWORD *)&v49 = 0;
          qfree(v26);
          break;
        }
      }
    }
  }
  clear_tinfo_t(&v47);
  if ( v50[0] )
    lock_func_range(v50[0], 0);
  sub_59CA20(v54);
  return v44;
}

