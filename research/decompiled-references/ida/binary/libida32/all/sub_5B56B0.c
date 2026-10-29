__int64 __fastcall sub_5B56B0(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r12
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // esi

  if ( !a2 )
    return 0;
  v4 = *a2;
  v5 = *(_QWORD **)(*(_QWORD *)a1 + 1424LL);
  v6 = sub_5B0090(*(_QWORD *)(*v5 + 1480LL), *a2);
  if ( v6 == -1 )
    return 0;
  v7 = 8LL * v6;
  v8 = v7 + v5[2];
  v9 = *(_DWORD *)(v8 + 4);
  if ( (v9 & a3) == 0 )
    return 0;
  *(_DWORD *)(v8 + 4) = v9 & ~a3;
  sub_5B53D0((__int64)v5, v4, v9, *(_DWORD *)(v5[2] + v7 + 4));
  return 1;
}

