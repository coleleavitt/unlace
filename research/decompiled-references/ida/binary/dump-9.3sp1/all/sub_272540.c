__int64 __fastcall sub_272540(__m128i *a1, __int64 *a2, _BYTE *a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  int stroff_path; // eax
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 **v13; // rax
  __int64 v14; // rax
  __int64 udm_by_tid; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  char v20; // al
  int v21; // r9d
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rax
  _QWORD *v24; // r12
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // r13
  _QWORD *v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rdi
  _QWORD *v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rdi
  int tinfo_udt_member; // eax
  __int64 v38; // rdx
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdi
  int v43; // eax
  unsigned __int64 v44; // [rsp+8h] [rbp-90h]
  _QWORD *dest; // [rsp+28h] [rbp-70h]
  _QWORD *desta; // [rsp+28h] [rbp-70h]
  _QWORD v47[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 tinfo_property; // [rsp+40h] [rbp-58h] BYREF
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v44 = a4;
  v50 = __readfsqword(0x28u);
  v7 = a1[8].m128i_u64[0];
  if ( v7 != -1 || (v11 = (_QWORD *)a1[1].m128i_i64[0], v12 = v11[1], (int)v12 - 1 <= 0) )
  {
LABEL_2:
    if ( a1[28].m128i_i8[0] )
      goto LABEL_3;
    goto LABEL_16;
  }
  v13 = (unsigned __int64 **)(*v11 + 8LL * (unsigned int)(v12 - 1));
  a4 = (unsigned __int64)&v13[-(unsigned int)(v12 - 2) - 1];
  while ( 1 )
  {
    v7 = **v13;
    if ( v7 != -1 )
      break;
    if ( (unsigned __int64 **)a4 == --v13 )
      goto LABEL_2;
  }
  if ( !a1[28].m128i_i8[0] )
  {
LABEL_16:
    v14 = a1->m128i_i64[1];
    a1[28].m128i_i8[0] = 1;
    sub_257F10(*(_QWORD *)(v14 + 64), v7, &a1[9].m128i_i64[1], a4);
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
    get_flags_ex();
    if ( (unsigned __int8)is_stroff() )
    {
      stroff_path = get_stroff_path();
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
  tinfo_property = 0;
  udm_by_tid = get_udm_by_tid();
  if ( udm_by_tid != -1 && (unsigned __int8)sub_32A510(a1->m128i_i64[0], &tinfo_property, &a1[8].m128i_u64[1]) )
  {
    v43 = a1[27].m128i_i32[0] - 1;
    a1[27].m128i_i32[0] = v43;
    memmove(&a1[11], &a1[11].m128i_u64[1], v43);
    a1[11].m128i_i64[0] = get_tinfo_tid();
    *a2 = udm_by_tid;
    clear_tinfo_t();
    return 1;
  }
  a1[27].m128i_i32[0] = 0;
  clear_tinfo_t();
  if ( *a3 )
  {
LABEL_20:
    v47[0] = 0;
    copy_tinfo_t();
    if ( a1[27].m128i_i32[1] )
    {
      v16 = a1[1].m128i_i64[0];
      v17 = *(_DWORD *)(v16 + 8) - 1;
      if ( v17 >= 0 )
      {
        v18 = *(_QWORD *)v16 + 8LL * (unsigned int)v17;
        do
        {
          if ( !*(_QWORD *)v18 )
            break;
          v19 = *(_DWORD *)(*(_QWORD *)v18 + 8LL);
          if ( v19 == 51 )
            goto LABEL_53;
          if ( v19 != 48 )
            break;
          --v17;
          v18 -= 8;
        }
        while ( v17 != -1 );
      }
    }
    else
    {
LABEL_53:
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    tinfo_property = 0;
    v49 = 0;
    v20 = get_tinfo_property();
    sub_3349B0((unsigned int)&tinfo_property, (_DWORD)a1 + 136, v44, 0, (v20 & 0x2F) == 13, v21);
    if ( (get_tinfo_property() & 0xF) != 0xB && (_QWORD)v49 )
    {
      v22 = 0;
      do
      {
        v24 = (_QWORD *)((v22 << 6) + tinfo_property);
        if ( (get_tinfo_property() & 0xF) == 0xB )
        {
          v47[1] = get_tinfo_property();
          copy_tinfo_t();
          ++v22;
          clear_tinfo_t();
          v23 = v49;
        }
        else if ( *v24 )
        {
          dest = (_QWORD *)((v22 << 6) + tinfo_property);
          clear_tinfo_t();
          v34 = dest;
          v35 = dest[4];
          if ( v35 )
          {
            dest[5] = 0;
            qfree(v35);
            v34 = dest;
          }
          v36 = v34[1];
          if ( v36 )
          {
            v34[2] = 0;
            desta = v34;
            qfree(v36);
            v34 = desta;
          }
          memmove(v34, v34 + 8, tinfo_property + ((_QWORD)v49 << 6) - (_QWORD)v34 - 64);
          v23 = v49 - 1;
          *(_QWORD *)&v49 = v49 - 1;
        }
        else
        {
          v23 = v49;
          ++v22;
        }
      }
      while ( v22 < v23 );
    }
    v25 = sub_2719D0(a1, &tinfo_property, (__int64)v47);
    v26 = tinfo_property;
    if ( v25 == -1 )
    {
      if ( !v44 )
      {
        copy_tinfo_t();
        tinfo_udt_member = find_tinfo_udt_member();
        v38 = tinfo_property;
        v26 = tinfo_property;
        if ( tinfo_udt_member != -1 )
        {
          *a2 = tinfo_udt_member;
          if ( v38 )
          {
            v39 = v49;
            if ( (_QWORD)v49 )
            {
              do
              {
                v40 = (_QWORD *)(v38 + (v44 << 6));
                clear_tinfo_t();
                v41 = v40[4];
                if ( v41 )
                {
                  v40[5] = 0;
                  qfree(v41);
                }
                v42 = v40[1];
                if ( v42 )
                {
                  v40[2] = 0;
                  qfree(v42);
                }
                ++v44;
                v38 = tinfo_property;
              }
              while ( v39 != v44 );
            }
            *(_QWORD *)&v49 = 0;
            qfree(v38);
          }
          clear_tinfo_t();
          return 1;
        }
      }
    }
    else
    {
      v27 = tinfo_property + ((__int64)v25 << 6);
      v28 = *(_QWORD *)(v27 + 32);
      v29 = _mm_loadu_si128((const __m128i *)(v27 + 40));
      *(_QWORD *)(v27 + 32) = a1[9].m128i_i64[1];
      *(_QWORD *)(v27 + 40) = a1[10].m128i_i64[0];
      *(_QWORD *)(v27 + 48) = a1[10].m128i_i64[1];
      a1[9].m128i_i64[1] = v28;
      a1[10] = v29;
    }
    if ( v26 )
    {
      v30 = v49;
      if ( (_QWORD)v49 )
      {
        do
        {
          v31 = (_QWORD *)(v26 + (v8 << 6));
          clear_tinfo_t();
          v32 = v31[4];
          if ( v32 )
          {
            v31[5] = 0;
            qfree(v32);
          }
          v33 = v31[1];
          if ( v33 )
          {
            v31[2] = 0;
            qfree(v33);
          }
          ++v8;
          v26 = tinfo_property;
        }
        while ( v30 != v8 );
      }
      *(_QWORD *)&v49 = 0;
      qfree(v26);
    }
    clear_tinfo_t();
  }
LABEL_9:
  if ( a1[10].m128i_i64[0] )
    goto LABEL_4;
  return 0xFFFFFFFFLL;
}
