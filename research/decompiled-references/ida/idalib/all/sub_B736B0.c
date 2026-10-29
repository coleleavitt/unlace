__int64 __fastcall sub_B736B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v9; // rdx

  v2 = sub_B73640(a1);
  if ( !v2 )
    return sub_B71EB0(a1, a2, v3, v4);
  v5 = sub_EEC140(v2);
  if ( !(_DWORD)v5 || *(_DWORD *)(a1 + 24) == (_DWORD)v5 )
    return sub_B71EB0(a1, a2, v3, v4);
  v6 = *(_QWORD *)(a1 + 56);
  if ( (v6 & 4) != 0 && (v9 = v6 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v9 + 16)) )
    v7 = *(unsigned int *)(**(_QWORD **)(v9 + 24) + 8LL);
  else
    v7 = *(unsigned int *)(a1 + 64);
  return v7 | (v5 << 32);
}
