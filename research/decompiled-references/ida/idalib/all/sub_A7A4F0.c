unsigned __int64 __fastcall sub_A7A4F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)(a2 + 96);
  if ( (((unsigned __int8)v9 | (unsigned __int8)(v9 >> 1)) & 1) != 0
    || (v10 = sub_7052B0((__int64 *)(a2 + 96), a2, v9, a4, a5, a6)) == nullptr )
  {
    v12 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    *(_BYTE *)(v12 + 18) &= 0xF8u;
    *(_QWORD *)v12 = v12;
    *(_QWORD *)(v12 + 8) = v12 & 0xFFFFFFFFFFFFFFF0LL;
    *(_WORD *)(v12 + 16) = 1565;
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = a3;
    *(_QWORD *)(a2 + 48) = v12;
    sub_A6A720(a1 + 8, v12);
    v11 = *(_QWORD *)(a2 + 48);
  }
  else
  {
    v11 = v10[6];
    *(_QWORD *)(a2 + 48) = v11;
  }
  return v11 & 0xFFFFFFFFFFFFFFF0LL;
}
