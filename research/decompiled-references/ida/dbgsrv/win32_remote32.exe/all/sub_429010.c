/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429010
// Address: 0x00429010

//----- (00429010) --------------------------------------------------------
char __stdcall sub_429010(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // edi
  unsigned int v2; // ebx
  int v3; // ecx
  struct _RTL_CRITICAL_SECTION *v4; // esi
  unsigned int i; // eax
  char v7; // [esp+1Bh] [ebp-Dh]

  v1 = dword_4B6BD4;
  sub_4562D0(dword_4B6BD4);
  v2 = 0;
  v7 = 0;
  if ( dword_4B6BDC )
  {
    v3 = dword_4B6BD8;
    while ( *(_DWORD *)(dword_4B6BD8 + 4 * v2) != a1 )
    {
      if ( ++v2 >= dword_4B6BDC )
        goto LABEL_18;
    }
    if ( v2 < dword_4B6BDC )
    {
      if ( v2 == dword_4B6BE4 )
      {
        v4 = dword_4B6BD4;
        sub_4562D0(dword_4B6BD4);
        for ( i = 0; i < dword_4B6BDC; ++i )
        {
          if ( *(int **)(dword_4B6BD8 + 4 * i) == dword_4B46B8 )
            break;
        }
        if ( i != dword_4B6BDC && dword_4B6BE4 != i )
        {
          dword_4B6BE4 = i;
          nullsub_1(2);
        }
        sub_4562F0(v4);
        v3 = dword_4B6BD8;
      }
      if ( *(_DWORD *)(a1 + 8) && !byte_4B70FC )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1442);
      }
      *(_DWORD *)(v3 + 4 * v2) = 0;
      nullsub_1(1);
      v7 = 1;
    }
  }
LABEL_18:
  sub_4562F0(v1);
  return v7;
}
// 4015F0: using guessed type int __cdecl nullsub_1(_DWORD);
// 4B46B8: using guessed type int dword_4B46B8[3];
// 4B6BD8: using guessed type int dword_4B6BD8;
// 4B6BDC: using guessed type int dword_4B6BDC;
// 4B6BE4: using guessed type int dword_4B6BE4;
// 4B70F0: using guessed type char byte_4B70F0;
// 4B70FC: using guessed type char byte_4B70FC;
