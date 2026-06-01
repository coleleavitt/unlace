unsigned __int64 __fastcall sub_2162B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 result; // rax

  v8 = sub_21629B0(a2, *(_QWORD *)(a1 + 16), a3, a4, a5, a6, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  result = 0;
  if ( v8 )
    return v8
         + 10LL
         * (unsigned int)sub_2162900(
                           a2,
                           *(_QWORD *)(a1 + 16),
                           v6,
                           v7,
                           v9,
                           v10,
                           *(_QWORD *)(a1 + 16),
                           *(_QWORD *)(a1 + 24));
  return result;
}
