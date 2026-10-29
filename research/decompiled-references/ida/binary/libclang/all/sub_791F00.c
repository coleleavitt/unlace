__int64 __fastcall sub_791F00(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  __int64 result; // rax

  v3 = a1 + 8;
  *(_QWORD *)(v3 - 8) = a2;
  sub_25ABF10(v3, 6);
  sub_25ABF10(a1 + 24, 6);
  sub_25ABF10(a1 + 40, 6);
  memset((void *)(a1 + 56), 0, 0x2E0u);
  sub_25ABF10(a1 + 792, 6);
  sub_25ABF10(a1 + 808, 6);
  v4 = (_DWORD *)(a1 + 56);
  LODWORD(result) = 0;
  do
  {
    *v4 = result;
    result = (unsigned int)(result + 1);
    v4 += 4;
  }
  while ( (_DWORD)result != 46 );
  return result;
}

