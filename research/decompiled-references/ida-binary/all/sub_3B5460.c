__int64 __fastcall ltl_chooser_t__::vfunc_13(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx

  v2 = *(__int64 **)a2;
  v3 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v3 != *(_QWORD *)a2 )
  {
    do
    {
      v4 = *v2++;
      sub_3CE640(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL) + 8 * v4));
    }
    while ( (__int64 *)v3 != v2 );
  }
  return 0;
}
