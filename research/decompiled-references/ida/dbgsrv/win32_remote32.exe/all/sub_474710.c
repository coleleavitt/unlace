/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474710
// Address: 0x00474710

//----- (00474710) --------------------------------------------------------
DWORD *__cdecl sub_474710(DWORD *a1, int a2, unsigned int a3, int a4)
{
  DWORD *v4; // esi
  unsigned __int16 *v5; // edi
  unsigned int v6; // esi
  WCHAR *v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [esp+Ch] [ebp-1418h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-1414h] BYREF
  HANDLE hFile; // [esp+14h] [ebp-1410h]
  unsigned int v15; // [esp+18h] [ebp-140Ch]
  CHAR MultiByteStr[3416]; // [esp+1Ch] [ebp-1408h] BYREF
  WCHAR WideCharStr[852]; // [esp+D74h] [ebp-6B0h] BYREF
  char v18; // [esp+141Ch] [ebp-8h] BYREF

  v4 = a1;
  hFile = *((HANDLE *)&(*(&dword_4B7B38 + (a2 >> 6)))[1].DebugInfo + 14 * (a2 & 0x3F));
  v15 = a3 + a4;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v5 = (unsigned __int16 *)a3;
  if ( a3 < a3 + a4 )
  {
LABEL_2:
    v6 = v15;
    v7 = WideCharStr;
    do
    {
      if ( (unsigned int)v5 >= v6 )
        break;
      v8 = *v5++;
      if ( v8 == 10 )
        *v7++ = 13;
      *v7++ = v8;
    }
    while ( v7 < (WCHAR *)&v18 );
    v9 = sub_47B467(0xFDE9u, 0, WideCharStr, v7 - WideCharStr, MultiByteStr, 3413, nullptr, nullptr);
    v4 = a1;
    v12 = v9;
    if ( v9 )
    {
      v10 = 0;
      while ( WriteFile(hFile, &MultiByteStr[v10], v9 - v10, &NumberOfBytesWritten, nullptr) )
      {
        v10 += NumberOfBytesWritten;
        v9 = v12;
        if ( v10 >= v12 )
        {
          a1[1] = (DWORD)v5 - a3;
          if ( (unsigned int)v5 < v15 )
            goto LABEL_2;
          return v4;
        }
      }
    }
    *a1 = GetLastError();
  }
  return v4;
}
