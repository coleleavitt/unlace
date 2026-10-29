/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91B6C
// Address: 0x00091B6C

//----- (00091B6C) --------------------------------------------------------
int __fastcall sub_91B6C(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  bool v10; // zf
  int v11; // r9
  __int64 v12; // r0
  bool v13; // zf

  if ( sub_91274(a1, *(_DWORD *)(a2 + 8), a5) )
  {
    result = *(_DWORD *)(a2 + 4);
    if ( result == a3 )
    {
      result = *(_DWORD *)(a2 + 28);
      if ( result != 1 )
        *(_DWORD *)(a2 + 28) = a4;
    }
    return result;
  }
  if ( !sub_91274(a1, *(_DWORD *)a2, a5) )
    return (*(int (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 24))(*(_DWORD *)(a1 + 8), a2, a3, a4);
  result = *(_DWORD *)(a2 + 16);
  v10 = result == a3;
  if ( result != a3 )
  {
    result = *(_DWORD *)(a2 + 20);
    v10 = result == a3;
  }
  if ( !v10 )
  {
    result = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(a2 + 32) = a4;
    if ( result == 4 )
      return result;
    v11 = 0;
    *(_WORD *)(a2 + 52) = 0;
    (*(void (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8), a2, a3, a3);
    if ( *(_BYTE *)(a2 + 53) )
    {
      if ( *(_BYTE *)(a2 + 52) )
        goto LABEL_25;
      v11 = 1;
    }
    v12 = *(_QWORD *)(a2 + 36);
    *(_DWORD *)(a2 + 20) = a3;
    *(_DWORD *)(a2 + 40) = HIDWORD(v12) + 1;
    v13 = (_DWORD)v12 == 1;
    if ( (_DWORD)v12 == 1 )
      v13 = *(_DWORD *)(a2 + 24) == 2;
    if ( v13 )
      *(_BYTE *)(a2 + 54) = 1;
    if ( !v11 )
    {
      result = 4;
      goto LABEL_27;
    }
LABEL_25:
    result = 3;
LABEL_27:
    *(_DWORD *)(a2 + 44) = result;
    return result;
  }
  if ( a4 == 1 )
  {
    result = 1;
    *(_DWORD *)(a2 + 32) = 1;
  }
  return result;
}
