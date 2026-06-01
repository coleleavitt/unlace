bool __fastcall sub_1021600(__int64 a1, int a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rax

  if ( !a2 )
    return 0;
  v3 = sub_10214C0(a1, a2);
  v4 = sub_101FFD0(a1, v3);
  v5 = v4;
  return v4
      && (*(char *)(v4 + 15) >= 0 || (v6 = sub_101F540(*(_QWORD *)(a1 + 488), v3, HIDWORD(v3))) == nullptr || !v6[4])
      && *(_DWORD *)(v5 + 8) == 0;
}
