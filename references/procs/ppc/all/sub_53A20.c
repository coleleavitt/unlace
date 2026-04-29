const char *__fastcall sub_53A20(__int64 *a1, _BYTE *a2)
{
  const char *(__fastcall *v2)(__int64, _BYTE *); // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 dword; // rbp
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  __int64 (*v10)(); // rax
  __int64 v11; // r13
  unsigned __int8 default_reftype; // al
  int v13; // [rsp+4h] [rbp-444h] BYREF
  __int64 v14; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v15[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v16; // [rsp+418h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15[1023] = 0;
  if ( (unsigned int)qsscanf(a2, "interrupt %1023s %lli%n", v15, &v14, &v13) == 2 )
  {
    if ( (a1[10] & 4) != 0 )
    {
      v4 = getseg(v14);
      if ( v4 && *(_BYTE *)(v4 + 43) )
      {
        create_data(v14, 0x20000000, 4, -1);
        dword = (unsigned int)get_dword(v14);
        v7 = 0xFFFFFFFFLL;
      }
      else
      {
        create_data(v14, 0x10000000, 2, -1);
        dword = (unsigned __int16)get_word(v14, 0x10000000, v5);
        v7 = 0xFFFF;
      }
      if ( dword != v7 && (unsigned __int8)is_mapped(dword) )
      {
        v11 = v14;
        default_reftype = get_default_reftype(v14);
        op_offset(v11, 0, default_reftype, -1, 0, 0);
        add_entry(dword, dword, v15, 1, 0);
      }
      else
      {
        set_name(v14, v15, 4096);
      }
      v8 = (_BYTE *)skip_spaces(&a2[v13]);
      if ( *v8 )
      {
        set_cmt(v14, v8, 1);
        return nullptr;
      }
    }
    return nullptr;
  }
  if ( (unsigned int)qsscanf(a2, "entry %1023s %lli%n", v15, &v14, &v13) == 2 )
  {
    if ( (a1[10] & 4) != 0 && (unsigned __int8)is_mapped(v14) )
    {
      v9 = (_BYTE *)skip_spaces(&a2[v13]);
      v10 = *(__int64 (**)())(*a1 + 56);
      if ( v10 != sub_4AA00
        && ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, _BYTE *, _BYTE *))v10)(a1, &v14, v15, v9) )
      {
        return nullptr;
      }
      add_entry(v14, v14, v15, 1, 0);
      if ( *v9 )
      {
        set_cmt(v14, v9, 1);
        return nullptr;
      }
    }
    return nullptr;
  }
  v2 = *(const char *(__fastcall **)(__int64, _BYTE *))(*a1 + 48);
  if ( v2 == sub_53A10 )
    return sub_53340(a1, a1 + 7, a2);
  else
    return v2((__int64)a1, a2);
}
