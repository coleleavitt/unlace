unsigned __int64 __fastcall sub_3B9DC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 result; // rax

  v2 = sub_631AD0(*a1, 29);
  v3 = a1[3];
  result = a2 + v2;
  if ( *(_DWORD *)(v3 + 24) == 4 && (HIDWORD(result) == 0xFFFFFFFF || HIDWORD(result) == 1) )
    result &= *(_QWORD *)(v3 + 16);
  return result;
}
