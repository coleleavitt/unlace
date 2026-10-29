void __fastcall sub_E5A8A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 *v6; // rsi
  __int16 v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+8h] [rbp-50h]

  v2 = a1 + 1048;
  v4 = *(_QWORD *)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    v6 = *(__int64 **)v4;
    if ( v5 > 0x40 )
    {
      v4 = *v6;
    }
    else
    {
      v4 = 0;
      if ( v5 )
        v4 = (__int64)((_QWORD)v6 << (64 - (unsigned __int8)v5)) >> (64 - (unsigned __int8)v5);
    }
  }
  v8 = v4;
  v7 = 3;
  sub_222AB70(a1 + 1048, "size", 4);
  sub_222CAC0(v2, &v7);
  sub_2229BF0(v2);
  sub_222B2A0(&v7);
  sub_E5A720(a1, a2);
}
