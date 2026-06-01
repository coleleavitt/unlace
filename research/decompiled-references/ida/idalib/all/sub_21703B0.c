__int64 __fastcall sub_21703B0(
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
  int v10; // eax
  char v12; // dl
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  char v15; // [rsp+8h] [rbp-20h]

  v10 = *(unsigned __int16 *)(a3 + 14);
  if ( v10 == 0xFFFF )
  {
    sub_2170000((__int64)&v14, (a3 - a4) >> 4, a3 - a4, a4, a5, a6, a7, a8, a9, a10);
    v12 = v15 & 1;
    if ( (v15 & 1) != 0 )
    {
      v13 = v14;
      v14 = 0;
      *(_QWORD *)a1 = v13;
    }
    else
    {
      *(_DWORD *)a1 = v14;
    }
    *(_BYTE *)(a1 + 8) = v12 | *(_BYTE *)(a1 + 8) & 0xFE;
    sub_A0AE90(&v14);
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    if ( (unsigned int)(v10 - 1) > 0xFEFE )
      *(_DWORD *)a1 = 0;
    else
      *(_DWORD *)a1 = v10;
    return a1;
  }
}
