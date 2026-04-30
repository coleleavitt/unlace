__int64 __fastcall sub_41B100(__int64 a1)
{
  const char *v1; // rsi
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  _QWORD *v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // r14
  const char *v28; // rdx
  const char *v29; // rdx
  const char *v30; // rdx
  const char *v31; // rdx
  const char *v32; // rdx
  const char *v33; // rdx
  const char *v34; // rdx
  const char *v35; // rdx
  const char *v36; // rdx
  const char *v37; // rdx
  const char *v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rdi
  unsigned __int8 v49; // [rsp+Fh] [rbp-89h]
  __int64 *v50; // [rsp+10h] [rbp-88h]
  _QWORD *v51; // [rsp+20h] [rbp-78h] BYREF
  __int128 v52; // [rsp+28h] [rbp-70h]
  const char *v53; // [rsp+40h] [rbp-58h] BYREF
  __int128 v54; // [rsp+48h] [rbp-50h]
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v1 = "FileExtensionAssocs9";
  v55 = __readfsqword(0x28u);
  v2 = a1;
  v52 = 0;
  v51 = nullptr;
  v49 = reg_subkey_children(&v51, "FileExtensionAssocs9", 1);
  if ( !v49 )
  {
    v20 = v51;
    v3 = (__int64)v51;
LABEL_64:
    if ( !v3 )
      return v49;
    v44 = v52;
    if ( (_QWORD)v52 )
    {
      v45 = 0;
      do
      {
        v46 = (__int64 *)(v3 + 24 * v45);
        v47 = *v46;
        if ( *v46 )
        {
          v46[1] = 0;
          qfree(v47, v1);
          v20 = v51;
        }
        ++v45;
        v3 = (__int64)v20;
      }
      while ( v44 != v45 );
    }
LABEL_70:
    *(_QWORD *)&v52 = 0;
    qfree(v3, v1);
    return v49;
  }
  if ( (_QWORD)v52 )
  {
    v5 = 0;
    v6 = 0;
    v7 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 280LL);
    if ( v7[1] )
    {
      v8 = v7[1];
      do
      {
        v9 = (__int64 *)(v5 + *v7);
        v10 = v9[27];
        if ( v10 )
        {
          v9[28] = 0;
          qfree(v10, "FileExtensionAssocs9");
        }
        v11 = v9[24];
        if ( v11 )
        {
          v9[25] = 0;
          qfree(v11, "FileExtensionAssocs9");
        }
        v12 = v9[21];
        if ( v12 )
        {
          v9[22] = 0;
          qfree(v12, "FileExtensionAssocs9");
        }
        v13 = v9[18];
        if ( v13 )
        {
          v9[19] = 0;
          qfree(v13, "FileExtensionAssocs9");
        }
        v14 = v9[15];
        if ( v14 )
        {
          v9[16] = 0;
          qfree(v14, "FileExtensionAssocs9");
        }
        v15 = v9[12];
        if ( v15 )
        {
          v9[13] = 0;
          qfree(v15, "FileExtensionAssocs9");
        }
        v16 = v9[9];
        if ( v16 )
        {
          v9[10] = 0;
          qfree(v16, "FileExtensionAssocs9");
        }
        v17 = v9[6];
        if ( v17 )
        {
          v9[7] = 0;
          qfree(v17, "FileExtensionAssocs9");
        }
        v18 = v9[3];
        if ( v18 )
        {
          v9[4] = 0;
          qfree(v18, "FileExtensionAssocs9");
        }
        v19 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v19, "FileExtensionAssocs9");
        }
        ++v6;
        v5 += 240;
      }
      while ( v8 != v6 );
      v2 = a1;
    }
    v7[1] = 0;
    v20 = v51;
    v21 = 24 * v52;
    v3 = (__int64)v51;
    v22 = (__int64)&v51[3 * v52];
    if ( (_QWORD *)v22 == v51 )
      goto LABEL_64;
    v23 = 0xAAAAAAAAAAAAAAABLL * (v21 >> 3);
    if ( v23 )
    {
      _BitScanReverse64(&v24, v23);
      sub_415E30((__int64)v51, (unsigned __int64)&v51[3 * v52], 2LL * (int)v24);
      if ( v21 > 384 )
      {
        v25 = v20 + 48;
        v1 = (const char *)(v20 + 48);
        sub_414A50((__int64)v20, (__int64)(v20 + 48));
        do
        {
          v26 = (__int64)v25;
          v25 += 3;
          sub_414610(v26);
        }
        while ( (_QWORD *)v22 != v25 );
LABEL_34:
        v20 = v51;
        v3 = (__int64)&v51[3 * v52];
        if ( v51 != (_QWORD *)v3 )
        {
          do
          {
            v53 = nullptr;
            v38 = &s1;
            v54 = 0;
            if ( v20[1] )
              v38 = (const char *)*v20;
            sub_169A50((__int64 *)&v53, (__int64)"%s\\%s", "FileExtensionAssocs9", v38);
            v39 = *(_QWORD *)(v2 + 32);
            v40 = *(__int64 **)(v39 + 280);
            v41 = v40[1];
            v42 = *v40;
            if ( v40[2] < (unsigned __int64)(v41 + 1) )
            {
              v50 = *(__int64 **)(v39 + 280);
              v43 = qvector_reserve(v50, v42, v41 + 1, 240);
              v40 = v50;
              v42 = v43;
              *v50 = v43;
              v41 = v50[1];
            }
            v27 = v42 + 240 * v41;
            v28 = &s1;
            *(_QWORD *)v27 = 0;
            *(_OWORD *)(v27 + 8) = 0;
            *(_QWORD *)(v27 + 24) = 0;
            *(_QWORD *)(v27 + 48) = 0;
            *(_QWORD *)(v27 + 72) = 0;
            *(_QWORD *)(v27 + 96) = 0;
            *(_QWORD *)(v27 + 120) = 0;
            *(_QWORD *)(v27 + 144) = 0;
            *(_QWORD *)(v27 + 168) = 0;
            *(_QWORD *)(v27 + 192) = 0;
            *(_QWORD *)(v27 + 216) = 0;
            *(_OWORD *)(v27 + 32) = 0;
            *(_OWORD *)(v27 + 56) = 0;
            *(_OWORD *)(v27 + 80) = 0;
            *(_OWORD *)(v27 + 104) = 0;
            *(_OWORD *)(v27 + 128) = 0;
            *(_OWORD *)(v27 + 152) = 0;
            *(_OWORD *)(v27 + 176) = 0;
            *(_OWORD *)(v27 + 200) = 0;
            *(_OWORD *)(v27 + 224) = 0;
            ++v40[1];
            if ( (_QWORD)v54 )
              v28 = v53;
            reg_str_get(v27, "ext", v28);
            v29 = &s1;
            if ( (_QWORD)v54 )
              v29 = v53;
            reg_str_get(v27 + 24, "view", v29);
            v30 = &s1;
            if ( (_QWORD)v54 )
              v30 = v53;
            reg_str_get(v27 + 48, "view_args", v30);
            v31 = &s1;
            if ( (_QWORD)v54 )
              v31 = v53;
            reg_str_get(v27 + 72, "diff", v31);
            v32 = &s1;
            if ( (_QWORD)v54 )
              v32 = v53;
            reg_str_get(v27 + 96, "diff_args", v32);
            v33 = &s1;
            if ( (_QWORD)v54 )
              v33 = v53;
            reg_str_get(v27 + 120, "merge", v33);
            v34 = &s1;
            if ( (_QWORD)v54 )
              v34 = v53;
            reg_str_get(v27 + 144, "merge_args_auto", v34);
            v35 = &s1;
            if ( (_QWORD)v54 )
              v35 = v53;
            reg_str_get(v27 + 168, "merge_args_plocal", v35);
            v36 = &s1;
            if ( (_QWORD)v54 )
              v36 = v53;
            reg_str_get(v27 + 192, "merge_args_premote", v36);
            v37 = &s1;
            if ( (_QWORD)v54 )
              v37 = v53;
            v1 = "merge_args_manual";
            reg_str_get(v27 + 216, "merge_args_manual", v37);
            if ( v53 )
            {
              *(_QWORD *)&v54 = 0;
              qfree(v53, "merge_args_manual");
            }
            v20 += 3;
          }
          while ( (_QWORD *)v3 != v20 );
          v3 = (__int64)v51;
          v20 = v51;
        }
        goto LABEL_64;
      }
    }
    else
    {
      sub_415E30((__int64)v51, (unsigned __int64)&v51[3 * v52], -2);
    }
    v1 = (const char *)v22;
    sub_414A50((__int64)v20, v22);
    goto LABEL_34;
  }
  v3 = (__int64)v51;
  v49 = 0;
  if ( v51 )
    goto LABEL_70;
  return v49;
}
