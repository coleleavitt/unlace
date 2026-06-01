__int64 __fastcall sub_878D00(unsigned __int8 *a1, __int64 a2, _BYTE *a3, size_t a4, int *a5, __int64 a6)
{
  __int64 v6; // rbx
  int v8; // edx
  _BOOL4 v10; // edx
  int v11; // r13d
  size_t v12; // r8
  bool v13; // cf
  size_t v14; // r8
  int v16; // r12d
  unsigned __int8 *v17; // r8
  int v18; // r11d
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ecx
  size_t v22; // [rsp+8h] [rbp-30h]

  v6 = 0;
  if ( !a2 )
    return v6;
  v8 = *a5;
  if ( *a5 == 3 )
  {
    *a5 = 1;
    v11 = 0;
    v10 = 1;
  }
  else if ( v8 > 3 )
  {
    if ( v8 != 4 )
      return v6;
    *a5 = 2;
    v11 = 1;
    v10 = 0;
  }
  else
  {
    if ( (unsigned int)(v8 - 1) > 1 )
      return v6;
    v10 = v8 == 2;
    v11 = v10;
  }
  v16 = a5[1];
  if ( v16 )
    *a5 = 0;
  v17 = &a1[a2];
  v6 = 0;
  v18 = 0;
  while ( a1 < v17 )
  {
    v19 = *a1++;
    v20 = *(_QWORD *)(a6 + 24);
    v21 = *(unsigned __int8 *)(v20 + (!v10 ? 0x20 : 0) + 608 + ((unsigned __int8)v19 >> 3));
    if ( !_bittest(&v21, v19 & 7) )
      LOBYTE(v19) = *(_BYTE *)(v20 + v19 + 256);
    if ( !v18 )
    {
      if ( a4 )
      {
        *a3 = v19;
        --a4;
        ++a3;
      }
      else
      {
        v18 = 1;
      }
    }
    if ( v6 == -1 )
      return -1;
    ++v6;
    if ( v16 )
    {
      v12 = v17 - a1;
      if ( !v18 && a4 >= v12 )
      {
        v22 = v12;
        memcpy(a3, a1, v12);
        v12 = v22;
      }
      v13 = __CFADD__(v6, v12);
      v14 = v6 + v12;
      if ( !v13 )
        return v14;
      return -1;
    }
    v10 = v11;
  }
  return v6;
}

