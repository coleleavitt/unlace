__int64 __fastcall sub_627F70(_QWORD *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  unsigned __int64 i; // rbx

  v4 = netnode_supfirst(*a1, 65);
  if ( v4 != -1 )
  {
    for ( i = v4; i != -1; i = netnode_supnext(*a1, i, 65) )
      sub_627D10((__int64)a1, a2, i);
  }
  sub_52D270(3, nullptr, a3, a4);
  return mark_builtin_widgets(2, 0, 1);
}
