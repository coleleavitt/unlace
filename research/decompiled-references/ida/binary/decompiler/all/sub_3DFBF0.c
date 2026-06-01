__int64 __fastcall sub_3DFBF0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  v2 = sub_1CFF30(&v4, a2, 0, 0);
  if ( (_BYTE)v2 && sub_32FE00(v4) )
    copy_tinfo_t();
  else
    v2 = 0;
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}
