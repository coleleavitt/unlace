unsigned __int64 __fastcall sub_4EF9B0(__int64 a1, unsigned int *a2)
{
  char *v3; // rbp
  __int64 *v4; // r13
  __int64 v5; // rdi
  unsigned int **v6; // rdi
  unsigned int **v7; // rdx
  char *v9; // rdi
  __int64 v10; // r15
  __int64 i; // r13
  char *v12; // r14
  void *v13; // rdi
  void *v14; // rdi
  _QWORD *v15; // r13
  _QWORD *v16; // r14
  void *v17; // rdi
  char *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void **v21; // rdi
  __int64 v22; // r14
  __int64 j; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v3 = *((char **)a2 + 3);
  v28 = __readfsqword(0x28u);
  if ( v3 )
  {
    if ( (debug & 0x100) != 0 )
    {
      v25 = *a2;
      ptr = nullptr;
      v27 = 0;
      netnode_get_name(v25, &ptr);
      sub_365330();
    }
    if ( !*((_QWORD *)a2 + 8) )
      goto LABEL_15;
    v4 = *(__int64 **)v3;
    if ( !(16LL * *((_QWORD *)v3 + 1)) )
      goto LABEL_15;
    do
    {
      v5 = *v4;
      v4 += 2;
      (*((void (__fastcall **)(__int64))a2 + 8))(v5);
      v3 = *((char **)a2 + 3);
    }
    while ( v4 != (__int64 *)(*(_QWORD *)v3 + 16LL * *((_QWORD *)v3 + 1)) );
    if ( v3 )
    {
LABEL_15:
      v9 = *((char **)v3 + 19);
      if ( v9 )
      {
        v10 = *((_QWORD *)v3 + 20);
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = &v9[72 * i];
            v13 = *((void **)v12 + 4);
            if ( v13 )
            {
              *((_QWORD *)v12 + 5) = 0;
              qfree(v13);
            }
            v14 = *((void **)v12 + 1);
            if ( v14 )
            {
              *((_QWORD *)v12 + 2) = 0;
              qfree(v14);
            }
            v9 = *((char **)v3 + 19);
          }
        }
        *((_QWORD *)v3 + 20) = 0;
        qfree(v9);
      }
      v15 = *((_QWORD **)v3 + 13);
      while ( v15 )
      {
        v16 = v15;
        v15 = (_QWORD *)*v15;
        v17 = (void *)v16[2];
        if ( v17 )
        {
          v16[3] = 0;
          qfree(v17);
        }
        operator delete(v16, 0x28u);
      }
      memset(*((void **)v3 + 11), 0, 8LL * *((_QWORD *)v3 + 12));
      v18 = *((char **)v3 + 11);
      *((_QWORD *)v3 + 14) = 0;
      *((_QWORD *)v3 + 13) = 0;
      if ( v18 != v3 + 136 )
        operator delete(v18, 8LL * *((_QWORD *)v3 + 12));
      v19 = *((void **)v3 + 8);
      if ( v19 )
      {
        *((_QWORD *)v3 + 9) = 0;
        qfree(v19);
      }
      v20 = *((void **)v3 + 5);
      if ( v20 )
      {
        *((_QWORD *)v3 + 6) = 0;
        qfree(v20);
      }
      v21 = *(void ***)v3;
      if ( *(_QWORD *)v3 )
      {
        v22 = *((_QWORD *)v3 + 1);
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = j;
            qfree(v21[2 * v24]);
            v21 = *(void ***)v3;
          }
        }
        *((_QWORD *)v3 + 1) = 0;
        qfree(v21);
      }
      operator delete(v3, 0xB8u);
    }
    *a2 = -1;
    *((_WORD *)a2 + 2) = 0;
    *((_QWORD *)a2 + 1) = 0;
    a2[4] = 0;
    *((_QWORD *)a2 + 3) = 0;
    *((_QWORD *)a2 + 8) = 0;
    *((_OWORD *)a2 + 3) = 0;
  }
  v6 = *(unsigned int ***)(a1 + 224);
  v7 = &v6[*(_QWORD *)(a1 + 232)];
  if ( v6 != v7 )
  {
    while ( a2 != *v6 )
    {
      if ( v7 == ++v6 )
        return v28 - __readfsqword(0x28u);
    }
    if ( v6 != v7 )
    {
      memmove(v6, v6 + 1, (char *)v7 - (char *)v6 - 8);
      --*(_QWORD *)(a1 + 232);
    }
  }
  return v28 - __readfsqword(0x28u);
}

