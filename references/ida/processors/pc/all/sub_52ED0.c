__int64 __fastcall sub_52ED0(__int64 a1)
{
  __int64 named_type_tid; // rax
  __int64 result; // rax

  named_type_tid = *(_QWORD *)(a1 + 5552);
  if ( !named_type_tid )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5552) = named_type_tid;
  }
  if ( named_type_tid != -1 )
    return create_data();
  result = sub_52B40((__int64)"int _top;int Len __udec;char Text[] __strlit(C);", "_strings");
  *(_QWORD *)(a1 + 5552) = result;
  if ( result != -1 )
    return create_data();
  return result;
}
