__int64 __fastcall sub_5ABA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rbp
  _QWORD *v13; // r13
  void *v14; // rdi
  _QWORD **v15; // rbp
  void *v16; // rdi
  bool v17; // zf
  __int64 v20; // rax
  const char *v21; // rdx
  __int64 i; // r13
  char **v23; // rdi
  __int64 v24; // r13
  _QWORD *v25; // r14
  void *v26; // rdi
  char *v27; // rdx
  __int64 v28; // r14
  __int64 j; // r13
  char *v30; // rax
  void *v31; // rdi
  void *v32; // rax
  void *v33; // rax
  char **v34; // rdi
  void *v35; // rcx
  void *na; // [rsp+0h] [rbp-F8h]
  size_t nb; // [rsp+0h] [rbp-F8h]
  void *v39; // [rsp+8h] [rbp-F0h]
  __int64 (__fastcall **v40)(); // [rsp+20h] [rbp-D8h] BYREF
  int v41; // [rsp+30h] [rbp-C8h] BYREF
  void *v42; // [rsp+38h] [rbp-C0h]
  int *v43; // [rsp+40h] [rbp-B8h]
  int *v44; // [rsp+48h] [rbp-B0h]
  __int64 v45; // [rsp+50h] [rbp-A8h]
  int v46; // [rsp+60h] [rbp-98h] BYREF
  void *v47; // [rsp+68h] [rbp-90h]
  int *v48; // [rsp+70h] [rbp-88h]
  int *v49; // [rsp+78h] [rbp-80h]
  __int64 v50; // [rsp+80h] [rbp-78h]
  char v51; // [rsp+88h] [rbp-70h]
  __int64 v52; // [rsp+90h] [rbp-68h]
  __int64 v53; // [rsp+98h] [rbp-60h]
  __int64 v54; // [rsp+A0h] [rbp-58h]
  __int64 v55; // [rsp+A8h] [rbp-50h]
  int v56; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( a5 | a4 )
  {
    v6 = a1;
    v7 = a2;
    v10 = a4;
    if ( !a4 )
    {
      v20 = operator new(0x70u);
      v21 = haystack;
      v10 = v20;
      if ( *(_QWORD *)(a5 + 8) )
        v21 = *(const char **)a5;
      a1 = v20;
      sub_5AA90(v20, v6, v21);
    }
    if ( LOBYTE(qword_165660[0]) )
    {
      if ( *(_DWORD *)(v6 + 112) <= dword_165A14 )
      {
        if ( !byte_1671A1 )
          sub_96F80(2386);
        BUG();
      }
      dword_165A14 = *(_DWORD *)(v6 + 112);
      if ( *(_DWORD *)(v6 + 120) )
        sub_55F90(a1);
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)(v6 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v6 + 120), 1u);
    *(_BYTE *)(v10 + 104) = 1;
    v43 = &v41;
    v44 = &v41;
    v54 = a6;
    v41 = 0;
    v42 = nullptr;
    v45 = 0;
    v46 = 0;
    v47 = nullptr;
    v48 = &v46;
    v49 = &v46;
    v50 = 0;
    v51 = 0;
    v52 = a2;
    v53 = v10;
    v55 = 0;
    v56 = 32;
    v40 = off_1631D0;
    v11 = sub_66200(&v40, v6 + 128, a3, 0);
    *(_BYTE *)(v10 + 104) = 0;
    LOBYTE(v7) = v11 == 0;
    if ( !a4 && v10 )
    {
      for ( i = *(_QWORD *)(v10 + 72); v10 + 56 != i; i = std::_Rb_tree_increment() )
      {
        if ( *(_QWORD *)(i + 40) )
        {
          nb = *(_QWORD *)(i + 40);
          v32 = (void *)sub_96030(nb);
          v33 = memcpy(v32, *(const void **)(i + 32), nb);
          v34 = *(char ***)(i + 56);
          v35 = v33;
          if ( v34 )
          {
            v39 = v33;
            sub_59920(v34);
            operator delete(v34, 0x50u);
            v35 = v39;
          }
          if ( v35 )
            j__free(v35);
        }
        else
        {
          v23 = *(char ***)(i + 56);
          if ( v23 )
          {
            na = *(void **)(i + 56);
            sub_59920(v23);
            operator delete(na, 0x50u);
          }
        }
      }
      v24 = *(_QWORD *)(v10 + 64);
      while ( v24 )
      {
        v25 = (_QWORD *)v24;
        sub_56ED0(*(_QWORD **)(v24 + 24));
        v26 = *(void **)(v24 + 32);
        v24 = *(_QWORD *)(v24 + 16);
        if ( v26 )
        {
          v25[5] = 0;
          j__free(v26);
        }
        operator delete(v25, 0x40u);
      }
      v27 = *(char **)(v10 + 24);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v10 + 32);
        if ( v28 )
        {
          for ( j = 0; j != v28; ++j )
          {
            v30 = &v27[24 * j];
            v31 = *(void **)v30;
            if ( *(_QWORD *)v30 )
            {
              *((_QWORD *)v30 + 1) = 0;
              j__free(v31);
              v27 = *(char **)(v10 + 24);
            }
          }
        }
        *(_QWORD *)(v10 + 32) = 0;
        j__free(v27);
      }
      operator delete((void *)v10, 0x70u);
    }
    v12 = v47;
    v40 = (__int64 (__fastcall **)())&off_1646F8;
    if ( v47 )
    {
      do
      {
        v13 = v12;
        sub_57190((_QWORD *)v12[3]);
        v14 = (void *)v12[4];
        v12 = (_QWORD *)v12[2];
        if ( v14 )
        {
          v13[5] = 0;
          j__free(v14);
        }
        operator delete(v13, 0x38u);
      }
      while ( v12 );
    }
    v15 = (_QWORD **)v42;
    if ( v42 )
    {
      do
      {
        sub_56820(v15[3]);
        v16 = v15;
        v15 = (_QWORD **)v15[2];
        operator delete(v16, 0x28u);
      }
      while ( v15 );
    }
    if ( *(int *)(v6 + 120) <= 0 )
      sub_55FD0();
    _InterlockedSub((volatile signed __int32 *)(v6 + 120), 1u);
    v17 = *(_BYTE *)(v6 + 116) == 0;
    dword_165A14 = 0;
    if ( !v17 )
      *(_BYTE *)(v6 + 116) = 0;
    pthread_rwlock_unlock((pthread_rwlock_t *)(v6 + 32));
  }
  else
  {
    return 0;
  }
  return v7;
}

