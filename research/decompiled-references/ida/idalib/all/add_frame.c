__int64 __fastcall add_frame(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 *v7; // r14

  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 24) == -1 && a2 >= 0 )
  {
    v7 = *(__int64 **)(qword_2CCB598 + 1672);
    if ( (unsigned __int8)sub_5BC6E0(v7, a1, a2, a3) )
      return sub_5BC8C0(*(__int64 **)(*v7 + 1672), a1, a2, a3, a4, 1);
  }
  return 0;
}
