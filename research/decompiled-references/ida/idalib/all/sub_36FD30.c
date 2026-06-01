__int64 __fastcall sub_36FD30(char *a1, __int64 a2)
{
  __int64 tinfo_size; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) == 1 )
  {
    v4[0] = 0;
    if ( (unsigned int)sub_36FA50((__int64)v4, a1, 0) )
      tinfo_size = -1;
    else
      tinfo_size = get_tinfo_size(0, v4[0], 0);
    *(_QWORD *)(a2 + 8) = tinfo_size;
    clear_tinfo_t(v4);
    return 0;
  }
  else
  {
    set_error_string(0, "sizeof");
    return set_qerrno(56);
  }
}
