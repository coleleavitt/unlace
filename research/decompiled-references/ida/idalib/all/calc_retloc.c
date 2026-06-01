__int64 __fastcall calc_retloc(__int64 a1)
{
  char v1; // al
  unsigned __int8 v3; // al
  unsigned int v4; // ebp
  unsigned int v5; // r12d
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  char *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r13
  char *v16; // r12
  void *v17; // rdi
  void *v18; // rdi
  char *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbp
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rax
  const void *v26; // rsi
  __int64 v27; // r14
  char *v28; // rax
  char *i; // r12
  char *v30; // r12
  __int64 v31; // r13
  void *v32; // rax
  void *v33; // rax
  void *v34; // rdi
  unsigned int v35; // r12d
  int v36; // eax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  size_t na; // [rsp+8h] [rbp-B0h]
  size_t n; // [rsp+8h] [rbp-B0h]
  void *v41; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+18h] [rbp-A0h]
  __int64 v43; // [rsp+28h] [rbp-90h]
  __int64 v44; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v45[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v46; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-68h]
  __int128 v48; // [rsp+58h] [rbp-60h]
  char v49; // [rsp+68h] [rbp-50h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 88);
  v50 = __readfsqword(0x28u);
  v3 = v1 & 0xF0;
  if ( v3 == 0xC0 )
  {
    v4 = *(_DWORD *)(a1 + 28);
    if ( v4 > 0x10 )
      goto LABEL_13;
  }
  else if ( v3 > 0x10u )
  {
    v4 = v3;
    if ( v3 != 0xB0 )
      return sub_3792E0(0x7D8u, a1 + 40, a1 + 32, v4) >= 0;
    v4 = 176;
    if ( (unsigned __int64)getinf(88) > 0x397 )
      return sub_3792E0(0x7D8u, a1 + 40, a1 + 32, v4) >= 0;
LABEL_58:
    if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      netnode_check(&v41, "$ golang", 0, 0);
      v34 = v41;
      v35 = netnode_altval(v41, 0, 65);
      if ( v35 > 0x74 )
      {
        v36 = *(_DWORD *)(get_ph(v34, nullptr) + 4);
        if ( !v36 )
          goto LABEL_16;
        v37 = (unsigned int)(v36 - 13);
        if ( (unsigned int)v37 <= 0x3B )
        {
          v38 = 0x800000000000005LL;
          if ( _bittest64(&v38, v37) )
          {
            if ( v35 != 117 )
              goto LABEL_16;
          }
        }
      }
    }
    goto LABEL_21;
  }
  v4 = getinf(99);
  if ( v4 <= 0x10 )
  {
    v7 = getinf(99);
    if ( v7 != 256 )
    {
      if ( v7 != 176 )
        goto LABEL_9;
      goto LABEL_57;
    }
    goto LABEL_21;
  }
