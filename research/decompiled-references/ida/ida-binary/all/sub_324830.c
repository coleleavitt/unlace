__int64 __fastcall sub_324830(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 ph; // rbx
  bool v11; // r13
  __int16 v12; // dx
  const char *v13; // rsi
  unsigned __int64 v14; // rdx
  __int16 v15; // dx
  int v16; // eax
  unsigned __int64 v17; // rdi
  __int64 selector; // rax
  const char *v19; // rdx
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned int v22; // ebx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r13
  __int16 v31; // [rsp+24h] [rbp-14Ch] BYREF
  __int16 v32; // [rsp+26h] [rbp-14Ah] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-148h] BYREF
  const char *v34; // [rsp+30h] [rbp-140h] BYREF
  __int128 v35; // [rsp+38h] [rbp-138h]
  const char *v36; // [rsp+50h] [rbp-120h] BYREF
  __int128 v37; // [rsp+58h] [rbp-118h]
  _OWORD v38[2]; // [rsp+70h] [rbp-100h] BYREF
  __int64 v39; // [rsp+90h] [rbp-E0h]
  __int64 v40; // [rsp+98h] [rbp-D8h]
  __int64 v41; // [rsp+A0h] [rbp-D0h]
  __int128 v42; // [rsp+A8h] [rbp-C8h]
  __int128 v43; // [rsp+B8h] [rbp-B8h]
  __int128 v44; // [rsp+C8h] [rbp-A8h]
  __int128 v45; // [rsp+D8h] [rbp-98h]
  __int128 v46; // [rsp+E8h] [rbp-88h]
  __int128 v47; // [rsp+F8h] [rbp-78h]
  __int128 v48; // [rsp+108h] [rbp-68h]
  __int128 v49; // [rsp+118h] [rbp-58h]
  unsigned __int64 v50; // [rsp+128h] [rbp-48h]
  unsigned __int64 v51; // [rsp+138h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  v35 = 0;
  v37 = 0;
  memset(v38, 0, sizeof(v38));
  v34 = nullptr;
  v36 = nullptr;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v50 = 0xFFFFFFFF00000000LL;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v49 = -1;
  ph = get_ph(a1, a2);
  v11 = 1;
  if ( (getinf(3) & 6) == 0 )
  {
    v25 = getinf(5);
    v11 = 0;
    if ( (unsigned int)v25 <= 0xD )
    {
      v26 = -8293;
      if ( !_bittest64(&v26, v25) )
        v11 = (*(_WORD *)(ph + 8) & 0x2002) != 0;
    }
  }
  if ( !(unsigned __int8)getinf_flag(3, 4) || (v12 = 2, (*(_DWORD *)(ph + 8) & 0x10000000) == 0) )
    v12 = (*(_DWORD *)(ph + 8) & 4) != 0;
  v31 = v12;
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)v38, (_QWORD *)v38 + 1) )
  {
    if ( v11 )
    {
      v29 = getseg(*(_QWORD *)&v38[0]);
      v30 = v29;
      if ( v29 )
      {
        v33 = sel2para(*(_QWORD *)(v29 + 48));
        v31 = *(unsigned __int8 *)(v30 + 43);
      }
      else
      {
        v33 = 0;
      }
    }
    else
    {
      v33 = *(_QWORD *)&v38[0] >> 4;
    }
  }
  else
  {
    v38[0] = -1;
    v33 = v11 - 1LL;
  }
  LOWORD(v40) = 513;
  v32 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = (const char *)sub_3236F0;
      if ( !(unsigned int)sub_507F10(
                            1035,
                            (unsigned int)sub_3236F0,
                            (unsigned int)&v34,
                            (unsigned int)v38,
                            (unsigned int)v38 + 8,
                            (unsigned int)&v33,
                            &v36,
                            &v32,
                            &v31) )
        goto LABEL_35;
      if ( *((_QWORD *)&v38[0] + 1) == -1 )
        break;
      v14 = *(_QWORD *)&v38[0];
      if ( *(_QWORD *)&v38[0] < *((_QWORD *)&v38[0] + 1) )
        goto LABEL_11;
LABEL_46:
      sub_17CE30(1031);
    }
    v27 = getseg(*(_QWORD *)&v38[0]);
    if ( v27 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = getinf(20);
    v14 = *(_QWORD *)&v38[0];
    *((_QWORD *)&v38[0] + 1) = v28;
    if ( *(_QWORD *)&v38[0] >= v28 )
      goto LABEL_46;
LABEL_11:
    if ( v33 <= 0xFFFF )
      break;
    if ( v14 >= 16 * v33 )
      goto LABEL_13;
LABEL_39:
    sub_17CE30(1032);
  }
  v24 = sel2para(v33);
  if ( *(_QWORD *)&v38[0] < (unsigned __int64)(16 * v24) )
    goto LABEL_39;
LABEL_13:
  v15 = v31;
  if ( (*(_DWORD *)(ph + 8) & 0x2000) != 0 )
    goto LABEL_17;
  v16 = *(_DWORD *)(ph + 8) & 0x2002;
  if ( v31 == 2 )
  {
    v31 = 1;
    if ( v16 )
    {
      v15 = 1;
      goto LABEL_17;
    }
    goto LABEL_22;
  }
  if ( !v16 && v31 == 1 )
  {
LABEL_22:
    BYTE3(v40) = 0;
    v17 = v33;
    v31 = 0;
LABEL_23:
    selector = setup_selector(v17);
    goto LABEL_24;
  }
LABEL_17:
  v17 = v33;
  BYTE3(v40) = v15;
  if ( v33 || !v15 )
    goto LABEL_23;
  selector = find_selector();
  if ( !selector )
    selector = allocate_selector(v33);
LABEL_24:
  v41 = selector;
  v19 = &s1;
  if ( (_QWORD)v37 )
    v19 = v36;
  v13 = &s1;
  if ( (_QWORD)v35 )
    v13 = v34;
  v22 = 0;
  if ( (unsigned __int8)add_segm_ex(v38, v13, v19, (v32 & 1) == 0 ? 1 : 33) )
  {
    sub_1FDB10(NAN, a4, a5, a6, v20, v21, a9, a10, (__int64)v38, v13);
LABEL_35:
    v22 = 1;
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, v13);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v13);
  }
  return v22;
}
