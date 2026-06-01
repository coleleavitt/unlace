__int64 __fastcall sub_781000(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7, int a8)
{
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax

  v12 = *(_QWORD *)(a1 + 152);
  v13 = 0;
  if ( v12 )
  {
    v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 152) & 6LL) == 2 )
      v13 = v14;
  }
  v15 = sub_7D6270(a2, a1, a3, a6, a4, a7, a8, v13);
  *(_QWORD *)(a1 + 152) = v15 & 0xFFFFFFFFFFFFFFF9LL | 4;
  return sub_7D3200(a3, v15, a5);
}

