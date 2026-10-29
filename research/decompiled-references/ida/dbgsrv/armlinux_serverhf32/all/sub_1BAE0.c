/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BAE0
// Address: 0x0001BAE0

//----- (0001BAE0) --------------------------------------------------------
void __fastcall sub_1BAE0(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  __int64 v5; // kr00_8
  int v6; // r3

  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 0 )
  {
    v4 = (_DWORD *)(a1 + 56);
    if ( a3 == 1 )
    {
      v6 = *(_DWORD *)(a1 + 80);
      if ( v6 == *(_DWORD *)(a1 + 88) - 44 )
      {
        sub_1BA70(v4, a2);
      }
      else
      {
        *(_DWORD *)v6 = -1;
        *(_DWORD *)(v6 + 4) = 0;
        *(_DWORD *)(v6 + 8) = -1;
        *(_BYTE *)(v6 + 12) = 0;
        *(_DWORD *)(v6 + 16) = 0;
        sub_6E4A8(v6, a2);
        *(_DWORD *)(a1 + 80) += 44;
      }
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( (_DWORD)v5 == HIDWORD(v5) )
      {
        sub_1B568(v4, a2);
      }
      else
      {
        *(_DWORD *)(v5 - 44) = -1;
        *(_DWORD *)(v5 - 40) = 0;
        *(_DWORD *)(v5 - 36) = -1;
        *(_BYTE *)(v5 - 32) = 0;
        *(_DWORD *)(v5 - 28) = 0;
        sub_6E4A8(v5 - 44, a2);
        *(_DWORD *)(a1 + 64) -= 44;
      }
    }
    *(_BYTE *)(a1 + 1112) = 0;
  }
}
