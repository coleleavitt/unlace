__int64 __fastcall sub_47FFC0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  __int64 v7; // r12

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v4 == sub_3D58E0 )
    v5 = (unsigned __int64 *)(a2 + 16);
  else
    v5 = (unsigned __int64 *)v4(a2);
  if ( a3 < *v5 )
    return a1;
  if ( a3 >= v5[1] )
    return a1;
  if ( a3 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
    return a1;
  v7 = 160 * a3;
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 40) + v7 + 156) )
    return a1;
  switch_dbctx(*(int *)(a2 + 8));
  sub_47EEB0(a1, *(_QWORD *)(a2 + 40) + v7 + 16);
  return a1;
}

