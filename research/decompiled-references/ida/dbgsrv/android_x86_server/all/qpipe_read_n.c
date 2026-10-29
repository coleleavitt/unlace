/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_read_n
// Address: 0x000BAB60

//----- (000BAB60) --------------------------------------------------------
char __cdecl qpipe_read_n(int fd, char **a2, size_t nbytes)
{
  size_t v3; // edi
  char *v4; // edx
  char *v5; // esi
  char *v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  char *v9; // edx
  size_t v10; // esi
  char *v11; // edi
  ssize_t v12; // eax
  int v13; // ecx
  int v14; // eax
  char *v15; // edi
  size_t v16; // esi
  char result; // al
  size_t v18; // [esp-8h] [ebp-24h]
  char *v19; // [esp+0h] [ebp-1Ch]
  char v20; // [esp+7h] [ebp-15h] BYREF
  unsigned int v21; // [esp+8h] [ebp-14h]

  v3 = nbytes;
  v21 = __readgsdword(0x14u);
  v4 = a2[1];
  v5 = &v4[nbytes];
  if ( v4 >= &v4[nbytes] )
  {
    if ( nbytes )
    {
      v19 = a2[1];
      v20 = 0;
      sub_43860(a2, (unsigned int)&v4[nbytes], &v20);
      v7 = a2;
      goto LABEL_8;
    }
    return 1;
  }
  v19 = a2[1];
  if ( a2[2] >= v5 )
  {
    v6 = *a2;
  }
  else
  {
    v6 = (char *)qvector_reserve((int)a2, *a2, (unsigned int)&v4[nbytes], 1u);
    *a2 = v6;
  }
  memset(&v6[(_DWORD)a2[1]], 0, v5 - a2[1]);
  v7 = a2;
  a2[1] = v5;
  if ( !nbytes )
    return 1;
LABEL_8:
  v8 = fd;
  v9 = &v19[*v7];
  while ( 1 )
  {
    v10 = v3;
    v18 = v3;
    v11 = v9;
    v12 = read(v8, v9, v18);
    if ( !v12 )
      break;
    while ( v12 < 0 )
    {
      v14 = *(_DWORD *)__errno(v13);
      if ( v14 == 11 || v14 == 4 )
      {
        v12 = read(fd, v11, v10);
        if ( v12 )
          continue;
      }
      return 0;
    }
    v15 = &v11[v12];
    v16 = v10 - v12;
    result = 1;
    v8 = fd;
    v9 = v15;
    v3 = v16;
    if ( !v16 )
      return result;
  }
  return 0;
}
// BAC24: variable 'v13' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
