__int64 __fastcall sub_2299030(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // edx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // esi
  int v15; // esi
  unsigned int v16; // edi

  while ( 2 )
  {
    result = a2 >> 6;
    v5 = 1LL << a2;
    if ( ((1LL << a2) & *(_QWORD *)(a1 + 8 * result)) != 0 )
      return result;
    while ( 1 )
    {
      v6 = (_QWORD *)(a1 + 8 * result);
      v7 = (unsigned int *)&unk_26FB800;
      v6[3] |= v5;
      *v6 |= v5;
      do
      {
        while ( v7[1] != a2 )
        {
          v7 += 2;
          if ( v7 == (unsigned int *)&unk_26FBAF8 )
            goto LABEL_6;
        }
        v8 = *v7;
        v7 += 2;
        sub_2299030(a1, v8);
      }
      while ( v7 != (unsigned int *)&unk_26FBAF8 );
LABEL_6:
      result = *(_QWORD *)(a1 + 48);
      if ( !result )
        return result;
      if ( a2 == 39 )
        break;
      if ( a2 != 16 )
        return result;
      if ( *(_QWORD *)(result + 32) != 9
        || (v9 = *(_QWORD *)(result + 24), *(_QWORD *)v9 != 0x2D342E38766D7261LL)
        || *(_BYTE *)(v9 + 8) != 97 )
      {
        if ( *(_DWORD *)(result + 16) != 65 )
          return result;
        if ( *(_DWORD *)result == 8 )
        {
          v10 = *(_DWORD *)(result + 4) & 0x7FFFFFFF;
          if ( v10 <= 4 )
          {
            v11 = *(_DWORD *)(result + 12) & 0x7FFFFFFF;
            result = *(_DWORD *)(result + 8) & 0x7FFFFFFF;
            if ( v10 != 4 || !((unsigned int)result | v11) )
              return result;
          }
        }
        else if ( *(_DWORD *)result != 9 )
        {
          return result;
        }
      }
      a2 = 83;
      sub_2299030(a1, 82);
      v5 = (__int64)&stru_80000;
      result = 1;
      if ( (*(_BYTE *)(a1 + 10) & 8) != 0 )
        return result;
    }
    v12 = *(_QWORD *)(result + 32);
    v13 = *(_QWORD *)(result + 24);
    v14 = *(_DWORD *)(result + 16);
    if ( v12 == 9 && *(_QWORD *)v13 == 0x2D342E38766D7261LL && *(_BYTE *)(v13 + 8) == 97 )
    {
      if ( v14 != 65 )
        goto LABEL_35;
      v15 = *(_DWORD *)result;
LABEL_27:
      if ( v15 != 9 )
      {
LABEL_35:
        a2 = 31;
        continue;
      }
      goto LABEL_28;
    }
    break;
  }
  if ( v14 != 65 )
    return result;
  v15 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 8 )
  {
    v16 = *(_DWORD *)(result + 4) & 0x7FFFFFFF;
    if ( v16 <= 4 && (v16 != 4 || !(*(_DWORD *)(result + 8) & 0x7FFFFFFF | *(_DWORD *)(result + 12) & 0x7FFFFFFF)) )
      return result;
    if ( v12 != 7 )
      goto LABEL_35;
    goto LABEL_26;
  }
  if ( v15 != 9 )
    return result;
  if ( v12 == 7 )
  {
LABEL_26:
    if ( *(_DWORD *)v13 == 1986884193 && *(_WORD *)(v13 + 4) == 11577 && *(_BYTE *)(v13 + 6) == 97 )
      return result;
    goto LABEL_27;
  }
LABEL_28:
  if ( (*(_DWORD *)(result + 4) & 0x7FFFFFFF) == 0 )
  {
    result = (unsigned int)(*(_DWORD *)(result + 12) | *(_DWORD *)(result + 8));
    if ( (result & 0x7FFFFFFF) == 0 )
      goto LABEL_35;
  }
  return result;
}
