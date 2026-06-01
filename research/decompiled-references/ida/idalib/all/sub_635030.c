unsigned __int64 __fastcall sub_635030(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v4; // r13
  __int64 v5; // r9
  char v6; // al
  __int64 view_options; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 1672);
  v10 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited() )
  {
    v4 = *(_BYTE *)(a1 + 212);
    ptr = nullptr;
    v9 = 0;
    *(_BYTE *)(a1 + 212) = v4 & 0xEF;
    sub_62E0E0(a1, (__int64 *)&ptr);
    netnode_supset(*(_QWORD *)(a2 + 1520), &loc_41B994, ptr, v9, 83, v5);
    *(_BYTE *)(a1 + 212) = v4;
    v6 = getinf_flag(2, 128);
    view_options = get_view_options(v6);
    dto_copy_from_inf(view_options);
    sub_632E00(v2 + 496, a2, 0);
    sub_632E00(v2 + 512, a2, 1u);
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
  }
  return v10 - __readfsqword(0x28u);
}
