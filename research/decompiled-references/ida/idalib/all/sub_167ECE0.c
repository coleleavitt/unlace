__int64 __fastcall sub_167ECE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( !a2 )
    return 1;
  v2 = *(unsigned int *)(a1 + 184);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v2 + 1, 8);
    v2 = *(unsigned int *)(a1 + 184);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v2) = a2;
  ++*(_DWORD *)(a1 + 184);
  result = sub_BC97E0((__int64 *)a1, a2);
  --*(_DWORD *)(a1 + 184);
  return result;
}
