const char *__fastcall sub_18AD0(__int64 *a1, _BYTE *a2)
{
  const char *(__fastcall *v2)(__int64, _BYTE *); // rax
  __int64 v4; // rax
  __int64 dword; // rbp
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  __int64 (*v9)(); // rax
  __int64 v10; // r13
  unsigned __int8 default_reftype; // al
  int v12; // [rsp+4h] [rbp-444h] BYREF
  __int64 v13; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v14[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14[1023] = 0;
  if ( (unsigned int)qsscanf(a2, "interrupt %1023s %lli%n", v14, &v13, &v12) == 2 )
  {
    if ( (a1[10] & 4) != 0 )
    {
      v4 = getseg(v13);
      if ( v4 && *(_BYTE *)(v4 + 43) )
      {
        create_data(v13, 0x20000000, 4, -1);
        dword = (unsigned int)get_dword(v13);
        v6 = 0xFFFFFFFFLL;
      }
      else
      {
        create_data(v13, 0x10000000, 2, -1);
        dword = (unsigned __int16)get_word(v13);
        v6 = 0xFFFF;
      }
      if ( dword != v6 && (unsigned __int8)is_mapped(dword) )
      {
        v10 = v13;
        default_reftype = get_default_reftype(v13);
        op_offset(v10, 0, default_reftype, -1, 0, 0);
        add_entry(dword, dword, v14, 1, 0);
      }
      else
      {
        set_name(v13, v14, 4096);
      }
      v7 = (_BYTE *)skip_spaces(&a2[v12]);
      if ( *v7 )
      {
        set_cmt(v13, v7, 1);
        return nullptr;
      }
    }
    return nullptr;
  }
  if ( (unsigned int)qsscanf(a2, "entry %1023s %lli%n", v14, &v13, &v12) == 2 )
  {
    if ( (a1[10] & 4) != 0 && (unsigned __int8)is_mapped(v13) )
    {
      v8 = (_BYTE *)skip_spaces(&a2[v12]);
      v9 = *(__int64 (**)())(*a1 + 56);
      if ( v9 != sub_14E50
        && ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, _BYTE *, _BYTE *))v9)(a1, &v13, v14, v8) )
      {
        return nullptr;
      }
      add_entry(v13, v13, v14, 1, 0);
      if ( *v8 )
      {
        set_cmt(v13, v8, 1);
        return nullptr;
      }
    }
    return nullptr;
  }
  v2 = *(const char *(__fastcall **)(__int64, _BYTE *))(*a1 + 48);
  if ( v2 == sub_18AC0 )
    return sub_183F0(a1, a1 + 7, a2);
  else
    return v2((__int64)a1, a2);
}
