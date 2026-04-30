__int64 __fastcall grcb_coldef(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v5 = *(_QWORD *)(v3 + 440);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  result = sub_2B5770(v3, v5, v4, 1);
  ++*(_DWORD *)(a1 + 16);
  return result;
}
