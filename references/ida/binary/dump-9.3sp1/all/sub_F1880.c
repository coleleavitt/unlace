__int64 __fastcall sub_F1880(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // r15d
  int *v13; // rax
  int *v14; // r15
  char v15; // al
  int v16; // eax
  int v17; // edx
  __int64 v18; // r13
  int v19; // r13d
  char v20; // dl
  unsigned int v21; // eax
  __int64 v22; // rdi
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // r13
  __int64 v34; // rdi
  __int64 v35; // r13
  int v36; // eax
  int v37; // [rsp+0h] [rbp-B8h]
  unsigned int v38; // [rsp+0h] [rbp-B8h]
  int v39; // [rsp+0h] [rbp-B8h]
  __int64 v40; // [rsp+10h] [rbp-A8h]
  int v41; // [rsp+28h] [rbp-90h]
  unsigned int v42; // [rsp+2Ch] [rbp-8Ch]
  __int64 v43; // [rsp+38h] [rbp-80h] BYREF
  int v44; // [rsp+40h] [rbp-78h] BYREF
  int v45; // [rsp+44h] [rbp-74h]
  unsigned int v46; // [rsp+48h] [rbp-70h]
  __int64 v47; // [rsp+50h] [rbp-68h] BYREF
  __int64 v48; // [rsp+58h] [rbp-60h]
  _DWORD *tinfo_property; // [rsp+60h] [rbp-58h] BYREF
  __int128 v50; // [rsp+68h] [rbp-50h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)a2 + 80LL * a3;
  v51 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)v3 - 3) <= 1 )
  {
    if ( (get_tinfo_property() & 0xF) != 9 )
      return 0;
    v8 = *(_QWORD *)(*(_QWORD *)(*a1 + 480LL) + 112LL);
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 168LL))(v8, *(unsigned __int16 *)(v3 + 8));
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v42);
    v10 = *a1;
    v46 = v42;
    v41 = v9;
    v44 = 1;
    v45 = v9;
    v11 = *(_QWORD *)(v10 + 56);
    tinfo_property = nullptr;
    v43 = v11;
    v50 = 0;
    v12 = *(_DWORD *)(v10 + 72);
    tinfo_property = (_DWORD *)qvector_reserve((__int64)&tinfo_property, 0, 1, 4);
    tinfo_property[(_QWORD)v50] = v12;
    *(_QWORD *)&v50 = v50 + 1;
    v40 = *(_QWORD *)(*(_QWORD *)(v10 + 64) + 1504LL);
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = (int *)sub_129440(v10, &v44, &v43, 0);
        v14 = v13;
        if ( v13 )
          break;
        if ( *(_DWORD *)(v10 + 352) != 1 )
          goto LABEL_16;
        v27 = **(unsigned int **)(v10 + 344);
        if ( !(_DWORD)v27 )
        {
          v34 = *(_QWORD *)(v10 + 64) + 432LL;
          v47 = 3;
          v48 = v42;
          v39 = sub_1F06C0(v34, &v47, 1, 0);
          cleanup_argloc();
          if ( v39 != -1 )
          {
            v35 = *(_QWORD *)(*(_QWORD *)(v10 + 64) + 432LL) + 104LL * v39;
            if ( (get_tinfo_property() & 0xF) == 9 )
            {
              v36 = *(_DWORD *)(v35 + 88);
              if ( v41 <= v36 )
                v36 = v41;
              v41 = v36;
            }
          }
          goto LABEL_16;
        }
        v28 = &tinfo_property[v50];
        if ( tinfo_property != v28 )
        {
          v29 = tinfo_property;
          while ( (_DWORD)v27 != *v29 )
          {
            if ( v28 == ++v29 )
              goto LABEL_54;
          }
          if ( v28 != v29 )
          {
            **(_DWORD **)(v10 + 64) |= 0x400u;
            goto LABEL_16;
          }
        }
