/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BE110
// Address: 0x080BE110

//----- (080BE110) --------------------------------------------------------
int __cdecl sub_80BE110(int *a1)
{
  int v1; // edi
  volatile signed __int32 *v2; // eax
  volatile signed __int32 *v3; // eax
  signed __int32 v4; // ecx
  int v5; // eax
  const char *v6; // ecx
  const char *v7; // eax
  int v9; // eax
  signed __int32 v10; // eax
  signed __int32 v11; // ecx
  volatile signed __int32 *v12; // [esp+488h] [ebp-34h]
  void *v13; // [esp+48Ch] [ebp-30h]
  volatile signed __int32 *v14; // [esp+490h] [ebp-2Ch]
  struct addrinfo *pai; // [esp+49Ch] [ebp-20h] BYREF
  unsigned int v16; // [esp+4A0h] [ebp-1Ch]

  v16 = __readgsdword(0x14u);
  v1 = *a1;
  v2 = (volatile signed __int32 *)a1[1];
  v14 = v2;
  if ( v2 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v2 + 1, 1u);
    else
      ++*((_DWORD *)v2 + 1);
    if ( a1 )
    {
      v3 = (volatile signed __int32 *)a1[1];
      if ( v3 )
      {
        if ( &_pthread_key_create )
        {
          v4 = _InterlockedExchangeAdd(v3 + 1, 0xFFFFFFFF);
        }
        else
        {
          v4 = *((_DWORD *)v3 + 1);
          *((_DWORD *)v3 + 1) = v4 - 1;
        }
        if ( v4 == 1 )
        {
          v12 = v3;
          (*(void (__cdecl **)(volatile signed __int32 *))(*v3 + 8))(v3);
          if ( &_pthread_key_create )
          {
            v11 = _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF);
          }
          else
          {
            v11 = *((_DWORD *)v12 + 2);
            *((_DWORD *)v12 + 2) = v11 - 1;
          }
          if ( v11 == 1 )
            (*(void (__cdecl **)(volatile signed __int32 *))(*v12 + 12))(v12);
        }
      }
      goto LABEL_9;
    }
  }
  else if ( a1 )
  {
LABEL_9:
    operator delete(a1, 8u);
  }
  v5 = *(_DWORD *)(v1 + 28);
  pai = nullptr;
  v6 = (const char *)&dword_80DDFD8;
  if ( v5 )
    v6 = *(const char **)(v1 + 24);
  v7 = (const char *)&dword_80DDFD8;
  if ( *(_DWORD *)(v1 + 16) )
    v7 = *(const char **)(v1 + 12);
  v13 = (void *)getaddrinfo(v7, v6, (const struct addrinfo *)(v1 + 36), &pai);
  sub_80D15A0(*(pthread_mutex_t **)(v1 + 4));
  if ( *(_BYTE *)(v1 + 72) )
  {
    if ( pai )
    {
      freeaddrinfo(pai);
      pai = nullptr;
    }
  }
  else
  {
    *(_DWORD *)v1 = pai;
    *(_DWORD *)(v1 + 68) = v13;
  }
  sub_80D1600(*(pthread_mutex_t **)(v1 + 4));
  sub_80D0DE0(*(_DWORD *)(v1 + 8));
  if ( v14 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v14 + 1, 0xFFFFFFFF) != 1 )
        goto LABEL_19;
    }
    else
    {
      v9 = *((_DWORD *)v14 + 1);
      *((_DWORD *)v14 + 1) = v9 - 1;
      if ( v9 != 1 )
        goto LABEL_19;
    }
    (*(void (__cdecl **)(volatile signed __int32 *))(*v14 + 8))(v14);
    if ( &_pthread_key_create )
    {
      v10 = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
    }
    else
    {
      v10 = *((_DWORD *)v14 + 2);
      *((_DWORD *)v14 + 2) = v10 - 1;
    }
    if ( v10 == 1 )
      (*(void (__cdecl **)(volatile signed __int32 *))(*v14 + 12))(v14);
  }
LABEL_19:
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
