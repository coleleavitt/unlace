__int64 __fastcall sub_21968E0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  const char *v14; // [rsp+10h] [rbp-48h] BYREF
  __int16 v15; // [rsp+30h] [rbp-28h]

  if ( (unsigned __int64)a3 >= sub_215DEC0(a2)
    && (v6 = sub_215DEC0(a2), v5 = (__int64)(a3 + 2), (unsigned __int64)(a3 + 2) <= v4 + v6) )
  {
    v9 = *(unsigned int *)(a2 + 8);
    v10 = *a3;
    v11 = a3[1];
    if ( (unsigned int)v9 <= 0x14 )
    {
      v12 = 1398784;
      if ( _bittest64(&v12, v9) )
      {
        v10 = _byteswap_ulong(v10) | ((unsigned __int64)_byteswap_ulong(HIDWORD(v10)) << 32);
        v11 = _byteswap_ulong(v11) | ((unsigned __int64)_byteswap_ulong(HIDWORD(v11)) << 32);
      }
    }
    *(_QWORD *)(a1 + 8) = v11;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v10;
    return a1;
  }
  else
  {
    v14 = "Structure read out-of-range";
    v15 = 259;
    sub_21967F0(&v13, (__int64 *)&v14, v4, v5);
    v7 = v13;
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v7;
    return a1;
  }
}
