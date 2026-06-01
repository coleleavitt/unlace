void __fastcall sub_1F8B740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // sf
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-10h] BYREF

  v6 = *(char *)(a2 + 29) < 0;
  v9 = a2;
  if ( !v6 )
  {
    v7 = a3;
    v8 = sub_1F8B440(a1 + 1288, &v9, a3, a4, a5, a6);
    sub_1F705B0(v8, 13, v7);
  }
}
