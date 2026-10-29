/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8095080
// Address: 0x08095080

//----- (08095080) --------------------------------------------------------
_DWORD *__cdecl sub_8095080(int *a1, const void **a2)
{
  int *v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  int **v5; // eax
  int *v6; // eax
  _DWORD *result; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  const void *v10; // eax
  int *v11; // edi
  int *v12; // eax
  int *v13; // ecx
  _DWORD *v14; // ebx
  _DWORD *v15; // ecx
  int v16; // edx
  int *v17; // eax
  int v18; // edx
  int *v19; // [esp+0h] [ebp-50h]
  int v20; // [esp+8h] [ebp-48h]
  int *v21; // [esp+Ch] [ebp-44h]
  size_t n; // [esp+10h] [ebp-40h]
  unsigned int v23; // [esp+18h] [ebp-38h]
  unsigned int v24; // [esp+1Ch] [ebp-34h]
  char v25[4]; // [esp+20h] [ebp-30h] BYREF
  unsigned int v26; // [esp+24h] [ebp-2Ch]
  unsigned int v27; // [esp+34h] [ebp-1Ch]

  v2 = a1;
  v27 = __readgsdword(0x14u);
  v3 = std::_Hash_bytes(*a2, *((_DWORD *)*a2 - 3), 0xC70F6907);
  v4 = a1[1];
  v24 = v3;
  n = v3 % v4;
  v5 = (int **)sub_8092080(*a1, v4, v3 % v4, *a2, v3);
  if ( !v5 || (v6 = *v5) == nullptr )
  {
    v8 = (_DWORD *)operator new(0x1Cu);
    *v8 = 0;
    v9 = v8;
    v21 = v8;
    v10 = *a2;
    v9[2] = 0;
    v9[1] = v10;
    v9[3] = 0;
    *a2 = &std::string::_Rep::_S_empty_rep_storage[3];
    *((_WORD *)v9 + 10) = 0;
    v9[4] = 0;
    std::__detail::_Prime_rehash_policy::_M_need_rehash(
      (std::__detail::_Prime_rehash_policy *)v25,
      (unsigned int)(a1 + 4),
      a1[1],
      a1[3]);
    v23 = v26;
    if ( v25[0] )
    {
      if ( v26 == 1 )
      {
        v13 = a1 + 6;
        a1[6] = 0;
        v11 = a1 + 6;
      }
      else
      {
        if ( v26 > 0x1FFFFFFF )
        {
          if ( v26 <= 0x3FFFFFFF )
          {
            if ( v27 == __readgsdword(0x14u) )
              std::__throw_bad_alloc();
          }
          else if ( v27 == __readgsdword(0x14u) )
          {
            sub_8052751();
          }
LABEL_33:
          sub_80D7AB0();
        }
        v11 = (int *)operator new(4 * v26);
        memset(v11, 0, 4 * v23);
        v13 = a1 + 6;
      }
      v14 = (_DWORD *)a1[2];
      a1[2] = 0;
      v20 = 0;
      if ( v14 )
      {
        v19 = v13;
        do
        {
          while ( 1 )
          {
            v15 = v14;
            v14 = (_DWORD *)*v14;
            v16 = v15[6] % v23;
            v17 = &v11[v16];
            if ( !*v17 )
              break;
            *v15 = *(_DWORD *)*v17;
            *(_DWORD *)*v17 = v15;
            if ( !v14 )
              goto LABEL_20;
          }
          *v15 = a1[2];
          a1[2] = (int)v15;
          *v17 = (int)(a1 + 2);
          if ( *v15 )
            v11[v20] = (int)v15;
          v20 = v16;
        }
        while ( v14 );
LABEL_20:
        v2 = a1;
        v13 = v19;
      }
      if ( (int *)*v2 != v13 )
        operator delete((void *)*v2, 4 * v2[1]);
      *v2 = (int)v11;
      v2[1] = v23;
      n = v24 % v23;
    }
    else
    {
      v11 = (int *)*a1;
    }
    v21[6] = v24;
    v12 = &v11[n];
    if ( *v12 )
    {
      *v21 = *(_DWORD *)*v12;
      *(_DWORD *)*v12 = v21;
    }
    else
    {
      v18 = v2[2];
      *v21 = v18;
      v2[2] = (int)v21;
      if ( v18 )
      {
        v11[*(_DWORD *)(v18 + 24) % (unsigned int)v2[1]] = (int)v21;
        v12 = (int *)(4 * n + *v2);
      }
      *v12 = (int)(v2 + 2);
    }
    ++v2[3];
    v6 = v21;
  }
  result = v6 + 2;
  if ( v27 != __readgsdword(0x14u) )
    goto LABEL_33;
  return result;
}
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
