__int64 __fastcall sub_399920(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  _DWORD *v18; // rax
  __int32 v19; // edx
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  unsigned __int64 v25; // r14
  size_t v26; // r8
  __int64 v27; // r15
  __int64 v28; // r9
  __int64 v29; // rsi
  int v30; // eax
  int v31; // r14d
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const char *v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r15
  __int64 v40; // rdx
  const char *v41; // rax
  unsigned __int64 v42; // r14
  const char *v43; // r8
  __int64 v44; // r9
  unsigned __int64 i; // rax
  const char *v46; // rsi
  const char *v47; // rdx
  unsigned int type_ordinal; // eax
  __int64 v49; // rsi
  const char *v50; // [rsp-10h] [rbp-1F0h]
  unsigned __int64 v51; // [rsp+10h] [rbp-1D0h]
  __int64 v52; // [rsp+10h] [rbp-1D0h]
  void *v53; // [rsp+18h] [rbp-1C8h]
  void *v54; // [rsp+18h] [rbp-1C8h]
  void *v55; // [rsp+18h] [rbp-1C8h]
  _QWORD v57[2]; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-198h]
  __m128i v59; // [rsp+50h] [rbp-190h] BYREF
  __int64 v60; // [rsp+60h] [rbp-180h]
  _DWORD *v61; // [rsp+70h] [rbp-170h] BYREF
  __int128 v62; // [rsp+78h] [rbp-168h]
  void *src; // [rsp+90h] [rbp-150h] BYREF
  __m128i v64; // [rsp+98h] [rbp-148h] BYREF
  const char *v65; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-128h]
  __int64 v67; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v68; // [rsp+D8h] [rbp-108h]
  __int128 v69; // [rsp+E8h] [rbp-F8h]
  __int64 v70; // [rsp+F8h] [rbp-E8h]
  int v71; // [rsp+100h] [rbp-E0h]
  __int128 v72; // [rsp+110h] [rbp-D0h] BYREF
  void *v73; // [rsp+120h] [rbp-C0h]
  __m128i v74; // [rsp+128h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+138h] [rbp-A8h]
  __int128 v76; // [rsp+140h] [rbp-A0h]
  __int128 v77; // [rsp+150h] [rbp-90h]
  __int64 v78; // [rsp+180h] [rbp-60h]
  int v79; // [rsp+188h] [rbp-58h]
  __int64 v80; // [rsp+190h] [rbp-50h]
  char v81; // [rsp+198h] [rbp-48h]
  unsigned __int64 v82; // [rsp+1A8h] [rbp-38h]

  v2 = a1[4];
  v82 = __readfsqword(0x28u);
  v68 = 0;
  v67 = 0;
  v70 = 0;
  v71 = 1;
  v69 = 0;
  v3 = sub_2574C0(v2, (__int64)a2, (__int64)&v67);
  if ( !(_BYTE)v3 )
    goto LABEL_11;
  v4 = _mm_loadu_si128(a2);
  v5 = a2[1].m128i_i64[0];
  v57[0] = 0;
  v60 = v5;
  v59 = v4;
  if ( !(unsigned __int8)sub_32E590((__int64)v57, (__int64)&v67) && sub_32E6D0() )
  {
    v62 = 0;
    v61 = nullptr;
    v18 = (_DWORD *)qvector_reserve((__int64)&v61, 0, 8, 1);
    v61 = v18;
    *(_QWORD *)&v62 = 8;
    *v18 = 1970435187;
    *(_DWORD *)((char *)v18 + 3) = 1601463157;
    *((_BYTE *)v61 + 7) = 0;
    v19 = a2->m128i_i32[0];
    src = nullptr;
    v20 = a2->m128i_i64[1];
    v64 = 0;
    if ( v19 == 1 )
    {
      v21 = *(_DWORD *)(v20 + 8);
      if ( v21 != 65 )
      {
LABEL_25:
        if ( v21 == 64 )
        {
          sub_263730((__int64 *)&src);
        }
        else
        {
          v73 = nullptr;
          v75 = 0;
          v78 = 1;
          v79 = -1;
          v80 = 0;
          v81 = 0;
          v72 = 0;
          v74 = 0;
          v76 = 0;
          v77 = 0;
          if ( (unsigned int)sub_38D3D0((__int64)a2, &v72, nullptr, nullptr) != -1 )
          {
            v22 = src;
            v23 = _mm_loadu_si128(&v64);
            v24 = _mm_loadu_si128(&v74);
            src = v73;
            v73 = v22;
            v64 = v24;
            v74 = v23;
          }
          clear_tinfo_t();
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree(v75);
          }
          if ( v73 )
          {
            v74.m128i_i64[0] = 0;
            qfree((__int64)v73);
          }
        }
        goto LABEL_32;
      }
      v38 = *(_QWORD *)(*(_QWORD *)(v20 + 24) + 432LL) + 104LL * *(int *)(v20 + 32);
    }
    else
    {
      if ( v19 != 2 )
      {
LABEL_24:
        v21 = *(_DWORD *)(v20 + 8);
        goto LABEL_25;
      }
      v38 = v20;
    }
    if ( v38 )
    {
      if ( &src == (void **)(v38 + 32) || (v39 = *(_QWORD *)(v38 + 40), v39 < 2) )
      {
LABEL_39:
        v30 = 0;
        if ( (_QWORD)v62 )
          v30 = v62 - 1;
        v31 = 0;
        v53 = (void *)v30;
        v51 = v30 + 1LL;
        while ( (unsigned int)get_named_type() )
        {
          if ( ++v31 )
          {
            v32 = (__int64)v61;
            v33 = (__int64)v61;
            if ( v53 )
            {
              v40 = v62;
              if ( (unsigned __int64)v62 < v51 )
              {
                if ( *((_QWORD *)&v62 + 1) < v51 )
                {
                  v33 = qvector_reserve((__int64)&v61, (__int64)v61, v51, 1);
                  v61 = (_DWORD *)v33;
                  v40 = v62;
                }
                memset((void *)(v33 + v40), 0, v51 - v40);
                v32 = (__int64)v61;
                *(_QWORD *)&v62 = v51;
              }
              else if ( v51 != (_QWORD)v62 )
              {
                *(_QWORD *)&v62 = v51;
              }
              *((_BYTE *)v53 + v32) = 0;
            }
            else if ( v61 )
            {
              *(_QWORD *)&v62 = 0;
              qfree((__int64)v61);
              v61 = nullptr;
              *((_QWORD *)&v62 + 1) = 0;
            }
            sub_FAAD0((__int64 *)&v61);
          }
        }
        v65 = nullptr;
        v41 = s1;
        v66 = 0;
        if ( (_QWORD)v62 )
          v41 = (const char *)v61;
        v50 = v41;
        print_tinfo();
        v42 = v66;
        v43 = v50;
        v44 = 0;
        for ( i = v66; v42 > 1; i = v42 )
        {
          v49 = (__int64)v65;
          if ( v65[v42 - 2] != 10 )
          {
            i = v42;
            goto LABEL_74;
          }
          if ( (__int64)(v42 - 1) > 1 )
          {
            if ( *((_QWORD *)&v66 + 1) < v42 - 1 )
            {
              v65 = (const char *)qvector_reserve((__int64)&v65, (__int64)v65, v42 - 1, 1);
              v49 = (__int64)v65;
            }
            *(_QWORD *)&v66 = v42 - 1;
            *(_BYTE *)(v49 + v42 - 2) = 0;
            v42 = v66;
          }
          else if ( v65 )
          {
            *(_QWORD *)&v66 = 0;
            qfree((__int64)v65);
            v65 = nullptr;
            v42 = v66;
            *((_QWORD *)&v66 + 1) = 0;
          }
        }
        while ( 1 )
        {
LABEL_74:
          v47 = s1;
          if ( i )
            v47 = v65;
          if ( !(unsigned __int8)sub_382A60(
                                   (__int64)&v65,
                                   0,
                                   (__int64)v47,
                                   (__int64)"The following new type will be created",
                                   v43,
                                   v44) )
            break;
          if ( (unsigned __int8)parse_decl() )
          {
            if ( !(unsigned int)save_tinfo() )
              goto LABEL_107;
            type_ordinal = get_type_ordinal();
            if ( type_ordinal )
            {
              *((_QWORD *)&v72 + 1) = type_ordinal;
              v58 = 0;
              LOWORD(v73) = 257;
              *(_QWORD *)&v72 = get_idati();
              if ( (!(unsigned __int8)create_tinfo()
                 || !(unsigned __int8)get_tinfo_property()
                 || get_tinfo_property()
                 || (get_tinfo_property() & 0x3F) == 0x30)
                && !(unsigned int)save_tinfo() )
              {
                clear_tinfo_t();
LABEL_107:
                v4.m128i_i64[0] = 0;
                v57[1] = 0;
                v72 = 0;
                v58 = 0;
                copy_tinfo_t();
                v73 = nullptr;
                copy_tinfo_t();
                v74.m128i_i32[0] = 0;
                v74.m128i_i16[2] = 0;
                clear_tinfo_t();
                clear_tinfo_t();
                copy_tinfo_t();
                create_tinfo();
                clear_tinfo_t();
                clear_tinfo_t();
                clear_tinfo_t();
                if ( v65 )
                {
                  *(_QWORD *)&v66 = 0;
                  qfree((__int64)v65);
                }
                if ( src )
                {
                  v64.m128i_i64[0] = 0;
                  qfree((__int64)src);
                }
                if ( v61 )
                {
                  *(_QWORD *)&v62 = 0;
                  qfree((__int64)v61);
                }
                goto LABEL_3;
              }
              clear_tinfo_t();
            }
            v46 = s1;
            if ( (_QWORD)v62 )
              v46 = (const char *)v61;
            sub_2B4E70((__int64)"Could not create %s, maybe it already exists?", v46);
          }
          i = v66;
        }
        if ( v65 )
        {
          *(_QWORD *)&v66 = 0;
          qfree((__int64)v65);
        }
        if ( src )
        {
          v64.m128i_i64[0] = 0;
          qfree((__int64)src);
        }
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree((__int64)v61);
        }
        goto LABEL_50;
      }
      v54 = *(void **)(v38 + 32);
      src = (void *)qvector_reserve((__int64)&src, 0, *(_QWORD *)(v38 + 40), 1);
      v64.m128i_i64[0] = v39;
      memmove(src, v54, v39 - 1);
      *((char *)src + v39 - 1) = 0;
