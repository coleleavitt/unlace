/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_create
// Address: 0x000B6260

//----- (000B6260) --------------------------------------------------------
char *__cdecl qsem_create(char *name, unsigned int value)
{
  char *v2; // esi
  sem_t *v3; // edi
  size_t v4; // eax
  size_t v5; // edx
  unsigned int v6; // edi
  void *v7; // eax
  size_t v8; // edi
  void *v9; // eax
  unsigned __int16 v11; // [esp+8h] [ebp-14h]
  size_t v12; // [esp+8h] [ebp-14h]

  v2 = (char *)operator new(0x10u);
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  if ( name && *name )
  {
    v11 = __umask_chk(0);
    v3 = sem_open(name, 64, 438, value);
    __umask_chk(v11);
    if ( v3 )
    {
      *((_DWORD *)v2 + 3) = v3;
      v4 = strlen(name);
      if ( v4 )
      {
        v5 = v4;
        v6 = v4 + 1;
        v7 = *(void **)v2;
        if ( *((_DWORD *)v2 + 2) < v6 )
        {
          v12 = v5;
          v7 = qvector_reserve((int)v2, v7, v6, 1u);
          v5 = v12;
          *(_DWORD *)v2 = v7;
        }
        *((_DWORD *)v2 + 1) = v6;
        v8 = v5;
        memmove(v7, name, v5);
        *(_BYTE *)(*(_DWORD *)v2 + v8) = 0;
      }
      else
      {
        *((_DWORD *)v2 + 1) = 0;
      }
      return v2;
    }
  }
  else if ( sem_init((sem_t *)(v2 + 12), 0, value) != -1 )
  {
    return v2;
  }
  v9 = *(void **)v2;
  if ( *(_DWORD *)v2 )
  {
    *((_DWORD *)v2 + 1) = 0;
    qfree(v9);
  }
  operator delete(v2);
  return nullptr;
}
// 184A0: using guessed type int __cdecl __umask_chk(_DWORD);
