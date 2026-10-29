__int64 __fastcall sub_1FC54F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 result; // rax

  sub_1FC5490(a1, a2);
  v2 = *(unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a2 + 40);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    sub_2237220(a1 + 32, a1 + 48, v2 + 1, 8);
    v2 = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = v3;
  v4 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 40);
  v5 = *(unsigned __int8 *)(a2 + 48);
  result = *(unsigned int *)(v4 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(v4, v4 + 16, result + 1, 8);
    result = *(unsigned int *)(v4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v4 + 8 * result) = v5;
  ++*(_DWORD *)(v4 + 8);
  *(_DWORD *)(a1 + 224) = 394;
  return result;
}
