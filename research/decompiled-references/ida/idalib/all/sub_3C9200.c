unsigned __int64 __fastcall sub_3C9200(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 tinfo_tid; // rbx
  __int64 v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-D8h] BYREF
  __int64 tinfo_property; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+10h] [rbp-C8h] BYREF
  void *v11; // [rsp+20h] [rbp-B8h]
  __int128 v12; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A0h]
  __int128 v14; // [rsp+40h] [rbp-98h]
  _OWORD v15[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-58h]
  int v17; // [rsp+88h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp-48h]
  char v19; // [rsp+98h] [rbp-40h]
  unsigned __int64 v20; // [rsp+A8h] [rbp-30h]

  v3 = *a1;
  v20 = __readfsqword(0x28u);
  v4 = a2;
  v10 = 0;
  sub_630CA0(v3, 26, &v10, 16);
  if ( a2 >= (unsigned __int64)v10 )
  {
    if ( a2 >= *((_QWORD *)&v10 + 1) )
    {
      if ( a2 == -1 )
        goto LABEL_16;
    }
    else
    {
      v8 = 0;
      v11 = nullptr;
      ptr = nullptr;
      v16 = 1;
      v17 = -1;
      v18 = 0;
      v19 = 0;
      v10 = 0;
      v12 = 0;
      v14 = 0;
      v15[0] = 0;
      if ( get_udm_by_tid(&v8, &v10, a2) != -1 )
      {
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(*(_QWORD *)&v15[0], 289);
        tinfo_tid = get_tinfo_tid(&tinfo_property, 0);
        clear_tinfo_t(&tinfo_property);
        clear_tinfo_t(v15);
        if ( ptr )
        {
          *(_QWORD *)&v14 = 0;
          qfree(ptr);
        }
        if ( v11 )
        {
          *(_QWORD *)&v12 = 0;
          qfree(v11);
        }
        clear_tinfo_t(&v8);
        return tinfo_tid;
      }
      clear_tinfo_t(v15);
      if ( ptr )
      {
        *(_QWORD *)&v14 = 0;
        qfree(ptr);
      }
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11);
      }
      clear_tinfo_t(&v8);
    }
  }
  v4 = sub_3B9DC0(a1, a2);
LABEL_16:
  v7 = *a1;
  *(_QWORD *)&v10 = v4;
  tinfo_tid = -1;
  if ( (unsigned __int8)sub_7BEFD0(&v10, v7, &tinfo_property, 3, 8257) )
  {
    tinfo_tid = -2;
    if ( tinfo_property != -1 )
      return sub_3B9E20(a1, tinfo_property) - 1;
  }
  return tinfo_tid;
}
