__int64 __fastcall sub_23E410(__int64 a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r14
  __int64 v11; // rax
  int v12; // eax
  bool v13; // r15
  int v14; // eax
  __int64 v15; // rdi
  int v16; // r12d
  char v17; // bp
  __int64 v18; // rax
  unsigned __int8 v19; // [rsp+18h] [rbp-B0h]
  unsigned int v20; // [rsp+18h] [rbp-B0h]
  char v21; // [rsp+20h] [rbp-A8h]
  unsigned __int8 v22; // [rsp+2Fh] [rbp-99h]
  __int64 v23; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+38h] [rbp-90h] BYREF
  __int64 v25; // [rsp+40h] [rbp-88h] BYREF
  __int64 tinfo_property; // [rsp+48h] [rbp-80h] BYREF
  __int64 v27; // [rsp+50h] [rbp-78h] BYREF
  __int64 v28; // [rsp+58h] [rbp-70h]
  __int128 v29; // [rsp+60h] [rbp-68h] BYREF
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  int v31; // [rsp+78h] [rbp-50h]
  __int16 v32; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v6 = *a2;
  v33 = __readfsqword(0x28u);
  v8 = (get_tinfo_property(v6, 2) & 0xF) - 10;
  v9 = (get_tinfo_property(*a3, 2) & 0xF) - 10;
  if ( v9 <= 2u == v8 <= 2u )
  {
    if ( v8 > 2u )
      goto LABEL_20;
    v23 = 0;
    copy_tinfo_t(&v23, a2);
    v24 = 0;
    copy_tinfo_t(&v24, a3);
    v27 = 0;
    v28 = 0;
    if ( (unsigned __int8)get_tinfo_details(v23, 11, &v27) )
    {
      tinfo_property = 0;
      v25 = 0;
      v29 = 0;
      copy_tinfo_t((char *)&v29 + 8, &v25);
      v30 = 0;
      copy_tinfo_t(&v30, &tinfo_property);
      v31 = 0;
      v32 = 0;
      clear_tinfo_t(&v25);
      clear_tinfo_t(&tinfo_property);
      v11 = v29;
      *(_QWORD *)&v29 = v27;
      v27 = v11;
      create_tinfo(&v23, 10, 10, &v29);
      clear_tinfo_t(&v30);
      clear_tinfo_t((char *)&v29 + 8);
      clear_tinfo_t(&v29);
    }
    clear_tinfo_t(&v27);
    v27 = 0;
    v28 = 0;
    if ( (unsigned __int8)get_tinfo_details(v24, 11, &v27) )
    {
      tinfo_property = 0;
      v25 = 0;
      v29 = 0;
      copy_tinfo_t((char *)&v29 + 8, &v25);
      v30 = 0;
      copy_tinfo_t(&v30, &tinfo_property);
      v31 = 0;
      v32 = 0;
      clear_tinfo_t(&v25);
      clear_tinfo_t(&tinfo_property);
      v18 = v29;
      *(_QWORD *)&v29 = v27;
      v27 = v18;
      create_tinfo(&v24, 10, 10, &v29);
      clear_tinfo_t(&v30);
      clear_tinfo_t((char *)&v29 + 8);
      clear_tinfo_t(&v29);
    }
    clear_tinfo_t(&v27);
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(v23, 10);
    v27 = 0;
    v27 = get_tinfo_property(v24, 10);
    if ( a4 - 22 > 1 )
    {
      if ( (get_tinfo_property(tinfo_property, 2) & 0xF) == 0xC || (get_tinfo_property(v27, 2) & 0xF) == 0xC )
        goto LABEL_28;
      if ( a4 == 36 )
      {
        if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 1 )
          goto LABEL_28;
        if ( (get_tinfo_property(v27, 2) & 0x3F) == 1 )
        {
          v12 = 0;
          goto LABEL_13;
        }
      }
    }
    v19 = sub_325380(a1, &v23, &v24);
    v22 = sub_325380(a1, &v24, &v23);
    v12 = 1;
    v21 = v22 & v19;
    if ( (v22 & v19) != 0 )
    {
LABEL_13:
      v20 = v12;
      clear_tinfo_t(&v27);
      clear_tinfo_t(&tinfo_property);
      clear_tinfo_t(&v24);
      clear_tinfo_t(&v23);
      return v20;
    }
    set_tinfo_property(&tinfo_property, 6, 192);
    set_tinfo_property(&v27, 6, 192);
    sub_327290(&v29, *(_QWORD *)(a1 + 112), &tinfo_property);
    copy_tinfo_t(&v23, &v29);
    clear_tinfo_t(&v29);
    sub_327290(&v29, *(_QWORD *)(a1 + 112), &v27);
    copy_tinfo_t(&v24, &v29);
    clear_tinfo_t(&v29);
    if ( v19 )
    {
      v13 = a4 == 36;
    }
    else
    {
      v13 = a4 == 36;
      v21 = sub_325380(a1, &v23, &v24) ^ 1;
      if ( v21 && a4 == 36 )
        goto LABEL_28;
      if ( v22 )
      {
LABEL_19:
        clear_tinfo_t(&v27);
        clear_tinfo_t(&tinfo_property);
        clear_tinfo_t(&v24);
        clear_tinfo_t(&v23);
LABEL_20:
        v14 = sub_250400(a4);
        v15 = *a2;
        v16 = v14;
        if ( v14 && ((v15 & 0xE) != 0 || (v15 & 0x30) == 0) && ((*a3 & 0xE) != 0 || (*a3 & 0x30) == 0) )
        {
          sub_23DD20((__int64 *)&v29, a1, (__int64)a2, (__int64)a3, 0);
          if ( v16 != (unsigned int)get_tinfo_property(v29, 3) )
          {
            clear_tinfo_t(&v29);
            return 0;
          }
          clear_tinfo_t(&v29);
          v15 = *a2;
        }
        v17 = get_tinfo_property(v15, 2);
        return ((get_tinfo_property(*a3, 2) & 0xF) == 9) == ((v17 & 0xF) == 9);
      }
    }
    if ( (unsigned __int8)sub_325380(a1, &v24, &v23) || !v13 && !v21 )
      goto LABEL_19;
LABEL_28:
    v12 = 0;
    goto LABEL_13;
  }
  if ( a4 - 22 <= 1 || (unsigned int)sub_250400(a4) == 2 )
    return (unsigned int)(v9 < 3u) - 2;
  else
    return 0;
}
