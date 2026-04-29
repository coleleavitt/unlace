__int64 __fastcall sub_29D2B0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 **v12; // rdi
  bool v13; // al
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  char tinfo_property; // [rsp+8h] [rbp-60h]
  bool v18; // [rsp+8h] [rbp-60h]
  bool v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *a4;
  v21[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(v8, 2) & 0xF) != 0xA || (get_tinfo_property(*a5, 2) & 0xF) != 0xA )
    return 0;
  v21[0] = get_tinfo_property(*a5, 9);
  tinfo_property = get_tinfo_property(v21[0], 2);
  clear_tinfo_t(v21);
  result = 1;
  if ( (tinfo_property & 0x3F) != 1 )
  {
    v20 = get_tinfo_property(*a4, 9);
    if ( (get_tinfo_property(v20, 2) & 0x2F) == 0xD )
    {
      if ( a3
        && *(_DWORD *)a3 == 2
        && (v11 = *(_QWORD *)(a3 + 8), *(_DWORD *)v11 == 3)
        && (v12 = *(__int64 ***)(v11 + 8)) != nullptr )
      {
        if ( !a2 )
        {
          if ( !under_debugger )
            sub_383060(52476);
          BUG();
        }
        v13 = (int)sub_29BCC0(v12, a2, &v20, -1) >= 0;
      }
      else
      {
        v14 = *a5;
        v21[0] = 0;
        v15 = get_tinfo_property(v14, 9);
        v16 = *(_QWORD *)(a1 + 112);
        v21[0] = v15;
        v18 = sub_29B010(v16, &v20, 0, v21);
        clear_tinfo_t(v21);
        v13 = v18;
      }
    }
    else
    {
      v13 = 0;
    }
    v19 = v13;
    clear_tinfo_t(&v20);
    return v19;
  }
  return result;
}
