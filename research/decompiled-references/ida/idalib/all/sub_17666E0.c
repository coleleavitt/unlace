__int64 __fastcall sub_17666E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx

  v2 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v2 == 1 )
    return 1;
  v4 = v2;
  sub_1C3BC60(*a1, *(unsigned int *)(a2 + 4), 0);
  v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_19C0480(*a1, *(unsigned int *)(a2 + 4), v5, (*(_QWORD *)a2 >> 19) & 1LL);
  result = a2;
  if ( v5 != *(_QWORD *)(a2 + 16) )
    return sub_19C0480(*a1, *(unsigned int *)(a2 + 4), v5, (*(_QWORD *)a2 >> 19) & 1LL);
  return result;
}
