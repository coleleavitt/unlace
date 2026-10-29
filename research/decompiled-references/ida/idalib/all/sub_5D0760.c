__int64 __fastcall sub_5D0760(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r12
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // esi

  if ( !a2 )
    return 0;
  v4 = *a2;
  v5 = *(_QWORD **)(*(_QWORD *)a1 + 1616LL);
  v6 = sub_5CADC0(*(_QWORD *)(*v5 + 1672LL), *a2);
  if ( v6 == -1 )
    return 0;
  v7 = 16LL * v6;
  v8 = v7 + v5[3];
  v9 = *(_DWORD *)(v8 + 8);
  if ( (v9 & a3) == 0 )
    return 0;
  *(_DWORD *)(v8 + 8) = v9 & ~a3;
  sub_5D0480((__int64)v5, v4, v9, *(_DWORD *)(v5[3] + v7 + 8));
  return 1;
}
