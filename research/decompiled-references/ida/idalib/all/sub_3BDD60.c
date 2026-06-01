unsigned __int64 __fastcall sub_3BDD60(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  result = -1;
  if ( a2 != -1 )
  {
    v3 = sub_631AD0(*a1, 29);
    v4 = a1[3];
    result = a2 + v3;
    if ( *(_DWORD *)(v4 + 24) == 4 && (HIDWORD(result) == 0xFFFFFFFF || HIDWORD(result) == 1) )
      result &= *(_QWORD *)(v4 + 16);
  }
  return result;
}
