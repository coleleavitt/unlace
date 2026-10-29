__int64 __fastcall sub_638B10(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  void *v12; // [rsp+18h] [rbp-20h]

  v12 = (void *)__readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 120) )
  {
    if ( !under_debugger )
      interr(2018);
    BUG();
  }
  v6 = a3 << 6;
  sub_6384A0((__int64)ptr, a2, (a3 << 6) + *(_QWORD *)(a2 + 112), 0, a5, a6);
  sub_6340B0(a1, *(_QWORD *)(a1 + 112) + v6, (__int64)ptr, v7, v8, v9);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  return (__int64)v12 - __readfsqword(0x28u);
}
