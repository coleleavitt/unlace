__int64 __fastcall calc_retloc(__int64 a1, const char *a2)
{
  char v2; // al
  unsigned __int8 v4; // al
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  int v8; // eax
  __int64 custom_callcnv; // rdi
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r12
  char *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r13
  char *v17; // r12
  void *v18; // rdi
  void *v19; // rdi
  char *v20; // rdi
  __int64 v21; // r13
  __int64 v22; // rbp
  char *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // r14
  char *v29; // rax
  char *i; // r12
  char *v31; // r12
  __int64 v32; // r13
  const void *v33; // rsi
  void *v34; // rax
  void *v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // r12d
  int v38; // eax
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  size_t na; // [rsp+8h] [rbp-B0h]
  size_t n; // [rsp+8h] [rbp-B0h]
  void *v43; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+18h] [rbp-A0h]
  __int64 v45; // [rsp+28h] [rbp-90h]
  __int64 v46; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v47[6]; // [rsp+38h] [rbp-80h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h]
  __int128 v49; // [rsp+58h] [rbp-60h]
  char v50; // [rsp+68h] [rbp-50h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 88);
  v51 = __readfsqword(0x28u);
  v4 = v2 & 0xF0;
  if ( v4 == 0xC0 )
  {
    v5 = *(_DWORD *)(a1 + 28);
    if ( v5 > 0x10 )
      goto LABEL_13;
  }
  else if ( v4 > 0x10u )
  {
    v5 = v4;
    if ( v4 != 0xB0 )
      return sub_375980(0x7D8u, a1 + 40, a1 + 32, v5) >= 0;
    v5 = 176;
    if ( (unsigned __int64)getinf(88) > 0x397 )
      return sub_375980(0x7D8u, a1 + 40, a1 + 32, v5) >= 0;
LABEL_58:
    a2 = &byte_4;
    if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      netnode_check(&v43, "$ golang", 0, 0);
      v36 = (unsigned int)v43;
      a2 = nullptr;
      v37 = netnode_altval((unsigned int)v43, 0, 65);
      if ( v37 > 0x74 )
      {
        v38 = *(_DWORD *)(get_ph(v36, nullptr) + 4);
        if ( !v38 )
          goto LABEL_16;
        v39 = (unsigned int)(v38 - 13);
        if ( (unsigned int)v39 <= 0x3B )
        {
          v40 = 0x800000000000005LL;
          if ( _bittest64(&v40, v39) )
          {
            if ( v37 != 117 )
              goto LABEL_16;
          }
        }
      }
    }
    goto LABEL_21;
  }
  v5 = getinf(99);
  if ( v5 <= 0x10 )
  {
    v8 = getinf(99);
    if ( v8 != 256 )
    {
      if ( v8 != 176 )
        goto LABEL_9;
      goto LABEL_57;
    }
    goto LABEL_21;
  }
