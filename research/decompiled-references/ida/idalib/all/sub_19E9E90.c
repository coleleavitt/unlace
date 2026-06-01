__int64 __fastcall sub_19E9E90(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (*a2 >> 1) & 3;
  if ( v3 == 1 || v3 == 2 )
    *(_QWORD *)(a1 + 40) = 2;
  result = sub_BC78F0((_BYTE *)a1, a2);
  *(_QWORD *)(a1 + 40) = v2;
  return result;
}
