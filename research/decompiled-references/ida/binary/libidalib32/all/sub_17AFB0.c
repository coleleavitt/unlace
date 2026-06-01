unsigned __int64 __fastcall sub_17AFB0(__int64 a1, const char *a2, __int64 a3)
{
  const char *v4; // rbp
  char v6; // al
  __int64 v7; // rdi
  __int16 *v8; // r14
  __int16 *v9; // rbx
  __int16 v10; // r12
  __int64 v11; // rax
  __int16 *v13; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v15 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  if ( !strcmp(a2, "UnhideAll") )
    v4 = "UnHideAll";
  v6 = sub_17AC80(
         (__int64 *)&v13,
         a1,
         a3,
         "Bad keyboard assignment\n"
         "\n"
         "Keyboard definition syntax is:\n"
         "\n"
         "     \"ActionName\" = Value\n"
         "\n"
         "  where value may be:\n"
         "\n"
         "     a string:       \"Ctrl-F5\"\n"
         "     a char:         'F'\n"
         "     a scancode:     0x4900\n"
         "     zero:           0\n"
         "\n"
         "  Zero scancode disables the hot key.\n");
  v7 = (__int64)v13;
  if ( v6 )
  {
    v8 = &v13[v14];
    if ( v13 != v8 )
    {
      v9 = v13;
      do
      {
        v10 = *v9;
        v11 = sub_19D0F0(v4);
        if ( v11 )
        {
          *(_WORD *)(v11 + 170) = v10;
        }
        else
        {
          sub_8F660((__int64)"Warning: no action with name \"%s\"\n", v4);
          sub_17AB80(a1, "Illegal action name/key(s)", 0);
        }
        ++v9;
      }
      while ( v8 != v9 );
      v7 = (__int64)v13;
    }
  }
  if ( v7 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}

