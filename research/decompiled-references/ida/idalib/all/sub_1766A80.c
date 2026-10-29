__int64 __fastcall sub_1766A80(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v2 = *a1;
  v3 = a2;
  sub_18C74E0(*a1, 0, 0, 4);
  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v4 == 1 )
  {
    sub_190D5E0(v2);
    return 1;
  }
  else
  {
    v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v5 )
      v3 = sub_19A4600(*a1, *(unsigned int *)(a2 + 24), v5, *(unsigned int *)(a2 + 28));
    sub_190D5E0(v2);
    return v3;
  }
}
