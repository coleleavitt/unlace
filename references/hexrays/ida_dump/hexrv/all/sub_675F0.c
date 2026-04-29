const char *__fastcall sub_675F0(__int64 a1)
{
  __int64 *v1; // rbx
  const char *result; // rax

  v1 = (__int64 *)sub_1A9E50();
  sub_674F0(v1, (__int64)"remove_blocks_t(%d,%d)", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  result = s1;
  if ( v1[1] )
    return (const char *)*v1;
  return result;
}
