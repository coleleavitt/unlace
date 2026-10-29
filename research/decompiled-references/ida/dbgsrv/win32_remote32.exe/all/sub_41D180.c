/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D180
// Address: 0x0041D180

//----- (0041D180) --------------------------------------------------------
int __cdecl sub_41D180(int a1, int a2)
{
  int v2; // edx
  unsigned int v3; // ebp
  unsigned int v4; // esi
  int v5; // ecx
  unsigned int v6; // esi
  bool v7; // cf
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  int result; // eax
  int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // [esp+Ch] [ebp-4h]

  switch ( sub_420FB0(a1, (char *)a1, a2) )
  {
    case 2:
    case 6:
      v15 = *(_DWORD *)(a1 + 8);
      if ( v15 > *(_DWORD *)(a2 + 8) )
        return 1;
      if ( v15 < *(_DWORD *)(a2 + 8) )
        return -1;
      return 0;
    case 3:
      return sub_45EEA0((_WORD *)(a1 + 8), (_WORD *)(a2 + 8));
    case 5:
      return *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8);
    case 7:
      v2 = *(_DWORD *)(a2 + 8);
      v3 = *(_DWORD *)(a1 + 12) != 0 ? *(_DWORD *)(a1 + 12) - 1 : 0;
      v17 = *(_DWORD *)(a2 + 12) != 0 ? *(_DWORD *)(a2 + 12) - 1 : 0;
      v4 = v17;
      v5 = *(_DWORD *)(a1 + 8);
      if ( v3 < v17 )
        v4 = *(_DWORD *)(a1 + 12) != 0 ? *(_DWORD *)(a1 + 12) - 1 : 0;
      v7 = v4 < 4;
      v6 = v4 - 4;
      if ( v7 )
        goto LABEL_7;
      break;
    case 8:
      v16 = *(_DWORD *)(a1 + 8);
      if ( v16 > *(_DWORD *)(a2 + 8) )
        return 1;
      return -(v16 < *(_DWORD *)(a2 + 8));
    case 9:
      v12 = *(_DWORD *)(a1 + 12);
      v13 = *(_QWORD *)(a2 + 8);
      v14 = *(_DWORD *)(a1 + 8);
      if ( v12 > SHIDWORD(v13) )
        return 1;
      if ( v12 < SHIDWORD(v13) )
        return -1;
      if ( v14 > (unsigned int)v13 )
        return 1;
      if ( __SPAIR64__(v12, v14) >= v13 )
        return 0;
      return -1;
    default:
      return 1;
  }
  while ( *(_DWORD *)v5 == *(_DWORD *)v2 )
  {
    v5 += 4;
    v2 += 4;
    v7 = v6 < 4;
    v6 -= 4;
    if ( v7 )
    {
LABEL_7:
      if ( v6 == -4 )
        goto LABEL_16;
      break;
    }
  }
  v7 = *(_BYTE *)v5 < *(_BYTE *)v2;
  if ( *(_BYTE *)v5 != *(_BYTE *)v2
    || v6 != -3
    && ((v8 = *(_BYTE *)(v5 + 1), v7 = v8 < *(_BYTE *)(v2 + 1), v8 != *(_BYTE *)(v2 + 1))
     || v6 != -2
     && ((v9 = *(_BYTE *)(v5 + 2), v7 = v9 < *(_BYTE *)(v2 + 2), v9 != *(_BYTE *)(v2 + 2))
      || v6 != -1 && (v10 = *(_BYTE *)(v5 + 3), v7 = v10 < *(_BYTE *)(v2 + 3), v10 != *(_BYTE *)(v2 + 3)))) )
  {
    result = v7 ? -1 : 1;
    goto LABEL_17;
  }
LABEL_16:
  result = 0;
LABEL_17:
  if ( !result )
  {
    if ( v3 >= v17 )
      return v3 > v17;
    else
      return -1;
  }
  return result;
}
