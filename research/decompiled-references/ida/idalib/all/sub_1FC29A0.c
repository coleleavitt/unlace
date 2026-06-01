__int64 __fastcall sub_1FC29A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbp

  sub_1FC2690(a1, a2);
  v2 = *(unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a2 + 16);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    sub_2237220(a1 + 32, a1 + 48, v2 + 1, 8);
    v2 = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = v3;
  v4 = *(unsigned int *)(a1 + 44);
  result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  *(_DWORD *)(a1 + 40) = result;
  v6 = *(_QWORD *)(a2 + 24);
  if ( result + 1 > v4 )
  {
    sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
    result = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v6;
  *(_DWORD *)(a1 + 224) = 199;
  ++*(_DWORD *)(a1 + 40);
  return result;
}
