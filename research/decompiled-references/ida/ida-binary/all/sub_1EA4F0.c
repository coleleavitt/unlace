__int64 __fastcall sub_1EA4F0(__int64 a1, __int64 a2)
{
  void *v2; // r12

  v2 = *(void **)(a1 + 128);
  if ( v2 )
  {
    navstack_t_deregister_live(*(_QWORD *)(a1 + 128));
    operator delete(v2, 0x10u);
  }
  *(_QWORD *)(a1 + 128) = a2;
  sub_1EA230(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 664LL))(*(_QWORD *)(a1 + 96));
}
