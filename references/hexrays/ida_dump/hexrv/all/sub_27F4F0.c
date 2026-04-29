__int64 __fastcall sub_27F4F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r13d
  __int64 v7; // rax
  __int64 v8; // [rsp+18h] [rbp-90h] BYREF
  __int64 v9; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v12; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+50h] [rbp-58h] BYREF
  int v14; // [rsp+58h] [rbp-50h]
  __int16 v15; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_37DDE0(51255);
    BUG();
  }
  LOBYTE(v4) = sub_240A30(*(_QWORD *)(a1 + 72), (__int64 *)(*(_QWORD *)(a2 + 24) + 48LL), a3, 0x16u);
  v5 = v4;
  if ( (_BYTE)v4 )
  {
    sub_250C50((__int64 *)a2, *(_QWORD *)(a2 + 24));
  }
  else
  {
    if ( (get_tinfo_property(*a3, 2) & 0xF) != 0xB )
      return sub_241F40(a2, *(_QWORD *)(a1 + 72), a3);
    v8 = 0;
    copy_tinfo_t(&v8, a3);
    v11[0] = 0;
    v11[1] = 0;
    if ( (unsigned __int8)get_tinfo_details(v8, 11, v11) )
    {
      v10 = 0;
      v9 = 0;
      v12 = 0;
      copy_tinfo_t((char *)&v12 + 8, &v9);
      v13 = 0;
      copy_tinfo_t(&v13, &v10);
      v14 = 0;
      v15 = 0;
      clear_tinfo_t(&v9);
      clear_tinfo_t(&v10);
      v7 = v12;
      *(_QWORD *)&v12 = v11[0];
      v11[0] = v7;
      create_tinfo(&v8, 10, 10, &v12);
      clear_tinfo_t(&v13);
      clear_tinfo_t((char *)&v12 + 8);
      clear_tinfo_t(&v12);
    }
    clear_tinfo_t(v11);
    v5 = sub_241F40(a2, *(_QWORD *)(a1 + 72), &v8);
    clear_tinfo_t(&v8);
  }
  return v5;
}
