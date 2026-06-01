unsigned __int64 sub_2BF7F0()
{
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v2; // [rsp+10h] [rbp-28h]
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v2 = 0;
  nullsub_131(ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v3 - __readfsqword(0x28u);
}
