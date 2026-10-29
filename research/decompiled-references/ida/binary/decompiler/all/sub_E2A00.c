__int64 __fastcall sub_E2A00(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // r15d
  _DWORD **v14; // rdi
  int *v15; // rax
  int *v16; // r15
  char v17; // al
  int v18; // eax
  int v19; // edx
  __int64 v20; // r13
  int v21; // r13d
  char v22; // dl
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // rsi
  _DWORD *v31; // rcx
  _DWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  _DWORD *v36; // rax
  char v37; // r13
  __int64 v38; // rdi
  __int64 v39; // r13
  int v40; // eax
  int v41; // [rsp+0h] [rbp-B8h]
  unsigned int v42; // [rsp+0h] [rbp-B8h]
  int v43; // [rsp+0h] [rbp-B8h]
  __int64 v44; // [rsp+10h] [rbp-A8h]
  int v45; // [rsp+28h] [rbp-90h]
  unsigned int v46; // [rsp+2Ch] [rbp-8Ch]
  __int64 v47; // [rsp+38h] [rbp-80h] BYREF
  int v48; // [rsp+40h] [rbp-78h] BYREF
  int v49; // [rsp+44h] [rbp-74h]
  unsigned int v50; // [rsp+48h] [rbp-70h]
  __int64 v51; // [rsp+50h] [rbp-68h] BYREF
  __int64 v52; // [rsp+58h] [rbp-60h]
  _DWORD *tinfo_property; // [rsp+60h] [rbp-58h] BYREF
  __int128 v54; // [rsp+68h] [rbp-50h]
  unsigned __int64 v55; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)a2 + 80LL * a3;
  v55 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)v3 - 3) <= 1 )
  {
    if ( (get_tinfo_property() & 0xF) != 9 )
      return 0;
    v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 480) + 112LL);
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, *(unsigned __int16 *)(v3 + 8));
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, v46);
    v11 = *a1;
    v50 = v46;
    v45 = v10;
    v48 = 1;
    v49 = v10;
    v12 = *(_QWORD *)(v11 + 56);
    tinfo_property = 0;
    v47 = v12;
    v54 = 0;
    v13 = *(_DWORD *)(v11 + 72);
    tinfo_property = (_DWORD *)qvector_reserve();
    *tinfo_property = v13;
    *(_QWORD *)&v54 = v54 + 1;
    v44 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 1504LL);
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (_DWORD **)v11;
        v15 = (int *)sub_126F20(v11, &v48, &v47, 0);
        v16 = v15;
        if ( v15 )
          break;
        if ( *(_DWORD *)(v11 + 352) != 1 )
          goto LABEL_16;
        v29 = **(unsigned int **)(v11 + 344);
        if ( !(_DWORD)v29 )
        {
          v38 = *(_QWORD *)(v11 + 64) + 432LL;
          v51 = 3;
          v52 = v46;
          v43 = sub_1EDAE0(v38, &v51, 1, 0);
          cleanup_argloc();
          if ( v43 != -1 )
          {
            v39 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 432LL) + 104LL * v43;
            if ( (get_tinfo_property() & 0xF) == 9 )
            {
              v40 = *(_DWORD *)(v39 + 88);
              if ( v45 <= v40 )
                v40 = v45;
              v45 = v40;
            }
          }
          goto LABEL_16;
        }
        v30 = tinfo_property;
        v31 = &tinfo_property[v54];
        if ( tinfo_property != v31 )
        {
          v32 = tinfo_property;
          while ( (_DWORD)v29 != *v32 )
          {
            if ( v31 == ++v32 )
              goto LABEL_56;
          }
          if ( v32 != v31 )
          {
            **(_DWORD **)(v11 + 64) |= 0x400u;
            goto LABEL_16;
          }
        }
