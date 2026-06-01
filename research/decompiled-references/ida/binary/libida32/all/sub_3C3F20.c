__int64 __fastcall sub_3C3F20(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int tinfo_tid; // ebx
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // [rsp+0h] [rbp-C8h] BYREF
  __int64 tinfo_property; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-B8h] BYREF
  void *v12; // [rsp+20h] [rbp-A8h]
  __int128 v13; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+38h] [rbp-90h]
  __int128 v15; // [rsp+40h] [rbp-88h]
  _OWORD v16[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v17; // [rsp+70h] [rbp-58h]
  int v18; // [rsp+78h] [rbp-50h]
  __int64 v19; // [rsp+80h] [rbp-48h]
  char v20; // [rsp+88h] [rbp-40h]
  unsigned __int64 v21; // [rsp+98h] [rbp-30h]

  v3 = *a1;
  v21 = __readfsqword(0x28u);
  v4 = a2;
  *(_QWORD *)&v11 = 0;
  sub_6141A0(v3, 26, &v11, 8);
  if ( a2 >= (unsigned int)v11 )
  {
    if ( a2 >= DWORD1(v11) )
    {
      if ( a2 == -1 )
        goto LABEL_16;
    }
    else
    {
      v9 = 0;
      v12 = nullptr;
      ptr = nullptr;
      v17 = 1;
      v18 = -1;
      v19 = 0;
      v20 = 0;
      v11 = 0;
      v13 = 0;
      v15 = 0;
      v16[0] = 0;
      if ( get_udm_by_tid(&v9, &v11, a2) != -1 )
      {
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(*(_QWORD *)&v16[0], 289);
        tinfo_tid = get_tinfo_tid(&tinfo_property, 0);
        clear_tinfo_t(&tinfo_property);
        clear_tinfo_t(v16);
        if ( ptr )
        {
          *(_QWORD *)&v15 = 0;
          qfree(ptr);
        }
        if ( v12 )
        {
          *(_QWORD *)&v13 = 0;
          qfree(v12);
        }
        clear_tinfo_t(&v9);
        return tinfo_tid;
      }
      clear_tinfo_t(v16);
      if ( ptr )
      {
        *(_QWORD *)&v15 = 0;
        qfree(ptr);
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
      clear_tinfo_t(&v9);
    }
  }
  v4 = sub_614FB0(*a1, 29) + a2;
LABEL_16:
  v7 = *a1;
  LODWORD(v11) = v4;
  tinfo_tid = -1;
  if ( (unsigned __int8)sub_79BBD0(&v11, v7, &tinfo_property, 3, 8257) )
  {
    tinfo_tid = -2;
    if ( (_DWORD)tinfo_property != -1 )
    {
      v8 = tinfo_property - 1;
      return v8 - (unsigned int)sub_614FB0(*a1, 29);
    }
  }
  return tinfo_tid;
}

