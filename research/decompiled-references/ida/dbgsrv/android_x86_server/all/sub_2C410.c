/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C410
// Address: 0x0002C410

//----- (0002C410) --------------------------------------------------------
int __cdecl sub_2C410(_DWORD *a1, int *a2)
{
  _DWORD *v2; // edx
  char *v3; // edi
  char *v4; // eax
  char *v5; // esi
  int v6; // ecx
  char *v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  bool v13; // zf
  unsigned int v14; // eax
  char *v15; // eax
  unsigned int v16; // ecx
  char *v17; // ebx
  char *v18; // ecx
  int v19; // esi
  int v20; // edi
  int v21; // esi
  _DWORD *v22; // esi
  int result; // eax
  std::logic_error *exception; // esi
  size_t v25; // [esp+8h] [ebp-24h]
  int v26; // [esp+10h] [ebp-1Ch]
  void *v27; // [esp+10h] [ebp-1Ch]
  unsigned int v28; // [esp+18h] [ebp-14h]
  char *v29; // [esp+18h] [ebp-14h]

  v2 = a1;
  v3 = (char *)a1[2];
  v4 = (char *)a1[3];
  if ( v3 == v4 )
  {
    v5 = (char *)a1[1];
    if ( (unsigned int)v5 <= *a1 )
    {
      v27 = (void *)*a1;
      v11 = (int)&v4[-*a1];
      v12 = v11 >> 1;
      v13 = v11 == 0;
      v14 = 1;
      if ( !v13 )
        v14 = v12;
      if ( v14 )
      {
        if ( v14 >= 0x40000000 )
        {
          exception = (std::logic_error *)_cxa_allocate_exception(8u);
          std::logic_error::logic_error(exception, (char *)&qword_13ACD8 - 382498);
          *(_DWORD *)exception = (char *)&qword_13ACD8 - 4468;
          _cxa_throw(exception, (struct type_info *)(&qword_13ACD8 - 557), (void (*)(void *))(&qword_13ACD8 - 62525));
        }
        v28 = v14;
        v15 = (char *)operator new(4 * v14);
        v16 = v28;
        v2 = a1;
      }
      else
      {
        v16 = 0;
        v15 = nullptr;
      }
      v17 = &v15[4 * v16];
      v18 = &v15[4 * (v16 >> 2)];
      if ( v5 == v3 )
      {
        *v2 = v15;
        v2[1] = v18;
        v2[2] = v18;
        v2[3] = v17;
      }
      else
      {
        v29 = v18;
        do
        {
          *(_DWORD *)v18 = *(_DWORD *)v5;
          v18 += 4;
          v5 += 4;
        }
        while ( v3 != v5 );
        v2 = a1;
        v27 = (void *)*a1;
        v19 = a1[1];
        v20 = a1[2];
        *a1 = v15;
        a1[1] = v29;
        a1[2] = v18;
        a1[3] = v17;
        if ( v20 != v19 )
        {
          v21 = v19 - v20;
          do
            v21 += 4;
          while ( v21 );
        }
      }
      v3 = v18;
      if ( v27 )
      {
        v22 = v2;
        operator delete(v27);
        v2 = v22;
        v3 = (char *)v22[2];
      }
    }
    else
    {
      v6 = (int)(((int)&v5[-*a1] >> 2) + ((unsigned int)(((int)&v5[-*a1] >> 2) + 1) >> 31) + 1) >> 1;
      v7 = &v5[-4 * v6];
      v8 = v3 - v5;
      v26 = v8 >> 2;
      v9 = (int)v7;
      if ( v8 )
      {
        v25 = v8;
        v10 = -v6;
        memmove(v7, v5, v25);
        v2 = a1;
        v9 = a1[1] + 4 * v10;
      }
      v3 = &v7[4 * v26];
      v2[2] = v3;
      v2[1] = v9;
    }
  }
  result = *a2;
  *(_DWORD *)v3 = *a2;
  v2[2] += 4;
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
