/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C3B0
// Address: 0x000000000041C3B0

//----- (000000000041C3B0) ----------------------------------------------------
void __fastcall sub_41C3B0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  _QWORD *v6; // rdi

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 0 )
  {
    if ( a3 == 1 )
    {
      v6 = *(_QWORD **)(a1 + 168);
      if ( v6 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
      {
        sub_41C280((_QWORD *)(a1 + 120), a2);
      }
      else
      {
        v6[1] = -1;
        v6[2] = 0;
        *v6 = 0xFFFFFFFFLL;
        sub_4788F0((__int64)v6, a2);
        *(_QWORD *)(a1 + 168) += 72LL;
      }
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 136);
      if ( v4 == *(_QWORD *)(a1 + 144) )
      {
        sub_41AFF0((_QWORD *)(a1 + 120), a2);
      }
      else
      {
        *(_BYTE *)(v4 - 56) = 0;
        v5 = v4 - 72;
        *(_QWORD *)(v5 + 8) = -1;
        *(_QWORD *)v5 = 0xFFFFFFFFLL;
        *(_DWORD *)(v5 + 20) = 0;
        sub_4788F0(v5, a2);
        *(_QWORD *)(a1 + 136) -= 72LL;
      }
    }
    *(_BYTE *)(a1 + 1412) = 0;
  }
}
