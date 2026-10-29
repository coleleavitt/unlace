__int64 sub_122B80()
{
  __int64 ph; // rbx
  bool v1; // r13
  __int16 v2; // dx
  unsigned __int64 v3; // rdx
  __int16 v4; // dx
  int v5; // eax
  __int64 selector; // rax
  const char *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  __int16 v15; // [rsp+24h] [rbp-14Ch]
  unsigned __int64 v16; // [rsp+28h] [rbp-148h] BYREF
  const char *v17; // [rsp+30h] [rbp-140h] BYREF
  __int128 v18; // [rsp+38h] [rbp-138h]
  __int64 v19; // [rsp+50h] [rbp-120h]
  __int128 v20; // [rsp+58h] [rbp-118h]
  _OWORD v21[2]; // [rsp+70h] [rbp-100h] BYREF
  __int64 v22; // [rsp+90h] [rbp-E0h]
  __int64 v23; // [rsp+98h] [rbp-D8h]
  __int64 v24; // [rsp+A0h] [rbp-D0h]
  __int128 v25; // [rsp+A8h] [rbp-C8h]
  __int128 v26; // [rsp+B8h] [rbp-B8h]
  __int128 v27; // [rsp+C8h] [rbp-A8h]
  __int128 v28; // [rsp+D8h] [rbp-98h]
  __int128 v29; // [rsp+E8h] [rbp-88h]
  __int128 v30; // [rsp+F8h] [rbp-78h]
  __int128 v31; // [rsp+108h] [rbp-68h]
  __int128 v32; // [rsp+118h] [rbp-58h]
  unsigned __int64 v33; // [rsp+128h] [rbp-48h]
  unsigned __int64 v34; // [rsp+138h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v18 = 0;
  v20 = 0;
  memset(v21, 0, sizeof(v21));
  v17 = nullptr;
  v19 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v33 = 0xFFFFFFFF00000000LL;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  ph = get_ph();
  v1 = 1;
  if ( (getinf() & 6) == 0 )
  {
    v10 = getinf();
    v1 = 0;
    if ( (unsigned int)v10 <= 0xD )
    {
      v11 = -8293;
      if ( !_bittest64(&v11, v10) )
        v1 = (*(_WORD *)(ph + 8) & 0x2002) != 0;
    }
  }
  if ( !(unsigned __int8)getinf_flag() || (v2 = 2, (*(_DWORD *)(ph + 8) & 0x10000000) == 0) )
    v2 = (*(_DWORD *)(ph + 8) & 4) != 0;
  v15 = v2;
  if ( (unsigned __int8)sub_161C80(0, v21, (char *)v21 + 8) )
  {
    if ( v1 )
    {
      v14 = getseg();
      if ( v14 )
      {
        v16 = sel2para();
        v15 = *(unsigned __int8 *)(v14 + 43);
      }
      else
      {
        v16 = 0;
      }
    }
    else
    {
      v16 = *(_QWORD *)&v21[0] >> 4;
    }
  }
  else
  {
    v21[0] = -1;
    v16 = v1 - 1LL;
  }
  LOWORD(v23) = 513;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)sub_18C660(
                            1035,
                            (unsigned int)sub_121900,
                            (unsigned int)&v17,
                            (unsigned int)v21,
                            (unsigned int)v21 + 8,
                            (unsigned int)&v16) )
        goto LABEL_33;
      if ( *((_QWORD *)&v21[0] + 1) == -1 )
        break;
      v3 = *(_QWORD *)&v21[0];
      if ( *(_QWORD *)&v21[0] < *((_QWORD *)&v21[0] + 1) )
        goto LABEL_11;
LABEL_44:
      sub_F9540(1031);
    }
    v12 = getseg();
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 8);
    else
      v13 = getinf();
    v3 = *(_QWORD *)&v21[0];
    *((_QWORD *)&v21[0] + 1) = v13;
    if ( *(_QWORD *)&v21[0] >= v13 )
      goto LABEL_44;
LABEL_11:
    if ( v16 <= 0xFFFF )
      break;
    if ( v3 >= 16 * v16 )
      goto LABEL_13;
LABEL_37:
    sub_F9540(1032);
  }
  if ( *(_QWORD *)&v21[0] < (unsigned __int64)(16 * sel2para()) )
    goto LABEL_37;
LABEL_13:
  v4 = v15;
  if ( (*(_DWORD *)(ph + 8) & 0x2000) != 0 )
    goto LABEL_17;
  v5 = *(_DWORD *)(ph + 8) & 0x2002;
  if ( v15 == 2 )
  {
    if ( v5 )
    {
      v4 = 1;
      goto LABEL_17;
    }
    goto LABEL_22;
  }
  if ( !v5 && v15 == 1 )
  {
LABEL_22:
    BYTE3(v23) = 0;
LABEL_23:
    selector = setup_selector();
    goto LABEL_24;
  }
LABEL_17:
  BYTE3(v23) = v4;
  if ( v16 || !v4 )
    goto LABEL_23;
  selector = find_selector();
  if ( !selector )
    selector = allocate_selector();
LABEL_24:
  v24 = selector;
  v7 = s1;
  if ( (_QWORD)v18 )
    v7 = v17;
  v8 = 0;
  if ( (unsigned __int8)add_segm_ex() )
  {
    sub_15E150(v21, v7);
LABEL_33:
    v8 = 1;
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v8;
}

