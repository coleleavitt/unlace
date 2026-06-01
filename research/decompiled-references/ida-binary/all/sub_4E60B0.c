unsigned __int64 __fastcall sub_4E60B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-40h]

  v5 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  v4 = 0;
  sub_4DBBD0(a1 + 96, &v4);
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  v4 = 0;
  sub_4DBBD0(a1 + 256, &v4);
  *(_QWORD *)(a1 + 368) = a2;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 376) = -1;
  *(_QWORD *)(a1 + 384) = a1 + 432;
  *(_QWORD *)(a1 + 392) = 1;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 416) = 1065353216;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 448) = 0;
  *(_OWORD *)(a1 + 472) = 0;
  v2 = operator new(0x50u);
  *(_QWORD *)(a1 + 496) = v2;
  *(_QWORD *)v2 = std::_Sp_counted_ptr_inplace_searchable_container_meta_t__std::allocator_void______gnu_cxx::_Lock_policy_2____vtable;
  v2 += 16;
  *(_QWORD *)(v2 - 8) = 0x100000001LL;
  *(_OWORD *)v2 = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  *(_QWORD *)(a1 + 488) = v2;
  return v5 - __readfsqword(0x28u);
}
