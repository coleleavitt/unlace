__int64 __fastcall sub_369A70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbp
  char v12; // al
  unsigned int v13; // ebp
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v22; // eax
  __int64 v23; // rsi
  unsigned int v24; // r12d
  bool v25; // cl
  char v26; // bp
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // rdi
  unsigned int v30; // ebx
  int v31; // eax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // [rsp+8h] [rbp-1C0h]
  char v35; // [rsp+Eh] [rbp-1BAh]
  char v36; // [rsp+Fh] [rbp-1B9h]
  __int64 v37; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v38; // [rsp+18h] [rbp-1B0h]
  __int64 v39; // [rsp+28h] [rbp-1A0h]
  __int64 v40; // [rsp+30h] [rbp-198h] BYREF
  __int64 v41; // [rsp+38h] [rbp-190h] BYREF
  __int128 v42; // [rsp+40h] [rbp-188h]
  __int64 v43; // [rsp+50h] [rbp-178h]
  __int128 v44; // [rsp+58h] [rbp-170h]
  char v45; // [rsp+68h] [rbp-160h]
  char v46[8]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v47; // [rsp+78h] [rbp-150h]
  __int64 v48; // [rsp+80h] [rbp-148h]
  __int64 v49; // [rsp+90h] [rbp-138h]
  __int64 v50; // [rsp+98h] [rbp-130h]
  _DWORD *v51; // [rsp+C8h] [rbp-100h]
  __int64 v52; // [rsp+D0h] [rbp-F8h]
  __int64 v53; // [rsp+E0h] [rbp-E8h]
  __int64 v54; // [rsp+E8h] [rbp-E0h]
  __int64 v55; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+108h] [rbp-C0h]
  __int64 v57; // [rsp+110h] [rbp-B8h]
  __int64 v58; // [rsp+120h] [rbp-A8h]
  __int64 v59; // [rsp+128h] [rbp-A0h]
  _DWORD *v60; // [rsp+158h] [rbp-70h]
  __int64 v61; // [rsp+160h] [rbp-68h]
  __int64 v62; // [rsp+170h] [rbp-58h]
  __int64 v63; // [rsp+178h] [rbp-50h]
  unsigned __int64 v64; // [rsp+188h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936)) )
    return 64;
  v1 = *(int *)(a1 + 480);
  v36 = 1;
  if ( (_DWORD)v1 != -1 )
    v36 = sub_364B80(*(_QWORD *)(a1 + 432) + 104 * v1);
  v2 = *(_QWORD *)(a1 + 1496);
  v37 = 0;
  v39 = 0;
  v3 = *(_BYTE *)(v2 + 148) == 2;
  v45 = 16;
  v4 = v36 & v3;
  v3 = *(_QWORD *)(a1 + 464) == 0;
  v40 = 0;
  v35 = v4;
  v41 = 0;
  v43 = 0;
  v38 = 0;
  v42 = 0;
  v44 = 0;
  if ( v3 )
  {
    v13 = 256;
    if ( v4 )
      goto LABEL_13;
  }
  else
  {
    v34 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v6 < v7 + 1 )
      {
        v37 = qvector_reserve(&v37, v5, v7 + 1, 80);
        v5 = v37;
        v7 = v38;
      }
      v9 = v5 + 80 * v7;
      *(_DWORD *)v9 = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 64) = 0;
      *(_DWORD *)(v9 + 72) = 0;
      *(_OWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 48) = 0;
      v10 = *(_QWORD *)(a1 + 456);
      *(_QWORD *)&v38 = v38 + 1;
      v11 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(v10 + 4 * v8);
      sub_1C30C0(&v55, a1, v11, *(_DWORD *)(v11 + 88));
      copy_argloc(v9, &v55);
      cleanup_argloc(&v55);
      copy_tinfo_t(v9 + 64, v11 + 80);
      v12 = sub_364B80(v11);
      v8 = ++v34;
      v35 &= v12;
      if ( (unsigned __int64)v34 >= *(_QWORD *)(a1 + 464) )
        break;
      v6 = *((_QWORD *)&v38 + 1);
      v7 = v38;
      v5 = v37;
    }
    v13 = 256;
    if ( v35 )
    {
LABEL_11:
      v14 = v43;
      if ( !v43 )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  v22 = sub_3699F0(a1);
  v23 = *(unsigned int *)(a1 + 68);
  *((_QWORD *)&v42 + 1) = v22;
  v24 = (*(int *)(*(_QWORD *)(a1 + 1504) + 48LL) >> 3) & 1 | 6;
  v13 = guess_func_cc(&v37, v23, v24);
  if ( v13 == 16 )
  {
    v13 = guess_func_cc(&v37, 0, v24);
    if ( v13 == 16 )
    {
      if ( (_QWORD)v38 )
      {
        if ( !under_debugger )
          sub_37DDE0(51139);
        BUG();
      }
LABEL_49:
      v28 = getinf(99);
      v25 = v28 == 176;
      if ( v28 != 256 )
      {
        if ( v28 != 176 )
          goto LABEL_11;
        goto LABEL_51;
      }
      goto LABEL_63;
    }
  }
  if ( v13 == 112 )
  {
    if ( (getinf(57) & 0xF) != 6 )
      goto LABEL_47;
    v26 = getinf_flag(3, 4);
    if ( v26 )
      goto LABEL_47;
    v27 = *(_QWORD *)(a1 + 1496);
    sub_CCBF0((__int64)v46, v27, 0x80u);
    if ( !v54 && v52 == 1 )
    {
      sub_CCBF0((__int64)&v55, v27, 0x70u);
      if ( v61 )
        v26 = *v51 == *v60;
      if ( v62 )
      {
        v63 = 0;
        qfree(v62);
      }
      if ( v60 )
      {
        v61 = 0;
        qfree(v60);
      }
      if ( v58 )
      {
        v59 = 0;
        qfree(v58);
      }
      if ( v56 )
      {
        v57 = 0;
        qfree(v56);
      }
    }
    if ( v53 )
    {
      v54 = 0;
      qfree(v53);
    }
    if ( v51 )
    {
      v52 = 0;
      qfree(v51);
    }
    if ( v49 )
    {
      v50 = 0;
      qfree(v49);
    }
    if ( v47 )
    {
      v48 = 0;
      qfree(v47);
    }
    if ( !v26 )
      goto LABEL_47;
LABEL_46:
    if ( (unsigned __int8)sub_3697D0(a1) )
    {
      v13 = 128;
      if ( *(_DWORD *)(sub_138DC0((_QWORD *)a1, 0) + 88) == *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) )
        goto LABEL_11;
    }
    goto LABEL_47;
  }
  if ( v13 == 128 )
    goto LABEL_46;
  if ( v13 <= 0x10 )
    goto LABEL_49;
  v25 = v13 == 176;
  if ( v13 != 256 )
  {
    if ( v13 != 176 )
      goto LABEL_30;
LABEL_51:
    if ( (unsigned __int64)getinf(88) > 0x397
      || (unsigned __int8)getinf_flag(3, 4)
      && (netnode_check(&v55, "$ golang", 0, 0), v29 = v55, v30 = netnode_altval(v55, 0, 65), v30 > 0x74)
      && ((v31 = *(_DWORD *)(get_ph(v29) + 4)) == 0
       || (v32 = (unsigned int)(v31 - 13), (unsigned int)v32 <= 0x3B)
       && (v33 = 0x800000000000005LL, _bittest64(&v33, v32))
       && v30 != 117) )
    {
LABEL_30:
      if ( v13 - 208 > 0x2F )
        goto LABEL_11;
      goto LABEL_47;
    }
    goto LABEL_64;
  }
LABEL_63:
  if ( v25 )
    goto LABEL_51;
LABEL_64:
  if ( v36 )
    goto LABEL_30;
LABEL_47:
  v14 = v43;
  v13 = 112;
  if ( v43 )
  {
LABEL_12:
    *(_QWORD *)&v44 = 0;
    qfree(v14);
  }
LABEL_13:
  cleanup_argloc(&v41);
  clear_tinfo_t(&v40);
  v15 = v37;
  if ( v37 )
  {
    v16 = v38;
    if ( (_QWORD)v38 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t(v18 + 8);
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc(v18);
        v15 = v37;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v38 = 0;
    qfree(v15);
  }
  return v13;
}
