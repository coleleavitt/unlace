unsigned __int64 __fastcall sub_1917F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // [rsp+10h] [rbp-88h] BYREF
  __int64 v6; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-58h] BYREF
  int v10; // [rsp+48h] [rbp-50h]
  __int16 v11; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v12; // [rsp+58h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  copy_tinfo_t(a2 + 24, a1 + 248);
  if ( (get_tinfo_property(*(_QWORD *)(a2 + 24), 2) & 0xF) == 0xB )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v7[0] = 0;
    v7[1] = 0;
    if ( (unsigned __int8)get_tinfo_details(v3, 11, v7) )
    {
      v5 = 0;
      v8 = 0;
      v6 = 0;
      copy_tinfo_t((char *)&v8 + 8, &v6);
      v9 = 0;
      copy_tinfo_t(&v9, &v5);
      v10 = 0;
      v11 = 0;
      clear_tinfo_t(&v6);
      clear_tinfo_t(&v5);
      v4 = v8;
      *(_QWORD *)&v8 = v7[0];
      v7[0] = v4;
      create_tinfo(a2 + 24, 10, 10, &v8);
      clear_tinfo_t(&v9);
      clear_tinfo_t((char *)&v8 + 8);
      clear_tinfo_t(&v8);
    }
    clear_tinfo_t(v7);
  }
  *(_DWORD *)(a2 + 4) = get_tinfo_size(0, *(_QWORD *)(a2 + 24), 0);
  return v12 - __readfsqword(0x28u);
}
