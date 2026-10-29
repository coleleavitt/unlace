bool __fastcall sub_B39690(__int64 *a1, __int64 *a2, _BYTE *a3)
{
  __int64 v3; // r8
  __int64 v5; // rdi
  bool result; // al
  char v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rax

  v3 = *a1;
  v5 = *a2;
  *a3 = 0;
  result = 0;
  if ( *(_QWORD *)(v3 + 16) != *(_QWORD *)(v5 + 16) )
    return result;
  v7 = *((_BYTE *)a2 + 44) & 8;
  if ( (*((_BYTE *)a1 + 44) & 8) != 0 )
  {
    if ( !v7 && *(_DWORD *)(v5 + 24) )
      return result;
LABEL_5:
    if ( (*((_BYTE *)a1 + 44) & 0x20) == 0 )
      return 1;
    goto LABEL_6;
  }
  v12 = *(unsigned int *)(v3 + 24);
  if ( v7 )
  {
    if ( (_DWORD)v12 )
      return result;
    goto LABEL_5;
  }
  if ( (_DWORD)v12 != *(_DWORD *)(v5 + 24) )
    return result;
  if ( (*((_BYTE *)a1 + 44) & 0x20) != 0 )
  {
LABEL_6:
    v8 = *(_QWORD *)(a1[15] + 8);
    v9 = *(_QWORD *)(a1[14] + 8);
    v10 = *(_QWORD *)(a2[14] + 8);
    v11 = *(_QWORD *)(a2[15] + 8);
    if ( v10 != v9 || v11 != v8 )
    {
      result = v10 == v8 && v11 == v9;
      if ( !result )
        return result;
      *a3 = 1;
    }
    return 1;
  }
  if ( !(_DWORD)v12 )
    return 1;
  v13 = 8 * v12 + 112;
  v14 = 112;
  while ( *(_QWORD *)(a2[(unsigned __int64)v14 / 8] + 8) == *(_QWORD *)(a1[(unsigned __int64)v14 / 8] + 8) )
  {
    v14 += 8;
    if ( v13 == v14 )
      return 1;
  }
  return 0;
}

