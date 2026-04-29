__int64 __fastcall sub_EA50(__int64 a1, int a2)
{
  unsigned int tinfo; // ebx
  __int64 vars0; // [rsp+0h] [rbp+0h]
  int vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  tinfo = create_tinfo();
  if ( (_BYTE)tinfo )
    tinfo = create_tinfo();
  clear_tinfo_t();
  return tinfo;
}
