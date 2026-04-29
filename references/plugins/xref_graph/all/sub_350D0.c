__int64 __fastcall delete_nodes_ah_t__::vfunc_4(__int64 a1, __int64 a2, __int64 a3, double a4, __m128d a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_34F60((__int64)ptr);
  (*(void (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)a1 + 48LL))(a1, a2, a3, ptr);
  sub_265E0(a3, a2, v6, v7, v8, v9);
  sub_22680(a3, a4, a5, a2, v10, v11, v12, v13);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return 1;
}