LABEL_54:
        if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
        {
          v38 = **(_DWORD **)(v10 + 344);
          v32 = qvector_reserve((__int64)&tinfo_property, (__int64)tinfo_property, v50 + 1, 4);
          v27 = v38;
          tinfo_property = (_DWORD *)v32;
          v28 = (_DWORD *)(v32 + 4 * v50);
        }
        *v28 = v27;
        *(_QWORD *)&v50 = v50 + 1;
        v31 = *(_QWORD *)(v10 + 64);
        if ( (unsigned int)v27 >= *(_DWORD *)(v31 + 64) )
          sub_F0F00();
        v10 = *(_QWORD *)(*(_QWORD *)(v31 + 528) + 8 * v27);
        v43 = 0;
      }
      v37 = *v13;
      if ( !(unsigned __int8)sub_11E8A0((unsigned int)*v13) )
        goto LABEL_16;
      v15 = sub_129F00(v14 + 16, v40, &v44);
      if ( v37 != 67 || !v15 )
        break;
      if ( *((_BYTE *)v14 + 32) != 13 || (unsigned int)get_fpvalue_kind() != 2 )
      {
        v37 = 67;
        break;
      }
    }
    v16 = v14[17];
    v17 = v45;
    if ( *((_BYTE *)v14 + 64) == 14 && v16 / 2 <= v45 )
    {
      if ( (unsigned __int8)sub_1255D0(*((_QWORD *)v14 + 9), v40, &v44, 1)
        || (unsigned __int8)sub_1255D0(*((_QWORD *)v14 + 9) + 16LL, v40, &v44, 1) )
      {
        v41 = v14[17] / 2;
        goto LABEL_16;
      }
      v16 = v14[17];
      v17 = v45;
    }
    if ( v16 <= v17 && (unsigned __int8)sub_1255D0(v14 + 16, v40, &v44, 1) )
    {
      if ( (unsigned int)(v37 - 8) <= 1 )
        v41 = v14[9];
      else
        v41 = v14[17];
    }
LABEL_16:
    if ( tinfo_property )
    {
      *(_QWORD *)&v50 = 0;
      qfree((__int64)tinfo_property);
    }
    sub_11CDA0(&v44);
    v18 = a1[2];
    sub_E5E90(v18);
    v19 = sub_64B20(*(_QWORD *)(v18 + 776) + 64LL);
    v20 = *(_BYTE *)(a2 + 88);
    v21 = v20 & 0xF0;
    if ( (v20 & 0xF0) == 0xC0 )
      v21 = *(_DWORD *)(a2 + 28);
    if ( v21 <= 0x10 )
      v21 = getinf();
    if ( v21 != 176 && v21 != 256 )
      goto LABEL_24;
    v30 = 8;
    if ( v19 >= 8 )
      v30 = v19;
    if ( v30 < v41 )
    {
      v41 = v30;
    }
    else
    {
LABEL_24:
      if ( v41 <= 4 )
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
    if ( v41 > 8 )
    {
      if ( v41 > v19 )
      {
        tinfo_property = nullptr;
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
  v22 = *(_QWORD *)(v3 + 64);
  if ( (_BYTE)v22 && ((v22 & 0xE) != 0 || (v22 & 0x30) == 0) )
  {
    tinfo_property = (_DWORD *)get_tinfo_property();
    v33 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v33 & 0x3F) != 0x30 )
      return 0;
  }
  if ( v6 != get_tinfo_size() )
    return 0;
  v23 = sub_DB470(*a1, *((_DWORD *)a1 + 82));
  sub_1C5FB0(&v47, v3, (unsigned int)v6, v23);
  tinfo_property = nullptr;
  *(_QWORD *)&v50 = 0;
  sub_63E80((__int64 *)&tinfo_property, v48, v6);
  sub_64700((__int64 *)&tinfo_property, a1 + 9);
  if ( (unsigned __int8)sub_64880(&tinfo_property) )
    goto LABEL_39;
  if ( *(_BYTE *)(a1[2] + 145LL) )
    sub_64960(&tinfo_property, 0);
  else
    sub_64C00(&tinfo_property);
  v24 = round_up_power2();
  v25 = a1[2];
  v26 = *(unsigned __int8 *)(v25 + 130);
  if ( (int)v26 < v24 )
    v26 = (unsigned int)v24;
  if ( (int)v26 >= v6 )
  {
LABEL_39:
    qfree((__int64)tinfo_property);
    cleanup_argloc();
    return 0;
  }
  sub_32C270(&v44, *(_QWORD *)(v25 + 112), v26);
  copy_tinfo_t();
  clear_tinfo_t();
  qfree((__int64)tinfo_property);
  cleanup_argloc();
  return 1;
}
