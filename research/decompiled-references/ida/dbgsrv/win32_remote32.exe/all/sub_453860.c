/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453860
// Address: 0x00453860

//----- (00453860) --------------------------------------------------------
unsigned int __userpurge sub_453860@<eax>(__m128i a1@<xmm0>, DWORD dwMessageId)
{
  int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // esi
  char v6; // al
  WCHAR Buffer[1024]; // [esp+8h] [ebp-804h] BYREF

  v2 = sub_45C920();
  if ( FormatMessageW(0x1200u, nullptr, dwMessageId, 0x400u, Buffer, 0x400u, nullptr) )
  {
    sub_45A700(v2, Buffer, -1);
    sub_407670(v2, a1, (const __m128i *)"\r", &byte_48A240);
    sub_407670(v2, a1, (const __m128i *)"\n", &byte_48A240);
    v3 = *(_DWORD *)(v2 + 4);
    if ( v3 > 1 )
    {
      v4 = *(_DWORD *)v2;
      v5 = v3 + *(_DWORD *)v2 - 1;
      if ( v5 > *(_DWORD *)v2 )
      {
        do
        {
          v6 = *(_BYTE *)(v5 - 1);
          if ( v6 < 0 )
            break;
          if ( !sub_46B7F0(v2, (unsigned __int8)v6) )
            break;
          --v5;
        }
        while ( v5 > v4 );
      }
      sub_415CB0(v2, v5 - v4);
    }
  }
  else
  {
    sub_402970(a1, (LPVOID *)v2, "Unknown error, code: 0x%08X", dwMessageId);
  }
  return *(_DWORD *)v2;
}
// 48A240: using guessed type char byte_48A240;
