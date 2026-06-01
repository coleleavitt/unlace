unsigned __int64 __fastcall sub_1E85C80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx

  v5 = *a1;
  v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(v6 + 8) & 7LL;
  if ( v7 | (*(__int64 *)(v6 + 8) >> 3) & 1 )
    return sub_F64F00(v5, a2, v7, v7 | (*(__int64 *)(v6 + 8) >> 3) & 1, a5) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
}
