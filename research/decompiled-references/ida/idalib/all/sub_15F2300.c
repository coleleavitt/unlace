__int64 __fastcall sub_15F2300(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 result; // rax

  v6 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6 - 8);
  result = *(_QWORD *)(v7 + 1584);
  if ( result && *(_QWORD *)(v7 + 1592) )
    result = sub_B91990(result + 64, *(_QWORD *)(a1 + 544), v6, a4, a5, a6);
  *(_DWORD *)(v7 + 1532) = a2;
  return result;
}
