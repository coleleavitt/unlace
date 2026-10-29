unsigned __int64 __fastcall end_ea2node(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  v2 = sub_631AD0(*v1, 29);
  v3 = v1[3];
  result = a1 + v2;
  if ( *(_DWORD *)(v3 + 24) == 4 )
  {
    if ( HIDWORD(result) == 0xFFFFFFFF || HIDWORD(result) == 1 )
      result &= *(_QWORD *)(v3 + 16);
    if ( !result )
      return 0x100000000LL;
  }
  return result;
}
