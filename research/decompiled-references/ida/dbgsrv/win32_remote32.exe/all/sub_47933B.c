/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47933B
// Address: 0x0047933B

//----- (0047933B) --------------------------------------------------------
void __usercall sub_47933B(int a1@<edi>)
{
  LPBYTE lpReserved2; // ebx
  signed int v2; // esi
  int v3; // edi
  HANDLE *v4; // eax
  BYTE v5; // dl
  char *v6; // edx
  struct _STARTUPINFOW StartupInfo; // [esp+0h] [ebp-48h] BYREF
  BYTE *v8; // [esp+44h] [ebp-4h]

  GetStartupInfoW(&StartupInfo);
  if ( StartupInfo.cbReserved2 )
  {
    lpReserved2 = StartupInfo.lpReserved2;
    if ( StartupInfo.lpReserved2 )
    {
      v2 = *(_DWORD *)StartupInfo.lpReserved2;
      v8 = &StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
      if ( v2 >= 0x2000 )
        v2 = 0x2000;
      sub_4733AA((int)StartupInfo.lpReserved2, a1, v2);
      if ( v2 > dword_4B7D38[0] )
        v2 = dword_4B7D38[0];
      v3 = 0;
      if ( v2 )
      {
        v4 = (HANDLE *)v8;
        do
        {
          if ( *v4 != (HANDLE)-1 && *v4 != (HANDLE)-2 )
          {
            v5 = lpReserved2[v3 + 4];
            if ( (v5 & 1) != 0 )
            {
              if ( (v5 & 8) != 0 || GetFileType(*v4) )
              {
                v6 = (char *)*(&dword_4B7B38 + (v3 >> 6)) + 56 * (v3 & 0x3F);
                *((_DWORD *)v6 + 6) = *(_DWORD *)v8;
                v6[40] = lpReserved2[v3 + 4];
              }
              v4 = (HANDLE *)v8;
            }
          }
          ++v3;
          v8 = (BYTE *)++v4;
        }
        while ( v3 != v2 );
      }
    }
  }
}
// 4B7D38: using guessed type int dword_4B7D38[];
