/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061580
// Address: 0x08061580

//----- (08061580) --------------------------------------------------------
void __cdecl sub_8061580(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 0 )
  {
    if ( a3 == 1 )
    {
      v5 = *(_DWORD *)(a1 + 80);
      if ( v5 == *(_DWORD *)(a1 + 88) - 44 )
      {
        sub_8061440((_DWORD *)(a1 + 56), a2);
      }
      else
      {
        *(_BYTE *)(v5 + 12) = 0;
        *(_DWORD *)(v5 + 8) = -1;
        *(_DWORD *)(v5 + 16) = 0;
        *(_QWORD *)v5 = 0xFFFFFFFFLL;
        sub_80C62B0(v5, a2);
        *(_DWORD *)(a1 + 80) += 44;
      }
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 64);
      if ( v3 == *(_DWORD *)(a1 + 68) )
      {
        sub_80600D0((_DWORD *)(a1 + 56), a2);
      }
      else
      {
        *(_BYTE *)(v3 - 32) = 0;
        v4 = v3 - 44;
        *(_DWORD *)(v4 + 8) = -1;
        *(_QWORD *)v4 = 0xFFFFFFFFLL;
        *(_DWORD *)(v4 + 16) = 0;
        sub_80C62B0(v4, a2);
        *(_DWORD *)(a1 + 64) -= 44;
      }
    }
    *(_BYTE *)(a1 + 768) = 0;
  }
}
