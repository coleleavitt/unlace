__int64 __fastcall sub_1FB2180(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  v3 = *(unsigned int *)(a1 + 176);
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 180) )
  {
    sub_2237220(a1 + 168, a1 + 184, v3 + 1, 4);
    v3 = *(unsigned int *)(a1 + 176);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 168) + 4 * v3) = v2;
  ++*(_DWORD *)(a1 + 176);
  v4 = *(_QWORD *)(a1 + 16);
  result = *(unsigned int *)(v4 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(v4, v4 + 16, result + 1, 8);
    result = *(unsigned int *)(v4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v4 + 8 * result) = a2;
  ++*(_DWORD *)(v4 + 8);
  return result;
}
