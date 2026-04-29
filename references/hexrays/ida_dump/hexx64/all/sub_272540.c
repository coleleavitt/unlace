__int64 __fastcall sub_272540(__m128i *a1, __int64 *a2, _BYTE *a3, __int64 a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  int stroff_path; // eax
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 **v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 udm_by_tid; // r15
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edx
  char v22; // al
  int v23; // r9d
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  _QWORD *v27; // r12
  __int64 v28; // rdi
  __int64 flags; // rax
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // r13
  _QWORD *v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rdi
  _QWORD *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rdi
  int tinfo_udt_member; // eax
  __int64 v43; // rdx
  __int64 v44; // rbp
  _QWORD *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  int v48; // eax
  _QWORD *dest; // [rsp+28h] [rbp-70h]
  _QWORD *desta; // [rsp+28h] [rbp-70h]
  __int64 v52; // [rsp+30h] [rbp-68h] BYREF
  __int64 v53; // [rsp+38h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+40h] [rbp-58h] BYREF
  __int128 v55; // [rsp+48h] [rbp-50h]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v7 = a1[8].m128i_u64[0];
  if ( v7 != -1 || (v11 = (_QWORD *)a1[1].m128i_i64[0], v12 = v11[1], (int)v12 - 1 <= 0) )
  {
LABEL_2:
    if ( a1[28].m128i_i8[0] )
      goto LABEL_3;
    goto LABEL_16;
  }
  v13 = (unsigned __int64 **)(*v11 + 8LL * (unsigned int)(v12 - 1));
  v14 = (__int64)&v13[-(unsigned int)(v12 - 2) - 1];
  while ( 1 )
  {
    v7 = **v13;
    if ( v7 != -1 )
      break;
    if ( (unsigned __int64 **)v14 == --v13 )
      goto LABEL_2;
  }
  if ( !a1[28].m128i_i8[0] )
  {
LABEL_16:
    v15 = a1->m128i_i64[1];
    a1[28].m128i_i8[0] = 1;
    sub_257F10(*(_QWORD *)(v15 + 64), v7, &a1[9].m128i_i64[1]);
  }
LABEL_3:
  v8 = a1[10].m128i_i64[0];
  if ( v8 )
  {
LABEL_4:
    *a2 = *(int *)a1[9].m128i_i64[1];
    memmove((void *)a1[9].m128i_i64[1], (const void *)(a1[9].m128i_i64[1] + 4), 4 * a1[10].m128i_i64[0]-- - 4);
    return 1;
  }
  stroff_path = a1[27].m128i_i32[0];
  if ( stroff_path == -1 )
  {
    a1[27].m128i_i32[0] = 0;
    flags = get_flags_ex(v7, 0);
    if ( (unsigned __int8)is_stroff(flags, 15) )
    {
      stroff_path = get_stroff_path(&a1[11], &tinfo_property, v7, 0xFFFFFFFFLL);
      if ( tinfo_property )
      {
        a1[27].m128i_i32[0] = 0;
LABEL_8:
        if ( !*a3 )
          goto LABEL_9;
        goto LABEL_20;
      }
      a1[27].m128i_i32[0] = stroff_path;
    }
    else
    {
      stroff_path = a1[27].m128i_i32[0];
    }
  }
  if ( stroff_path <= 1 )
    goto LABEL_8;
  v16 = a1[11].m128i_i64[1];
  tinfo_property = 0;
  udm_by_tid = get_udm_by_tid(&tinfo_property, 0, v16);
  if ( udm_by_tid != -1 && (unsigned __int8)sub_32A510(a1->m128i_i64[0], &tinfo_property, &a1[8].m128i_u64[1]) )
  {
    v48 = a1[27].m128i_i32[0] - 1;
    a1[27].m128i_i32[0] = v48;
    memmove(&a1[11], &a1[11].m128i_u64[1], v48);
    a1[11].m128i_i64[0] = get_tinfo_tid(&tinfo_property, 0);
    *a2 = udm_by_tid;
    clear_tinfo_t(&tinfo_property);
    return 1;
  }
  a1[27].m128i_i32[0] = 0;
  clear_tinfo_t(&tinfo_property);
  if ( *a3 )
  {
LABEL_20:
    v52 = 0;
    copy_tinfo_t(&v52, a3);
    if ( a1[27].m128i_i32[1] )
    {
      v18 = a1[1].m128i_i64[0];
      v19 = *(_DWORD *)(v18 + 8) - 1;
      if ( v19 >= 0 )
      {
        v20 = *(_QWORD *)v18 + 8LL * (unsigned int)v19;
        do
        {
          if ( !*(_QWORD *)v20 )
            break;
          v21 = *(_DWORD *)(*(_QWORD *)v20 + 8LL);
          if ( v21 == 51 )
            goto LABEL_53;
          if ( v21 != 48 )
            break;
          --v19;
          v20 -= 8;
        }
        while ( v19 != -1 );
      }
    }
    else
    {
LABEL_53:
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(v52, 10);
      copy_tinfo_t(&v52, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
    }
    tinfo_property = 0;
    v55 = 0;
    v22 = get_tinfo_property(v52, 2);
    sub_3349B0((unsigned int)&tinfo_property, (_DWORD)a1 + 136, a4, 0, (v22 & 0x2F) == 13, v23);
    if ( (get_tinfo_property(v52, 2) & 0xF) != 0xB && (_QWORD)v55 )
    {
      v24 = 0;
      do
      {
        v26 = v24 << 6;
        v27 = (_QWORD *)((v24 << 6) + tinfo_property);
        if ( (get_tinfo_property(v27[7], 2) & 0xF) == 0xB )
        {
          v28 = v27[7];
          v53 = 0;
          v53 = get_tinfo_property(v28, 289);
          copy_tinfo_t(v27 + 7, &v53);
          ++v24;
          clear_tinfo_t(&v53);
          v25 = v55;
        }
        else if ( *v27 )
        {
          dest = (_QWORD *)(v26 + tinfo_property);
          clear_tinfo_t(v26 + tinfo_property + 56);
          v39 = dest;
          v40 = dest[4];
          if ( v40 )
          {
            dest[5] = 0;
            qfree(v40);
            v39 = dest;
          }
          v41 = v39[1];
          if ( v41 )
          {
            v39[2] = 0;
            desta = v39;
            qfree(v41);
            v39 = desta;
          }
          memmove(v39, v39 + 8, tinfo_property + ((_QWORD)v55 << 6) - (_QWORD)v39 - 64);
          v25 = v55 - 1;
          *(_QWORD *)&v55 = v55 - 1;
        }
        else
        {
          v25 = v55;
          ++v24;
        }
      }
      while ( v24 < v25 );
    }
    v30 = sub_2719D0(a1, &tinfo_property, &v52);
    v31 = tinfo_property;
    if ( v30 == -1 )
    {
      if ( !a4 )
      {
        copy_tinfo_t(a2 + 8, &v52);
        tinfo_udt_member = find_tinfo_udt_member(a2, a1[8].m128i_i64[1], 1073741828);
        v43 = tinfo_property;
        v31 = tinfo_property;
        if ( tinfo_udt_member != -1 )
        {
          *a2 = tinfo_udt_member;
          if ( v43 )
          {
            v44 = v55;
            if ( (_QWORD)v55 )
            {
              do
              {
                v45 = (_QWORD *)(v43 + (a4 << 6));
                clear_tinfo_t(v45 + 7);
                v46 = v45[4];
                if ( v46 )
                {
                  v45[5] = 0;
                  qfree(v46);
                }
                v47 = v45[1];
                if ( v47 )
                {
                  v45[2] = 0;
                  qfree(v47);
                }
                ++a4;
                v43 = tinfo_property;
              }
              while ( v44 != a4 );
            }
            *(_QWORD *)&v55 = 0;
            qfree(v43);
          }
          clear_tinfo_t(&v52);
          return 1;
        }
      }
    }
    else
    {
      v32 = tinfo_property + ((__int64)v30 << 6);
      v33 = *(_QWORD *)(v32 + 32);
      v34 = _mm_loadu_si128((const __m128i *)(v32 + 40));
      *(_QWORD *)(v32 + 32) = a1[9].m128i_i64[1];
      *(_QWORD *)(v32 + 40) = a1[10].m128i_i64[0];
      *(_QWORD *)(v32 + 48) = a1[10].m128i_i64[1];
      a1[9].m128i_i64[1] = v33;
      a1[10] = v34;
    }
    if ( v31 )
    {
      v35 = v55;
      if ( (_QWORD)v55 )
      {
        do
        {
          v36 = (_QWORD *)(v31 + (v8 << 6));
          clear_tinfo_t(v36 + 7);
          v37 = v36[4];
          if ( v37 )
          {
            v36[5] = 0;
            qfree(v37);
          }
          v38 = v36[1];
          if ( v38 )
          {
            v36[2] = 0;
            qfree(v38);
          }
          ++v8;
          v31 = tinfo_property;
        }
        while ( v35 != v8 );
      }
      *(_QWORD *)&v55 = 0;
      qfree(v31);
    }
    clear_tinfo_t(&v52);
  }
LABEL_9:
  if ( a1[10].m128i_i64[0] )
    goto LABEL_4;
  return 0xFFFFFFFFLL;
}
