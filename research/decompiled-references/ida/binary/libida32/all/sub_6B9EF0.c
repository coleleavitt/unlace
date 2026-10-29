__int64 __fastcall sub_6B9EF0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  char tinfo_details; // al
  int v6; // r15d
  __int64 v7; // rbx
  char v8; // r14
  __int64 v9; // r12
  char v10; // r13
  const char *v11; // rbp
  __int64 v12; // rax
  bool v13; // zf
  char v14; // dl
  char v15; // al
  __int64 v16; // rax
  char v17; // dl
  char v18; // al
  __int64 v19; // rax
  char v20; // dl
  char v21; // al
  __int64 v22; // rax
  char v23; // dl
  char v24; // al
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+28h] [rbp-70h] BYREF
  __int128 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  int v30; // [rsp+48h] [rbp-50h]
  __int16 v31; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v28 = 0;
  v27 = 0;
  v26 = 0;
  copy_tinfo_t((char *)&v28 + 8);
  v29 = 0;
  copy_tinfo_t(&v29);
  v30 = 0;
  v31 = 0;
  clear_tinfo_t(&v26);
  clear_tinfo_t(&v27);
  if ( (get_tinfo_property(*a2, 2) & 0xF) != 0xA )
    goto LABEL_2;
  tinfo_details = get_tinfo_details(*a2, 10, &v28);
  if ( !tinfo_details )
    goto LABEL_2;
  v6 = *(unsigned __int8 *)a2;
  if ( *a3 == *a3 + 24 * a3[1] )
    goto LABEL_2;
  v7 = *a3;
  v8 = tinfo_details;
  v9 = *a3 + 24 * a3[1];
  v10 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 8) )
      {
        v11 = *(const char **)v7;
        if ( !strcmp(*(const char **)v7, "_es") )
        {
          v10 = v8;
          v12 = sub_375980(0x7D2u);
          v13 = v12 == 0;
          v14 = v12 + 1;
          v15 = 5;
          if ( !v13 )
            v15 = v14;
          v6 |= 0x30u;
          LOBYTE(v31) = v15;
          goto LABEL_11;
        }
        if ( !strcmp(v11, "_cs") )
        {
          v10 = v8;
          v16 = sub_375980(0x7D2u);
          v13 = v16 == 0;
          v17 = v16 + 2;
          v18 = 6;
          if ( !v13 )
            v18 = v17;
          v6 |= 0x30u;
          LOBYTE(v31) = v18;
          goto LABEL_11;
        }
        if ( !strcmp(v11, "_ss") )
        {
          v10 = v8;
          v19 = sub_375980(0x7D2u);
          v13 = v19 == 0;
          v20 = v19 + 3;
          v21 = 7;
          if ( !v13 )
            v21 = v20;
          v6 |= 0x30u;
          LOBYTE(v31) = v21;
          goto LABEL_11;
        }
      }
      else
      {
        v11 = haystack;
      }
      if ( !strcmp(v11, "_ds") )
      {
        v10 = v8;
        v22 = sub_375980(0x7D2u);
        v13 = v22 == 0;
        v23 = v22 + 4;
        v24 = 8;
        if ( !v13 )
          v24 = v23;
        v6 |= 0x30u;
        LOBYTE(v31) = v24;
        goto LABEL_11;
      }
      if ( !strcmp(v11, "__far") )
        break;
      if ( !strcmp(v11, "__near") )
      {
        v6 |= 0x10u;
        v10 = v8;
      }
LABEL_11:
      v7 += 24;
      if ( v9 == v7 )
        goto LABEL_17;
    }
    v7 += 24;
    v6 |= 0x20u;
    v10 = v8;
  }
  while ( v9 != v7 );
LABEL_17:
  if ( v10 )
  {
    v3 = create_tinfo(a2, (unsigned __int8)v6, 10, &v28);
    goto LABEL_3;
  }
LABEL_2:
  v3 = 0;
LABEL_3:
  clear_tinfo_t(&v29);
  clear_tinfo_t((char *)&v28 + 8);
  clear_tinfo_t(&v28);
  return v3;
}

