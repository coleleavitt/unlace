__int64 *__fastcall sub_242CE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  char tinfo_property; // r12
  char v9; // bp
  char v10; // al
  char v11; // r15
  char v12; // cl
  char v13; // r8
  char v14; // r12
  char v15; // al
  int v16; // eax
  char v17; // r8
  __int64 v18; // rax
  char v20; // al
  char v21; // cl
  char v22; // al
  int v23; // [rsp+0h] [rbp-C8h]
  int tinfo_size; // [rsp+8h] [rbp-C0h]
  int v25; // [rsp+18h] [rbp-B0h]
  char v27; // [rsp+26h] [rbp-A2h]
  char v28; // [rsp+27h] [rbp-A1h]
  unsigned int v29; // [rsp+2Ch] [rbp-9Ch]
  __int64 v30; // [rsp+30h] [rbp-98h] BYREF
  __int64 v31; // [rsp+38h] [rbp-90h] BYREF
  __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h] BYREF
  __int64 v34; // [rsp+50h] [rbp-78h] BYREF
  __int64 v35; // [rsp+58h] [rbp-70h]
  __int128 v36; // [rsp+60h] [rbp-68h] BYREF
  __int64 v37; // [rsp+70h] [rbp-58h] BYREF
  int v38; // [rsp+78h] [rbp-50h]
  __int16 v39; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v40; // [rsp+88h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v30 = 0;
  copy_tinfo_t(&v30, a3);
  v31 = 0;
  copy_tinfo_t(&v31, a4);
  v34 = 0;
  v35 = 0;
  if ( (unsigned __int8)get_tinfo_details(v30, 11, &v34) )
  {
    v33 = 0;
    v32 = 0;
    v36 = 0;
    copy_tinfo_t((char *)&v36 + 8, &v32);
    v37 = 0;
    copy_tinfo_t(&v37, &v33);
    v38 = 0;
    v39 = 0;
    clear_tinfo_t(&v32);
    clear_tinfo_t(&v33);
    v6 = v36;
    *(_QWORD *)&v36 = v34;
    v34 = v6;
    create_tinfo(&v30, 10, 10, &v36);
    clear_tinfo_t(&v37);
    clear_tinfo_t((char *)&v36 + 8);
    clear_tinfo_t(&v36);
  }
  clear_tinfo_t(&v34);
  v34 = 0;
  v35 = 0;
  if ( (unsigned __int8)get_tinfo_details(v31, 11, &v34) )
  {
    v33 = 0;
    v32 = 0;
    v36 = 0;
    copy_tinfo_t((char *)&v36 + 8, &v32);
    v37 = 0;
    copy_tinfo_t(&v37, &v33);
    v38 = 0;
    v39 = 0;
    clear_tinfo_t(&v32);
    clear_tinfo_t(&v33);
    v7 = v36;
    *(_QWORD *)&v36 = v34;
    v34 = v7;
    create_tinfo(&v31, 10, 10, &v36);
    clear_tinfo_t(&v37);
    clear_tinfo_t((char *)&v36 + 8);
    clear_tinfo_t(&v36);
  }
  clear_tinfo_t(&v34);
  if ( !(unsigned __int8)sub_23EC40(&v30) )
    goto LABEL_36;
  if ( !(unsigned __int8)sub_23EC40(&v31) )
    goto LABEL_50;
  tinfo_property = get_tinfo_property(v30, 2);
  v9 = tinfo_property;
  v10 = get_tinfo_property(v31, 2);
  v11 = v10;
  v12 = tinfo_property & 0x3F;
  if ( (tinfo_property & 0x3F) == 0x29 )
    goto LABEL_36;
  v13 = v10 & 0x3F;
  if ( (v10 & 0x3F) == 0x29 )
    goto LABEL_50;
  if ( v12 == 25 )
    goto LABEL_36;
  if ( v13 == 25 )
    goto LABEL_50;
  if ( v12 == 9 )
    goto LABEL_36;
  if ( v13 == 9 )
    goto LABEL_50;
  if ( v12 == 38 )
    goto LABEL_36;
  if ( v13 == 38 )
    goto LABEL_50;
  v14 = tinfo_property & 0x2F;
  if ( v14 == 6 )
    goto LABEL_36;
  v15 = v10 & 0x2F;
  if ( v15 == 6 )
    goto LABEL_50;
  v23 = *(unsigned __int8 *)(a2 + 130);
  if ( (unsigned int)v23 <= 7 )
  {
    if ( v12 == 37 )
      goto LABEL_36;
    if ( v13 == 37 )
      goto LABEL_50;
    if ( v14 == 5 )
      goto LABEL_36;
    if ( v15 == 5 )
      goto LABEL_50;
  }
  v28 = v12;
  v27 = v13;
  tinfo_size = get_tinfo_size(0, v30, 0);
  v16 = get_tinfo_size(0, v31, 0);
  v17 = v27;
  v29 = v16;
  v25 = v16;
  if ( v28 == 13 )
  {
    sub_32C760(&v36, *(_QWORD *)(a2 + 112), (unsigned int)tinfo_size, 0);
    copy_tinfo_t(&v30, &v36);
    clear_tinfo_t(&v36);
    v22 = get_tinfo_property(v30, 2);
    v17 = v27;
    v9 = v22;
  }
  if ( v17 == 13 )
  {
    sub_32C760(&v36, *(_QWORD *)(a2 + 112), v29, 0);
    copy_tinfo_t(&v31, &v36);
    clear_tinfo_t(&v36);
    v11 = get_tinfo_property(v31, 2);
  }
  if ( tinfo_size > 7 || v25 > 7 )
  {
    if ( tinfo_size <= v25 && (tinfo_size < v25 || (unsigned int)get_tinfo_property(v31, 3) == 2) )
      goto LABEL_50;
    goto LABEL_36;
  }
  if ( v23 <= 7 )
  {
    if ( (v9 & 0x3F) == 0x24 )
      goto LABEL_36;
    if ( (v11 & 0x3F) != 0x24 )
    {
      if ( a5 )
        goto LABEL_45;
      if ( tinfo_size < v23 && v25 < v23 )
        goto LABEL_30;
      sub_242C20((__int64)&v30, v9);
      sub_242C20((__int64)&v31, v11);
      if ( tinfo_size > v25 )
        goto LABEL_36;
      if ( tinfo_size >= v25 )
      {
        v9 = get_tinfo_property(v30, 2);
        v11 = get_tinfo_property(v31, 2);
LABEL_45:
        v20 = v9 & 0x3F;
        v21 = v11 & 0x3F;
        if ( (v9 & 0x2F) == 4 )
        {
          if ( v21 == 39 )
            goto LABEL_51;
          if ( (v11 & 0x2F) != 4 )
            goto LABEL_36;
        }
        else if ( (v11 & 0x2F) != 4 )
        {
          if ( v20 != 39 && (unsigned __int8)((v9 & 0xF) - 10) > 2u )
          {
            if ( v21 != 39 && (unsigned __int8)((v11 & 0xF) - 10) > 2u )
            {
              *a1 = 7;
              goto LABEL_37;
            }
            goto LABEL_50;
          }
          goto LABEL_36;
        }
        if ( v20 != 39 )
        {
          if ( (v9 & 0x2F) != 4 )
            goto LABEL_50;
LABEL_36:
          set_tinfo_property(&v30, 6, 192);
          *a1 = 0;
          copy_tinfo_t(a1, &v30);
          goto LABEL_37;
        }
LABEL_51:
        *a1 = 36;
        goto LABEL_37;
      }
    }
LABEL_50:
    set_tinfo_property(&v31, 6, 192);
    *a1 = 0;
    copy_tinfo_t(a1, &v31);
    goto LABEL_37;
  }
  if ( a5 )
    goto LABEL_45;
LABEL_30:
  if ( (unsigned int)get_tinfo_property(v30, 3) == 2 && (unsigned int)get_tinfo_property(v31, 3) == 2 )
    v18 = 39;
  else
    v18 = 7;
  *a1 = v18;
LABEL_37:
  clear_tinfo_t(&v31);
  clear_tinfo_t(&v30);
  return a1;
}
