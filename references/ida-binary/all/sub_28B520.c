__int64 __fastcall sub_28B520(__int64 a1)
{
  __int64 v1; // rsi
  size_t v2; // rbx
  char v3; // cl
  __int64 v4; // rdx
  __int64 v5; // rbx
  const char *v6; // r12
  __int16 v7; // ax
  __int16 v8; // si
  const char *v9; // rax
  char **p_s1; // rsi
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // r14d
  unsigned int v14; // edx
  __int64 v15; // rdx
  int v16; // eax
  __int64 func; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ebx
  const char *v22; // rsi
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // r14
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  char *s2; // [rsp+0h] [rbp-160h]
  char *v31; // [rsp+8h] [rbp-158h]
  __int64 v32; // [rsp+10h] [rbp-150h]
  void *v33; // [rsp+58h] [rbp-108h]
  __int16 v34; // [rsp+66h] [rbp-FAh] BYREF
  __int64 v35; // [rsp+68h] [rbp-F8h] BYREF
  const char *v36; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+78h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+98h] [rbp-C8h] BYREF
  char *s1; // [rsp+A0h] [rbp-C0h] BYREF
  size_t n[3]; // [rsp+A8h] [rbp-B8h]
  __int64 v44; // [rsp+C0h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-98h]
  __int64 v46; // [rsp+D8h] [rbp-88h]
  __int64 v47; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-78h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-70h]
  __int64 v50; // [rsp+100h] [rbp-60h]
  __int128 v51; // [rsp+108h] [rbp-58h]
  char v52; // [rsp+118h] [rbp-48h]
  unsigned __int64 v53; // [rsp+128h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  if ( !a1 )
    return 1;
  v1 = *(_QWORD *)a1;
  s1 = nullptr;
  *(_OWORD *)n = 0;
  get_ea_name(&s1, v1, 0, 0);
  v2 = n[0];
  v3 = 1;
  v33 = nullptr;
  if ( n[0] )
  {
    v33 = (void *)qalloc_or_throw(n[0]);
    memcpy(v33, s1, v2);
    v3 = 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)a1;
  v6 = *(const char **)(a1 + 8);
  v35 = *(_QWORD *)a1;
  v7 = v4 & 0x1F;
  v36 = v6;
  if ( (v4 & 0x100) != 0 )
    v7 |= 0x20u;
  if ( (v4 & 0x800) != 0 )
    v7 |= 0x40u;
  HIBYTE(v8) = HIBYTE(v7);
  if ( (v4 & 0x20000) != 0 )
  {
    LOBYTE(v8) = v7 | 0x80;
    v7 = v8;
  }
  v34 = v7;
  v37 = *(_QWORD *)(a1 + 32);
  v38 = *(unsigned __int16 *)(a1 + 40);
  v39 = *(_QWORD *)(a1 + 48);
  v40 = *(_QWORD *)(a1 + 56);
  v9 = &::s1;
  if ( !v3 )
    v9 = (const char *)v33;
  s2 = (char *)v9;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        p_s1 = &s1;
        if ( (int)sub_507F10(
                    149,
                    (unsigned int)&s1,
                    (unsigned int)&v35,
                    (unsigned int)&v36,
                    (int)a1 + 64,
                    (unsigned int)&v37,
                    &v38,
                    &v39,
                    &v40,
                    &v34) <= 0 )
        {
          v20 = 0;
          goto LABEL_38;
        }
        v11 = v34 & 0x1F | *(_DWORD *)(a1 + 16) & 0xC0;
        v12 = v11;
        v13 = v11;
        if ( (v34 & 0x20) != 0 )
        {
          BYTE1(v12) = BYTE1(v11) | 1;
          v13 = v12;
        }
        v14 = v13;
        if ( (v34 & 0x40) != 0 )
        {
          BYTE1(v14) = BYTE1(v13) | 8;
          v13 = v14;
        }
        if ( (v34 & 0x80u) != 0 )
          v13 |= 0x20000u;
        if ( v36 == v6 )
          break;
        if ( (unsigned int)sub_28B420(v5, v36) )
        {
          v6 = v36;
          break;
        }
      }
      v15 = v35;
      if ( v35 == v5 )
        break;
      if ( (unsigned int)sub_28B2D0(v5, v35) )
      {
        v5 = v35;
        v15 = v35;
        break;
      }
    }
    if ( n[0] > 1 )
    {
      v32 = v15;
      v31 = s1;
      v16 = strcmp(s1, s2);
      v15 = v32;
      if ( v16 )
        continue;
    }
    goto LABEL_30;
  }
  while ( !(unsigned __int8)set_name(v5, v31, 0) );
  v15 = v35;
LABEL_30:
  func = get_func(v15);
  v18 = *(_QWORD *)(func + 16);
  if ( v13 != (_DWORD)v18 )
  {
    v19 = v13;
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)v18) & 2) != 0 )
    {
      v13 |= 0x20u;
      v19 = v13;
    }
    *(_QWORD *)(func + 16) = v19;
    v41 = 0;
    if ( (unsigned __int8)get_tinfo(&v41, v35) )
    {
      v47 = 0;
      v44 = 0;
      v46 = 0;
      v48 = 0;
      v50 = 0;
      v52 = 16;
      v45 = 0;
      v49 = 0;
      v51 = 0;
      get_tinfo_details(v41, 140, &v44);
      v22 = byte_9 + 3;
      v23 = v46 & 0xFFFFFFFD;
      if ( (v13 & 1) != 0 )
        v23 = v46 | 2;
      LODWORD(v46) = v23;
      if ( (unsigned __int8)create_tinfo(&v41, 12, 12, &v44) )
      {
        v22 = (const char *)&v41;
        apply_tinfo(v35, &v41, 1);
      }
      if ( v50 )
      {
        *(_QWORD *)&v51 = 0;
        qfree(v50, v22);
      }
      cleanup_argloc(&v48);
      clear_tinfo_t(&v47);
      v24 = v44;
      if ( v44 )
      {
        v25 = v45;
        if ( (_QWORD)v45 )
        {
          v26 = 0;
          do
          {
            v27 = (_QWORD *)(v24 + 80 * v26);
            clear_tinfo_t(v27 + 8);
            v28 = v27[5];
            if ( v28 )
            {
              v27[6] = 0;
              qfree(v28, v22);
            }
            v29 = v27[2];
            if ( v29 )
            {
              v27[3] = 0;
              qfree(v29, v22);
            }
            ++v26;
            cleanup_argloc(v27);
            v24 = v44;
          }
          while ( v25 != v26 );
        }
        *(_QWORD *)&v45 = 0;
        qfree(v24, v22);
      }
    }
    set_frame_size(func, *(_QWORD *)(func + 32), *(unsigned __int16 *)(func + 40), *(_QWORD *)(func + 48));
    reanalyze_callers(v35, *(_DWORD *)(func + 16) & 1);
    clear_tinfo_t(&v41);
  }
  set_frame_size(func, v37, (unsigned __int16)v38, v39);
  if ( *(_QWORD *)(func + 56) != v40 )
    update_fpd(func);
  p_s1 = nullptr;
  reanalyze_function(func, 0, -1, 0);
  v20 = 1;
LABEL_38:
  if ( v33 )
    qfree(v33, (const char *)p_s1);
  if ( s1 )
  {
    n[0] = 0;
    qfree(s1, (const char *)p_s1);
  }
  return v20;
}
