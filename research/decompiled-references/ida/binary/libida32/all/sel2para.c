__int64 __fastcall sel2para(unsigned int a1)
{
  __int64 v1; // r9
  _DWORD *v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r9
  __int64 v5; // r10
  _DWORD *v6; // r11
  __int64 result; // rax

  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1568LL);
  if ( a1 == *(_DWORD *)(v1 + 8) )
    return *(unsigned int *)(v1 + 12);
  *(_DWORD *)(v1 + 8) = a1;
  v2 = sub_4F5910(*(_DWORD **)(v1 + 16), *(_QWORD *)(v1 + 16) + 8LL * *(_QWORD *)(v1 + 24), a1);
  if ( v6 != v2 && v3 == *v2 )
    v3 = v2[1];
  *(_DWORD *)(v4 + 12) = v3;
  result = 0xFFFFFFFFLL;
  if ( v3 != -1 )
    return v3 & (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 4LL) >> 4);
  return result;
}

