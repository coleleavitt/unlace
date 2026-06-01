__int64 __fastcall sub_1F60D00(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  sub_1F5ABE0(a1, a2, a3);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * *(unsigned int *)(v3 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v3 + 13072) - 1);
  *(_DWORD *)(v3 + 13072) = result;
  *(_QWORD *)(a2 + 40) = v4;
  return result;
}
