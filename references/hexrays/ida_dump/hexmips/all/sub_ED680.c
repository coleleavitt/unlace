__int64 __fastcall sub_ED680(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // r15d
  int *v14; // rax
  int *v15; // r15
  char v16; // al
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  __int64 v22; // r13
  int v23; // r13d
  char v24; // dl
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdi
  int v28; // eax
  int v29; // r13d
  __int64 v30; // rdi
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  char v41; // r13
  __int64 v42; // rdi
  __int64 v43; // r13
  int v44; // eax
  int v45; // [rsp+0h] [rbp-B8h]
  unsigned int v46; // [rsp+0h] [rbp-B8h]
  int v47; // [rsp+0h] [rbp-B8h]
  __int64 v48; // [rsp+10h] [rbp-A8h]
  int v49; // [rsp+28h] [rbp-90h]
  unsigned int v50; // [rsp+2Ch] [rbp-8Ch]
  __int64 v51; // [rsp+38h] [rbp-80h] BYREF
  int v52; // [rsp+40h] [rbp-78h] BYREF
  int v53; // [rsp+44h] [rbp-74h]
  unsigned int v54; // [rsp+48h] [rbp-70h]
  __int64 v55; // [rsp+50h] [rbp-68h] BYREF
  __int64 v56; // [rsp+58h] [rbp-60h]
  _DWORD *tinfo_property; // [rsp+60h] [rbp-58h] BYREF
  __int128 v58; // [rsp+68h] [rbp-50h]
  unsigned __int64 v59; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)a2 + 80LL * a3;
  v59 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)v3 - 3) <= 1 )
  {
    if ( (get_tinfo_property(*(_QWORD *)(v3 + 64), 2) & 0xF) != 9 )
      return 0;
    v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 480LL) + 112LL);
    v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, *(unsigned __int16 *)(v3 + 8));
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, v50);
    v11 = *a1;
    v54 = v50;
    v49 = v10;
    v52 = 1;
    v53 = v10;
    v12 = *(_QWORD *)(v11 + 56);
    tinfo_property = nullptr;
    v51 = v12;
    v58 = 0;
    v13 = *(_DWORD *)(v11 + 72);
    tinfo_property = (_DWORD *)qvector_reserve(&tinfo_property, 0, 1, 4);
    tinfo_property[(_QWORD)v58] = v13;
    *(_QWORD *)&v58 = v58 + 1;
    v48 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 1504LL);
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (int *)sub_125240(v11, &v52, &v51, 0);
        v15 = v14;
        if ( v14 )
          break;
        if ( *(_DWORD *)(v11 + 352) != 1 )
          goto LABEL_19;
        v34 = **(unsigned int **)(v11 + 344);
        if ( !(_DWORD)v34 )
        {
          v42 = *(_QWORD *)(v11 + 64) + 432LL;
          v55 = 3;
          v56 = v50;
          v47 = sub_1EBE40(v42, &v55, 1, 0);
          cleanup_argloc(&v55);
          if ( v47 != -1 )
          {
            v43 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 432LL) + 104LL * v47;
            if ( (get_tinfo_property(*(_QWORD *)(v43 + 80), 2) & 0xF) == 9 )
            {
              v44 = *(_DWORD *)(v43 + 88);
              if ( v49 <= v44 )
                v44 = v49;
              v49 = v44;
            }
          }
          goto LABEL_19;
        }
        v35 = &tinfo_property[v58];
        if ( tinfo_property != v35 )
        {
          v36 = tinfo_property;
          while ( (_DWORD)v34 != *v36 )
          {
            if ( v35 == ++v36 )
              goto LABEL_57;
          }
          if ( v35 != v36 )
          {
            **(_DWORD **)(v11 + 64) |= 0x400u;
            goto LABEL_19;
          }
        }
LABEL_57:
        if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
        {
          v46 = **(_DWORD **)(v11 + 344);
          v40 = qvector_reserve(&tinfo_property, tinfo_property, v58 + 1, 4);
          v34 = v46;
          tinfo_property = (_DWORD *)v40;
          v35 = (_DWORD *)(v40 + 4 * v58);
        }
        *v35 = v34;
        *(_QWORD *)&v58 = v58 + 1;
        v38 = *(_QWORD *)(v11 + 64);
        if ( (unsigned int)v34 >= *(_DWORD *)(v38 + 64) )
          sub_ECD00();
        v11 = *(_QWORD *)(*(_QWORD *)(v38 + 528) + 8 * v34);
        v51 = 0;
      }
      v45 = *v14;
      if ( !(unsigned __int8)sub_11A6A0((unsigned int)*v14) )
        goto LABEL_19;
      v16 = sub_125D00(v15 + 16, v48, &v52);
      if ( v45 != 67 || !v16 )
        break;
      if ( *((_BYTE *)v15 + 32) == 13 )
      {
        v17 = *((_QWORD *)v15 + 5);
        v18 = 128;
        v19 = *(_DWORD *)(v17 + 16);
        if ( v19 > 4 )
        {
          v18 = 0x4000;
          if ( v19 <= 8 )
            v18 = 1024;
        }
        if ( (unsigned int)get_fpvalue_kind(v17, v18) == 2 )
          continue;
      }
      v45 = 67;
      break;
    }
    v20 = v15[17];
    v21 = v53;
    if ( *((_BYTE *)v15 + 64) == 14 && v20 / 2 <= v53 )
    {
      if ( (unsigned __int8)sub_1213D0(*((_QWORD *)v15 + 9), v48, &v52, 1)
        || (unsigned __int8)sub_1213D0(*((_QWORD *)v15 + 9) + 16LL, v48, &v52, 1) )
      {
        v49 = v15[17] / 2;
        goto LABEL_19;
      }
      v20 = v15[17];
      v21 = v53;
    }
    if ( v20 <= v21 && (unsigned __int8)sub_1213D0(v15 + 16, v48, &v52, 1) )
    {
      if ( (unsigned int)(v45 - 8) <= 1 )
        v49 = v15[9];
      else
        v49 = v15[17];
    }
