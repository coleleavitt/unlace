__int64 __fastcall sub_F12300(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(v2 + 8);
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 8), v2 + 16, v3 + 1, 4);
    v3 = *(unsigned int *)(v2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v2 + 4 * v3) = a2;
  v4 = *(unsigned int *)(v2 + 12);
  result = (unsigned int)(*(_DWORD *)(v2 + 8) + 1);
  *(_DWORD *)(v2 + 8) = result;
  if ( result + 1 > v4 )
  {
    sub_2237220(v2, v2 + 16, result + 1, 4);
    result = *(unsigned int *)(v2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v2 + 4 * result) = HIDWORD(a2);
  ++*(_DWORD *)(v2 + 8);
  return result;
}
