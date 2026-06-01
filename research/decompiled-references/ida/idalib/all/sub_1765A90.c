__int64 __fastcall sub_1765A90(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // rbp

  v2 = a2;
  v3 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v4 == 1 )
  {
    v2 = 1;
  }
  else
  {
    v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 24) != v5 )
    {
      sub_190D5E0(v3);
      return sub_1E86580(
               *a1,
               *(_DWORD *)(a2 + 4) & 0x7FFFFFFF,
               *(unsigned int *)(a2 + 16),
               v5,
               *(unsigned int *)(a2 + 20));
    }
  }
  sub_190D5E0(v3);
  return v2;
}