LABEL_56:
        v34 = v54 + 1;
        if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
        {
          v14 = &tinfo_property;
          v42 = **(_DWORD **)(v11 + 344);
          v36 = (_DWORD *)qvector_reserve();
          v34 = v54;
          v29 = v42;
          tinfo_property = v36;
          v31 = &v36[v54];
        }
        *v31 = v29;
        *(_QWORD *)&v54 = v54 + 1;
        v35 = *(_QWORD *)(v11 + 64);
        if ( (unsigned int)v29 >= *(_DWORD *)(v35 + 64) )
          sub_CE6C0(v14, v30, v34, v31, v29);
        v11 = *(_QWORD *)(*(_QWORD *)(v35 + 528) + 8 * v29);
        v47 = 0;
      }
      v41 = *v15;
      if ( !(unsigned __int8)sub_11C460((unsigned int)*v15) )
        goto LABEL_16;
      v17 = sub_1279E0(v16 + 16, v44, &v48);
      if ( v41 != 67 || !v17 )
        break;
      if ( *((_BYTE *)v16 + 32) != 13 || (unsigned int)get_fpvalue_kind() != 2 )
      {
        v41 = 67;
        break;
      }
    }
    v18 = v16[17];
    v19 = v49;
    if ( *((_BYTE *)v16 + 64) == 14 && v18 / 2 <= v49 )
    {
      if ( (unsigned __int8)sub_1230D0(*((_QWORD *)v16 + 9), v44, &v48, 1)
        || (unsigned __int8)sub_1230D0(*((_QWORD *)v16 + 9) + 16LL, v44, &v48, 1) )
      {
        v45 = v16[17] / 2;
        goto LABEL_16;
      }
      v18 = v16[17];
      v19 = v49;
    }
    if ( v18 <= v19 && (unsigned __int8)sub_1230D0(v16 + 16, v44, &v48, 1) )
    {
      if ( (unsigned int)(v41 - 8) <= 1 )
        v45 = v16[9];
      else
        v45 = v16[17];
    }
LABEL_16:
    if ( tinfo_property )
    {
      *(_QWORD *)&v54 = 0;
      qfree();
    }
    sub_11A960(&v48);
    v20 = a1[2];
    sub_D6510(v20);
    v21 = sub_64220(*(_QWORD *)(v20 + 768) + 64LL);
    v22 = *(_BYTE *)(a2 + 88);
    v23 = v22 & 0xF0;
    if ( (v22 & 0xF0) == 0xC0 )
      v23 = *(_DWORD *)(a2 + 28);
    if ( v23 <= 0x10 )
      v23 = getinf();
    if ( v23 != 176 && v23 != 256 )
      goto LABEL_24;
    v33 = 8;
    if ( v21 >= 8 )
      v33 = v21;
    if ( v33 < v45 )
    {
      v45 = v33;
    }
    else
    {
LABEL_24:
      if ( v45 <= 4 )
      {
        tinfo_property = (_DWORD *)byte_9;
LABEL_26:
        if ( (unsigned int)lexcompare_tinfo() && !(unsigned int)verify_tinfo() )
        {
          copy_tinfo_t();
          clear_tinfo_t();
          return 1;
        }
        clear_tinfo_t();
        return 0;
      }
    }
    if ( v45 > 8 )
    {
      if ( v45 > v21 )
      {
        tinfo_property = 0;
        copy_tinfo_t();
      }
      else
      {
        tinfo_property = (_DWORD *)(&qword_28 + 1);
      }
    }
    else
    {
      tinfo_property = (_DWORD *)(&qword_18 + 1);
    }
    goto LABEL_26;
  }
  v5 = a1[2];
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 80LL);
  if ( *(unsigned __int8 *)(v5 + 130) >= v6 || *(_DWORD *)v3 != 1 )
    return 0;
  v24 = *(_QWORD *)(v3 + 64);
  if ( (_BYTE)v24 && ((v24 & 0xE) != 0 || (v24 & 0x30) == 0) )
  {
    tinfo_property = (_DWORD *)get_tinfo_property();
    v37 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v37 & 0x3F) != 0x30 )
      return 0;
  }
  if ( v6 != get_tinfo_size() )
    return 0;
  if ( (*(_BYTE *)(*a1 + 24) & 8) != 0 )
    v25 = *(_QWORD *)(*(_QWORD *)(*a1 + 64) + 136LL) + *(int *)(*(_QWORD *)(*a1 + 64) + 116LL);
  else
    v25 = a1[41];
  sub_1C3530(&v51, v3, (unsigned int)v6, (int)v25);
  tinfo_property = 0;
  *(_QWORD *)&v54 = 0;
  sub_63580((__int64 *)&tinfo_property, v52, v6);
  sub_63E00((__int64 *)&tinfo_property, a1 + 9);
  if ( (unsigned __int8)sub_63F80(&tinfo_property) )
    goto LABEL_41;
  if ( *(_BYTE *)(a1[2] + 145) )
    sub_64060(&tinfo_property, 0);
  else
    sub_64300(&tinfo_property);
  v26 = round_up_power2();
  v27 = a1[2];
  v28 = (unsigned int)v26;
  if ( *(unsigned __int8 *)(v27 + 130) >= v26 )
    v28 = *(unsigned __int8 *)(v27 + 130);
  if ( (int)v28 >= v6 )
  {
LABEL_41:
    qfree();
    cleanup_argloc();
    return 0;
  }
  sub_328E20(&v48, *(_QWORD *)(v27 + 112), v28);
  copy_tinfo_t();
  clear_tinfo_t();
  qfree();
  cleanup_argloc();
  return 1;
}
