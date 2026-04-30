__int64 __fastcall sub_2876C0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  sub_176AA0(a1, a2);
  *(_OWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_QWORD *)a1 = &FlatRenderer___vtable;
  *(_QWORD *)(a1 + 232) = 0;
  linearray_t_ctr(a1 + 184, 0);
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  linearray_t_ctr(a1 + 264, 0);
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 360) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  sub_287560((__m128i *)(a1 + 344), 0, v2, v3, v4, v5);
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_WORD *)(a1 + 432) = 0;
  return 0;
}
