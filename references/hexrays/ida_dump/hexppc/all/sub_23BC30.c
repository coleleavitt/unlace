__int64 __fastcall sub_23BC30(_QWORD *a1)
{
  char tinfo_property; // al
  __int64 v3; // rdi
  unsigned int tinfo_size; // ebx
  __int64 v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 v7; // [rsp+10h] [rbp-68h] BYREF
  __int64 v8; // [rsp+18h] [rbp-60h] BYREF
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-40h]
  __int16 v12; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(*a1, 2);
  v3 = *a1;
  if ( (tinfo_property & 0xF) == 0xB )
  {
    v6 = get_tinfo_property(v3, 11);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    copy_tinfo_t((char *)&v9 + 8, &v8);
    v10 = 0;
    copy_tinfo_t(&v10, &v7);
    v11 = 0;
    v12 = 0;
    clear_tinfo_t(&v8);
    clear_tinfo_t(&v7);
    copy_tinfo_t(&v9, &v6);
    create_tinfo(&v6, 10, 10, &v9);
    clear_tinfo_t(&v10);
    clear_tinfo_t((char *)&v9 + 8);
    clear_tinfo_t(&v9);
    tinfo_size = get_tinfo_size(0, v6, 0);
    clear_tinfo_t(&v6);
  }
  else
  {
    return (unsigned int)get_tinfo_size(0, *a1, 0);
  }
  return tinfo_size;
}
