__int64 __fastcall sub_5CF320(__int64 a1, __int64 a2)
{
  __int64 tinfo_property; // rax
  unsigned int v4; // ebp
  const char *v6; // rdi
  _BYTE *v7; // r13
  unsigned int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v9 = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 64), 9);
  v9 = tinfo_property;
  v4 = 0;
  if ( (_BYTE)tinfo_property )
  {
    ptr = nullptr;
    v11 = 0;
    if ( (tinfo_property & 0x100) != 0 )
    {
      get_tinfo_pdata(&ptr, tinfo_property, 0);
      v6 = *(const char **)(a2 + 16);
      v7 = ptr;
      if ( v6 )
      {
        LOBYTE(v4) = strcmp(v6, "__vftable") == 0 && v7 != nullptr;
        if ( (_BYTE)v4 )
        {
          v8 = sub_5C6080(a1, v7);
          v7 = ptr;
          v4 = v8;
        }
      }
      else
      {
        v4 = 0;
      }
      if ( v7 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v7);
      }
    }
  }
  clear_tinfo_t(&v9);
  return v4;
}

