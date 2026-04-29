__int64 __fastcall sub_381A30(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rdi
  __int64 v9; // rax
  _DWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int8 v14; // dl
  int v15; // esi
  char v16; // al
  char v17; // dl
  unsigned int v18; // r13d
  _DWORD *v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbp
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v26; // eax
  int v27; // eax
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned int v31; // r14d
  int v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+0h] [rbp-A0h] BYREF
  _DWORD *v36; // [rsp+8h] [rbp-98h] BYREF
  __int128 v37; // [rsp+10h] [rbp-90h]
  __int64 v38; // [rsp+20h] [rbp-80h]
  __int64 v39; // [rsp+28h] [rbp-78h] BYREF
  __int64 v40; // [rsp+30h] [rbp-70h] BYREF
  __int128 v41; // [rsp+38h] [rbp-68h]
  __int64 v42; // [rsp+48h] [rbp-58h]
  __int128 v43; // [rsp+50h] [rbp-50h]
  char v44; // [rsp+60h] [rbp-40h]
  unsigned __int64 v45; // [rsp+70h] [rbp-30h]

  v7 = *a1;
  v45 = __readfsqword(0x28u);
  v44 = 16;
  v37 = 0;
  v36 = nullptr;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v42 = 0;
  v41 = 0;
  v43 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v7, 12, &v36) )
    goto LABEL_28;
  if ( a4 == -1 )
  {
    v35 = 1;
    copy_tinfo_t(&v39, &v35);
    clear_tinfo_t(&v35);
  }
  else
  {
    v9 = a4;
    if ( a4 >= (unsigned __int64)v37 )
    {
      if ( !under_debugger )
        sub_37B760(0xCCB6u, 12, 0.0);
      BUG();
    }
    v10 = &v36[20 * a4];
    if ( *v10 == 1 && v9 != (_QWORD)v37 - 1LL )
      goto LABEL_28;
    clear_tinfo_t(v10 + 16);
    v11 = *((_QWORD *)v10 + 5);
    if ( v11 )
    {
      *((_QWORD *)v10 + 6) = 0;
      qfree(v11);
    }
    v12 = *((_QWORD *)v10 + 2);
    if ( v12 )
    {
      *((_QWORD *)v10 + 3) = 0;
      qfree(v12);
    }
    cleanup_argloc(v10);
    memmove(v10, v10 + 20, (char *)&v36[20 * v37] - (char *)v10 - 80);
    *(_QWORD *)&v37 = v37 - 1;
  }
  LOBYTE(v13) = v44 & 0xF0;
  if ( (v44 & 0xF0) == 0xC0 )
  {
    v13 = HIDWORD(v38);
    if ( HIDWORD(v38) > 0x10 )
    {
LABEL_14:
      if ( (unsigned int)(v13 - 208) <= 0x2F )
        goto LABEL_21;
      goto LABEL_15;
    }
  }
  else if ( (unsigned __int8)v13 > 0x10u )
  {
    v13 = (unsigned __int8)v13;
    goto LABEL_14;
  }
  v27 = getinf(99);
  v13 = HIDWORD(v38);
  v14 = v44 & 0xF0;
  if ( (unsigned int)(v27 - 208) > 0x2F )
  {
    if ( v14 != 0xC0 )
      v13 = v14;
    if ( (unsigned int)v13 <= 0x10 )
      v13 = (unsigned int)getinf(99);
LABEL_15:
    if ( (unsigned __int8)sub_381580((__int64)&v36, v13, 0.0) )
      goto LABEL_50;
    LODWORD(v13) = HIDWORD(v38);
    v14 = v44 & 0xF0;
  }
  if ( v14 != 0xC0 )
    LODWORD(v13) = v14;
  if ( (unsigned int)v13 <= 0x10 )
    LODWORD(v13) = getinf(99);
LABEL_21:
  v15 = v13 & 0xFFFFFFF0;
  if ( v15 != 64 && v15 != 208 || !(_QWORD)v37 )
  {
    if ( (unsigned __int8)sub_381580((__int64)&v36, 16, 0.0) )
      goto LABEL_50;
    if ( !(_QWORD)v37 )
      goto LABEL_46;
    if ( (unsigned int)(*v36 - 3) <= 1 )
    {
      if ( (unsigned __int8)sub_381580((__int64)&v36, 112, 0.0) )
        goto LABEL_50;
      v28 = sub_381580((__int64)&v36, 128, 0.0);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 112) + 48LL) & 8) != 0 && (unsigned __int8)sub_381580((__int64)&v36, 48, 0.0) )
        goto LABEL_50;
      if ( (_DWORD)v40 != 1 )
      {
LABEL_46:
        v16 = v44;
        if ( (v44 & 0xF0) == 0xC0 )
        {
          if ( (unsigned int)(HIDWORD(v38) - 208) <= 0x2F )
            goto LABEL_50;
        }
        else if ( (v44 & 0xF0u) - 208 <= 0x2F )
        {
          goto LABEL_50;
        }
        v17 = -16;
        goto LABEL_49;
      }
      if ( !(unsigned __int8)getinf_flag(3, 4)
        || (netnode_check(&v35, "$ golang", 0, 0), v30 = v35, v31 = netnode_altval(v35, 0, 65), v31 <= 0x74)
        || (v32 = *(_DWORD *)(get_ph(v30) + 4)) != 0
        && ((v33 = (unsigned int)(v32 - 13), (unsigned int)v33 > 0x3B)
         || (v34 = 0x800000000000005LL, !_bittest64(&v34, v33))
         || v31 == 117) )
      {
        v29 = 176;
        if ( (unsigned __int8)sub_381580((__int64)&v36, 256, 0.0) )
          goto LABEL_50;
      }
      else
      {
        if ( (unsigned __int8)sub_381580((__int64)&v36, 176, 0.0) )
          goto LABEL_50;
        v29 = 256;
      }
      v28 = sub_381580((__int64)&v36, v29, 0.0);
    }
    if ( v28 )
      goto LABEL_50;
    goto LABEL_46;
  }
  if ( (unsigned __int8)sub_381580((__int64)&v36, 64, 0.0) )
    goto LABEL_50;
  v16 = v44;
  if ( (v44 & 0xF0) != 0xC0 )
  {
    if ( (v44 & 0xF0u) - 208 <= 0x2F )
      goto LABEL_50;
    goto LABEL_27;
  }
  if ( (unsigned int)(HIDWORD(v38) - 208) > 0x2F )
  {
LABEL_27:
    v17 = -48;
LABEL_49:
    HIDWORD(v38) = 0;
    v44 = v17 | v16 & 0xF;
  }
LABEL_50:
  if ( !(unsigned __int8)create_tinfo(a1, 12, 12, &v36) )
  {
LABEL_28:
    v18 = 0;
    goto LABEL_29;
  }
  LOBYTE(v26) = sub_325640(a1, a2, a3);
  v18 = v26;
LABEL_29:
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  cleanup_argloc(&v40);
  clear_tinfo_t(&v39);
  v19 = v36;
  if ( v36 )
  {
    v20 = v37;
    if ( (_QWORD)v37 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[20 * v21];
        clear_tinfo_t(v22 + 8);
        v23 = v22[5];
        if ( v23 )
        {
          v22[6] = 0;
          qfree(v23);
        }
        v24 = v22[2];
        if ( v24 )
        {
          v22[3] = 0;
          qfree(v24);
        }
        ++v21;
        cleanup_argloc(v22);
        v19 = v36;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v37 = 0;
    qfree(v19);
  }
  return v18;
}
