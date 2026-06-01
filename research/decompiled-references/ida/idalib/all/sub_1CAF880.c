void __fastcall sub_1CAF880(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  __int64 v6; // rcx

  v3 = *(unsigned int *)(a1 + 24);
  v5 = *(_QWORD *)a1;
  v6 = (unsigned int)(a3 != 0) + 3;
  if ( (_DWORD)v3 )
    sub_1A5E3E0(v5, *(_DWORD *)(a1 + 8), a2, *(_DWORD *)(a2 + 24), *(_DWORD **)(a1 + 16), v3, v6, 1);
  else
    sub_1A5FAE0(v5, *(unsigned int *)(a1 + 8), a2, v6, 1, v3);
}
