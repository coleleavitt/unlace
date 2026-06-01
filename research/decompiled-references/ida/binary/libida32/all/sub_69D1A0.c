__int64 __fastcall sub_69D1A0(__int64 *a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 func; // rsi
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  clear_tinfo_t(a2);
  v6 = *a1;
  v11[0] = 0;
  sub_6141A0(v6, 26, v11, 8u, v7);
  if ( a3 >= LODWORD(v11[0]) && a3 < HIDWORD(v11[0]) )
  {
    if ( (unsigned int)sub_69CC60(a1, a3, 1, (__int64)a2, v8) )
      return 1;
    else
      return sub_59D980(a1, a2, a3);
  }
  else
  {
    func = get_func(a3);
    return get_func_frame(a2, func);
  }
}

