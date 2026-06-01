int __fastcall sub_3C54F0(int *a1, __int64 a2, __int64 a3, unsigned int a4)
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
  __int64 v15; // rcx
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
      v11 = __OFSUB__(*a1, *(_DWORD *)a2);
      v9 = *a1 == *(_DWORD *)a2;
      v10 = *a1 - *(_DWORD *)a2 < 0;
      if ( *a1 < *(_DWORD *)a2 )
        return -1;
      return !(v10 ^ v11 | v9);
    }
LABEL_2:
    if ( (unsigned __int8)is_off(a3, a4) )
      return sub_3C30D0((__int64)a1, a2);
    if ( (unsigned __int8)is_enum(a3, (unsigned int)v5) )
    {
      if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
      {
        if ( *(_QWORD *)a2 >= *(_QWORD *)a1 )
        {
          v12 = *((_BYTE *)a1 + 8);
          v13 = *(_BYTE *)(a2 + 8);
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
      if ( (int)v14 < *(_DWORD *)a2 )
        return -1;
      if ( (int)v14 <= *(_DWORD *)a2 )
      {
        v15 = *(_QWORD *)(a2 + 264);
        if ( *((_QWORD *)a1 + 33) < v15 )
          return -1;
        if ( *((_QWORD *)a1 + 33) <= v15 )
          return memcmp(a1 + 2, (const void *)(a2 + 8), 8 * v14);
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
    v17 = *(_WORD *)(a2 + 2 * v5 + 2);
    v11 = __OFSUB__(*((_WORD *)a1 + v5 + 1), v17);
    v9 = *((_WORD *)a1 + v5 + 1) == v17;
    v10 = (__int16)(*((_WORD *)a1 + v5 + 1) - v17) < 0;
    if ( *((_WORD *)a1 + v5 + 1) < v17 )
      return -1;
    return !(v10 ^ v11 | v9);
  }
  result = *(_QWORD *)a2 < *(_QWORD *)a1;
  if ( *(_QWORD *)a1 < *(_QWORD *)a2 )
    return -1;
  return result;
}
