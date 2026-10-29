__int64 __fastcall sub_CEBC00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v5; // r13d
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned __int8 v8; // si
  __int64 v9; // r15
  _BYTE *v10; // rax
  __int64 result; // rax
  unsigned __int8 v13; // [rsp+8h] [rbp-50h]
  void *v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = *(_QWORD *)(a1 + 176);
  v7 = *(_DWORD *)sub_DFDA20(v6, 8);
  sub_DFDA50(v6, 8);
  v8 = 2;
  v9 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( v7 >= v5 )
  {
    v8 = 3;
    if ( v7 <= v5 )
      v8 = *(_BYTE *)(a3 + 112) != 2;
  }
  v10 = sub_B3D760(a3, v8);
  sub_B3C480((__int64)&v14, (__int64)v10);
  result = sub_D68B10(a1, a2, v9, &v14);
  if ( v15 > 0x40 )
  {
    if ( v14 )
    {
      v13 = result;
      operator delete[](v14);
      return v13;
    }
  }
  return result;
}

