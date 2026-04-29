__int64 __fastcall sub_78CF0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  int v9; // eax

  v6 = sub_6AF20((const char *)a3, a4, a5);
  v7 = v6;
  if ( v6 )
  {
    if ( !a2 || v6 != 1 )
      return v7;
    *a2 = 0;
    return 1;
  }
  else
  {
    if ( strcmp((const char *)a3, "x86_return_thunk") )
    {
      if ( !strncmp((const char *)a3, "x86_indirect_thunk_", 0x13u) )
      {
        v9 = sub_845A0((char *)(a3 + 19));
        if ( v9 != -1 )
        {
          if ( a2 )
            *a2 = v9;
          return 1;
        }
      }
      return v7;
    }
    return 3;
  }
}
