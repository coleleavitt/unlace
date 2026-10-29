/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060A3C
// Address: 0x0000000100060A3C

//----- (0000000100060A3C) ----------------------------------------------------
__int64 __fastcall sub_100060A3C(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // x20
  int v6; // w9
  _BYTE *v7; // x1

  *(_QWORD *)a1 = off_10009F9B0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 144) = 0;
  v5 = (_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  v6 = dword_1000A53A0++;
  *(_DWORD *)(a1 + 168) = v6;
  *(_QWORD *)(a1 + 176) = qtime64();
  *(_BYTE *)(a1 + 184) = a3;
  if ( (sub_100062564(*(_QWORD *)(a1 + 136)) & 1) == 0 )
  {
    v7 = *(_BYTE **)(a1 + 144);
    if ( *(_QWORD *)(a1 + 160) <= 9u )
    {
      v7 = qvector_reserve(v5, v7, 0xAu, 1u);
      *v5 = v7;
    }
    *(_QWORD *)(a1 + 152) = 10;
    *(_QWORD *)v7 = *(_QWORD *)"(unknown)";
    v7[8] = 41;
    *(_BYTE *)(*(_QWORD *)(a1 + 144) + 9LL) = 0;
  }
  *(_OWORD *)(a1 + 120) = 0u;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 8) = 0u;
  return a1;
}
// 10009F9B0: using guessed type void (__fastcall __noreturn *off_10009F9B0[2])();
// 1000A53A0: using guessed type int dword_1000A53A0;
