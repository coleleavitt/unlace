__int64 __fastcall sub_3D9EF0(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  int v6; // edx

  result = sub_1F3B50(a1, 0, a4, a5, a2);
  v6 = -1;
  if ( result && (unsigned __int64)*(unsigned int *)(result + 12) < *(_QWORD *)(*(_QWORD *)(a1 + 728) + 8LL) )
    v6 = *(_DWORD *)(result + 12);
  dword_8BDE64 = v6;
  return result;
}
