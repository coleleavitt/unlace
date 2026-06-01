unsigned __int64 __fastcall sub_4B6E60(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-50h] BYREF
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v13; // [rsp+10h] [rbp-40h]
  unsigned __int64 v14; // [rsp+20h] [rbp-30h]

  v7 = a3;
  v11 = a2;
  v14 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(qword_2CCB598 + 1672);
  v13 = 0;
  ptr = nullptr;
  sub_4B6C30(v8, (__int64 *)&ptr, a4, a5);
  if ( (unsigned __int64)v13 > 0x400 )
  {
    if ( !under_debugger )
      interr(1305);
    BUG();
  }
  sub_7BE7C0(&v11, a1, v7, ptr, v13, 83);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 40) + 120LL))(*(_QWORD *)(a4 + 40));
  sub_7BE7C0(&v11, a1, v7, v9, 0, 80);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return v14 - __readfsqword(0x28u);
}
