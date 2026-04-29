__int64 __fastcall sub_2978C0(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rsi
  __int64 tinfo_pdata; // rax
  char *v5; // rbx
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v1 = 1;
  v8 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a1, 2) & 0xF) != 8 )
  {
    v1 = 0;
    if ( (get_tinfo_property(*a1, 2) & 0x3F) != 0x2D )
    {
      v3 = *a1;
      s1 = nullptr;
      v7 = 0;
      if ( (v3 & 0x100) != 0 )
      {
        tinfo_pdata = get_tinfo_pdata(&s1, v3, 2);
        v5 = s1;
        if ( tinfo_pdata )
        {
          v1 = 1;
          if ( strcasecmp(s1, "bool") )
          {
            v1 = 0;
            if ( !strncmp(v5, "_BOOL", 5u) && (unsigned __int8)(v5[5] - 48) <= 9u )
              LOBYTE(v1) = v5[6] == 0;
          }
        }
        if ( v5 )
        {
          *(_QWORD *)&v7 = 0;
          qfree(v5);
        }
      }
    }
  }
  return v1;
}
