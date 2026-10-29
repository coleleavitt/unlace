__int64 __fastcall sub_36C550(char *a1, __int64 a2)
{
  int tinfo_size; // eax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 1 )
  {
    v4[0] = 0;
    if ( (unsigned int)sub_36C270((__int64)v4, a1, 0) )
      tinfo_size = -1;
    else
      tinfo_size = get_tinfo_size(0, v4[0], 0);
    *(_DWORD *)(a2 + 8) = tinfo_size;
    clear_tinfo_t(v4);
    return 0;
  }
  else
  {
    set_error_string();
    return set_qerrno(56, "sizeof");
  }
}

