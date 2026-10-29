/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8093CC0
// Address: 0x08093CC0

//----- (08093CC0) --------------------------------------------------------
_DWORD *__cdecl sub_8093CC0(int *a1, const void **a2)
{
  int *v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  int **v5; // eax
  int *v6; // eax
  _DWORD *result; // eax
  int v8; // eax
  int *v9; // edi
  int *v10; // eax
  int *v11; // ecx
  _DWORD *v12; // ebx
  _DWORD *v13; // ecx
  int v14; // edx
  int *v15; // eax
  int v16; // edx
  int *v17; // [esp+0h] [ebp-50h]
  int v18; // [esp+8h] [ebp-48h]
  int *v19; // [esp+Ch] [ebp-44h]
  size_t n; // [esp+10h] [ebp-40h]
  unsigned int v21; // [esp+18h] [ebp-38h]
  unsigned int v22; // [esp+1Ch] [ebp-34h]
  char v23[4]; // [esp+20h] [ebp-30h] BYREF
  unsigned int v24; // [esp+24h] [ebp-2Ch]
  unsigned int v25; // [esp+34h] [ebp-1Ch]

  v2 = a1;
  v25 = __readgsdword(0x14u);
  v3 = std::_Hash_bytes(*a2, *((_DWORD *)*a2 - 3), 0xC70F6907);
  v4 = a1[1];
  v22 = v3;
  n = v3 % v4;
  v5 = (int **)sub_8092120(*a1, v4, v3 % v4, *a2, v3);
  if ( !v5 || (v6 = *v5) == nullptr )
  {
    v8 = operator new(0x10u);
    *(_DWORD *)v8 = 0;
    v19 = (int *)v8;
    *(_DWORD *)(v8 + 4) = *a2;
    *a2 = &std::string::_Rep::_S_empty_rep_storage[3];
    *(_WORD *)(v8 + 8) = 0;
    std::__detail::_Prime_rehash_policy::_M_need_rehash(
      (std::__detail::_Prime_rehash_policy *)v23,
      (unsigned int)(a1 + 4),
      a1[1],
      a1[3]);
    v21 = v24;
    if ( v23[0] )
    {
      if ( v24 == 1 )
      {
        v11 = a1 + 6;
        a1[6] = 0;
        v9 = a1 + 6;
      }
      else
      {
        if ( v24 > 0x1FFFFFFF )
        {
          if ( v24 <= 0x3FFFFFFF )
          {
            if ( v25 == __readgsdword(0x14u) )
              std::__throw_bad_alloc();
          }
          else if ( v25 == __readgsdword(0x14u) )
          {
            sub_8052751();
          }
LABEL_33:
          sub_80D7AB0();
        }
        v9 = (int *)operator new(4 * v24);
        memset(v9, 0, 4 * v21);
        v11 = a1 + 6;
      }
      v12 = (_DWORD *)a1[2];
      a1[2] = 0;
      v18 = 0;
      if ( v12 )
      {
        v17 = v11;
        do
        {
          while ( 1 )
          {
            v13 = v12;
            v12 = (_DWORD *)*v12;
            v14 = v13[3] % v21;
            v15 = &v9[v14];
            if ( !*v15 )
              break;
            *v13 = *(_DWORD *)*v15;
            *(_DWORD *)*v15 = v13;
            if ( !v12 )
              goto LABEL_20;
          }
          *v13 = a1[2];
          a1[2] = (int)v13;
          *v15 = (int)(a1 + 2);
          if ( *v13 )
            v9[v18] = (int)v13;
          v18 = v14;
        }
        while ( v12 );
LABEL_20:
        v2 = a1;
        v11 = v17;
      }
      if ( (int *)*v2 != v11 )
        operator delete((void *)*v2, 4 * v2[1]);
      *v2 = (int)v9;
      v2[1] = v21;
      n = v22 % v21;
    }
    else
    {
      v9 = (int *)*a1;
    }
    v19[3] = v22;
    v10 = &v9[n];
    if ( *v10 )
    {
      *v19 = *(_DWORD *)*v10;
      *(_DWORD *)*v10 = v19;
    }
    else
    {
      v16 = v2[2];
      *v19 = v16;
      v2[2] = (int)v19;
      if ( v16 )
      {
        v9[*(_DWORD *)(v16 + 12) % (unsigned int)v2[1]] = (int)v19;
        v10 = (int *)(*v2 + 4 * n);
      }
      *v10 = (int)(v2 + 2);
    }
    ++v2[3];
    v6 = v19;
  }
  result = v6 + 2;
  if ( v25 != __readgsdword(0x14u) )
    goto LABEL_33;
  return result;
}
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
