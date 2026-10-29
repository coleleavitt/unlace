__int64 __fastcall sub_1FC5590(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbp

  sub_1FC5490(a1, a2);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned __int8 *)(a2 + 48);
  v4 = *(unsigned int *)(v2 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 24), v2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(v2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = v3;
  ++*(_DWORD *)(v2 + 8);
  result = *(unsigned int *)(a1 + 40);
  v6 = *(_QWORD *)(a2 + 40);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
    result = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v6;
  *(_DWORD *)(a1 + 224) = 406;
  ++*(_DWORD *)(a1 + 40);
  return result;
}
