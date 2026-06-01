/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CA20
// Address: 0x000000000004CA20

//----- (000000000004CA20) ----------------------------------------------------
__int64 __fastcall sub_4CA20(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  bool v6; // cc
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx

  v1 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v2 = *(_QWORD *)(a1 + 480);
  v3 = v1 - v2;
  if ( qlseek(*(_QWORD *)(a1 + 472), v2, 0) == -1
    || (v4 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480),
        v5 = qlseek(*(_QWORD *)(a1 + 472), 0, 1) - *(_QWORD *)(a1 + 480),
        v6 = v4 <= v5,
        v7 = v4 - v5,
        v6)
    || v7 < 0x10
    || (*(_OWORD *)(a1 + 552) = 0,
        *(_OWORD *)(a1 + 536) = 0,
        *(_OWORD *)(a1 + 520) = 0,
        *(_OWORD *)(a1 + 504) = 0,
        *(_QWORD *)(a1 + 568) = 0,
        qlread(*(_QWORD *)(a1 + 472), (void *)(a1 + 504), 16) != 16)
    || *(_DWORD *)(a1 + 504) != 1179403647 )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v8 = 64;
    if ( !*(_BYTE *)(a1 + 617) )
      v8 = 52;
    LOBYTE(v7) = v7 >= v8;
  }
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v3, 0);
  return (unsigned int)v7;
}
