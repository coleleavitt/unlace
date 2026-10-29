/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473A31
// Address: 0x00473A31

//----- (00473A31) --------------------------------------------------------
int __cdecl sub_473A31(int a1, char *lpMultiByteStr, int a3, LPWSTR lpWideCharStr, int cchWideChar)
{
  int result; // eax
  int v6; // ecx
  int v7; // edi
  const CHAR *v8; // eax
  const CHAR *v9; // esi
  int v10; // eax
  unsigned int i; // edx
  char v12; // cl
  char *v13; // esi
  char v14; // al
  char v15; // al
  int v16; // esi
  int v17; // eax
  DWORD LastError; // eax
  int v19; // [esp+4h] [ebp-8h]
  int v20; // [esp+8h] [ebp-4h]

  result = (int)sub_47372E(a1, lpMultiByteStr, a3);
  v6 = result;
  if ( result )
  {
    v7 = 56 * (a1 & 0x3F);
    v20 = a1 >> 6;
    v19 = (int)*(&dword_4B7B38 + (a1 >> 6));
    if ( *(_BYTE *)(v7 + v19 + 41) )
    {
      v8 = &lpMultiByteStr[result];
      v9 = &lpMultiByteStr[v6 - 1];
      if ( *v9 < 0 )
      {
        v10 = *(unsigned __int8 *)v9;
        for ( i = 1; !byte_4B5F20[v10] && i <= 4 && v9 >= lpMultiByteStr; ++i )
          v10 = *(unsigned __int8 *)--v9;
        v12 = *v9;
        if ( !byte_4B5F20[*(unsigned __int8 *)v9] )
        {
          *sub_46B984() = 42;
          return -1;
        }
        if ( byte_4B5F20[*(unsigned __int8 *)v9] + 1 == i )
        {
          v9 += i;
        }
        else if ( (*(_BYTE *)(v7 + v19 + 40) & 0x48) != 0 )
        {
          v13 = (char *)(v9 + 1);
          *(_BYTE *)(v7 + v19 + 42) = v12;
          if ( i >= 2 )
          {
            v14 = *v13++;
            *((_BYTE *)&(*(&dword_4B7B38 + v20))[1].LockSemaphore + v7 + 3) = v14;
          }
          if ( i == 3 )
          {
            v15 = *v13++;
            *((_BYTE *)&(*(&dword_4B7B38 + v20))[1].SpinCount + v7) = v15;
          }
          v9 = &v13[-i];
        }
        else
        {
          sub_474CB1((int)lpMultiByteStr, v7, a1, -i, (signed int)-i >> 31, 1u);
        }
      }
      else
      {
        v9 = v8;
      }
      v16 = v9 - lpMultiByteStr;
      v17 = sub_47B3EB(0xFDE9u, 0, lpMultiByteStr, v16, lpWideCharStr, cchWideChar);
      if ( !v17 )
      {
        LastError = GetLastError();
        sub_46B94E(LastError);
        return -1;
      }
      *((_BYTE *)&(*(&dword_4B7B38 + v20))[1].SpinCount + v7 + 1) = *((_BYTE *)&(*(&dword_4B7B38 + v20))[1].SpinCount
                                                                    + v7
                                                                    + 1)
                                                                  & 0xFD
                                                                  | (v17 == v16 ? 0 : 2);
      return 2 * v17;
    }
  }
  return result;
}
