/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_login_name
// Address: 0x000B1E80

//----- (000B1E80) --------------------------------------------------------
bool __cdecl get_login_name(int a1)
{
  char *v1; // eax
  char *v2; // esi
  size_t v3; // eax
  _DWORD *v4; // ecx
  size_t v5; // edi
  void *v6; // eax
  unsigned int *v7; // esi
  int *v8; // esi
  int v9; // eax
  __uid_t v10; // eax
  struct passwd *v11; // eax
  const char *pw_name; // edi
  size_t v13; // eax
  unsigned int v14; // esi
  void *v15; // eax
  size_t v17; // [esp+Ch] [ebp-20h]
  size_t v18; // [esp+Ch] [ebp-20h]
  unsigned int *v19; // [esp+10h] [ebp-1Ch]
  unsigned int *v20; // [esp+10h] [ebp-1Ch]
  char *v21; // [esp+18h] [ebp-14h]

  v1 = getlogin();
  if ( v1 )
  {
    v2 = v1;
    v3 = strlen(v1);
    if ( v3 )
    {
      v4 = (_DWORD *)a1;
      v5 = v3 + 1;
      v17 = v3;
      v21 = v2;
      if ( *(_DWORD *)(a1 + 8) >= v3 + 1 )
      {
        v6 = *(void **)a1;
      }
      else
      {
        v6 = qvector_reserve(a1, *(void **)a1, v3 + 1, 1u);
        v4 = (_DWORD *)a1;
        *(_DWORD *)a1 = v6;
      }
      v8 = v4;
      v19 = v4 + 1;
      v4[1] = v5;
      memmove(v6, v21, v17);
      v9 = *v8;
      v7 = v19;
      *(_BYTE *)(v9 + v17) = 0;
      if ( *v19 > 1 )
        return *v7 > 1;
    }
    else
    {
      v7 = (unsigned int *)(a1 + 4);
      *(_DWORD *)(a1 + 4) = 0;
    }
  }
  else
  {
    v7 = (unsigned int *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 4) > 1u )
      return *v7 > 1;
  }
  v10 = getuid();
  v11 = getpwuid(v10);
  if ( v11 )
  {
    pw_name = v11->pw_name;
    if ( v11->pw_name )
    {
      v13 = strlen(v11->pw_name);
      if ( v13 )
      {
        v20 = v7;
        v18 = v13;
        v14 = v13 + 1;
        if ( *(_DWORD *)(a1 + 8) >= v13 + 1 )
        {
          v15 = *(void **)a1;
        }
        else
        {
          v15 = qvector_reserve(a1, *(void **)a1, v14, 1u);
          *(_DWORD *)a1 = v15;
        }
        *v20 = v14;
        v7 = v20;
        memmove(v15, pw_name, v18);
        *(_BYTE *)(*(_DWORD *)a1 + v18) = 0;
      }
      else
      {
        *v7 = 0;
      }
    }
  }
  return *v7 > 1;
}