LABEL_13:
  if ( v4 == 176 )
  {
LABEL_57:
    if ( (unsigned __int64)getinf(88) <= 0x397 )
      goto LABEL_58;
LABEL_9:
    if ( (v4 & 0xFFFFFF0F) != 0 )
      goto LABEL_10;
    return sub_3792E0(0x7D8u, a1 + 40, a1 + 32, v4) >= 0;
  }
  if ( v4 == 256 )
  {
LABEL_21:
    v9 = *(_QWORD *)(a1 + 8);
    v41 = nullptr;
    v42 = 0;
    if ( v9 )
    {
      v27 = 0;
      v28 = (char *)qalloc_or_throw(80 * v9);
      *((_QWORD *)&v42 + 1) = v9;
      v41 = v28;
      for ( i = v28; ; i = (char *)v41 )
      {
        v30 = &i[80 * v27];
        v31 = *(_QWORD *)a1 + 80 * v27;
        *(_DWORD *)v30 = 0;
        copy_argloc(v30, v31);
        *((_QWORD *)v30 + 2) = 0;
        *(_OWORD *)(v30 + 24) = 0;
        if ( *(_QWORD *)(v31 + 24) )
        {
          na = *(_QWORD *)(v31 + 24);
          v32 = (void *)qalloc_or_throw(na);
          *((_QWORD *)v30 + 2) = v32;
          *((_QWORD *)v30 + 4) = na;
          memcpy(v32, *(const void **)(v31 + 16), na);
          *((_QWORD *)v30 + 3) = na;
        }
        *((_QWORD *)v30 + 5) = 0;
        *((_OWORD *)v30 + 3) = 0;
        if ( *(_QWORD *)(v31 + 48) )
        {
          n = *(_QWORD *)(v31 + 48);
          v33 = (void *)qalloc_or_throw(n);
          *((_QWORD *)v30 + 5) = v33;
          *((_QWORD *)v30 + 7) = n;
          memcpy(v33, *(const void **)(v31 + 40), n);
          *((_QWORD *)v30 + 6) = n;
        }
        *((_QWORD *)v30 + 8) = 0;
        copy_tinfo_t(v30 + 64);
        ++v27;
        *((_DWORD *)v30 + 18) = *(_DWORD *)(v31 + 72);
        if ( v9 == v27 )
          break;
      }
      *(_QWORD *)&v42 = v9;
    }
    v10 = *(_QWORD *)(a1 + 24);
    v44 = 0;
    v43 = v10;
    copy_tinfo_t(&v44);
    v45[0] = 0;
    copy_argloc(v45, a1 + 40);
    v11 = *(_QWORD *)(a1 + 56);
    v12 = *(_QWORD *)(a1 + 72);
    ptr = nullptr;
    v48 = 0;
    v46 = v11;
    if ( v12 )
    {
      v25 = (void *)qalloc_or_throw(8 * v12);
      v26 = *(const void **)(a1 + 64);
      ptr = v25;
      *((_QWORD *)&v48 + 1) = v12;
      memcpy(v25, v26, 8 * v12);
      *(_QWORD *)&v48 = v12;
    }
    v49 = *(_BYTE *)(a1 + 88);
    v5 = calc_arglocs(&v41);
    if ( (_BYTE)v5 )
    {
      copy_argloc(a1 + 40, v45);
      if ( ptr )
      {
        *(_QWORD *)&v48 = 0;
        qfree(ptr);
      }
      cleanup_argloc(v45);
      clear_tinfo_t(&v44);
      v19 = (char *)v41;
      if ( v41 )
      {
        v20 = v42;
        if ( (_QWORD)v42 )
        {
          v21 = 0;
          do
          {
            v22 = &v19[80 * v21];
            clear_tinfo_t(v22 + 64);
            v23 = *((void **)v22 + 5);
            if ( v23 )
            {
              *((_QWORD *)v22 + 6) = 0;
              qfree(v23);
            }
            v24 = *((void **)v22 + 2);
            if ( v24 )
            {
              *((_QWORD *)v22 + 3) = 0;
              qfree(v24);
            }
            ++v21;
            cleanup_argloc(v22);
            v19 = (char *)v41;
          }
          while ( v20 != v21 );
        }
        *(_QWORD *)&v42 = 0;
        qfree(v19);
      }
      return v5;
    }
    if ( ptr )
    {
      *(_QWORD *)&v48 = 0;
      qfree(ptr);
    }
    cleanup_argloc(v45);
    clear_tinfo_t(&v44);
    v13 = (char *)v41;
    if ( v41 )
    {
      v14 = v42;
      if ( (_QWORD)v42 )
      {
        v15 = 0;
        do
        {
          v16 = &v13[80 * v15];
          clear_tinfo_t(v16 + 64);
          v17 = *((void **)v16 + 5);
          if ( v17 )
          {
            *((_QWORD *)v16 + 6) = 0;
            qfree(v17);
          }
          v18 = *((void **)v16 + 2);
          if ( v18 )
          {
            *((_QWORD *)v16 + 3) = 0;
            qfree(v18);
          }
          ++v15;
          cleanup_argloc(v16);
          v13 = (char *)v41;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v42 = 0;
      qfree(v13);
      if ( v4 > 0xFF )
        return sub_3792E0(0x7D8u, a1 + 40, a1 + 32, v4) >= 0;
      goto LABEL_9;
    }
LABEL_16:
    if ( v4 > 0xFF )
      return sub_3792E0(0x7D8u, a1 + 40, a1 + 32, v4) >= 0;
    goto LABEL_9;
  }
  if ( v4 <= 0x1FF )
    goto LABEL_16;
LABEL_10:
  get_custom_callcnv(v4);
  if ( !v8 )
    return 0;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a1);
}
