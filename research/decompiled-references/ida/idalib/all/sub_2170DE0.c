__int64 __fastcall sub_2170DE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  unsigned __int16 v11; // di
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  char v16; // [rsp+8h] [rbp-20h]

  v11 = __ROL2__(*(_WORD *)(a3 + 14), 8);
  if ( v11 == 0xFFFF )
  {
    sub_2170A30((__int64)&v15, (a3 - a4) >> 4, a3 - a4, a4, a5, a6, a7, a8, a9, a10);
    v13 = v16 & 1;
    if ( (v16 & 1) != 0 )
    {
      v14 = v15;
      v15 = 0;
      *(_QWORD *)a1 = v14;
    }
    else
    {
      *(_DWORD *)a1 = v15;
    }
    *(_BYTE *)(a1 + 8) = v13 | *(_BYTE *)(a1 + 8) & 0xFE;
    sub_A0AE90(&v15);
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    if ( (unsigned int)v11 - 1 > 0xFEFE )
      *(_DWORD *)a1 = 0;
    else
      *(_DWORD *)a1 = v11;
    return a1;
  }
}
