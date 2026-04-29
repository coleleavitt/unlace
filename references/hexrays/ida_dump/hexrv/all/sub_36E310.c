unsigned __int64 __fastcall sub_36E310(__int64 a1)
{
  __int64 v3; // rdi
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  *(_DWORD *)a1 |= 0x10u;
  if ( (get_aflags(*(_QWORD *)(a1 + 40)) & 0x4000000) == 0 )
  {
    set_abits(*(_QWORD *)(a1 + 40), 0x4000000);
    if ( !*(_BYTE *)(a1 + 320) )
    {
      if ( *(_BYTE *)(a1 + 328) )
      {
        v3 = *(_QWORD *)(a1 + 1496);
        v5[0] = 0;
        v5[1] = 0;
        v4 = 25;
        if ( !(unsigned __int8)sub_328960(v3, (__int64 *)(a1 + 328), -1, &v4, v5) )
        {
          clear_tinfo_t(&v4);
          cleanup_argloc(v5);
          if ( !under_debugger )
            sub_37DDE0(50219);
          BUG();
        }
        clear_tinfo_t(&v4);
        cleanup_argloc(v5);
      }
    }
  }
  return v6 - __readfsqword(0x28u);
}
