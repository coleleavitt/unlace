__int64 __fastcall sub_265CD0(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v7; // rsi
  int tinfo_size; // eax
  unsigned int tinfo_details; // r14d
  __int64 v12; // rdi
  int v13; // eax
  _QWORD v14[11]; // [rsp+0h] [rbp-58h] BYREF

  v7 = *a2;
  v14[3] = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v7, 0);
  if ( tinfo_size <= 0 )
    return 1;
  tinfo_details = 0;
  if ( tinfo_size < a4 )
    return tinfo_details;
  tinfo_details = 1;
  if ( (get_tinfo_property(*a2, 2) & 0xF) != 0xB )
    return tinfo_details;
  v12 = *a2;
  v14[0] = 0;
  v14[1] = 0;
  tinfo_details = get_tinfo_details(v12, 11, v14);
  if ( !(_BYTE)tinfo_details )
  {
    clear_tinfo_t(v14);
    return 1;
  }
  v13 = get_tinfo_size(0, v14[0], 0);
  if ( a4 >= v13 )
  {
    if ( a4 > v13 )
    {
      tinfo_details = 0;
    }
    else if ( !(unsigned __int8)sub_325700(a1, v14, a3) )
    {
      tinfo_details = sub_265CD0(a1, v14, a3, (unsigned int)a4);
    }
  }
  clear_tinfo_t(v14);
  return tinfo_details;
}
