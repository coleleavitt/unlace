__int64 __fastcall sub_D32BB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = sub_E216C0(a1, 64);
  sub_E231E0(v2, a2);
  *(_QWORD *)(v2 + 48) = *(_QWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 56);
  *(_DWORD *)(v2 + 56) = result;
  return result;
}
