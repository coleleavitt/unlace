bool __fastcall sub_157D730(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // r8
  __int64 v11; // r9

  v6 = *(_QWORD *)(a1 + 32);
  return (unsigned __int8)sub_FD3830(v6, 0x1D00u, a2, a1, a5, a6) != 1
      || (unsigned __int8)sub_FD3830(v6, 0x1A15u, a2, a1, v7, v8) != 1
      || (unsigned __int8)sub_FD3830(v6, 0x1CFEu, a2, a1, v10, v11) != 1;
}
