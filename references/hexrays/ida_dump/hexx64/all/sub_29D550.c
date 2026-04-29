__int64 *__fastcall sub_29D550(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // rdi
  char tinfo_property; // r14
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rdi
  char v15; // r15
  __int64 v16; // rdi
  char v17; // r15
  char v19; // r15
  __int64 v20; // rdi
  char v21; // r15
  char v22; // r14
  char v23; // [rsp+Dh] [rbp-5Bh]
  char v24; // [rsp+Eh] [rbp-5Ah]
  __int64 v25; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a3;
  v8 = *a4;
  v26[1] = __readfsqword(0x28u);
  if ( !(unsigned int)lexcompare_tinfo(v7, v8, 0) )
    goto LABEL_14;
  if ( (get_tinfo_property(*a3, 2) & 0xF) != 0xA || (get_tinfo_property(*a4, 2) & 0xF) != 0xA )
  {
    v10 = *a3;
    if ( (unsigned __int8)*a3 && ((v10 & 0xE) != 0 || (v10 & 0x30) == 0) )
    {
      v26[0] = get_tinfo_property(v10, 9);
      tinfo_property = get_tinfo_property(v26[0], 2);
      clear_tinfo_t(v26);
      if ( (tinfo_property & 0x3F) != 0x30 || (v12 = *a4, (v13 = *a4) == 0) )
      {
LABEL_7:
        v14 = *a3;
        if ( (unsigned __int8)*a3 && ((v14 & 0xE) != 0 || (v14 & 0x30) == 0) )
        {
          v26[0] = 0;
          v26[0] = get_tinfo_property(v14, 9);
          v15 = get_tinfo_property(v26[0], 2) & 0x3F;
          clear_tinfo_t(v26);
          if ( v15 != 48 )
          {
            v16 = *a4;
            if ( !(unsigned __int8)*a4 || (v16 & 0xE) == 0 && (v16 & 0x30) != 0 )
              goto LABEL_14;
            v26[0] = 0;
            v26[0] = get_tinfo_property(v16, 9);
            v17 = get_tinfo_property(v26[0], 2);
            clear_tinfo_t(v26);
            if ( (v17 & 0x3F) == 0x30 )
              goto LABEL_14;
          }
        }
LABEL_31:
        sub_242920(a1, a2, (__int64)a3, (__int64)a4, 0);
        return a1;
      }
    }
    else
    {
      v12 = *a4;
      v13 = *a4;
      if ( !v13 )
        goto LABEL_31;
    }
    if ( (v13 & 0xE) != 0 || (v13 & 0x30) == 0 )
    {
      v26[0] = 0;
      v26[0] = get_tinfo_property(v12, 9);
      v22 = get_tinfo_property(v26[0], 2);
      clear_tinfo_t(v26);
      if ( (v22 & 0x3F) != 0x30 )
        goto LABEL_30;
    }
    goto LABEL_7;
  }
  v26[0] = get_tinfo_property(*a4, 9);
  v19 = get_tinfo_property(v26[0], 2) & 0x3F;
  clear_tinfo_t(v26);
  if ( v19 != 1 && (unsigned __int8)sub_29D2B0(a2, 0, 0, a3, a4) )
  {
LABEL_14:
    *a1 = 0;
    goto LABEL_15;
  }
  v20 = *a3;
  v26[0] = 0;
  v26[0] = get_tinfo_property(v20, 9);
  v21 = get_tinfo_property(v26[0], 2);
  clear_tinfo_t(v26);
  if ( (v21 & 0x3F) != 1 && (unsigned __int8)sub_29D2B0(a2, 0, 0, a4, a3)
    || (v25 = 0,
        copy_tinfo_t(&v25, a3),
        sub_299470(v26, &v25),
        v24 = get_tinfo_property(v26[0], 2) & 0xF,
        clear_tinfo_t(v26),
        clear_tinfo_t(&v25),
        v25 = 0,
        copy_tinfo_t(&v25, a4),
        sub_299470(v26, &v25),
        v23 = get_tinfo_property(v26[0], 2) & 0xF,
        clear_tinfo_t(v26),
        clear_tinfo_t(&v25),
        v23 != 12)
    && v24 == 12 )
  {
LABEL_30:
    *a1 = 0;
    copy_tinfo_t(a1, a4);
    return a1;
  }
  *a1 = 0;
  if ( v24 == 12 || v23 != 12 )
  {
    copy_tinfo_t(a1, a2 + 232);
    return a1;
  }
LABEL_15:
  copy_tinfo_t(a1, a3);
  return a1;
}
