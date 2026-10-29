__int64 __fastcall sub_36ECF0(__int64 a1)
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
  bool v22; // cl
  char v23; // bp
  __int64 v24; // r13
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // [rsp+8h] [rbp-1C0h]
  char v31; // [rsp+Eh] [rbp-1BAh]
  char v32; // [rsp+Fh] [rbp-1B9h]
  __int64 v33; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v34; // [rsp+18h] [rbp-1B0h]
  __int64 v35; // [rsp+28h] [rbp-1A0h]
  __int64 v36; // [rsp+30h] [rbp-198h]
  __int64 v37; // [rsp+38h] [rbp-190h]
  __int128 v38; // [rsp+40h] [rbp-188h]
  __int64 v39; // [rsp+50h] [rbp-178h]
  __int128 v40; // [rsp+58h] [rbp-170h]
  char v41; // [rsp+68h] [rbp-160h]
  _BYTE v42[8]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v43; // [rsp+78h] [rbp-150h]
  __int64 v44; // [rsp+80h] [rbp-148h]
  __int64 v45; // [rsp+90h] [rbp-138h]
  __int64 v46; // [rsp+98h] [rbp-130h]
  _DWORD *v47; // [rsp+C8h] [rbp-100h]
  __int64 v48; // [rsp+D0h] [rbp-F8h]
  __int64 v49; // [rsp+E0h] [rbp-E8h]
  __int64 v50; // [rsp+E8h] [rbp-E0h]
  __int64 v51; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+108h] [rbp-C0h]
  __int64 v53; // [rsp+110h] [rbp-B8h]
  __int64 v54; // [rsp+120h] [rbp-A8h]
  __int64 v55; // [rsp+128h] [rbp-A0h]
  _DWORD *v56; // [rsp+158h] [rbp-70h]
  __int64 v57; // [rsp+160h] [rbp-68h]
  __int64 v58; // [rsp+170h] [rbp-58h]
  __int64 v59; // [rsp+178h] [rbp-50h]
  unsigned __int64 v60; // [rsp+188h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936)) )
    return 64;
  v1 = *(int *)(a1 + 480);
  v32 = 1;
  if ( (_DWORD)v1 != -1 )
    v32 = sub_369E00(*(_QWORD *)(a1 + 432) + 104 * v1);
  v2 = *(_QWORD *)(a1 + 1496);
  v33 = 0;
  v35 = 0;
  v3 = *(_BYTE *)(v2 + 148) == 2;
  v41 = 16;
  v4 = v32 & v3;
  v3 = *(_QWORD *)(a1 + 464) == 0;
  v36 = 0;
  v31 = v4;
  v37 = 0;
  v39 = 0;
  v34 = 0;
  v38 = 0;
  v40 = 0;
  if ( v3 )
  {
    v13 = 256;
    if ( v4 )
      goto LABEL_13;
  }
  else
  {
    v30 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v6 < v7 + 1 )
      {
        v33 = qvector_reserve((__int64)&v33, v5, v7 + 1, 80);
        v5 = v33;
        v7 = v34;
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
      *(_QWORD *)&v34 = v34 + 1;
      v11 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(v10 + 4 * v8);
      sub_1C7740(&v51, a1, v11, *(unsigned int *)(v11 + 88));
      copy_argloc();
      cleanup_argloc();
      copy_tinfo_t();
      v12 = sub_369E00(v11);
      v8 = ++v30;
      v31 &= v12;
      if ( (unsigned __int64)v30 >= *(_QWORD *)(a1 + 464) )
        break;
      v6 = *((_QWORD *)&v34 + 1);
      v7 = v34;
      v5 = v33;
    }
    v13 = 256;
    if ( v31 )
    {
LABEL_11:
      v14 = v39;
      if ( !v39 )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  *((_QWORD *)&v38 + 1) = (int)sub_36EC70(a1);
  v13 = guess_func_cc();
  if ( v13 == 16 )
  {
    v13 = guess_func_cc();
    if ( v13 == 16 )
    {
      if ( (_QWORD)v34 )
      {
        if ( !under_debugger )
          sub_383060(51139);
        BUG();
      }
LABEL_49:
      v25 = getinf();
      v22 = v25 == 176;
      if ( v25 != 256 )
      {
        if ( v25 != 176 )
          goto LABEL_11;
        goto LABEL_51;
      }
      goto LABEL_63;
    }
  }
  if ( v13 == 112 )
  {
    if ( (getinf() & 0xF) != 6 )
      goto LABEL_47;
    v23 = getinf_flag();
    if ( v23 )
      goto LABEL_47;
    v24 = *(_QWORD *)(a1 + 1496);
    sub_D10B0((__int64)v42, v24, 0x80u);
    if ( !v50 && v48 == 1 )
    {
      sub_D10B0((__int64)&v51, v24, 0x70u);
      if ( v57 )
        v23 = *v47 == *v56;
      if ( v58 )
      {
        v59 = 0;
        qfree(v58);
      }
      if ( v56 )
      {
        v57 = 0;
        qfree((__int64)v56);
      }
      if ( v54 )
      {
        v55 = 0;
        qfree(v54);
      }
      if ( v52 )
      {
        v53 = 0;
        qfree(v52);
      }
    }
    if ( v49 )
    {
      v50 = 0;
      qfree(v49);
    }
    if ( v47 )
    {
      v48 = 0;
      qfree((__int64)v47);
    }
    if ( v45 )
    {
      v46 = 0;
      qfree(v45);
    }
    if ( v43 )
    {
      v44 = 0;
      qfree(v43);
    }
    if ( !v23 )
      goto LABEL_47;
LABEL_46:
    if ( (unsigned __int8)sub_36EA50(a1) )
    {
      v13 = 128;
      if ( *(_DWORD *)(sub_13D280((_QWORD *)a1, 0) + 88) == *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) )
        goto LABEL_11;
    }
    goto LABEL_47;
  }
  if ( v13 == 128 )
    goto LABEL_46;
  if ( v13 <= 0x10 )
    goto LABEL_49;
  v22 = v13 == 176;
  if ( v13 != 256 )
  {
    if ( v13 != 176 )
      goto LABEL_30;
LABEL_51:
    if ( (unsigned __int64)getinf() > 0x397
      || (unsigned __int8)getinf_flag()
      && (netnode_check(), v26 = netnode_altval(), v26 > 0x74)
      && ((v27 = *(_DWORD *)(get_ph() + 4)) == 0
       || (v28 = (unsigned int)(v27 - 13), (unsigned int)v28 <= 0x3B)
       && (v29 = 0x800000000000005LL, _bittest64(&v29, v28))
       && v26 != 117) )
    {
LABEL_30:
      if ( v13 - 208 > 0x2F )
        goto LABEL_11;
      goto LABEL_47;
    }
    goto LABEL_64;
  }
LABEL_63:
  if ( v22 )
    goto LABEL_51;
LABEL_64:
  if ( v32 )
    goto LABEL_30;
LABEL_47:
  v14 = v39;
  v13 = 112;
  if ( v39 )
  {
LABEL_12:
    *(_QWORD *)&v40 = 0;
    qfree(v14);
  }
LABEL_13:
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v33;
  if ( v33 )
  {
    v16 = v34;
    if ( (_QWORD)v34 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t();
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
        cleanup_argloc();
        v15 = v33;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v34 = 0;
    qfree(v15);
  }
  return v13;
}
