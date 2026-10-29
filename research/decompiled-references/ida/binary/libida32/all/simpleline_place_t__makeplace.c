__int64 __fastcall simpleline_place_t__makeplace(__int64 a1, const char *a2, int a3, int a4)
{
  __int64 result; // rax

  result = qalloc_or_throw(16, a2);
  *(_QWORD *)result = off_2B03D60;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 8) = a4;
  return result;
}

