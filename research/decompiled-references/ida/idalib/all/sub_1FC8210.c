__int64 __fastcall sub_1FC8210(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbp

  sub_1FC80E0(a1, (__int64)a2);
  v2 = *(_QWORD *)(a1 + 24);
  result = *(unsigned int *)(v2 + 8);
  v4 = (*a2 >> 19) & 1;
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 24), v2 + 16, result + 1, 8);
    result = *(unsigned int *)(v2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v2 + 8 * result) = v4;
  ++*(_DWORD *)(v2 + 8);
  *(_DWORD *)(a1 + 224) = 388;
  return result;
}
