__int64 __fastcall sub_1FC2620(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    sub_2237220(a1 + 32, a1 + 48, v2 + 1, 8);
    v2 = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = v3;
  v4 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 40);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), v4);
  *(_DWORD *)(a1 + 224) = 168;
  return result;
}
