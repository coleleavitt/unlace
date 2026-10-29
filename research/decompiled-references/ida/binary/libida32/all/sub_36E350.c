__int64 __fastcall sub_36E350(unsigned int a1, __int64 a2)
{
  unsigned int tinfo; // eax
  unsigned int v4; // ebx
  int flags; // eax
  char type_by_tid; // al
  const char *v8; // rsi
  const char *v9; // rax
  unsigned int strid; // eax
  __int64 v11; // [rsp+8h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-60h] BYREF
  __int128 v13; // [rsp+18h] [rbp-58h]
  _QWORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v15; // [rsp+40h] [rbp-30h]
  unsigned __int64 v16; // [rsp+48h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  tinfo = get_tinfo(a2, a1);
  if ( (_BYTE)tinfo )
    return 1;
  v4 = tinfo;
  ptr = nullptr;
  v11 = 0;
  v13 = 0;
  flags = get_flags_ex(a1, 4);
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
  {
    strid = get_strid(a1);
    type_by_tid = get_type_by_tid(&v11, strid);
  }
  else
  {
    type_by_tid = get_type_by_tid(&v11, a1);
  }
  if ( type_by_tid && (v11 & 0x100) != 0 && get_tinfo_pdata(&ptr, v11, 0) )
  {
    v8 = haystack;
    if ( (_QWORD)v13 )
      LODWORD(v8) = (_DWORD)ptr;
    if ( (unsigned int)get_named_type(0, (int)v8, 1, 0, 0, 0, 0, 0, 0) )
    {
      if ( a2 )
      {
        v9 = haystack;
        if ( (_QWORD)v13 )
          v9 = (const char *)ptr;
        if ( v9 )
        {
          v14[1] = v9;
          v15 = 0;
          v14[0] = get_idati();
          create_tinfo(a2, 61, 61, v14);
        }
      }
      clear_tinfo_t(&v11);
      if ( ptr )
      {
        *(_QWORD *)&v13 = 0;
        qfree(ptr);
      }
      return 1;
    }
  }
  clear_tinfo_t(&v11);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  return v4;
}

