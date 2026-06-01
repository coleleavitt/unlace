__int64 __fastcall deref_ptr(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  char tinfo_property; // bl
  char v8; // r14
  char v9; // al
  int v10; // r15d
  unsigned __int8 v11; // al
  int v12; // r8d
  char v13; // bl
  char v14; // bl
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbx
  int v19; // r8d
  __int64 v20; // rbx
  bool v21; // zf
  char data_value; // al
  int v23; // [rsp+8h] [rbp-60h]
  int v24; // [rsp+8h] [rbp-60h]
  char v25; // [rsp+Eh] [rbp-5Ah]
  char v26; // [rsp+Fh] [rbp-59h]
  __int64 v27; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a2;
  v28[1] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v4, 2);
  if ( (tinfo_property & 0xF) != 0xA )
    return 0;
  v8 = getinf(58);
  v9 = v8 & 3;
  if ( (v8 & 3) == 2 )
  {
    v12 = 4;
    v10 = 2;
    goto LABEL_7;
  }
  if ( v9 == 3 )
  {
    v12 = 6;
    v10 = 4;
    goto LABEL_7;
  }
  if ( v9 != 1 )
    return 0;
  v10 = 1;
  v11 = getinf(59);
  v12 = 2;
  if ( v11 <= 2u )
  {
LABEL_7:
    v13 = tinfo_property & 0x30;
    if ( v13 != 32 )
    {
      if ( v13 == 48 )
        return 0;
      if ( v13 )
        goto LABEL_12;
      v14 = v8 & 0xC;
      if ( (v8 & 8) != 0 )
      {
        v24 = v12;
        v28[0] = get_tinfo_property(*a2, 9);
        v25 = (get_tinfo_property(v28[0], 2) & 0xF) == 12;
        clear_tinfo_t(v28);
        v17 = *a1;
        v21 = v14 == 8;
        v18 = v10;
        v26 = v21;
        v27 = 0;
        data_value = get_data_value(&v27, v17, v10);
        v19 = v24;
        if ( !data_value )
          return 0;
        if ( v26 == v25 )
          goto LABEL_13;
LABEL_21:
        if ( (unsigned __int8)get_data_value(v28, v18 + v17, v19 - v10) )
        {
          v20 = v27;
          v16 = v20 + 16 * sel2para(v28[0]);
LABEL_14:
          *a1 = v16;
          if ( a3 )
            *a3 = -1;
          return 1;
        }
        return 0;
      }
      if ( v14 != 4 )
      {
LABEL_12:
        v15 = *a1;
        v27 = 0;
        if ( (unsigned __int8)get_data_value(&v27, v15, v10) )
        {
LABEL_13:
          v16 = v27;
          goto LABEL_14;
        }
        return 0;
      }
    }
    v17 = *a1;
    v18 = v10;
    v23 = v12;
    v27 = 0;
    if ( !(unsigned __int8)get_data_value(&v27, v17, v10) )
      return 0;
    v19 = v23;
    goto LABEL_21;
  }
  *a1 = get_qword(*a1);
  return 1;
}
