int __fastcall sub_3C03F0(int *a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  int result; // eax
  __int64 v8; // rax
  bool v9; // zf
  bool v10; // sf
  bool v11; // of
  unsigned __int8 v12; // al
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  int v15; // ecx
  char v16; // al
  unsigned __int16 v17; // ax

  v4 = a3 & 0x600;
  v5 = (int)a4;
  if ( v4 != 1024 )
    goto LABEL_2;
  v8 = (unsigned int)a3 & 0xF0000000;
  if ( v8 != 1610612736 )
  {
    if ( v8 == 1342177280 )
    {
      v11 = __OFSUB__(*a1, *a2);
      v9 = *a1 == *a2;
      v10 = *a1 - *a2 < 0;
      if ( *a1 < *a2 )
        return -1;
      return !(v10 ^ v11 | v9);
    }
LABEL_2:
    if ( (unsigned __int8)is_off(a3, a4) )
      return sub_3BDFF0(a1, a2);
    if ( (unsigned __int8)is_enum(a3, (unsigned int)v5) )
    {
      if ( (unsigned int)*a1 >= *a2 )
      {
        if ( *a2 >= (unsigned int)*a1 )
        {
          v12 = *((_BYTE *)a1 + 4);
          v13 = *((_BYTE *)a2 + 4);
          if ( v12 >= v13 )
            return v13 < v12;
          return -1;
        }
        return 1;
      }
      return -1;
    }
    if ( (unsigned __int8)is_stroff(a3, (unsigned int)v5) )
    {
      v14 = *a1;
      if ( (int)v14 < *a2 )
        return -1;
      if ( (int)v14 <= *a2 )
      {
        v15 = a2[33];
        if ( a1[33] < v15 )
          return -1;
        if ( a1[33] <= v15 )
          return memcmp(a1 + 1, a2 + 1, 4 * v14);
      }
      return 1;
    }
    if ( v4 == 1024 && (a3 & 0xF0000000) == 0xD0000000LL )
    {
      if ( *(_WORD *)a1 < *(_WORD *)a2 )
        return -1;
      if ( *(_WORD *)a1 > *(_WORD *)a2 )
        return 1;
    }
    v16 = is_custfmt(a3, (unsigned int)v5);
    if ( (unsigned int)v5 > 7 || !v16 )
      return 0;
    v17 = *((_WORD *)a2 + v5 + 1);
    v11 = __OFSUB__(*((_WORD *)a1 + v5 + 1), v17);
    v9 = *((_WORD *)a1 + v5 + 1) == v17;
    v10 = (__int16)(*((_WORD *)a1 + v5 + 1) - v17) < 0;
    if ( *((_WORD *)a1 + v5 + 1) < v17 )
      return -1;
    return !(v10 ^ v11 | v9);
  }
  result = *a2 < (unsigned int)*a1;
  if ( (unsigned int)*a1 < *a2 )
    return -1;
  return result;
}

