char __fastcall sub_1BF3C0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, unsigned int a5)
{
  _BYTE *v7; // rbx
  unsigned int v9; // eax
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ebx

  v7 = a3;
  if ( a3 && !*a3 )
    v7 = nullptr;
  if ( *(_DWORD *)a2 != 1 )
    return sub_CB3B0(0x7DBu, a2, v7, a4) == 1;
  v9 = a5;
  if ( a5 <= 0x10 )
    v9 = getinf(99);
  if ( v9 != 176 && v9 != 256 && !(unsigned __int8)getinf_flag(67, 2) )
    return sub_CB3B0(0x7DBu, a2, v7, a4) == 1;
  if ( a4 != -1 || v7 && *v7 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v11 = sub_222750(v7, a4, *(unsigned int *)(a1 + 80), a5);
    v12 = *(_DWORD *)(a1 + 80);
    if ( v11 <= v12 )
      v12 = v11;
    v13 = v12;
    cleanup_argloc(a2);
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v10 & -v13;
  }
  return 1;
}
