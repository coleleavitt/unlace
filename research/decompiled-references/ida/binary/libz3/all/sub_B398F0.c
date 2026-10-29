__int64 __fastcall sub_B398F0(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax
  void *v4; // rdi

  v2 = *(void **)(a1 + 24);
  if ( v2 )
    result = sub_186B220(v2);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    return sub_186B220(v4);
  return result;
}

