unsigned __int64 __fastcall sub_17B20(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // rdi
  __int64 named_type_tid; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  unsigned int *v11; // rax
  const char *v12; // rdx
  const char *v13; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // rbx
  bool v18; // cf
  const char *v19; // rcx
  const char *v20; // rdx
  const char *v21; // rsi
  const char *v22; // rcx
  int v23; // edx
  const char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r12
  _QWORD *v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // rdi
  _DWORD *v32; // rax
  char v33; // r9
  _QWORD *v34; // r14
  __m128i v35; // xmm0
  __int64 v36; // rdi
  const char *v37; // rbx
  __int64 v38; // rbp
  char v39; // al
  const char *v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rbp
  _QWORD *v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // rdi
  __m128i v48; // [rsp+10h] [rbp-C8h] BYREF
  __int64 *v49; // [rsp+20h] [rbp-B8h]
  char v50; // [rsp+2Fh] [rbp-A9h]
  __int64 v51; // [rsp+38h] [rbp-A0h] BYREF
  const char *v52; // [rsp+40h] [rbp-98h] BYREF
  __m128i v53; // [rsp+48h] [rbp-90h] BYREF
  const char *idati; // [rsp+60h] [rbp-78h] BYREF
  __int128 v55; // [rsp+68h] [rbp-70h]
  unsigned __int64 v56; // [rsp+78h] [rbp-60h]
  unsigned __int64 v57; // [rsp+80h] [rbp-58h]
  __int64 v58; // [rsp+88h] [rbp-50h]
  int v59; // [rsp+90h] [rbp-48h]
  unsigned __int64 v60; // [rsp+98h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v48.m128i_i64[0] = (__int64)&v52;
  sub_A400((__int64 *)&v52, a3, "::");
  v5 = s1;
  if ( v53.m128i_i64[0] )
    v5 = v52;
  v51 = 0;
  named_type_tid = get_named_type_tid(v5);
  v49 = &v51;
  if ( (unsigned __int8)get_type_by_tid(&v51, named_type_tid) )
  {
    v39 = sub_E0E0((_DWORD *)a2, v49, v48.m128i_i64[0]);
    v33 = 0;
    if ( !v39 )
      goto LABEL_14;
    v32 = (_DWORD *)a2;
    if ( *(_DWORD *)(a2 + 68) != 2 )
      goto LABEL_14;
    goto LABEL_47;
  }
  v7 = *(_QWORD *)(a3 + 80);
  v8 = *(_QWORD *)(a3 + 72);
  v9 = 0;
  v10 = v8 + 56 * v7;
  if ( v10 != v8 )
  {
    while ( 1 )
    {
      v11 = (unsigned int *)sub_14470(a1, v8 + 24);
      if ( v11[17] != 1 )
        break;
      if ( *((_QWORD *)v11 + 5) <= 1u )
      {
        if ( !under_debugger )
          interr(30732);
        BUG();
      }
      v8 += 56;
      v9 += *v11;
      if ( v10 == v8 )
      {
        v7 = *(_QWORD *)(a3 + 80);
        goto LABEL_18;
      }
    }
    sub_10F10((__int64)&idati, (__int64)v11, v8 + 24);
    v12 = s1;
    if ( (_QWORD)v55 )
    {
      v12 = idati;
      v13 = s1;
      if ( !v53.m128i_i64[0] )
        goto LABEL_11;
    }
    else
    {
      v13 = s1;
      if ( !v53.m128i_i64[0] )
      {
LABEL_11:
        sub_CB10((__int64)"could not create a structure with the name %s with a field of %s\n", v13, v12);
        if ( idati )
        {
          *(_QWORD *)&v55 = 0;
          qfree(idati);
        }
        *(_DWORD *)(a2 + 68) = 10;
        goto LABEL_14;
      }
    }
    v13 = v52;
    goto LABEL_11;
  }
LABEL_18:
  v15 = *(int *)(a3 + 104);
  v50 = v15 < v9;
  if ( v15 == v9 )
    v50 = *(_DWORD *)(a3 + 108) == 0;
  idati = nullptr;
  v58 = 0;
  v59 = 1;
  v55 = 0;
  if ( v50 )
  {
    v56 = v9;
    v57 = v9;
    if ( !v7 )
    {
LABEL_31:
      HIDWORD(v58) |= 0x40u;
      goto LABEL_32;
    }
  }
  else
  {
    v56 = v15;
    v57 = v9;
    if ( !v7 )
      goto LABEL_64;
  }
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = (unsigned __int8)sub_132D0(
                             a1,
                             (__int64 *)&idati,
                             (unsigned int *)a2,
                             *(_QWORD *)(a3 + 72) + 56 * v16,
                             v7 - 1 == v16,
                             v50) == 0;
    v7 = *(_QWORD *)(a3 + 80);
    v17 += v18;
    ++v16;
  }
  while ( v16 < v7 );
  if ( v17 )
  {
    v19 = s1;
    if ( v53.m128i_i64[0] )
      v19 = v52;
    v20 = "s";
    v21 = "";
    if ( v17 != 1 )
    {
      v20 = "";
      v21 = "s";
    }
    sub_CB10((__int64)"the message%s above refer%s to creating a structure with the name %s\n", v21, v20, v19);
  }
  if ( v50 )
    goto LABEL_31;
