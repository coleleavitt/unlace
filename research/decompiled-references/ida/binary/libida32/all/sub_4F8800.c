__int64 __fastcall sub_4F8800(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rdi
  __int64 v4; // rax
  _DWORD *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r9
  __int64 v8; // r10
  _DWORD *v9; // r11
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1568LL);
  if ( *(_DWORD *)(v2 + 8) == a2 )
    return *(unsigned int *)(v2 + 12);
  v3 = *(_DWORD **)(v2 + 16);
  v4 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 8) = a2;
  v5 = sub_4F5910(v3, (__int64)&v3[2 * v4], a2);
  if ( v5 != v9 && *v5 == v6 )
    v6 = v5[1];
  *(_DWORD *)(v7 + 12) = v6;
  result = 0xFFFFFFFFLL;
  if ( v6 != -1 )
    return v6 & (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 4LL) >> 4);
  return result;
}

