/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474627
// Address: 0x00474627

//----- (00474627) --------------------------------------------------------
DWORD *__cdecl sub_474627(DWORD *a1, int a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 *v4; // ecx
  unsigned int v5; // edx
  char *v6; // esi
  int v7; // eax
  DWORD v8; // esi
  DWORD v9; // eax
  char *v11; // [esp+Ch] [ebp-1410h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-140Ch] BYREF
  HANDLE hFile; // [esp+14h] [ebp-1408h]
  _BYTE Buffer[5118]; // [esp+18h] [ebp-1404h] BYREF
  char v15; // [esp+1416h] [ebp-6h] BYREF
  unsigned __int16 *v16; // [esp+142Ch] [ebp+10h]

  v4 = a3;
  v5 = (unsigned int)a3 + a4;
  hFile = *((HANDLE *)&(*(&dword_4B7B38 + (a2 >> 6)))[1].DebugInfo + 14 * (a2 & 0x3F));
  *a1 = 0;
  v11 = (char *)a3 + a4;
  a1[1] = 0;
  a1[2] = 0;
  while ( (unsigned int)v4 < v5 )
  {
    v6 = Buffer;
    do
    {
      if ( (unsigned int)v4 >= v5 )
        break;
      v7 = *v4++;
      if ( v7 == 10 )
      {
        a1[2] += 2;
        *(_WORD *)v6 = 13;
        v6 += 2;
      }
      *(_WORD *)v6 = v7;
      v6 += 2;
    }
    while ( v6 < &v15 );
    v16 = v4;
    v8 = (v6 - Buffer) & 0xFFFFFFFE;
    if ( !WriteFile(hFile, Buffer, v8, &NumberOfBytesWritten, nullptr) )
    {
      *a1 = GetLastError();
      return a1;
    }
    v9 = NumberOfBytesWritten;
    a1[1] += NumberOfBytesWritten;
    if ( v9 < v8 )
      return a1;
    v4 = v16;
    v5 = (unsigned int)v11;
  }
  return a1;
}
