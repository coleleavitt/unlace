/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA500
// Address: 0x000AA500

//----- (000AA500) --------------------------------------------------------
char *sub_AA500()
{
  __uid_t v0; // eax
  struct passwd *v1; // eax
  char *pw_gecos; // esi
  size_t v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edx
  bool v6; // cf
  void *v7; // eax
  size_t v8; // esi
  char *v9; // esi
  char *v11; // [esp+4h] [ebp-38h]
  unsigned int v12; // [esp+18h] [ebp-24h]
  size_t v13; // [esp+1Ch] [ebp-20h]
  pthread_mutex_t *v14[7]; // [esp+20h] [ebp-1Ch] BYREF

  v14[2] = (pthread_mutex_t *)__readgsdword(0x14u);
  sub_B3B30(v14);
  if ( (unsigned int)dword_13D310 > 1 )
    goto LABEL_10;
  qgetenv("HOME", (int)&dword_13D30C);
  if ( (unsigned int)dword_13D310 > 1 )
    goto LABEL_10;
  v0 = getuid();
  v1 = getpwuid(v0);
  if ( v1 )
  {
    pw_gecos = v1->pw_gecos;
    if ( !pw_gecos || (v3 = strlen(v1->pw_gecos)) == 0 )
    {
      dword_13D310 = 0;
      goto LABEL_13;
    }
    v4 = v3;
    v5 = v3 + 1;
    v6 = dword_13D314 < v3 + 1;
    v7 = (void *)dword_13D30C;
    if ( v6 )
    {
      v13 = v4;
      v12 = v5;
      v7 = qvector_reserve((int)&dword_13D30C, (void *)dword_13D30C, v5, 1u);
      dword_13D30C = (int)v7;
      v4 = v13;
      v5 = v12;
    }
    dword_13D310 = v5;
    v11 = pw_gecos;
    v8 = v4;
    memmove(v7, v11, v4);
    *(_BYTE *)(dword_13D30C + v8) = 0;
  }
  if ( !dword_13D310 )
  {
LABEL_13:
    v9 = byte_EF875;
    goto LABEL_11;
  }
LABEL_10:
  v9 = (char *)dword_13D30C;
LABEL_11:
  qmutex_unlock(v14[0]);
  return v9;
}
// 13D30C: using guessed type int dword_13D30C;
// 13D310: using guessed type int dword_13D310;
// 13D314: using guessed type int dword_13D314;
