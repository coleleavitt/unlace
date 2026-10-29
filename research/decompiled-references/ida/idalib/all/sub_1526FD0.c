char __fastcall sub_1526FD0(__int64 a1)
{
  int v2; // eax
  __int64 *v3; // rdi

  sub_1665B90(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 24));
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(__int64 **)(a1 + 8);
  if ( !v2 )
    v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v2;
  return sub_14634E0(v3, (int *)(a1 + 16));
}
