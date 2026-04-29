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

  a2[1] = 0;
  if ( a7 == -1 )
  {
    if ( *a8 )
    {
      v10 = *(_BYTE *)(tag_advance() - 1);
      if ( v10 != **(_BYTE **)(get_ash() + 48) && (*(_QWORD *)(a1 + 32) != a3 || *(_DWORD *)(a1 + 40) != a6) )
      {
        if ( !*(_QWORD *)(a1 + 16) )
        {
          if ( !under_debugger )
            sub_383060(0xC54Bu, a4);
          BUG();
        }
        get_func();
        if ( (int)get_func_chunknum() >= 0 )
        {
          sub_3E9AE0((__int64 *)(a1 + 8), a3);
          sub_6B870(a2);
          *(_QWORD *)(a1 + 32) = a3;
          *(_DWORD *)(a1 + 40) = a6;
        }
      }
    }
  }
}
