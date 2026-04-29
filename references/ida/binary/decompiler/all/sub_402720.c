void __fastcall sub_402720(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, int a5, int a6, _BYTE *a7)
{
  char v9; // r14

  a2[1] = 0;
  if ( a6 == -1 )
  {
    if ( *a7 )
    {
      v9 = *(_BYTE *)(tag_advance() - 1);
      if ( v9 != **(_BYTE **)(get_ash() + 48) && (*(_QWORD *)(a1 + 32) != a3 || *(_DWORD *)(a1 + 40) != a5) )
      {
        if ( !*(_QWORD *)(a1 + 16) )
        {
          if ( !under_debugger )
            sub_37EA20(50507);
          BUG();
        }
        get_func();
        if ( (int)get_func_chunknum() >= 0 )
        {
          sub_3DEE70((__int64 *)(a1 + 8), a3);
          sub_6AEF0(a2);
          *(_QWORD *)(a1 + 32) = a3;
          *(_DWORD *)(a1 + 40) = a5;
        }
      }
    }
  }
}
