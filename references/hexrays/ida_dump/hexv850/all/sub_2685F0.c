__int64 __fastcall sub_2685F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 tinfo_property; // rax
  char v4; // r15
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+40h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v10 = 0;
  copy_tinfo_t(&v10, a2);
  v14[0] = 0;
  tinfo_property = get_tinfo_property(v10, 13);
  v14[0] = tinfo_property;
  v4 = 0;
  if ( (_BYTE)tinfo_property )
  {
    v5 = v10;
    v10 = tinfo_property;
    v4 = 1;
    v14[0] = v5;
  }
  clear_tinfo_t(v14);
  if ( (unsigned __int8)sub_324BC0(*a1, a1 + 17, &v10) )
  {
LABEL_4:
    v6 = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    copy_tinfo_t(&v12, a1 + 17);
    while ( 1 )
    {
      if ( (get_tinfo_property(v12, 2) & 0x2F) != 0xD )
        goto LABEL_15;
      v6 = sub_327E90(&v11, &v12, 0, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_15;
      v13 = 0;
      copy_tinfo_t(&v13, &v11);
      if ( (get_tinfo_property(v11, 2) & 0xF) == 0xB )
      {
        v14[0] = 0;
        v14[0] = get_tinfo_property(v11, 11);
        copy_tinfo_t(&v13, v14);
        clear_tinfo_t(v14);
      }
      else if ( !v4 )
      {
        clear_tinfo_t(&v13);
LABEL_15:
        clear_tinfo_t(&v12);
        clear_tinfo_t(&v11);
        goto LABEL_4;
      }
      if ( (unsigned __int8)sub_324BC0(*a1, &v13, &v10)
        || a1[8]
        && *(_QWORD *)(a1[7] + 24LL) == (int)get_tinfo_size(0, v13, 0)
        && (unsigned int)lexcompare_tinfo(*(_QWORD *)(a3 + 48), v11, 0) )
      {
        break;
      }
      v8 = v12;
      v12 = v11;
      v11 = v8;
      clear_tinfo_t(&v13);
    }
    clear_tinfo_t(&v13);
    clear_tinfo_t(&v12);
    clear_tinfo_t(&v11);
  }
  clear_tinfo_t(&v10);
  return v6;
}
