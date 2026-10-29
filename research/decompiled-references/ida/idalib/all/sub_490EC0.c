__int64 __fastcall sub_490EC0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rax

  v3 = *(_QWORD *)(sub_3C75F0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1672LL), *a2) + 16);
  if ( v3 )
    qbasename(v3);
  v4 = *(__int64 **)a1;
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < (unsigned __int64)(v5 + 1) )
  {
    v9 = qvector_reserve(v4, v6, v5 + 1, 24);
    v5 = v4[1];
    *v4 = v9;
    v6 = v9;
  }
  v7 = v6 + 24 * v5;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  ++v4[1];
  sub_35A910((__int64 *)v7);
  return 0;
}
