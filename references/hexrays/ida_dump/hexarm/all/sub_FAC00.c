__int64 __fastcall sub_FAC00(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int tinfo; // ebx
  __int64 v8; // rdx
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v10[0] = 0;
  tinfo = create_tinfo(v10, 13, 13, a3);
  if ( !(_BYTE)tinfo )
  {
    if ( !under_debugger )
      sub_3835A0(52656);
    BUG();
  }
  if ( a4 == -1 || (unsigned __int8)sub_F9A50(a1, (__int64)v10, a4) )
  {
    v8 = v10[0];
    v10[0] = *a2;
    *a2 = v8;
    if ( a5 != -1 )
      sub_FA5D0(a1, a2, a4, a5, 1);
  }
  else
  {
    tinfo = 0;
  }
  clear_tinfo_t(v10);
  return tinfo;
}
