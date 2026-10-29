__int64 __fastcall sub_A77570(__int64 a1)
{
  _QWORD *v1; // rbp
  unsigned int v2; // ebx
  __int64 v4; // r12
  __int64 v5; // rax
  _BOOL8 v6; // rdx
  _DWORD *v7; // rax

  v1 = *(_QWORD **)(a1 + 8);
  v2 = sub_A986A0((_DWORD)v1);
  if ( (unsigned int)sub_FF9FB0(v1[63], v2) != -1 )
    return v2;
  v4 = v1[63];
  v5 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*v1 + 32LL) + 8LL * v2));
  v6 = 0;
  v7 = *(_DWORD **)(v5 + 24);
  if ( v7 )
  {
    if ( *v7 == 5 )
      v6 = v7[1] == 1;
  }
  sub_1006C00(v4, v2, v6);
  return v2;
}

