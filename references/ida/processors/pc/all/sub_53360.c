__int64 __fastcall sub_53360(__int64 a1)
{
  __int64 named_type_tid; // rax
  __int64 result; // rax

  named_type_tid = *(_QWORD *)(a1 + 5528);
  if ( !named_type_tid )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5528) = named_type_tid;
  }
  if ( named_type_tid != -1 )
    return create_data();
  result = sub_52B40((__int64)"int Flags;void *InitPtr;int Flags2;", "_excData2");
  *(_QWORD *)(a1 + 5528) = result;
  if ( result != -1 )
    return create_data();
  return result;
}
