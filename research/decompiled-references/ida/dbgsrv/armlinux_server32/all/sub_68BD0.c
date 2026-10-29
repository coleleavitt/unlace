/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68BD0
// Address: 0x00068BD0

//----- (00068BD0) --------------------------------------------------------
int __fastcall sub_68BD0(_DWORD *ptr)
{
  __int64 v2; // r4
  unsigned int *v3; // r9
  unsigned int *v4; // r3
  unsigned int v5; // r2
  unsigned int *v6; // r2
  unsigned int v7; // r3
  int v8; // r3
  const char *v9; // r0
  const char *v10; // r1
  int v11; // r7
  struct addrinfo *v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int *v16; // r2
  unsigned int v17; // r1
  int v18; // r3
  unsigned int v19; // r3
  unsigned int v20; // r3
  unsigned int *v21; // r2
  struct addrinfo *ai; // [sp+0h] [bp-Ch] BYREF

  v2 = *(_QWORD *)ptr;
  if ( ptr[1] )
  {
    if ( &_pthread_key_create )
    {
      v16 = (unsigned int *)(HIDWORD(v2) + 4);
      __dmb(0xBu);
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      __dmb(0xBu);
    }
    else
    {
      ++*(_DWORD *)(HIDWORD(v2) + 4);
    }
    if ( ptr )
    {
      v3 = (unsigned int *)ptr[1];
      if ( v3 )
      {
        if ( &_pthread_key_create )
        {
          v4 = v3 + 1;
          __dmb(0xBu);
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
          __dmb(0xBu);
          if ( v5 == 1 )
          {
            (*(void (__fastcall **)(unsigned int *))(*v3 + 8))(v3);
            __dmb(0xBu);
            v6 = v3 + 2;
            do
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
            __dmb(0xBu);
LABEL_13:
            if ( v7 == 1 )
              (*(void (__fastcall **)(unsigned int *))(*v3 + 12))(v3);
          }
        }
        else
        {
          v20 = v3[1];
          v3[1] = v20 - 1;
          if ( v20 == 1 )
          {
            (*(void (__fastcall **)(unsigned int *))(*v3 + 8))(v3);
            v7 = v3[2];
            v3[2] = v7 - 1;
            goto LABEL_13;
          }
        }
      }
      sub_808A0(ptr);
    }
  }
  else if ( ptr )
  {
    sub_808A0(ptr);
  }
  v8 = *(_DWORD *)(v2 + 16);
  ai = nullptr;
  if ( v8 )
    v9 = *(const char **)(v2 + 12);
  else
    v9 = (const char *)&dword_8DB98;
  if ( *(_DWORD *)(v2 + 28) )
    v10 = *(const char **)(v2 + 24);
  else
    v10 = (const char *)&dword_8DB98;
  v11 = getaddrinfo(v9, v10, (const struct addrinfo *)(v2 + 36), &ai);
  sub_7A268(*(pthread_mutex_t **)(v2 + 4));
  v12 = ai;
  if ( *(_BYTE *)(v2 + 72) )
  {
    if ( ai )
    {
      freeaddrinfo(ai);
      ai = nullptr;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 68) = v11;
    *(_DWORD *)v2 = v12;
  }
  sub_7A290(*(pthread_mutex_t **)(v2 + 4));
  sub_79D84(*(_DWORD *)(v2 + 8));
  if ( HIDWORD(v2) )
  {
    if ( &_pthread_key_create )
    {
      v13 = (unsigned int *)(HIDWORD(v2) + 4);
      __dmb(0xBu);
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      __dmb(0xBu);
      if ( v14 != 1 )
        return 0;
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      __dmb(0xBu);
      v21 = (unsigned int *)(HIDWORD(v2) + 8);
      do
        v19 = __ldrex(v21);
      while ( __strex(v19 - 1, v21) );
      __dmb(0xBu);
    }
    else
    {
      v18 = *(_DWORD *)(HIDWORD(v2) + 4);
      *(_DWORD *)(HIDWORD(v2) + 4) = v18 - 1;
      if ( v18 != 1 )
        return 0;
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      v19 = *(_DWORD *)(HIDWORD(v2) + 8);
      *(_DWORD *)(HIDWORD(v2) + 8) = v19 - 1;
    }
    if ( v19 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
