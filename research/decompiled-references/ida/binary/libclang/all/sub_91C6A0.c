__int64 __fastcall sub_91C6A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = sub_A1A4E0(a1, 72);
  sub_A1BFE0(v2, a2);
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(a2 + 56);
  result = *(unsigned int *)(a2 + 64);
  *(_DWORD *)(v2 + 64) = result;
  return result;
}

