unsigned __int64 __fastcall sub_157DBB0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = sub_BFD550(*(_QWORD *)(a2 + 16));
  if ( (*(_WORD *)result & 0x1FF) == 0x47 && *(_QWORD *)(result + 16) == *(_QWORD *)a1 )
  {
    *(_WORD *)(a1 + 8) = 256;
    return 256;
  }
  return result;
}
