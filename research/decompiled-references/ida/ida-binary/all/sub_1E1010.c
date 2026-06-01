__int64 __fastcall sub_1E1010(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(int *)(a2 + 220);
  v3 = 7;
  if ( (v2 & 0x80000000) == 0LL && v2 < (unsigned __int64)xmmword_8CC398 )
    return qword_8CC390 + 56 * v2 == 0 ? 7 : 3;
  return v3;
}
