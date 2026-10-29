__int64 __fastcall sub_8D0920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v10; // rbp
  const char *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // r13
  void *v15; // rdi
  _QWORD **v16; // rbp
  void *v17; // rdi
  bool v18; // zf
  __int64 v21; // rax
  const char *v22; // rdx
  _QWORD *i; // r13
  char **v24; // rdi
  __int64 v25; // r13
  _QWORD *v26; // r14
  void *v27; // rdi
  char *v28; // rdx
  __int64 v29; // r14
  __int64 j; // r13
  char *v31; // rax
  void *v32; // rdi
  void *v33; // rax
  void *v34; // rax
  char **v35; // rdi
  void *v36; // rcx
  void *na; // [rsp+0h] [rbp-F8h]
  size_t nb; // [rsp+0h] [rbp-F8h]
  void *v40; // [rsp+8h] [rbp-F0h]
  __int64 (__fastcall **v41)(); // [rsp+20h] [rbp-D8h] BYREF
  int v42; // [rsp+30h] [rbp-C8h] BYREF
  void *v43; // [rsp+38h] [rbp-C0h]
  int *v44; // [rsp+40h] [rbp-B8h]
  int *v45; // [rsp+48h] [rbp-B0h]
  __int64 v46; // [rsp+50h] [rbp-A8h]
  int v47; // [rsp+60h] [rbp-98h] BYREF
  void *v48; // [rsp+68h] [rbp-90h]
  int *v49; // [rsp+70h] [rbp-88h]
  int *v50; // [rsp+78h] [rbp-80h]
  __int64 v51; // [rsp+80h] [rbp-78h]
  char v52; // [rsp+88h] [rbp-70h]
  __int64 v53; // [rsp+90h] [rbp-68h]
  __int64 v54; // [rsp+98h] [rbp-60h]
  __int64 v55; // [rsp+A0h] [rbp-58h]
  __int64 v56; // [rsp+A8h] [rbp-50h]
  int v57; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( a5 | a4 )
  {
    v6 = a1;
    v10 = a4;
    if ( !a4 )
    {
      v21 = operator new(0x70u);
      v22 = haystack;
      v10 = v21;
      if ( *(_QWORD *)(a5 + 8) )
        v22 = *(const char **)a5;
      a1 = v21;
      sub_8D0810(v21, v6, v22);
    }
    if ( unk_2C581E0 )
    {
      if ( *(_DWORD *)(v6 + 112) <= dword_2CAD3D4 )
      {
        if ( !under_debugger )
          interr(2386);
        BUG();
      }
      dword_2CAD3D4 = *(_DWORD *)(v6 + 112);
      if ( *(_DWORD *)(v6 + 120) )
        sub_8CBDB0(a1);
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)(v6 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v6 + 120), 1u);
    *(_BYTE *)(v10 + 104) = 1;
    v44 = &v42;
    v11 = (const char *)(v6 + 128);
    v45 = &v42;
    v55 = a6;
    v42 = 0;
    v43 = nullptr;
    v46 = 0;
    v47 = 0;
    v48 = nullptr;
    v49 = &v47;
    v50 = &v47;
    v51 = 0;
    v52 = 0;
    v53 = a2;
    v54 = v10;
    v56 = 0;
    v57 = 32;
    v41 = off_2B15F10;
    v12 = sub_8DB7C0(&v41, v6 + 128, a3, 0);
    *(_BYTE *)(v10 + 104) = 0;
    LOBYTE(a2) = v12 == 0;
    if ( !a4 && v10 )
    {
      for ( i = *(_QWORD **)(v10 + 72); (_QWORD *)(v10 + 56) != i; i = (_QWORD *)std::_Rb_tree_increment() )
      {
        if ( i[5] )
        {
          nb = i[5];
          v33 = (void *)qalloc_or_throw(nb, v11);
          v11 = (const char *)i[4];
          v34 = memcpy(v33, v11, nb);
          v35 = (char **)i[7];
          v36 = v34;
          if ( v35 )
          {
            v40 = v34;
            sub_8CF670(v35, v11);
            v11 = (const char *)&qword_50;
            operator delete(v35, 0x50u);
            v36 = v40;
          }
          if ( v36 )
            qfree(v36);
        }
        else
        {
          v24 = (char **)i[7];
          if ( v24 )
          {
            na = (void *)i[7];
            sub_8CF670(v24, v11);
            v11 = (const char *)&qword_50;
            operator delete(na, 0x50u);
          }
        }
      }
      v25 = *(_QWORD *)(v10 + 64);
      while ( v25 )
      {
        v26 = (_QWORD *)v25;
        sub_8CCCF0(*(_QWORD **)(v25 + 24));
        v27 = *(void **)(v25 + 32);
        v25 = *(_QWORD *)(v25 + 16);
        if ( v27 )
        {
          v26[5] = 0;
          qfree(v27);
        }
        operator delete(v26, 0x40u);
      }
      v28 = *(char **)(v10 + 24);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v10 + 32);
        if ( v29 )
        {
          for ( j = 0; j != v29; ++j )
          {
            v31 = &v28[24 * j];
            v32 = *(void **)v31;
            if ( *(_QWORD *)v31 )
            {
              *((_QWORD *)v31 + 1) = 0;
              qfree(v32);
              v28 = *(char **)(v10 + 24);
            }
          }
        }
        *(_QWORD *)(v10 + 32) = 0;
        qfree(v28);
      }
      operator delete((void *)v10, 0x70u);
    }
    v13 = v48;
    v41 = (__int64 (__fastcall **)())&off_2BD27F8;
    if ( v48 )
    {
      do
      {
        v14 = v13;
        sub_8CCFB0((_QWORD *)v13[3]);
        v15 = (void *)v13[4];
        v13 = (_QWORD *)v13[2];
        if ( v15 )
        {
          v14[5] = 0;
          qfree(v15);
        }
        operator delete(v14, 0x38u);
      }
      while ( v13 );
    }
    v16 = (_QWORD **)v43;
    if ( v43 )
    {
      do
      {
        sub_8CC640(v16[3]);
        v17 = v16;
        v16 = (_QWORD **)v16[2];
        operator delete(v17, 0x28u);
      }
      while ( v16 );
    }
    if ( *(int *)(v6 + 120) <= 0 )
      sub_8CBDF0();
    _InterlockedSub((volatile signed __int32 *)(v6 + 120), 1u);
    v18 = *(_BYTE *)(v6 + 116) == 0;
    dword_2CAD3D4 = 0;
    if ( !v18 )
      *(_BYTE *)(v6 + 116) = 0;
    pthread_rwlock_unlock((pthread_rwlock_t *)(v6 + 32));
  }
  else
  {
    LODWORD(a2) = 0;
  }
  return (unsigned int)a2;
}

