unsigned __int64 __fastcall sub_7D70(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  int v6; // r13d
  __int64 v8; // [rsp+38h] [rbp-450h]
  unsigned __int64 v9; // [rsp+448h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v6 = 0;
  do
  {
    create_data();
    if ( !(unsigned __int8)get_data_value() )
      break;
    if ( !v8 )
      break;
    v6 += a4;
  }
  while ( a3 >= v6 );
  qsnprintf();
  set_cmt();
  qsnprintf();
  set_name();
  return v9 - __readfsqword(0x28u);
}
