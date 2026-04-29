bool __fastcall sub_3857C0(__int64 a1, _DWORD *a2, double a3)
{
  int v3; // edx
  const char *v5; // rsi
  __int64 v6; // r10
  __int64 v7; // rax

  v3 = *(_DWORD *)(a1 + 44);
  v5 = s1;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(v6 + 128) + 32LL * (v3 + 1);
  if ( *(_QWORD *)(v7 + 8) )
    v5 = *(const char **)v7;
  sub_384710(*(_QWORD *)(a1 + 32), v5, *(_DWORD *)(a1 + 48), v3 >= *(_DWORD *)(v6 + 152), a2, 0, a3, 0);
  return a2[4] == 74;
}
