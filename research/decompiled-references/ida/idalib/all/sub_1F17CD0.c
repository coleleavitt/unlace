unsigned __int64 __fastcall sub_1F17CD0(__int64 **a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // rcx

  v1 = **a1;
  v2 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v3 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v4 = *a1;
  v5 = *((unsigned int *)*a1 + 6);
  *((_DWORD *)v4 + 6) = v5 + 1;
  return sub_A78FC0(v1, v2, v3, *(_QWORD *)(v4[4] + 8 * v5));
}
