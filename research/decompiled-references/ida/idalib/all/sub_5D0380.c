unsigned __int64 __fastcall sub_5D0380(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-40h]
  int v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v6 = *(int *)(a1 + 4LL * (int)a3 + 16);
  v16 = __readfsqword(0x28u);
  ptr = nullptr;
  v14 = 0;
  v15 = -1;
  v13 = 0;
  v8 = switch_dbctx(v6);
  sub_5C94E0(*(_QWORD *)(v8 + 1672), &ptr, a4);
  sub_5D0100(a1, (__int64)&ptr, a2, a3, v9, v10);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return v16 - __readfsqword(0x28u);
}
