unsigned __int64 __fastcall sub_41C1B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  __int64 *v5; // r13
  __int64 *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 i; // rbx
  __int64 *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // r13
  int v23; // r12d
  int v24; // ecx
  const char *v25; // rsi
  const char *v26; // rdx
  const char *v27; // rsi
  const char *v28; // rdx
  const char *v29; // rsi
  const char *v30; // rdx
  const char *v31; // rsi
  const char *v32; // rdx
  const char *v33; // rsi
  const char *v34; // rdx
  const char *v35; // rsi
  const char *v36; // rdx
  const char *v37; // rsi
  const char *v38; // rdx
  const char *v39; // rsi
  const char *v40; // rdx
  const char *v41; // rsi
  const char *v42; // rdx
  const char *v43; // rsi
  const char *v44; // rdx
  __int64 v46; // rbx
  __int64 v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // [rsp+8h] [rbp-70h]
  __m128i v50; // [rsp+10h] [rbp-68h] BYREF
  const char *v51; // [rsp+20h] [rbp-58h] BYREF
  __int128 v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  v53 = __readfsqword(0x28u);
  v5 = (__int64 *)a2;
  v6 = *(__int64 **)(v4 + 280);
  v50 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v3 )
  {
    v46 = 0;
    v47 = 0;
    v2 = qalloc_or_throw(240 * v3);
    do
    {
      v48 = v2 + v46;
      ++v47;
      a2 = v46 + *v5;
      v46 += 240;
      sub_41BD40(v48, a2);
    }
    while ( v3 != v47 );
  }
  v7 = *v6;
  if ( *v6 )
  {
    v49 = v6[1];
    if ( v49 )
    {
      v8 = 0;
      for ( i = 0; i != v49; ++i )
      {
        v10 = (__int64 *)(v7 + v8);
        v11 = *(_QWORD *)(v7 + v8 + 216);
        if ( v11 )
        {
          v10[28] = 0;
          qfree(v11, (const char *)a2);
        }
        v12 = v10[24];
        if ( v12 )
        {
          v10[25] = 0;
          qfree(v12, (const char *)a2);
        }
        v13 = v10[21];
        if ( v13 )
        {
          v10[22] = 0;
          qfree(v13, (const char *)a2);
        }
        v14 = v10[18];
        if ( v14 )
        {
          v10[19] = 0;
          qfree(v14, (const char *)a2);
        }
        v15 = v10[15];
        if ( v15 )
        {
          v10[16] = 0;
          qfree(v15, (const char *)a2);
        }
        v16 = v10[12];
        if ( v16 )
        {
          v10[13] = 0;
          qfree(v16, (const char *)a2);
        }
        v17 = v10[9];
        if ( v17 )
        {
          v10[10] = 0;
          qfree(v17, (const char *)a2);
        }
        v18 = v10[6];
        if ( v18 )
        {
          v10[7] = 0;
          qfree(v18, (const char *)a2);
        }
        v19 = v10[3];
        if ( v19 )
        {
          v10[4] = 0;
          qfree(v19, (const char *)a2);
        }
        v20 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v20, (const char *)a2);
        }
        v7 = *v6;
        v8 += 240;
      }
    }
    v6[1] = 0;
    qfree(v7, (const char *)a2);
  }
  *v6 = v2;
  *(__m128i *)(v6 + 1) = _mm_load_si128(&v50);
  reg_delete_tree("FileExtensionAssocs9");
  v21 = *v5;
  v22 = *v5 + 240 * v5[1];
  if ( v21 != v22 )
  {
    v23 = 0;
    do
    {
      v24 = v23;
      v52 = 0;
      ++v23;
      v51 = nullptr;
      sub_169A50((__int64 *)&v51, (__int64)"%s\\%d", "FileExtensionAssocs9", v24);
      v25 = &s1;
      if ( (_QWORD)v52 )
        v25 = v51;
      v26 = &s1;
      if ( *(_QWORD *)(v21 + 8) )
        v26 = *(const char **)v21;
      reg_str_set("ext", v25, v26);
      v27 = &s1;
      if ( (_QWORD)v52 )
        v27 = v51;
      v28 = &s1;
      if ( *(_QWORD *)(v21 + 32) )
        v28 = *(const char **)(v21 + 24);
      reg_str_set("view", v27, v28);
      v29 = &s1;
      if ( (_QWORD)v52 )
        v29 = v51;
      v30 = &s1;
      if ( *(_QWORD *)(v21 + 56) )
        v30 = *(const char **)(v21 + 48);
      reg_str_set("view_args", v29, v30);
      v31 = &s1;
      if ( (_QWORD)v52 )
        v31 = v51;
      v32 = &s1;
      if ( *(_QWORD *)(v21 + 80) )
        v32 = *(const char **)(v21 + 72);
      reg_str_set("diff", v31, v32);
      v33 = &s1;
      if ( (_QWORD)v52 )
        v33 = v51;
      v34 = &s1;
      if ( *(_QWORD *)(v21 + 104) )
        v34 = *(const char **)(v21 + 96);
      reg_str_set("diff_args", v33, v34);
      v35 = &s1;
      if ( (_QWORD)v52 )
        v35 = v51;
      v36 = &s1;
      if ( *(_QWORD *)(v21 + 128) )
        v36 = *(const char **)(v21 + 120);
      reg_str_set("merge", v35, v36);
      v37 = &s1;
      if ( (_QWORD)v52 )
        v37 = v51;
      v38 = &s1;
      if ( *(_QWORD *)(v21 + 152) )
        v38 = *(const char **)(v21 + 144);
      reg_str_set("merge_args_auto", v37, v38);
      v39 = &s1;
      if ( (_QWORD)v52 )
        v39 = v51;
      v40 = &s1;
      if ( *(_QWORD *)(v21 + 176) )
        v40 = *(const char **)(v21 + 168);
      reg_str_set("merge_args_plocal", v39, v40);
      v41 = &s1;
      if ( (_QWORD)v52 )
        v41 = v51;
      v42 = &s1;
      if ( *(_QWORD *)(v21 + 200) )
        v42 = *(const char **)(v21 + 192);
      reg_str_set("merge_args_premote", v41, v42);
      v43 = &s1;
      if ( (_QWORD)v52 )
        v43 = v51;
      v44 = &s1;
      if ( *(_QWORD *)(v21 + 224) )
        v44 = *(const char **)(v21 + 216);
      reg_str_set("merge_args_manual", v43, v44);
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v51, v43);
      }
      v21 += 240;
    }
    while ( v22 != v21 );
  }
  return v53 - __readfsqword(0x28u);
}
