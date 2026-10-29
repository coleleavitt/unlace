__int64 __fastcall sub_16CC80(__int64 *a1, __int64 a2, char a3, int a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r14
  __int64 *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // rdx
  unsigned int v11; // r12d
  __int64 v13; // rdi
  int v14; // r13d
  const char *v15; // rdi
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rdi
  int v22; // r9d
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // r9
  _QWORD *v26; // r13
  char *v27; // rdi
  char *v28; // rdx
  _QWORD *v29; // rdi
  struct _Unwind_Exception *v30; // rbx
  __int64 v31; // [rsp+8h] [rbp-190h]
  __int64 v32; // [rsp+8h] [rbp-190h]
  __int64 v33; // [rsp+8h] [rbp-190h]
  __int64 v34; // [rsp+10h] [rbp-188h]
  __int64 v35; // [rsp+10h] [rbp-188h]
  __int64 v36; // [rsp+28h] [rbp-170h]
  int v37[2]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v38; // [rsp+38h] [rbp-160h]
  __m128i v39; // [rsp+50h] [rbp-148h] BYREF
  __m128i v40; // [rsp+60h] [rbp-138h]
  __int64 v41; // [rsp+70h] [rbp-128h]
  __int64 v42; // [rsp+78h] [rbp-120h]
  _BYTE v43[96]; // [rsp+80h] [rbp-118h] BYREF
  __m128i v44; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-A8h]
  __int64 v46; // [rsp+F8h] [rbp-A0h]
  __int64 v47; // [rsp+100h] [rbp-98h]
  __int128 v48; // [rsp+108h] [rbp-90h]
  __int128 v49; // [rsp+118h] [rbp-80h]
  __int64 v50; // [rsp+128h] [rbp-70h]
  __int128 v51; // [rsp+130h] [rbp-68h]
  __int128 v52; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+158h] [rbp-40h]

  v7 = a1;
  v8 = (_QWORD *)qword_2544B0;
  v53 = __readfsqword(0x28u);
  LODWORD(v9) = a4;
  v10 = (_QWORD *)(qword_2544B0 + 8 * xmmword_2544B8);
  if ( (_QWORD *)qword_2544B0 != v10 )
  {
    while ( a2 != *v8 )
    {
      if ( v10 == ++v8 )
        goto LABEL_8;
    }
    if ( v8 != v10 )
      return 0;
  }
LABEL_8:
  sub_15B980((__int64)v37, a1, a2);
  v13 = *(_QWORD *)(a2 + 480);
  if ( !v13 )
  {
    v30 = (struct _Unwind_Exception *)sub_158B30(0);
    sub_169C90(v4);
    if ( v31 )
      qfree();
    sub_15B6D0(v5);
    if ( v34 )
      qfree();
    sub_15BC50((__int64)v37);
    _Unwind_Resume(v30);
  }
  v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v44 = 0;
  v45 = 0;
  v46 = -1;
  v47 = 0;
  v50 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  if ( !a3 )
  {
LABEL_35:
    if ( (unsigned int)navstack_t_stack_index() >= (unsigned int)v9 )
      goto LABEL_12;
LABEL_36:
    navstack_t_stack_index();
    goto LABEL_12;
  }
  v14 = navstack_t_stack_size();
  if ( v14 )
  {
    if ( v14 - 1 - (unsigned int)navstack_t_stack_index() >= (unsigned int)v9 )
      goto LABEL_12;
    goto LABEL_63;
  }
  if ( (_DWORD)v9 )
  {
LABEL_63:
    if ( !(unsigned int)navstack_t_stack_size() )
      goto LABEL_12;
    goto LABEL_36;
  }
