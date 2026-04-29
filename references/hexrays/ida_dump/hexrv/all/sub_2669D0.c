unsigned __int64 __fastcall sub_2669D0(_QWORD *a1, char a2)
{
  __int64 v3; // [rsp+0h] [rbp-78h] BYREF
  __int64 v4; // [rsp+8h] [rbp-70h] BYREF
  __int128 v5; // [rsp+10h] [rbp-68h] BYREF
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-50h]
  __int16 v8; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v9; // [rsp+38h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = 0;
    v3 = 0;
    v5 = 0;
    copy_tinfo_t((char *)&v5 + 8, &v3);
    v6 = 0;
    copy_tinfo_t(&v6, &v4);
    v7 = 0;
    v8 = 0;
    clear_tinfo_t(&v3);
    clear_tinfo_t(&v4);
    if ( !(unsigned __int8)get_tinfo_details(*a1, 10, &v5) )
    {
      if ( !under_debugger )
        sub_37DDE0(52681);
      BUG();
    }
    HIBYTE(v8) = a2;
    create_tinfo(a1, 10, 10, &v5);
    clear_tinfo_t(&v6);
    clear_tinfo_t((char *)&v5 + 8);
    clear_tinfo_t(&v5);
  }
  return v9 - __readfsqword(0x28u);
}
