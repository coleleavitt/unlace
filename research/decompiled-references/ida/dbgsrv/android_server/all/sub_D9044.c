/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9044
// Address: 0x00000000000D9044

//----- (00000000000D9044) ----------------------------------------------------
__int64 __fastcall sub_D9044(__int64 result, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v5; // x8
  const char *v9; // x22
  int v10; // w8
  int v11; // w9

  v5 = *(_QWORD *)(a2 + 16);
  if ( (a5 & 1) != 0 )
  {
    v9 = *(const char **)(result + 8);
    result = strcmp(v9, *(const char **)(v5 + 8));
    if ( (_DWORD)result )
    {
      result = strcmp(v9, *(const char **)(*(_QWORD *)a2 + 8LL));
      if ( (_DWORD)result )
        return result;
LABEL_7:
      if ( *(_QWORD *)(a2 + 32) == a3 || *(_QWORD *)(a2 + 40) == a3 )
      {
        if ( a4 == 1 )
          *(_DWORD *)(a2 + 56) = 1;
      }
      else
      {
        v11 = *(_DWORD *)(a2 + 60);
        v10 = *(_DWORD *)(a2 + 64);
        *(_DWORD *)(a2 + 56) = a4;
        *(_QWORD *)(a2 + 40) = a3;
        *(_DWORD *)(a2 + 64) = v10 + 1;
        if ( v11 == 1 && *(_DWORD *)(a2 + 48) == 2 )
          *(_BYTE *)(a2 + 78) = 1;
        *(_DWORD *)(a2 + 68) = 4;
      }
      return result;
    }
  }
  else if ( result != v5 )
  {
    if ( result != *(_QWORD *)a2 )
      return result;
    goto LABEL_7;
  }
  if ( *(_QWORD *)(a2 + 8) == a3 && *(_DWORD *)(a2 + 52) != 1 )
    *(_DWORD *)(a2 + 52) = a4;
  return result;
}
