__int64 __fastcall sub_ECE560(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  __int16 v15; // ax
  __int64 v17; // [rsp+0h] [rbp-38h]
  __int64 v18; // [rsp+8h] [rbp-30h]

  v15 = *(_WORD *)a1 & 0xFE00;
  LOBYTE(v15) = -4;
  *(_WORD *)a1 = v15;
  if ( unk_2CAD564 )
  {
    v18 = a6;
    v17 = a5;
    sub_EC5E10(252);
    a6 = v18;
    a5 = v17;
  }
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 72) = a10;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 76) = a11;
  *(_QWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 80) = a12;
  *(_QWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 84) = a13;
  *(_QWORD *)(a1 + 48) = a7;
  *(_QWORD *)(a1 + 56) = a8;
  *(_QWORD *)(a1 + 64) = a9;
  return a9;
}

