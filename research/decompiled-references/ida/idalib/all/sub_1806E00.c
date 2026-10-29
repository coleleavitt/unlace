__int64 __fastcall sub_1806E00(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-30h]

  sub_C3EB00((__int64)&v8, a2, *(_QWORD *)(*(_QWORD *)a1 + 248LL), nullptr, a5, a6);
  v6 = v9;
  if ( v9 <= 0x40 )
    LOBYTE(v6) = v8 == 0;
  else
    LOBYTE(v6) = v6 == (unsigned int)sub_2206780(&v8);
  sub_98E4B0((__int64)&v8);
  return v6;
}
