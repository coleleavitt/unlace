unsigned __int64 __fastcall sub_618210(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v4; // r13
  unsigned __int8 v5; // al
  __int64 view_options; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 1480);
  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited() )
  {
    v4 = *(_BYTE *)(a1 + 144);
    ptr = nullptr;
    v8 = 0;
    *(_BYTE *)(a1 + 144) = v4 & 0xEF;
    sub_611B70(a1, (__int64 *)&ptr);
    netnode_supset(*(unsigned int *)(a2 + 1332), 4307348, ptr, v8, 83);
    *(_BYTE *)(a1 + 144) = v4;
    v5 = getinf_flag(2, 128);
    view_options = get_view_options(v5);
    dto_copy_from_inf(view_options);
    sub_6162A0(v2 + 488, a2, 0);
    sub_6162A0(v2 + 504, a2, 1u);
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  return v9 - __readfsqword(0x28u);
}

