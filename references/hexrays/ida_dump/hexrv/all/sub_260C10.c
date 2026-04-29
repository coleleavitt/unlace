__int64 __fastcall sub_260C10(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 numbered_type_name; // rbx
  unsigned int v6; // ebp
  int tinfo_size; // eax
  unsigned int v9; // [rsp+4h] [rbp-E4h] BYREF
  __int64 v10; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-C8h]
  __int128 v13; // [rsp+28h] [rbp-C0h]
  __int64 v14; // [rsp+38h] [rbp-B0h]
  __int128 v15; // [rsp+40h] [rbp-A8h]
  _OWORD v16[3]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v17; // [rsp+80h] [rbp-68h]
  int v18; // [rsp+88h] [rbp-60h]
  __int64 v19; // [rsp+90h] [rbp-58h]
  char v20; // [rsp+98h] [rbp-50h]
  unsigned __int64 v21; // [rsp+A8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v10 = 0;
  if ( !a2 )
    goto LABEL_7;
  *((_QWORD *)&v11 + 1) = a2;
  numbered_type_name = a2;
  LOWORD(v12) = 256;
  *(_QWORD *)&v11 = get_idati(a1, a2, a3, a4);
  v6 = create_tinfo(&v10, 61, 61, &v11);
  if ( !(_BYTE)v6 )
    goto LABEL_7;
  if ( (unsigned __int8)is_ordinal_name(a2, &v9) )
  {
    numbered_type_name = get_numbered_type_name(0, v9);
    if ( !numbered_type_name )
    {
      if ( !under_debugger )
        sub_37DDE0(50950);
      BUG();
    }
  }
  tinfo_size = get_tinfo_size(0, v10, 0);
  if ( tinfo_size == a3 )
  {
    if ( a1 )
      sub_F6610(a1, (__int64)&unk_3F4178, numbered_type_name);
  }
  else
  {
    if ( a3 >= tinfo_size )
    {
LABEL_7:
      v6 = 0;
      goto LABEL_8;
    }
    v12 = 0;
    v14 = 0;
    v17 = 1;
    v18 = -1;
    v19 = 0;
    v20 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v16[0] = 0;
    if ( (unsigned int)sub_328550(&v11, &v10, a3, 0) == -1 || (unsigned __int64)v13 <= 1 || (_QWORD)v11 != 8 * a3 )
    {
      clear_tinfo_t(v16);
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14);
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
      goto LABEL_7;
    }
    if ( a1 )
      sub_F6610(a1, (__int64)&unk_3F8DB8, numbered_type_name, v12);
    clear_tinfo_t(v16);
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
  }
LABEL_8:
  clear_tinfo_t(&v10);
  return v6;
}
