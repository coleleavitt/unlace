/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C050
// Address: 0x0002C050

//----- (0002C050) --------------------------------------------------------
int __cdecl sub_2C050(int a1, int *a2)
{
  _DWORD *v2; // edx
  char *v3; // edi
  char *v4; // ecx
  char *v5; // esi
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  size_t v9; // esi
  void *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  bool v14; // zf
  unsigned int v15; // eax
  char *v16; // eax
  char *v17; // edx
  int v18; // esi
  int v19; // ebx
  int v20; // esi
  _DWORD *v21; // esi
  int result; // eax
  std::logic_error *exception; // esi
  size_t v24; // [esp+8h] [ebp-24h]
  unsigned int v25; // [esp+10h] [ebp-1Ch]
  char *v26; // [esp+10h] [ebp-1Ch]
  char *v27; // [esp+18h] [ebp-14h]

  v2 = (_DWORD *)a1;
  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)a1 )
  {
    v5 = *(char **)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 12);
    if ( (unsigned int)v5 >= v6 )
    {
      v12 = v6 - *(_DWORD *)a1;
      v13 = v12 >> 1;
      v14 = v12 == 0;
      v15 = 1;
      if ( !v14 )
        v15 = v13;
      v25 = v15;
      if ( v15 )
      {
        if ( v15 >= 0x40000000 )
        {
          exception = (std::logic_error *)_cxa_allocate_exception(8u);
          std::logic_error::logic_error(
            exception,
            "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
          *(_DWORD *)exception = (char *)&qword_13ACD8 - 4468;
          _cxa_throw(exception, (struct type_info *)(&qword_13ACD8 - 557), (void (*)(void *))(&qword_13ACD8 - 62525));
        }
        v16 = (char *)operator new(4 * v15);
        v2 = (_DWORD *)a1;
      }
      else
      {
        v16 = nullptr;
      }
      v4 = &v16[4 * ((v25 + 3) >> 2)];
      if ( v3 == v5 )
      {
        *v2 = v16;
        v2[1] = v4;
        v2[2] = v4;
        v2[3] = &v16[4 * v25];
      }
      else
      {
        v27 = &v16[4 * v25];
        v26 = &v16[4 * ((v25 + 3) >> 2)];
        v17 = v4;
        do
        {
          *(_DWORD *)v17 = *(_DWORD *)v3;
          v17 += 4;
          v3 += 4;
        }
        while ( v5 != v3 );
        v3 = *(char **)a1;
        v18 = *(_DWORD *)(a1 + 4);
        v19 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)a1 = v16;
        *(_DWORD *)(a1 + 4) = v26;
        *(_DWORD *)(a1 + 8) = v17;
        v2 = (_DWORD *)a1;
        *(_DWORD *)(a1 + 12) = v27;
        if ( v19 != v18 )
        {
          v20 = v18 - v19;
          do
            v20 += 4;
          while ( v20 );
        }
        v4 = v26;
      }
      if ( v3 )
      {
        v21 = v2;
        operator delete(v3);
        v2 = v21;
        v4 = (char *)v21[1];
      }
    }
    else
    {
      v7 = (int)(((int)(v6 - (_DWORD)v5) >> 2) + ((unsigned int)(((int)(v6 - (_DWORD)v5) >> 2) + 1) >> 31) + 1) >> 1;
      v8 = (int)&v5[4 * v7];
      v9 = v5 - v3;
      if ( v9 )
      {
        v24 = v9;
        v10 = (void *)(v8 - v9);
        v11 = v7;
        memmove(v10, *(const void **)(a1 + 4), v24);
        v4 = (char *)v10;
        v2 = (_DWORD *)a1;
        v8 = *(_DWORD *)(a1 + 8) + 4 * v11;
      }
      else
      {
        v4 = (char *)v8;
      }
      v2[1] = v4;
      v2[2] = v8;
    }
  }
  else
  {
    v4 = *(char **)(a1 + 4);
  }
  result = *a2;
  *((_DWORD *)v4 - 1) = *a2;
  v2[1] -= 4;
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
