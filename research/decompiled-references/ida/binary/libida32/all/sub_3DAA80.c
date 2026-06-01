unsigned __int64 __fastcall sub_3DAA80(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int stroff_path; // eax
  __int64 v10; // rsi
  unsigned int v11; // ebp
  int tinfo_size; // eax
  int v15; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v16[12]; // [rsp+14h] [rbp-F4h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-D8h]
  _DWORD v19[34]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  stroff_path = get_stroff_path(v19, &v15, a6, a2);
  if ( stroff_path <= 0 )
  {
    v19[0] = get_strid(a6);
    v10 = v19[0];
    if ( v19[0] == -1 )
      return v20 - __readfsqword(0x28u);
    v11 = 1;
  }
  else
  {
    v10 = v19[0];
    v11 = stroff_path;
  }
  *(_DWORD *)&v16[8] = 0;
  *(_QWORD *)v16 = (unsigned int)(v15 + a3);
  if ( (unsigned __int8)get_type_by_tid(&v16[4], v10)
    && !get_tinfo_property(*(_QWORD *)&v16[4], 286)
    && (tinfo_size = get_tinfo_size(0, *(_QWORD *)&v16[4], 0), *(_DWORD *)v16 == tinfo_size) )
  {
    add_dref(*(unsigned int *)(a1 + 8), v19[0], a4);
    clear_tinfo_t(&v16[4]);
  }
  else
  {
    v17[1] = a1;
    v17[0] = off_2AFD1E8;
    v18 = a4;
    visit_stroff_udms(v17, v19, v11, v16, a5);
    clear_tinfo_t(&v16[4]);
  }
  return v20 - __readfsqword(0x28u);
}