LABEL_32:
      v25 = v64.m128i_i64[0];
      if ( v64.m128i_i64[0] )
      {
        v26 = v64.m128i_i64[0] - 1;
        if ( v64.m128i_i64[0] != 1 )
        {
          v27 = v62;
          v28 = v64.m128i_i64[0] - 1;
          if ( (_QWORD)v62 )
          {
            v27 = v62 - 1;
            v28 = v26 + v62 - 1;
            v25 = v64.m128i_i64[0] + v62 - 1;
          }
          v29 = (__int64)v61;
          if ( *((_QWORD *)&v62 + 1) < v25 )
          {
            v52 = v28;
            v55 = (void *)(v64.m128i_i64[0] - 1);
            v61 = (_DWORD *)qvector_reserve((__int64)&v61, (__int64)v61, v25, 1);
            v28 = v52;
            v29 = (__int64)v61;
            v26 = (size_t)v55;
          }
          *(_QWORD *)&v62 = v25;
          *(_BYTE *)(v29 + v28) = 0;
          memcpy((char *)v61 + v27, src, v26);
        }
      }
      goto LABEL_39;
    }
    goto LABEL_24;
  }
LABEL_3:
  v6 = v59.m128i_i64[1];
  if ( v59.m128i_i32[0] != 1 )
  {
    if ( v59.m128i_i32[0] != 2 )
    {
      v7 = *(_DWORD *)(v59.m128i_i64[1] + 8);
LABEL_6:
      if ( v7 != 64 )
        goto LABEL_7;
      apply_tinfo();
      v34 = a1[16];
      *(_QWORD *)(v34 + 1344) = a1[3];
      v35 = a1[4];
      *(_QWORD *)(v34 + 1352) = v35;
      sub_3901D0((__int64)a1, (__int64)v57, v35, v36);
LABEL_50:
      clear_tinfo_t();
      goto LABEL_11;
    }
    if ( !v59.m128i_i64[1] )
    {
      v7 = 0;
      goto LABEL_6;
    }
LABEL_49:
    sub_398E20((__int64)a1, v6, v57, 0, *(double *)v4.m128i_i64);
    goto LABEL_50;
  }
  v7 = *(_DWORD *)(v59.m128i_i64[1] + 8);
  if ( v7 != 65 )
    goto LABEL_6;
  v6 = *(_QWORD *)(*(_QWORD *)(v59.m128i_i64[1] + 24) + 432LL) + 104LL * *(int *)(v59.m128i_i64[1] + 32);
  if ( v6 )
    goto LABEL_49;
