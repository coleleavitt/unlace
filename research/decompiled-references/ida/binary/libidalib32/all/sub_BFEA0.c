__int64 __fastcall sub_BFEA0(_BYTE *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (*v6)(void); // rax
  int v7; // r13d
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx

  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 96LL);
  if ( (char *)v6 != (char *)sub_BFE20 )
    return v6();
  if ( !a2[1] )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = *(_QWORD *)(*a2 + 8 * v8++);
    v7 |= (unsigned __int8)sub_BFD20((int *)(qword_2512E0 + 56 * v9), (__int64)a2, qword_2512E0, a4, a5, a6);
  }
  while ( v8 < a2[1] );
  if ( v7 != 1 )
    return 0;
  a1[180] = 1;
  return 1;
}

