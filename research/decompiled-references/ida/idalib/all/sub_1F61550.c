__int64 __fastcall sub_1F61550(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 result; // rax

  ++*(_DWORD *)(*a1 + 24);
  sub_1F60E70(a1, a2, a3, a4, a5, a6);
  v6 = *a1;
  result = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = result + 1;
  *(_BYTE *)(a2 + 36) = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * result) != 0;
  return result;
}