LABEL_64:
  LODWORD(v58) = 1 << *(_DWORD *)(a2 + 4);
LABEL_32:
  create_tinfo(v49, 13, 13, &idati);
  set_tinfo_property(v49, 2, 4);
  v22 = s1;
  if ( v53.m128i_i64[0] )
    v22 = v52;
  v23 = save_tinfo(v49, 0, 0, v22, 5);
  if ( v23 )
  {
    v40 = s1;
    if ( v53.m128i_i64[0] )
      v40 = v52;
    sub_CB10((__int64)"could not add a structure with the name %s retcode %d\n", v40, v23);
    v41 = (__int64)idati;
    *(_DWORD *)(a2 + 68) = 6;
    if ( v41 )
    {
      v42 = v55;
      if ( (_QWORD)v55 )
      {
        v43 = 0;
        do
        {
          v44 = (_QWORD *)(v41 + 144 * v43);
          clear_tinfo_t();
          v45 = v44[5];
          if ( v45 )
          {
            v44[6] = 0;
            qfree(v45);
          }
          v46 = v44[2];
          if ( v46 )
          {
            v44[3] = 0;
            qfree(v46);
          }
          ++v43;
          v41 = (__int64)idati;
        }
        while ( v42 != v43 );
      }
      *(_QWORD *)&v55 = 0;
      qfree(v41);
    }
    goto LABEL_14;
  }
  v24 = s1;
  if ( v53.m128i_i64[0] )
    v24 = v52;
  v25 = get_named_type_tid(v24);
  v26 = (__int64)idati;
  named_type_tid = v25;
  if ( idati )
  {
    v27 = v55;
    if ( (_QWORD)v55 )
    {
      v28 = 0;
      do
      {
        v29 = (_QWORD *)(v26 + 144 * v28);
        clear_tinfo_t();
        v30 = v29[5];
        if ( v30 )
        {
          v29[6] = 0;
          qfree(v30);
        }
        v31 = v29[2];
        if ( v31 )
        {
          v29[3] = 0;
          qfree(v31);
        }
        ++v28;
        v26 = (__int64)idati;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v26);
  }
  v32 = (_DWORD *)a2;
  v33 = 1;
  if ( *(_DWORD *)(a2 + 68) == 2 )
  {
LABEL_47:
    v34 = v32;
    if ( (unsigned __int8)sub_DE40(v32, *(_DWORD *)(a3 + 104), *(_DWORD *)(a3 + 108), v48.m128i_i64[0], 0, v33 & 1) )
    {
      v35 = _mm_loadu_si128(&v53);
      v36 = v34[4];
      v34[2] = named_type_tid;
      v34[1] = 1610613760;
      v37 = v52;
      v38 = v35.m128i_i64[0];
      v53 = 0;
      v52 = nullptr;
      if ( v36 )
      {
        v34[5] = 0;
        v48 = v35;
        qfree(v36);
        v35 = _mm_load_si128(&v48);
      }
      *(_QWORD *)(a2 + 32) = v37;
      *(__m128i *)(a2 + 40) = v35;
      if ( !v38 )
        v37 = s1;
      if ( v37 )
      {
        *(_QWORD *)&v55 = v37;
        WORD4(v55) = 256;
        idati = (const char *)get_idati();
        create_tinfo(a2 + 24, 61, 61, &idati);
      }
      *(_DWORD *)(a2 + 68) = 1;
      *(_BYTE *)(a2 + 72) = *(_BYTE *)(a3 + 112);
      clear_tinfo_t();
      if ( v52 )
      {
        v53.m128i_i64[0] = 0;
        qfree(v52);
      }
      return v60 - __readfsqword(0x28u);
    }
  }
LABEL_14:
  clear_tinfo_t();
  if ( v52 )
  {
    v53.m128i_i64[0] = 0;
    qfree(v52);
  }
  return v60 - __readfsqword(0x28u);
}
