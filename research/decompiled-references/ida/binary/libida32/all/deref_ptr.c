__int64 __fastcall deref_ptr(unsigned int *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v4; // rdi
  char tinfo_property; // bl
  char v8; // r14
  char v9; // al
  int v10; // r15d
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  char v13; // bl
  char v14; // bl
  __int64 v15; // rsi
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ebx
  bool v20; // zf
  char v21; // r14
  char data_value; // al
  unsigned int v23; // [rsp+8h] [rbp-60h]
  unsigned int v24; // [rsp+8h] [rbp-60h]
  char v25; // [rsp+Fh] [rbp-59h]
  unsigned int v26; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a2;
  v27[1] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v4, 2);
  if ( (tinfo_property & 0xF) != 0xA )
    return 0;
  v8 = getinf(58);
  v9 = v8 & 3;
  if ( (v8 & 3) == 2 )
  {
    v10 = 4;
    v12 = 2;
    goto LABEL_7;
  }
  if ( v9 == 3 )
  {
    v10 = 6;
    v12 = 4;
    goto LABEL_7;
  }
  if ( v9 != 1 )
    return 0;
  v10 = 2;
  v11 = getinf(59);
  v12 = 1;
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
        v27[0] = get_tinfo_property(*a2, 9);
        v25 = (get_tinfo_property(v27[0], 2) & 0xF) == 12;
        clear_tinfo_t(v27);
        v20 = v14 == 8;
        v17 = *a1;
        v21 = v20;
        v26 = 0;
        data_value = get_data_value(&v26, v17, v24);
        v18 = v24;
        if ( !data_value )
          return 0;
        if ( v21 == v25 )
          goto LABEL_13;
LABEL_21:
        if ( (unsigned __int8)get_data_value(v27, v18 + v17, v10 - v18) )
        {
          v19 = v26;
          v16 = v19 + 16 * sel2para(LODWORD(v27[0]));
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
        v26 = 0;
        if ( (unsigned __int8)get_data_value(&v26, v15, v12) )
        {
LABEL_13:
          v16 = v26;
          goto LABEL_14;
        }
        return 0;
      }
    }
    v17 = *a1;
    v26 = 0;
    v23 = v12;
    if ( !(unsigned __int8)get_data_value(&v26, v17, v12) )
      return 0;
    v18 = v23;
    goto LABEL_21;
  }
  *a1 = get_qword(*a1);
  return 1;
}

