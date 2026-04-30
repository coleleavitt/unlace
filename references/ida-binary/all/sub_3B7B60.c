__int64 __fastcall ltl_chooser_t__::vfunc_11(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = sub_1698A0(0, (int)"HIDECANCEL\nDo you really want to unload the selected type libraries?");
  result = 0;
  if ( v2 == 1 )
  {
    do
      del_til(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL)
                          + 8LL * *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8) - 8)));
    while ( (unsigned __int8)sub_49F220(a2) );
    sub_49F270(a1, a2, **(_QWORD **)a2);
    return 1;
  }
  return result;
}
