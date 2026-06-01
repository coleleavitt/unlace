__int64 __fastcall sub_30D010(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  if ( qword_8CD748 )
  {
    v2 = sub_30EDD0(qword_8CD748);
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, 0);
  }
  return sub_47FBD0(a1, a2);
}
