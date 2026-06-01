__int64 __fastcall sub_49D230(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *i; // r12
  bool v6; // al

  v3 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  v4 = sub_49C910(a2, *v3, *(_QWORD **)(a2 + 56));
  for ( i = sub_49C910(a1, *v3, *(_QWORD **)(a1 + 56)); ; i += 16 )
  {
    v6 = 1;
    if ( i != (_QWORD *)(*(_QWORD *)(a1 + 56) + (*(_QWORD *)(a1 + 64) << 7)) )
      v6 = *i >= (unsigned __int64)v3[1];
    if ( v4 == (_QWORD *)(*(_QWORD *)(a2 + 56) + (*(_QWORD *)(a2 + 64) << 7)) || *v4 >= (unsigned __int64)v3[1] )
      return !v6;
    if ( v6 || !sub_48EBC0(*(_QWORD *)(a1 + 32), (__int64)i, *(_DWORD *)(a1 + 12), (__int64)v4, *(_DWORD *)(a2 + 12)) )
      break;
    v4 += 16;
  }
  return 1;
}

