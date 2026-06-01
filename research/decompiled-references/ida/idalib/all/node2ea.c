unsigned __int64 __fastcall node2ea(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // rbp
  __int64 v3; // rdx

  result = -1;
  if ( a1 != -1 )
  {
    v2 = *(_QWORD **)(qword_2CCB598 + 1672);
    result = a1 - sub_631AD0(*v2, 29);
    v3 = v2[3];
    if ( *(_DWORD *)(v3 + 24) == 4 && (HIDWORD(result) == 0xFFFFFFFF || HIDWORD(result) == 1) )
      result &= *(_QWORD *)(v3 + 16);
  }
  return result;
}
