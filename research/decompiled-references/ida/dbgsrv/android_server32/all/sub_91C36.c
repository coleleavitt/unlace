/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91C36
// Address: 0x00091C36

//----- (00091C36) --------------------------------------------------------
int __fastcall sub_91C36(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  bool v10; // zf
  __int64 v11; // r0
  bool v12; // zf

  if ( sub_91274(a1, *(_DWORD *)(a2 + 8), a5) )
  {
    result = *(_DWORD *)(a2 + 4);
    if ( result == a3 )
    {
      result = *(_DWORD *)(a2 + 28);
      if ( result != 1 )
        *(_DWORD *)(a2 + 28) = a4;
    }
  }
  else
  {
    result = sub_91274(a1, *(_DWORD *)a2, a5);
    if ( result )
    {
      result = *(_DWORD *)(a2 + 16);
      v10 = result == a3;
      if ( result != a3 )
      {
        result = *(_DWORD *)(a2 + 20);
        v10 = result == a3;
      }
      if ( v10 )
      {
        if ( a4 == 1 )
        {
          result = 1;
          *(_DWORD *)(a2 + 32) = 1;
        }
      }
      else
      {
        v11 = *(_QWORD *)(a2 + 36);
        *(_DWORD *)(a2 + 20) = a3;
        *(_DWORD *)(a2 + 32) = a4;
        v12 = (_DWORD)v11 == 1;
        *(_DWORD *)(a2 + 40) = HIDWORD(v11) + 1;
        if ( (_DWORD)v11 == 1 )
          v12 = *(_DWORD *)(a2 + 24) == 2;
        if ( v12 )
          *(_BYTE *)(a2 + 54) = 1;
        *(_DWORD *)(a2 + 44) = 4;
        return 4;
      }
    }
  }
  return result;
}
