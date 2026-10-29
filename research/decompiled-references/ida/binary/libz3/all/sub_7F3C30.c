__int64 __fastcall sub_7F3C30(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rdi
  void *v4; // rdi

  result = sub_7F3990(a1);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    result = sub_186B220(v3);
  v4 = *(void **)(a1 + 16);
  if ( v4 )
    return sub_186B220(v4);
  return result;
}

