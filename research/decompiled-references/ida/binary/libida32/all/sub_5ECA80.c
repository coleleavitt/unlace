__int64 __fastcall sub_5ECA80(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // r15
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+8h] [rbp-70h] BYREF
  __int128 v10; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+28h] [rbp-50h]
  __int16 v13; // [rsp+2Ch] [rbp-4Ch]
  __int64 v14; // [rsp+30h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v1 = 0;
  v2 = *a1;
  v15 = __readfsqword(0x28u);
  if ( (v2 & 0xF) == 0xA )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    copy_tinfo_t((char *)&v10 + 8);
    v11 = 0;
    copy_tinfo_t(&v11);
    v12 = 0;
    v13 = 0;
    clear_tinfo_t(&v8);
    clear_tinfo_t(&v9);
    get_tinfo_details(*a1, 10, &v10);
    v1 = sub_5ECA80((unsigned int)&v10, 10, v4, v5, v6, v7, v8, v9, v10, DWORD2(v10), v11, v12, v14);
    if ( (_BYTE)v1 )
      create_tinfo(a1, (unsigned __int8)v2, 10, &v10);
    clear_tinfo_t(&v11);
    clear_tinfo_t((char *)&v10 + 8);
    clear_tinfo_t(&v10);
  }
  if ( (v2 & 0x40) != 0 )
    LOBYTE(v1) = set_tinfo_property(a1, 6, 64) != 0;
  return v1;
}