LABEL_13:
  if ( v5 == 176 )
  {
LABEL_57:
    if ( (unsigned __int64)getinf(88) <= 0x397 )
      goto LABEL_58;
LABEL_9:
    if ( (v5 & 0xFFFFFF0F) != 0 )
      goto LABEL_10;
    return sub_375980(0x7D8u, a1 + 40, a1 + 32, v5) >= 0;
  }
  if ( v5 == 256 )
  {
LABEL_21:
    v10 = *(_QWORD *)(a1 + 8);
    v43 = nullptr;
    v44 = 0;
    if ( v10 )
    {
      v28 = 0;
      v29 = (char *)qalloc_or_throw(80 * v10, a2);
      *((_QWORD *)&v44 + 1) = v10;
      v43 = v29;
      for ( i = v29; ; i = (char *)v43 )
      {
        v31 = &i[80 * v28];
        v32 = *(_QWORD *)a1 + 80 * v28;
        *(_DWORD *)v31 = 0;
        v33 = (const void *)v32;
        copy_argloc(v31, v32);
        *((_QWORD *)v31 + 2) = 0;
        *(_OWORD *)(v31 + 24) = 0;
        if ( *(_QWORD *)(v32 + 24) )
        {
          na = *(_QWORD *)(v32 + 24);
          v34 = (void *)qalloc_or_throw(na, (const char *)v32);
          *((_QWORD *)v31 + 2) = v34;
          *((_QWORD *)v31 + 4) = na;
          v33 = *(const void **)(v32 + 16);
          memcpy(v34, v33, na);
          *((_QWORD *)v31 + 3) = na;
        }
        *((_QWORD *)v31 + 5) = 0;
        *((_OWORD *)v31 + 3) = 0;
        if ( *(_QWORD *)(v32 + 48) )
        {
          n = *(_QWORD *)(v32 + 48);
          v35 = (void *)qalloc_or_throw(n, (const char *)v33);
          *((_QWORD *)v31 + 5) = v35;
          *((_QWORD *)v31 + 7) = n;
          memcpy(v35, *(const void **)(v32 + 40), n);
          *((_QWORD *)v31 + 6) = n;
        }
        *((_QWORD *)v31 + 8) = 0;
        copy_tinfo_t(v31 + 64);
        ++v28;
        *((_DWORD *)v31 + 18) = *(_DWORD *)(v32 + 72);
        if ( v10 == v28 )
          break;
      }
      *(_QWORD *)&v44 = v10;
    }
    v11 = *(_QWORD *)(a1 + 24);
    v46 = 0;
    v45 = v11;
    copy_tinfo_t(&v46);
    v47[0] = 0;
    copy_argloc(v47, a1 + 40);
    v12 = *(_DWORD *)(a1 + 56);
    v13 = *(_QWORD *)(a1 + 72);
    ptr = nullptr;
    v49 = 0;
    v47[4] = v12;
    if ( v13 )
    {
      v26 = (void *)qalloc_or_throw(8 * v13, (const char *)(a1 + 40));
      v27 = *(const void **)(a1 + 64);
      ptr = v26;
      *((_QWORD *)&v49 + 1) = v13;
      memcpy(v26, v27, 8 * v13);
      *(_QWORD *)&v49 = v13;
    }
    v50 = *(_BYTE *)(a1 + 88);
    v6 = calc_arglocs(&v43);
    if ( (_BYTE)v6 )
    {
      copy_argloc(a1 + 40, v47);
      if ( ptr )
      {
        *(_QWORD *)&v49 = 0;
        qfree(ptr);
      }
      cleanup_argloc(v47);
      clear_tinfo_t(&v46);
      v20 = (char *)v43;
      if ( v43 )
      {
        v21 = v44;
        if ( (_QWORD)v44 )
        {
          v22 = 0;
          do
          {
            v23 = &v20[80 * v22];
            clear_tinfo_t(v23 + 64);
            v24 = *((void **)v23 + 5);
            if ( v24 )
            {
              *((_QWORD *)v23 + 6) = 0;
              qfree(v24);
            }
            v25 = *((void **)v23 + 2);
            if ( v25 )
            {
              *((_QWORD *)v23 + 3) = 0;
              qfree(v25);
            }
            ++v22;
            cleanup_argloc(v23);
            v20 = (char *)v43;
          }
          while ( v21 != v22 );
        }
        *(_QWORD *)&v44 = 0;
        qfree(v20);
      }
      return v6;
    }
    if ( ptr )
    {
      *(_QWORD *)&v49 = 0;
      qfree(ptr);
    }
    cleanup_argloc(v47);
    clear_tinfo_t(&v46);
    v14 = (char *)v43;
    if ( v43 )
    {
      v15 = v44;
      if ( (_QWORD)v44 )
      {
        v16 = 0;
        do
        {
          v17 = &v14[80 * v16];
          clear_tinfo_t(v17 + 64);
          v18 = *((void **)v17 + 5);
          if ( v18 )
          {
            *((_QWORD *)v17 + 6) = 0;
            qfree(v18);
          }
          v19 = *((void **)v17 + 2);
          if ( v19 )
          {
            *((_QWORD *)v17 + 3) = 0;
            qfree(v19);
          }
          ++v16;
          cleanup_argloc(v17);
          v14 = (char *)v43;
        }
        while ( v15 != v16 );
      }
      *(_QWORD *)&v44 = 0;
      qfree(v14);
      if ( v5 > 0xFF )
        return sub_375980(0x7D8u, a1 + 40, a1 + 32, v5) >= 0;
      goto LABEL_9;
    }
LABEL_16:
    if ( v5 > 0xFF )
      return sub_375980(0x7D8u, a1 + 40, a1 + 32, v5) >= 0;
    goto LABEL_9;
  }
  if ( v5 <= 0x1FF )
    goto LABEL_16;
LABEL_10:
  custom_callcnv = get_custom_callcnv(v5);
  if ( !custom_callcnv )
    return 0;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)custom_callcnv + 8LL))(custom_callcnv, a1);
}

