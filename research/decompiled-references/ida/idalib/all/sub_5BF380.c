__int64 __fastcall sub_5BF380(__m128i *a1, __int64 *a2, __int64 (__fastcall *a3)(__int128 *))
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  _BYTE *v12; // r13
  unsigned int i; // ebp
  unsigned __int8 v14; // r12
  __int64 v15; // r15
  __int64 tinfo_property; // rax
  _QWORD *v17; // r12
  __int64 v18; // rbp
  int *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rbx
  int *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 *v25; // rdi
  const char *v27; // r14
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rsi
  char *v31; // r12
  char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rbx
  __int64 v36; // rax
  int tinfo_udt_member; // ebp
  __int64 v38; // rdi
  char v39; // bl
  __int64 v40; // rax
  void *v41; // [rsp+8h] [rbp-310h]
  unsigned __int8 v42; // [rsp+33h] [rbp-2E5h]
  unsigned int v43; // [rsp+34h] [rbp-2E4h]
  unsigned __int64 v45; // [rsp+50h] [rbp-2C8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-2C0h] BYREF
  void *ptr; // [rsp+60h] [rbp-2B8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-2B0h]
  _QWORD v49[2]; // [rsp+80h] [rbp-298h] BYREF
  __int128 v50; // [rsp+90h] [rbp-288h]
  unsigned __int64 v51; // [rsp+A0h] [rbp-278h]
  __int64 v52; // [rsp+B0h] [rbp-268h] BYREF
  int v53; // [rsp+B8h] [rbp-260h] BYREF
  int *v54; // [rsp+C0h] [rbp-258h]
  int *v55; // [rsp+C8h] [rbp-250h]
  int *v56; // [rsp+D0h] [rbp-248h]
  __int64 v57; // [rsp+D8h] [rbp-240h]
  __int64 v58; // [rsp+E0h] [rbp-238h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-230h]
  void *v60; // [rsp+F0h] [rbp-228h]
  __int128 v61; // [rsp+F8h] [rbp-220h]
  void *v62; // [rsp+108h] [rbp-210h]
  __int128 v63; // [rsp+110h] [rbp-208h]
  _OWORD v64[3]; // [rsp+120h] [rbp-1F8h] BYREF
  char *v65; // [rsp+150h] [rbp-1C8h]
  int v66; // [rsp+158h] [rbp-1C0h]
  __int64 v67; // [rsp+160h] [rbp-1B8h]
  char v68; // [rsp+168h] [rbp-1B0h]
  __int128 v69; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v70; // [rsp+180h] [rbp-198h]
  __int64 v71; // [rsp+188h] [rbp-190h]
  __int64 v72; // [rsp+190h] [rbp-188h]
  _BYTE v73[320]; // [rsp+198h] [rbp-180h] BYREF
  unsigned __int64 v74; // [rsp+2D8h] [rbp-40h] BYREF

  v74 = __readfsqword(0x28u);
  v53 = 0;
  v55 = &v53;
  v56 = &v53;
  v3 = (unsigned __int64 *)v73;
  v54 = nullptr;
  v57 = 0;
  v70 = -1;
  v71 = 0;
  v72 = 0;
  v69 = -1;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v3 != &v74 );
  v49[0] = 0;
  v49[1] = 0xFFFFFFFFLL;
  v51 = -1;
  v45 = 0;
  v50 = 0;
  if ( a2 )
  {
    v4 = sub_3BDD60(a1, *a2);
    if ( v4 != -1 )
      sub_54BE00(a1->m128i_i64, &v45, v4);
    v5 = *a2;
  }
  else
  {
    v5 = -1;
  }
  v51 = v5;
  v6 = func_tail_iterator_set(v49, a2, -1);
  v43 = 0;
  while ( v6 )
  {
    v41 = (void *)v51;
    v11 = sub_3BE900(a1, v51, 0);
    if ( (~BYTE1(v11) & 6) == 0 && (unsigned int)decode_insn(&v69, v41, v7, v8, v9, v10, 0.0) )
    {
      LOBYTE(v48) = 0;
      ptr = (void *)-1LL;
      if ( a3 )
      {
        v42 = a3(&v69);
        v6 = 0;
      }
      else
      {
        v42 = sub_3E1CA0(a1, (__int64)&ptr, v70);
      }
      v12 = v73;
      for ( i = 0; i != 8; ++i )
      {
        if ( !v12[1] )
          break;
        if ( (v6 & (v42 ^ 1)) != 0 )
        {
          if ( (unsigned int)sub_3792E0(0x2Eu, &v58, &v69, v12) )
            v42 = (_DWORD)v58 != 0;
          else
            v42 = v6 & (v42 ^ 1);
        }
        v14 = is_stkvar(v11, i);
        if ( v14 )
        {
          v46 = sub_5B9750(a1, (__int64)a2, &v69, i);
          v15 = v46;
          if ( v46 >= 0 )
            sub_42FD40(&v52, (unsigned __int64 *)&v46);
          v58 = 8 * v15;
          v59 = 0;
          v60 = nullptr;
          v62 = nullptr;
          v65 = (char *)&dword_0 + 1;
          v66 = -1;
          v67 = 0;
          v68 = 0;
          v61 = 0;
          v63 = 0;
          v64[0] = 0;
          if ( (unsigned int)find_tinfo_udt_member((int)&v58) == -1 || (v67 & 0x300000000000LL) != 0 )
          {
            sub_3D0D10(a1->m128i_i64, v41, i);
            ++v43;
            v11 = sub_3BE900(a1, (unsigned __int64)v41, 0);
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
        v12 += 40;
      }
      if ( v42 )
        sub_3A61A0(a1, (unsigned __int64)v41, (unsigned __int64)v41 + 1, 0x28u);
    }
    v6 = func_item_iterator_next(v49, sub_39FD10, 0, 0.0);
  }
  tinfo_property = get_tinfo_property(v45, 309);
  v17 = (_QWORD *)tinfo_property;
  if ( tinfo_property )
  {
    ptr = nullptr;
    v48 = 0;
    if ( *(_QWORD *)(tinfo_property + 8) )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = v54;
        v20 = *v17 + 144 * v18;
        v21 = *(_QWORD *)v20;
        if ( v54 )
        {
          v22 = &v53;
          do
          {
            while ( 1 )
            {
              v23 = *((_QWORD *)v19 + 2);
              v24 = *((_QWORD *)v19 + 3);
              if ( *((_QWORD *)v19 + 4) < *(_QWORD *)v20 >> 3 )
                break;
              v22 = v19;
              v19 = *((int **)v19 + 2);
              if ( !v23 )
                goto LABEL_41;
            }
            v19 = *((int **)v19 + 3);
          }
          while ( v24 );
LABEL_41:
          if ( v22 != &v53 && *((_QWORD *)v22 + 4) < (unsigned __int64)(v21 + *(_QWORD *)(v20 + 8)) >> 3 )
            goto LABEL_44;
        }
        if ( (*(_BYTE *)(v20 + 133) & 0x30) != 0 )
          goto LABEL_44;
        if ( *(_QWORD *)(v20 + 24) )
        {
          v27 = *(const char **)(v20 + 16);
          if ( v27 && strncmp(*(const char **)(v20 + 16), "arg_", 4u) && strncmp(v27, "var_", 4u) )
          {
LABEL_65:
            if ( strncmp(v27, "anonymous", 9u) )
              goto LABEL_44;
          }
        }
        else
        {
          v27 = haystack;
          if ( haystack )
            goto LABEL_65;
        }
        if ( *(_QWORD *)(v20 + 48) <= 1u )
        {
          v28 = *(_QWORD *)(v20 + 64);
          if ( !(_BYTE)v28 || (v28 & 0xE) == 0 && (v28 & 0x30) != 0 )
            goto LABEL_60;
          v38 = *(_QWORD *)(v20 + 64);
          v58 = 0;
          v58 = get_tinfo_property(v38, 9);
          v39 = get_tinfo_property(v58, 2) & 0x3F;
          clear_tinfo_t(&v58);
          if ( v39 == 48 || (v40 = 0x200020002000200LL, _bittest64(&v40, v28)) )
          {
            v21 = *(_QWORD *)v20;
LABEL_60:
            v29 = v48;
            v30 = ptr;
            if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v48 + 1, 8);
              v30 = ptr;
              v29 = v48;
            }
            v30[v29] = v21;
            *(_QWORD *)&v48 = v48 + 1;
          }
        }
LABEL_44:
        if ( (unsigned __int64)++v18 >= v17[1] )
        {
          v25 = (__int64 *)ptr;
          if ( !(_QWORD)v48 )
            goto LABEL_46;
          v31 = (char *)ptr + 8 * v48;
          if ( ptr == v31 )
            goto LABEL_46;
          v32 = v31 - 8;
          if ( ptr >= v31 - 8 )
            goto LABEL_71;
          do
          {
            v33 = *v25;
            v34 = *(_QWORD *)v32;
            ++v25;
            v32 -= 8;
            *(v25 - 1) = v34;
            *((_QWORD *)v32 + 1) = v33;
          }
          while ( v25 < (__int64 *)v32 );
          v25 = (__int64 *)ptr;
          v31 = (char *)ptr + 8 * v48;
          if ( v31 == ptr )
          {
LABEL_46:
            if ( !v25 )
              break;
          }
          else
          {
LABEL_71:
            v35 = v25;
            do
            {
              v36 = *v35;
              v59 = 0;
              v60 = nullptr;
              v62 = nullptr;
              v65 = (char *)&dword_0 + 1;
              v66 = -1;
              v67 = 0;
              v68 = 0;
              v58 = v36;
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
                v43 += set_tinfo_property4(&v45, 10, tinfo_udt_member, tinfo_udt_member + 1LL, 0, 0) == 0;
              ++v35;
            }
            while ( v31 != (char *)v35 );
            v25 = (__int64 *)ptr;
            if ( !ptr )
              break;
          }
          *(_QWORD *)&v48 = 0;
          qfree(v25);
          break;
        }
      }
    }
  }
  clear_tinfo_t(&v45);
  if ( v49[0] )
    lock_func_range(v49[0], 0);
  sub_5B6BB0(v54);
  return v43;
}
