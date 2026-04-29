__int64 __fastcall sub_10450(_BYTE *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 dword; // rbp
  __int64 v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rbx
  __int64 (*v8)(); // rax
  __int64 v9; // r13
  unsigned __int8 default_reftype; // al
  int v11; // [rsp+4h] [rbp-444h] BYREF
  __int64 v12; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v13[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v14; // [rsp+418h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13[1023] = 0;
  if ( (unsigned int)qsscanf(a2, "interrupt %1023s %lli%n", v13, &v12, &v11) == 2 )
  {
    if ( (a1[80] & 4) != 0 )
    {
      v3 = getseg(v12);
      if ( v3 && *(_BYTE *)(v3 + 43) )
      {
        create_data(v12, 0x20000000, 4, -1);
        dword = (unsigned int)get_dword(v12);
        v5 = 0xFFFFFFFFLL;
      }
      else
      {
        create_data(v12, 0x10000000, 2, -1);
        dword = (unsigned __int16)get_word(v12);
        v5 = 0xFFFF;
      }
      if ( dword != v5 && (unsigned __int8)is_mapped(dword) )
      {
        v9 = v12;
        default_reftype = get_default_reftype(v12);
        op_offset(v9, 0, default_reftype, -1, 0, 0);
        add_entry(dword, dword, v13, 1, 0);
      }
      else
      {
        set_name(v12, v13, 4096);
      }
      v6 = (_BYTE *)skip_spaces(a2 + v11);
      if ( *v6 )
      {
        set_cmt(v12, v6, 1);
        return 0;
      }
    }
    return 0;
  }
  if ( (unsigned int)qsscanf(a2, "entry %1023s %lli%n", v13, &v12, &v11) != 2 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, a2);
  if ( (a1[80] & 4) == 0 || !(unsigned __int8)is_mapped(v12) )
    return 0;
  v7 = (_BYTE *)skip_spaces(a2 + v11);
  v8 = *(__int64 (**)())(*(_QWORD *)a1 + 56LL);
  if ( v8 == sub_FF20 || !((unsigned __int8 (__fastcall *)(_BYTE *, __int64 *, _BYTE *, _BYTE *))v8)(a1, &v12, v13, v7) )
  {
    add_entry(v12, v12, v13, 1, 0);
    if ( *v7 )
    {
      set_cmt(v12, v7, 1);
      return 0;
    }
    return 0;
  }
  return 0;
}
