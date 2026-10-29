__int64 __fastcall sub_56C560(volatile signed __int32 *a1)
{
  __int64 result; // rax

  if ( ((unsigned __int8)a1 & 1) == 0 )
  {
    if ( !*a1 )
      __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x22Bu, "ts_subtree_retain");
    _InterlockedAdd(a1, 1u);
    result = *(unsigned int *)a1;
    if ( !(_DWORD)result )
      __assert_fail("self.ptr->ref_count != 0", "lib/src/./subtree.c", 0x22Du, "ts_subtree_retain");
  }
  return result;
}
