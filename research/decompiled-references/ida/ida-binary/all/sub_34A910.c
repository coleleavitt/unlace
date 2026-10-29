__int64 __fastcall sub_34A910(_QWORD *a1)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // ebp
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // ebp
  __int64 v6; // rax

  v1 = getinf(52);
  v2 = *a1;
  v3 = v1;
  v4 = *(__int64 (__fastcall **)(__int64))(*a1 + 72LL);
  v5 = v3 >> 8;
  if ( v4 == form_actions_impl_t__::vfunc_9 )
  {
    v6 = a1[4];
  }
  else
  {
    v6 = v4((__int64)a1);
    v2 = *a1;
  }
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, bool))(v2 + 24))(a1, *(unsigned int *)(v6 + 36), (_BYTE)v5 != 0);
}
