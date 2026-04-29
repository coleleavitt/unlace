const char *__fastcall sub_6B370(__int64 a1)
{
  __int64 *v1; // rbx
  const char *result; // rax

  v1 = (__int64 *)sub_1ADE90();
  sub_6B2B0(v1, (__int64)"remove_block_map_t(%d)", *(_DWORD *)(a1 + 8));
  result = s1;
  if ( v1[1] )
    return (const char *)*v1;
  return result;
}
