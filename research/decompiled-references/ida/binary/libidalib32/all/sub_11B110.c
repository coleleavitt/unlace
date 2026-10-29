__int64 __fastcall sub_11B110(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // si
  unsigned int v4; // ebx
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v2 = is_database_flag();
  if ( (_BYTE)v2 )
  {
    v4 = v2;
    sub_1091C0(v6, a2);
    if ( (unsigned __int8)sub_DC360(0) )
      v4 = sub_11AD60(nullptr);
    sub_109250(v6);
  }
  else if ( (_BYTE)a2 || (unsigned __int8)sub_DC360(0) )
  {
    v3 = 4 * (unsigned __int8)is_database_flag();
    v4 = save_database();
    if ( (_BYTE)v4 )
    {
      v4 = 1;
      TView::enableCommand((TView *)unk_24DFA0, v3);
      show_auto();
    }
  }
  else
  {
    return 1;
  }
  return v4;
}

