unsigned __int64 __fastcall sub_17F200(__int64 a1, const char *a2, const char *a3)
{
  __int64 v4; // rsi
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 8) = 2;
  *(_QWORD *)a1 = ida_reversible_op_ctl_t___vtable;
  *(_BYTE *)(a1 + 12) = 0;
  sub_17DEF0((__int64)&v11, a2, a3);
  v4 = v12;
  v5 = sub_1C7660(v11, v12);
  v9 = v11;
  *(_BYTE *)(a1 + 12) = v5;
  if ( v9 )
  {
    v12 = 0;
    qfree(v9, v4, v6, v7, v8);
  }
  return v13 - __readfsqword(0x28u);
}
