__int64 __fastcall delete_nodes_ah_t__::vfunc_5(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_34F60((__int64)ptr);
  if ( ptr[2] )
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)a1 + 56LL))(a1, a2, a4, ptr);
  else
    v5 = 7;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v5;
}
