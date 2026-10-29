unsigned __int64 __fastcall ea2node(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx

  result = -1;
  if ( a1 != -1 )
  {
    v2 = *(_QWORD **)(qword_2CCB598 + 1672);
    v3 = sub_631AD0(*v2, 29);
    v4 = v2[3];
    result = a1 + v3;
    if ( *(_DWORD *)(v4 + 24) == 4 && (HIDWORD(result) == 0xFFFFFFFF || HIDWORD(result) == 1) )
      result &= *(_QWORD *)(v4 + 16);
  }
  return result;
}
