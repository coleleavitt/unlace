unsigned __int64 __fastcall sub_3B9E20(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx

  result = a2 - sub_631AD0(*a1, 29);
  v3 = a1[3];
  if ( *(_DWORD *)(v3 + 24) == 4 && (HIDWORD(result) == 0xFFFFFFFF || HIDWORD(result) == 1) )
    result &= *(_QWORD *)(v3 + 16);
  return result;
}
