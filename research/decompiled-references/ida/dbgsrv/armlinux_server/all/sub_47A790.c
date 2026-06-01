/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A790
// Address: 0x000000000047A790

//----- (000000000047A790) ----------------------------------------------------
__int64 __fastcall sub_47A790(__int64 *ptr)
{
  __int64 v2; // x19
  unsigned int *v3; // x20
  unsigned int *v4; // x23
  unsigned int *v5; // x0
  unsigned int v6; // w1
  unsigned int *v7; // x1
  unsigned int v8; // w0
  __int64 v9; // x0
  const char *v10; // x0
  const char *v11; // x1
  int v12; // w21
  unsigned int *v13; // x0
  unsigned int v14; // w1
  unsigned int *v16; // x1
  unsigned int v17; // w2
  unsigned int v18; // w0
  unsigned int v19; // w0
  unsigned int v20; // w0
  unsigned int *v21; // x1
  struct addrinfo *pai; // [xsp+30h] [xbp-10h] BYREF

  v2 = *ptr;
  v3 = (unsigned int *)ptr[1];
  if ( v3 )
  {
    if ( &_pthread_key_create )
    {
      v16 = v3 + 2;
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 + 1, v16) );
    }
    else
    {
      ++v3[2];
    }
    if ( ptr )
    {
      v4 = (unsigned int *)ptr[1];
      if ( v4 )
      {
        if ( &_pthread_key_create )
        {
          v5 = v4 + 2;
          do
            v6 = __ldaxr(v5);
          while ( __stlxr(v6 - 1, v5) );
          if ( v6 == 1 )
          {
            (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 16LL))(v4);
            v7 = v4 + 3;
            do
              v8 = __ldaxr(v7);
            while ( __stlxr(v8 - 1, v7) );
LABEL_12:
            if ( v8 == 1 )
              (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 24LL))(v4);
          }
        }
        else
        {
          v20 = v4[2];
          v4[2] = v20 - 1;
          if ( v20 == 1 )
          {
            (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 16LL))(v4);
            v8 = v4[3];
            v4[3] = v8 - 1;
            goto LABEL_12;
          }
        }
      }
LABEL_14:
      j_j__free_0(ptr);
    }
  }
  else if ( ptr )
  {
    goto LABEL_14;
  }
  v9 = *(_QWORD *)(v2 + 32);
  pai = nullptr;
  if ( v9 )
    v10 = *(const char **)(v2 + 24);
  else
    v10 = (const char *)&qword_4B2D48;
  if ( *(_QWORD *)(v2 + 56) )
    v11 = *(const char **)(v2 + 48);
  else
    v11 = (const char *)&qword_4B2D48;
  v12 = getaddrinfo(v10, v11, (const struct addrinfo *)(v2 + 72), &pai);
  sub_494720(*(pthread_mutex_t **)(v2 + 8));
  if ( *(_BYTE *)(v2 + 124) )
  {
    if ( pai )
    {
      freeaddrinfo(pai);
      pai = nullptr;
    }
  }
  else
  {
    *(_QWORD *)v2 = pai;
    *(_DWORD *)(v2 + 120) = v12;
  }
  sub_494760(*(pthread_mutex_t **)(v2 + 8));
  sub_493F08(*(_QWORD *)(v2 + 16));
  if ( v3 )
  {
    if ( &_pthread_key_create )
    {
      v13 = v3 + 2;
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
      if ( v14 != 1 )
        return 0;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v3 + 16LL))(v3);
      v21 = v3 + 3;
      do
        v19 = __ldaxr(v21);
      while ( __stlxr(v19 - 1, v21) );
    }
    else
    {
      v18 = v3[2];
      v3[2] = v18 - 1;
      if ( v18 != 1 )
        return 0;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v3 + 16LL))(v3);
      v19 = v3[3];
      v3[3] = v19 - 1;
    }
    if ( v19 == 1 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v3 + 24LL))(v3);
  }
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
