__int64 __fastcall sub_4B26B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // r14
  bool v6; // al

  v3 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  v4 = sub_4B1D30(a2, *v3, *(_QWORD **)(a2 + 56));
  for ( i = sub_4B1D30(a1, *v3, *(_QWORD **)(a1 + 56)); ; i += 18 )
  {
    v6 = 1;
    if ( i != (_QWORD *)(*(_QWORD *)(a1 + 56) + 144LL * *(_QWORD *)(a1 + 64)) )
      v6 = *i >= v3[1];
    if ( v4 == (_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL * *(_QWORD *)(a2 + 64)) || *v4 >= v3[1] )
      return !v6;
    if ( v6 || !sub_4A3980(*(_QWORD *)(a1 + 32), (__int64)i, *(_DWORD *)(a1 + 12), (__int64)v4, *(_DWORD *)(a2 + 12)) )
      break;
    v4 += 18;
  }
  return 1;
}
