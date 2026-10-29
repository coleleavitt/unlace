/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91C50
// Address: 0x00091C50

//----- (00091C50) --------------------------------------------------------
unsigned int __cdecl sub_91C50(_DWORD *a1, int a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  size_t v5; // [esp-8h] [ebp-34h]
  _BYTE src[5]; // [esp+Eh] [ebp-1Eh] BYREF
  _BYTE v7[5]; // [esp+13h] [ebp-19h] BYREF
  unsigned int v8[5]; // [esp+18h] [ebp-14h] BYREF

  v8[0] = __readgsdword(0x14u);
  v2 = pack_dd(src, (unsigned int)v7, *(_DWORD *)a2 + 3);
  sub_3A950(a1, src, v2 - src);
  if ( *(_DWORD *)a2 != -3 )
  {
    if ( *(_DWORD *)a2 == -2 )
    {
      v5 = pack_dq(src, (unsigned int)v8, *(_DWORD *)(a2 + 4) + 1, (unsigned __int64)(*(_QWORD *)(a2 + 4) + 1LL) >> 32)
         - src;
      sub_3A950(a1, src, v5);
    }
    else
    {
      v3 = pack_dd(src, (unsigned int)v7, *(_DWORD *)(a2 + 8));
      sub_3A950(a1, src, v3 - src);
      sub_3A950(a1, *(void **)(a2 + 4), *(_DWORD *)(a2 + 8));
    }
  }
  return __readgsdword(0x14u);
}