LABEL_19:
    if ( tinfo_property )
    {
      *(_QWORD *)&v58 = 0;
      qfree(tinfo_property);
    }
    sub_118BA0(&v52);
    v22 = a1[2];
    sub_E1C90(v22);
    v23 = sub_60920(*(_QWORD *)(v22 + 776) + 64LL);
    v24 = *(_BYTE *)(a2 + 88);
    v25 = v24 & 0xF0;
    if ( (v24 & 0xF0) == 0xC0 )
      v25 = *(_DWORD *)(a2 + 28);
    if ( v25 <= 0x10 )
      v25 = getinf(99);
    if ( v25 != 176 && v25 != 256 )
      goto LABEL_27;
    v37 = 8;
    if ( v23 >= 8 )
      v37 = v23;
    if ( v37 < v49 )
    {
      v49 = v37;
    }
    else
    {
LABEL_27:
      if ( v49 <= 4 )
      {
        tinfo_property = (_DWORD *)byte_9;
        v26 = 9;
LABEL_29:
        if ( (unsigned int)lexcompare_tinfo(v26, *(_QWORD *)(v3 + 64), 0) && !(unsigned int)verify_tinfo(tinfo_property) )
        {
          copy_tinfo_t(v3 + 64, &tinfo_property);
          clear_tinfo_t(&tinfo_property);
          return 1;
        }
        clear_tinfo_t(&tinfo_property);
        return 0;
      }
    }
    if ( v49 > 8 )
    {
      if ( v49 > v23 )
      {
        v39 = a1[2];
        tinfo_property = nullptr;
        copy_tinfo_t(&tinfo_property, v39 + 312);
        v26 = (__int64)tinfo_property;
      }
      else
      {
        tinfo_property = (_DWORD *)(&qword_28 + 1);
        v26 = 41;
      }
    }
    else
    {
      tinfo_property = (_DWORD *)(&qword_18 + 1);
      v26 = 25;
    }
    goto LABEL_29;
  }
  v5 = a1[2];
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 80LL);
  if ( *(unsigned __int8 *)(v5 + 130) >= v6 || *(_DWORD *)v3 != 1 )
    return 0;
  v27 = *(_QWORD *)(v3 + 64);
  if ( (_BYTE)v27 && ((v27 & 0xE) != 0 || (v27 & 0x30) == 0) )
  {
    tinfo_property = (_DWORD *)get_tinfo_property(v27, 9);
    v41 = get_tinfo_property(tinfo_property, 2);
    clear_tinfo_t(&tinfo_property);
    if ( (v41 & 0x3F) != 0x30 )
      return 0;
    v27 = *(_QWORD *)(v3 + 64);
  }
  if ( v6 != get_tinfo_size(0, v27, 0) )
    return 0;
  v28 = sub_D7270(*a1, *((_DWORD *)a1 + 82));
  sub_1C1BF0(&v55, v3, (unsigned int)v6, v28);
  v29 = v56;
  tinfo_property = nullptr;
  *(_QWORD *)&v58 = 0;
  sub_5FC80((__int64 *)&tinfo_property, v56, v6);
  sub_60500((__int64 *)&tinfo_property, a1 + 9);
  if ( (unsigned __int8)sub_60680(&tinfo_property) )
    goto LABEL_42;
  v30 = *(_BYTE *)(a1[2] + 145LL)
      ? v6 + v29 - (unsigned int)sub_60760(&tinfo_property, 0)
      : (unsigned int)sub_60A00(&tinfo_property) - v29 + 1;
  v31 = round_up_power2(v30);
  v32 = a1[2];
  v33 = *(unsigned __int8 *)(v32 + 130);
  if ( (int)v33 < v31 )
    v33 = (unsigned int)v31;
  if ( (int)v33 >= v6 )
  {
LABEL_42:
    qfree(tinfo_property);
    cleanup_argloc(&v55);
    return 0;
  }
  sub_327340(&v52, *(_QWORD *)(v32 + 112), v33);
  copy_tinfo_t(v3 + 64, &v52);
  clear_tinfo_t(&v52);
  qfree(tinfo_property);
  cleanup_argloc(&v55);
  return 1;
}
