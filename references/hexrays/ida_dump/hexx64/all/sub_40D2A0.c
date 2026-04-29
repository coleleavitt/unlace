void __fastcall sub_40D2A0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        double a4,
        __int64 a5,
        int a6,
        int a7,
        _BYTE *a8)
{
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 func; // rax
  int v15; // eax

  a2[1] = 0;
  if ( a7 == -1 )
  {
    if ( *a8 )
    {
      v10 = *(_BYTE *)(tag_advance(a8, 1) - 1);
      if ( v10 != **(_BYTE **)(get_ash(a8, 1, v11, v12, v13) + 48)
        && (*(_QWORD *)(a1 + 32) != a3 || *(_DWORD *)(a1 + 40) != a6) )
      {
        if ( !*(_QWORD *)(a1 + 16) )
        {
          if ( !under_debugger )
            sub_383060(0xC54Bu, 1, a4);
          BUG();
        }
        func = get_func(**(_QWORD **)(a1 + 8));
        if ( (int)get_func_chunknum(func, a3) >= 0 )
        {
          v15 = sub_3E9AE0((__int64 *)(a1 + 8), a3);
          sub_6B870(a2, (__int64)"%2d", v15);
          *(_QWORD *)(a1 + 32) = a3;
          *(_DWORD *)(a1 + 40) = a6;
        }
      }
    }
  }
}