LABEL_12:
  sub_10D920();
  v11 = navstack_t_stack_nav();
  if ( (_BYTE)v11 && (_QWORD)v48 )
  {
    sub_10D930();
    v15 = s1;
    if ( (_QWORD)v49 )
      v15 = *((const char **)&v48 + 1);
    v16 = sub_164530(v15);
    v18 = v16;
    if ( v16 )
    {
      v19 = *(_QWORD *)(v16 + 480);
      if ( !v19 )
        sub_158B30(0);
      v40.m128i_i64[0] = 0;
      v36 = v16 + 440;
      v40.m128i_i64[1] = -1;
      v41 = 0;
      v42 = 0;
      v39 = 0;
      if ( (__m128i *)(v16 + 440) == &v39 )
      {
        v32 = 0;
      }
      else
      {
        v39 = _mm_loadu_si128((const __m128i *)(v16 + 440));
        v40 = _mm_loadu_si128((const __m128i *)(v16 + 456));
        LODWORD(v41) = *(_DWORD *)(v16 + 472);
        v32 = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 16LL))(v19, &v44);
        v42 = v32;
      }
      sub_169320((__int64)v43, v18, 8, 0, -32768, v17);
      *(_QWORD *)&v52 = 0;
      *((_QWORD *)&v52 + 1) = v18;
      sub_161FE0(v36, &v44, &v52, 5, 1, v20);
      if ( a2 != v18 )
        sub_1758E0(TProgram::application + 136LL, v18, 1);
      sub_169C90((__int64)v43);
      if ( v32 )
        qfree();
      v21 = (__int64)v7;
      *(_QWORD *)&v52 = 0;
      *((_QWORD *)&v52 + 1) = a2;
      if ( sub_15B8E0(v7, &v52) && (int)v38 > 0 )
      {
        v7 = nullptr;
        v33 = 8LL * (unsigned int)(v38 - 1) + 8;
        while ( 1 )
        {
          v9 = *(__int64 *)((char *)v7 + *(_QWORD *)v37);
          if ( a2 != v9 )
          {
            if ( !*(_QWORD *)(v9 + 480) )
            {
              sub_158B30(v21);
              goto LABEL_35;
            }
            v23 = *(_QWORD *)(v9 + 472);
            v39 = _mm_loadu_si128((const __m128i *)(v9 + 440));
            v24 = _mm_loadu_si128((const __m128i *)(v9 + 456));
            v41 = v23;
            v42 = v48;
            v40 = v24;
            if ( (_QWORD)v48 )
              v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 16LL))(v48);
            sub_169320((__int64)v43, v9, *(_DWORD *)(v9 + 916), *(_DWORD *)(v9 + 920) | 0x10000, -32768, v22);
            *(_QWORD *)&v52 = 0;
            *((_QWORD *)&v52 + 1) = a2;
            sub_161FE0(v9 + 440, &v39, &v52, 5, 0, v25);
            sub_169C90((__int64)v43);
            v21 = v42;
            if ( v42 )
              qfree();
          }
          if ( (__int64 *)v33 == ++v7 )
            goto LABEL_39;
        }
      }
      goto LABEL_39;
    }
  }
  else
  {
    sub_8F740(
      (__int64)"Navigation failed. This can happen if the view's history was corrupted. If you suspect this is a bug, ple"
               "ase send this database to <support@hex-rays.com>",
      &v44);
    sub_10D930();
  }
  v11 = 0;
LABEL_39:
  if ( (_QWORD)v48 )
  {
    qfree();
    *(_QWORD *)&v48 = 0;
  }
  if ( *((_QWORD *)&v48 + 1) )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
    *((_QWORD *)&v48 + 1) = 0;
    *((_QWORD *)&v49 + 1) = 0;
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v48 + 1) )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  if ( (_QWORD)v48 )
    qfree();
  if ( v35 )
    qfree();
  v26 = *(_QWORD **)v37;
  if ( 8 * v38 )
  {
    do
    {
      v27 = (char *)qword_2544B0;
      v28 = (char *)(qword_2544B0 + 8 * xmmword_2544B8);
      if ( (char *)qword_2544B0 == v28 )
        goto LABEL_61;
      while ( *v26 != *(_QWORD *)v27 )
      {
        v27 += 8;
        if ( v28 == v27 )
          goto LABEL_61;
      }
      if ( v27 == v28 )
      {
LABEL_61:
        sub_8F740((__int64)"Coherency check failed: currently_being_synced.del(cur)\n");
      }
      else
      {
        memmove(v27, v27 + 8, v28 - v27 - 8);
        *(_QWORD *)&xmmword_2544B8 = xmmword_2544B8 - 1;
      }
      v29 = *(_QWORD **)v37;
      ++v26;
    }
    while ( v26 != (_QWORD *)(*(_QWORD *)v37 + 8 * v38) );
  }
  else
  {
    v29 = *(_QWORD **)v37;
  }
  if ( v29 )
  {
    v38 = 0;
    qfree();
  }
  return v11;
}

