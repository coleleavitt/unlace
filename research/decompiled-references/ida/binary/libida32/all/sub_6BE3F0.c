__int64 __fastcall sub_6BE3F0(_QWORD *a1, __int64 *a2, const char *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rdx
  __int64 v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h] BYREF
  __int128 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h]
  __int16 v14; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  v9 = 0;
  copy_tinfo_t((char *)&v11 + 8);
  v12 = 0;
  copy_tinfo_t(&v12);
  v13 = 0;
  v14 = 0;
  clear_tinfo_t(&v9);
  clear_tinfo_t(&v10);
  if ( (get_tinfo_property(*a2, 2) & 0xF) != 0xA || !(unsigned __int8)get_tinfo_details(*a2, 10, &v11) )
    goto LABEL_2;
  v5 = *a2;
  if ( !strcmp(a3, "__ptr32") )
  {
    v6 = HIBYTE(v14) | 0x20;
LABEL_7:
    HIBYTE(v14) = v6;
    v3 = create_tinfo(a2, (unsigned __int8)v5, 10, &v11);
    goto LABEL_3;
  }
  if ( !strcmp(a3, "__ptr64") )
  {
    v6 = HIBYTE(v14) | 0x40;
    goto LABEL_7;
  }
  if ( !strcmp(a3, "__restrict") )
  {
    v6 = HIBYTE(v14) | 0x60;
    goto LABEL_7;
  }
  if ( !strncmp(a3, "__shifted(", 0xAu) )
  {
    v10 = 0;
    v3 = sub_6BD910(a1, &v10, a3, a2);
    if ( (_BYTE)v3 )
    {
      v7 = v10;
      v10 = *a2;
      *a2 = v7;
    }
    clear_tinfo_t(&v10);
  }
  else
  {
LABEL_2:
    v3 = 0;
  }
LABEL_3:
  clear_tinfo_t(&v12);
  clear_tinfo_t((char *)&v11 + 8);
  clear_tinfo_t(&v11);
  return v3;
}

