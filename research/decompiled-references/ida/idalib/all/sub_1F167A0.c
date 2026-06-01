unsigned __int64 __fastcall sub_1F167A0(_QWORD ***a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // r12
  unsigned __int64 v3; // rax
  _QWORD *v4; // r8
  int v5; // edx
  __int64 v6; // rcx

  v1 = **a1;
  v2 = sub_1F68F80((*a1)[1], (*a1)[2]);
  v3 = sub_1F16500((*a1)[1], (__int64)(*a1)[2], (__int64 *)*a1 + 4, (_DWORD *)*a1 + 6);
  v4 = (*a1)[4];
  v5 = *((_DWORD *)*a1 + 6);
  v6 = v4[v5];
  *((_DWORD *)*a1 + 6) = v5 + 2;
  return sub_A71A40(v1, v3, v2, v6, v4[v5 + 1] & 7);
}
