__int64 __fastcall sub_389330(_BYTE *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  _DWORD *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // esi
  char v15; // al
  char v16; // dl
  unsigned int v17; // r13d
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rsi
  unsigned int v37; // r14d
  int v38; // eax
  unsigned __int64 v39; // rax
  _DWORD *v40; // [rsp+8h] [rbp-98h] BYREF
  __int128 v41; // [rsp+10h] [rbp-90h]
  __int64 v42; // [rsp+20h] [rbp-80h]
  __int64 v43; // [rsp+28h] [rbp-78h]
  __int64 v44; // [rsp+30h] [rbp-70h]
  __int128 v45; // [rsp+38h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-58h]
  __int128 v47; // [rsp+50h] [rbp-50h]
  char v48; // [rsp+60h] [rbp-40h]
  unsigned __int64 v49; // [rsp+70h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  v48 = 16;
  v41 = 0;
  v40 = nullptr;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v46 = 0;
  v45 = 0;
  v47 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
    goto LABEL_28;
  if ( a4 == -1 )
  {
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v7 = a4;
    if ( a4 >= (unsigned __int64)v41 )
    {
      if ( !under_debugger )
        sub_383060(0xCCB6u, 0.0);
      BUG();
    }
    v8 = &v40[20 * a4];
    if ( *v8 == 1 && v7 != (_QWORD)v41 - 1LL )
      goto LABEL_28;
    clear_tinfo_t();
    v9 = *((_QWORD *)v8 + 5);
    if ( v9 )
    {
      *((_QWORD *)v8 + 6) = 0;
      qfree(v9);
    }
    v10 = *((_QWORD *)v8 + 2);
    if ( v10 )
    {
      *((_QWORD *)v8 + 3) = 0;
      qfree(v10);
    }
    cleanup_argloc();
    memmove(v8, v8 + 20, (char *)&v40[20 * v41] - (char *)v8 - 80);
    *(_QWORD *)&v41 = v41 - 1;
  }
  LOBYTE(v13) = v48 & 0xF0;
  if ( (v48 & 0xF0) == 0xC0 )
  {
    v13 = HIDWORD(v42);
    if ( HIDWORD(v42) > 0x10 )
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
  v28 = getinf();
  v13 = HIDWORD(v42);
  v11 = (unsigned __int8)v48 & 0xF0;
  if ( (unsigned int)(v28 - 208) > 0x2F )
  {
    if ( (v48 & 0xF0) != 0xC0 )
      v13 = (unsigned __int8)v48 & 0xF0;
    if ( (unsigned int)v13 <= 0x10 )
      v13 = (unsigned int)getinf();
LABEL_15:
    if ( (unsigned __int8)sub_388E80((__int64)&v40, v13, v11, v12, 0.0) )
      goto LABEL_50;
    LODWORD(v13) = HIDWORD(v42);
    v11 = (unsigned __int8)v48 & 0xF0;
  }
  if ( (_BYTE)v11 != 0xC0 )
    LODWORD(v13) = (unsigned __int8)v11;
  if ( (unsigned int)v13 <= 0x10 )
    LODWORD(v13) = getinf();
LABEL_21:
  v14 = v13 & 0xFFFFFFF0;
  if ( v14 != 64 && v14 != 208 || !(_QWORD)v41 )
  {
    if ( (unsigned __int8)sub_388E80((__int64)&v40, 16, v11, v12, 0.0) )
      goto LABEL_50;
    if ( !(_QWORD)v41 )
      goto LABEL_46;
    if ( (unsigned int)(*v40 - 3) <= 1 )
    {
      if ( (unsigned __int8)sub_388E80((__int64)&v40, 112, v25, v26, 0.0) )
        goto LABEL_50;
      v31 = sub_388E80((__int64)&v40, 128, v29, v30, 0.0);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 112) + 48LL) & 8) != 0
        && (unsigned __int8)sub_388E80((__int64)&v40, 48, v25, v26, 0.0) )
      {
        goto LABEL_50;
      }
      if ( (_DWORD)v44 != 1 )
      {
LABEL_46:
        v15 = v48;
        if ( (v48 & 0xF0) == 0xC0 )
        {
          if ( (unsigned int)(HIDWORD(v42) - 208) <= 0x2F )
            goto LABEL_50;
        }
        else if ( (v48 & 0xF0u) - 208 <= 0x2F )
        {
          goto LABEL_50;
        }
        v16 = -16;
        goto LABEL_49;
      }
      if ( !(unsigned __int8)getinf_flag()
        || (netnode_check(), v37 = netnode_altval(), v37 <= 0x74)
        || (v38 = *(_DWORD *)(get_ph() + 4)) != 0
        && ((v39 = (unsigned int)(v38 - 13), (unsigned int)v39 > 0x3B)
         || (v32 = 0x800000000000005LL, !_bittest64(&v32, v39))
         || v37 == 117) )
      {
        v36 = 176;
        if ( (unsigned __int8)sub_388E80((__int64)&v40, 256, v32, v33, 0.0) )
          goto LABEL_50;
      }
      else
      {
        if ( (unsigned __int8)sub_388E80((__int64)&v40, 176, v32, v33, 0.0) )
          goto LABEL_50;
        v36 = 256;
      }
      v31 = sub_388E80((__int64)&v40, v36, v34, v35, 0.0);
    }
    if ( v31 )
      goto LABEL_50;
    goto LABEL_46;
  }
  if ( (unsigned __int8)sub_388E80((__int64)&v40, 64, v11, v12, 0.0) )
    goto LABEL_50;
  v15 = v48;
  if ( (v48 & 0xF0) != 0xC0 )
  {
    if ( (v48 & 0xF0u) - 208 <= 0x2F )
      goto LABEL_50;
    goto LABEL_27;
  }
  if ( (unsigned int)(HIDWORD(v42) - 208) > 0x2F )
  {
LABEL_27:
    v16 = -48;
LABEL_49:
    HIDWORD(v42) = 0;
    v48 = v16 | v15 & 0xF;
  }
LABEL_50:
  if ( !(unsigned __int8)create_tinfo() )
  {
LABEL_28:
    v17 = 0;
    goto LABEL_29;
  }
  LOBYTE(v27) = sub_32CB80(a1, a2);
  v17 = v27;
LABEL_29:
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v18 = (__int64)v40;
  if ( v40 )
  {
    v19 = v41;
    if ( (_QWORD)v41 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 80 * v20);
        clear_tinfo_t();
        v22 = v21[5];
        if ( v22 )
        {
          v21[6] = 0;
          qfree(v22);
        }
        v23 = v21[2];
        if ( v23 )
        {
          v21[3] = 0;
          qfree(v23);
        }
        ++v20;
        cleanup_argloc();
        v18 = (__int64)v40;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v18);
  }
  return v17;
}
