__int64 __fastcall sub_3C0160(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax

  result = qalloc_or_throw(24);
  *(_QWORD *)result = &off_4B5380;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a3 >> 16;
  *(_DWORD *)(result + 16) = (unsigned __int16)a3;
  return result;
}
