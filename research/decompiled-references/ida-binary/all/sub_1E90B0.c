__int64 __fastcall sub_1E90B0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  sub_1E8DC0(a1, a2, a3, a4, a5, a6);
  result = 0;
  if ( (unsigned __int64)(unsigned int)a2 < *(_QWORD *)(a1 + 24) )
    return *(_QWORD *)(a1 + 16) + 80LL * (unsigned int)a2;
  return result;
}