LABEL_7:
  *(_QWORD *)&v72 = 0;
  if ( (unsigned int)sub_38D3D0((__int64)&v59, nullptr, &v72, nullptr) == -1 )
  {
    clear_tinfo_t();
    goto LABEL_50;
  }
  if ( (unsigned int)set_tinfo_property4() )
  {
    v37 = (const char *)tinfo_errstr();
    sub_2B4E70((__int64)"%s failed: %s", "Setting field type", v37);
    v3 = 0;
  }
  else
  {
    v9 = a1[16];
    *(_QWORD *)(v9 + 1344) = a1[3];
    v10 = a1[4];
    *(_QWORD *)(v9 + 1352) = v10;
    sub_3901D0((__int64)a1, 12, v10, v8);
  }
  clear_tinfo_t();
  clear_tinfo_t();
LABEL_11:
  v11 = v67;
  if ( v67 )
  {
    v12 = v68;
    if ( (_QWORD)v68 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 144 * v13);
        clear_tinfo_t();
        v15 = v14[5];
        if ( v15 )
        {
          v14[6] = 0;
          qfree(v15);
        }
        v16 = v14[2];
        if ( v16 )
        {
          v14[3] = 0;
          qfree(v16);
        }
        ++v13;
        v11 = v67;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v68 = 0;
    qfree(v11);
  }
  return v3;
}
