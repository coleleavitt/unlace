/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47454C
// Address: 0x0047454C

//----- (0047454C) --------------------------------------------------------
DWORD *__cdecl sub_47454C(DWORD *a1, int a2, unsigned int a3, int a4)
{
  char *v4; // ecx
  unsigned int v5; // edx
  HANDLE v6; // edi
  char *v7; // esi
  char v8; // al
  DWORD v9; // esi
  HANDLE v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-140Ch]
  HANDLE hFile; // [esp+10h] [ebp-1408h] BYREF
  _BYTE Buffer[5119]; // [esp+14h] [ebp-1404h] BYREF
  char v15; // [esp+1413h] [ebp-5h] BYREF
  char *v16; // [esp+1428h] [ebp+10h]

  v4 = (char *)a3;
  v5 = a3 + a4;
  hFile = *((HANDLE *)&(*(&dword_4B7B38 + (a2 >> 6)))[1].DebugInfo + 14 * (a2 & 0x3F));
  *a1 = 0;
  v12 = a3 + a4;
  a1[1] = 0;
  a1[2] = 0;
  if ( a3 < a3 + a4 )
  {
    v6 = hFile;
    while ( 1 )
    {
      v7 = Buffer;
      do
      {
        if ( (unsigned int)v4 >= v5 )
          break;
        v8 = *v4++;
        if ( v8 == 10 )
        {
          ++a1[2];
          *v7++ = 13;
        }
        *v7++ = v8;
      }
      while ( v7 < &v15 );
      v16 = v4;
      v9 = v7 - Buffer;
      if ( !WriteFile(v6, Buffer, v9, (LPDWORD)&hFile, nullptr) )
        break;
      v10 = hFile;
      a1[1] += (DWORD)hFile;
      if ( (unsigned int)v10 >= v9 )
      {
        v4 = v16;
        v5 = v12;
        if ( (unsigned int)v16 < v12 )
          continue;
      }
      return a1;
    }
    *a1 = GetLastError();
  }
  return a1;
}
