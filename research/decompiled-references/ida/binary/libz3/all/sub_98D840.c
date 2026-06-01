__int64 __fastcall sub_98D840(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // r13
  int v6; // eax
  __int64 result; // rax

  v2 = *a1;
  if ( !*a1 || (v3 = *(unsigned int *)(v2 - 4), (_DWORD)v3 == *(_DWORD *)(v2 - 8)) )
  {
    sub_53D790(a1);
    v2 = *a1;
    v3 = *(unsigned int *)(*a1 - 4);
  }
  v4 = 32 * v3 + v2;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 8) = 0;
  v5 = qword_1C7F2C0;
  *(_QWORD *)(v4 + 16) = 1;
  *(_QWORD *)(v4 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(v5, v4, a2);
  else
    *(_DWORD *)v4 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v5, v4 + 16, a2 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    *(_BYTE *)(v4 + 20) &= ~1u;
    *(_DWORD *)(v4 + 16) = v6;
  }
  result = *a1;
  ++*(_DWORD *)(*a1 - 4);
  return result;
}

