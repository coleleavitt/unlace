unsigned __int64 __fastcall sub_A7A930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx

  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)(a2 + 96);
  if ( (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 1)) & 1) == 0
    && (v9 = sub_7052B0((__int64 *)(a2 + 96), a2, v8, a4, a5, a6)) != nullptr
    && (v10 = v9[6]) != 0 )
  {
    *(_QWORD *)(a2 + 48) = v10;
    return v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v11 = sub_A6FFD0((__int64 *)(a1 + 2352), 32, 4u);
    sub_F5E170(v11, 47, a2, 0);
    *(_QWORD *)(a2 + 48) = v11;
    sub_A6A720(a1 + 8, v11);
    return v11 & 0xFFFFFFFFFFFFFFF0LL;
  }
}
