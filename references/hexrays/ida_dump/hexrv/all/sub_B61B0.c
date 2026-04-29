__int64 __fastcall sub_B61B0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 *a9)
{
  char *v9; // r12
  __int64 v10; // r9
  char v11; // al
  int v12; // r14d
  __int64 result; // rax
  __int64 v15; // r8
  bool v16; // r12
  _DWORD *v17; // rax
  _DWORD *v18; // r12
  int v19; // eax
  __int64 v20; // rax
  _DWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  __int64 v25; // rdi
  int tinfo_size; // eax
  char tinfo_property; // al
  __int64 v28; // rdi
  unsigned __int64 v29; // r12
  __int64 v30; // rcx
  _DWORD *v31; // rdx
  _DWORD *v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+8h] [rbp-98h]
  unsigned __int64 v41; // [rsp+20h] [rbp-80h]
  int v43; // [rsp+30h] [rbp-70h]
  unsigned __int8 v45; // [rsp+38h] [rbp-68h]
  __int64 v46; // [rsp+38h] [rbp-68h]
  __int64 v47; // [rsp+40h] [rbp-60h] BYREF
  __int64 v48; // [rsp+48h] [rbp-58h] BYREF
  __int64 v49; // [rsp+50h] [rbp-50h] BYREF
  _DWORD *v50; // [rsp+58h] [rbp-48h]
  unsigned __int64 v51; // [rsp+68h] [rbp-38h]

  v9 = a5;
  v10 = *(_QWORD *)(a1 + 1496);
  v11 = *a5;
  v51 = __readfsqword(0x28u);
  if ( v11 == 6 )
  {
    if ( !(unsigned __int8)sub_37BE20(v10, *((_QWORD *)a5 + 1), a2, 3) )
      return 0;
    goto LABEL_37;
  }
  v12 = a1;
  if ( !a7 )
  {
    if ( v11 == 4 )
    {
      v23 = *((_QWORD *)a5 + 1);
      if ( *(_DWORD *)v23 == 2 )
        goto LABEL_41;
      if ( (unsigned int)(*(_DWORD *)v23 - 56) > 1 || *(_BYTE *)(v23 + 64) != 8 )
        return 0;
      copy_tinfo_t(a2, *(_QWORD *)(v23 + 72) + 72LL);
    }
    else
    {
      v46 = v10;
      v43 = sub_1F7160(a2, &v48, a6, a5);
      if ( v43 == -1 )
        return 0;
      v25 = *(_QWORD *)(a1 + 432) + 104LL * v43;
      if ( !(unsigned __int8)sub_1C0A40(v25, v46, &v48, *((int *)v9 + 1), *(int *)(v25 + 88)) )
        return 0;
      while ( 1 )
      {
        tinfo_property = get_tinfo_property(*a2, 2);
        v28 = *a2;
        if ( (tinfo_property & 0xF) != 0xB )
          break;
        v49 = 0;
        v49 = get_tinfo_property(v28, 11);
        copy_tinfo_t(a2, &v49);
        clear_tinfo_t(&v49);
        tinfo_size = get_tinfo_size(0, *a2, 0);
        if ( tinfo_size <= 0 )
          return 0;
        v48 %= tinfo_size;
      }
      v29 = v48 + *((int *)v9 + 1);
      if ( get_tinfo_size(0, *a2, 0) < v29 )
        return 0;
      if ( v48 )
      {
        if ( (get_tinfo_property(*a2, 2) & 0x2F) != 0xD )
          return 0;
        if ( !(unsigned __int8)sub_32F670(a2, v48, a8 | 2u) )
          return 0;
      }
      if ( a9 )
      {
        v30 = a9[1];
        v31 = (_DWORD *)(*a9 + 4 * v30);
        if ( (_DWORD *)*a9 == v31 )
          goto LABEL_57;
        v32 = (_DWORD *)*a9;
        while ( v43 != *v32 )
        {
          if ( v31 == ++v32 )
            goto LABEL_57;
        }
        if ( v31 == v32 )
        {
LABEL_57:
          if ( a9[2] < (unsigned __int64)(v30 + 1) )
          {
            v38 = qvector_reserve(a9, *a9, v30 + 1, 4);
            v39 = a9[1];
            *a9 = v38;
            v31 = (_DWORD *)(v38 + 4 * v39);
          }
          *v31 = v43;
          ++a9[1];
        }
      }
    }
LABEL_37:
    if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xB )
    {
      v33 = *a2;
      v49 = 0;
      v49 = get_tinfo_property(v33, 11);
      copy_tinfo_t(a2, &v49);
      clear_tinfo_t(&v49);
    }
    return 1;
  }
  if ( v11 == 4 )
  {
    v23 = *((_QWORD *)a5 + 1);
LABEL_41:
    v49 = 0;
    v50 = nullptr;
    if ( *(_DWORD *)v23 == 2 )
      v9 = (char *)(v23 + 48);
    goto LABEL_5;
  }
  v49 = 0;
  v50 = nullptr;
LABEL_5:
  result = sub_11E900(&v49, v9);
  if ( !(_BYTE)result )
    return result;
  v47 = 0;
  v15 = (__int64)v50;
  v16 = 0;
  v40 = v49;
  while ( 1 )
  {
    v41 = 0;
    if ( *(_BYTE *)v15 == 4 )
    {
      v20 = *(_QWORD *)(v15 + 8);
      if ( *(_DWORD *)v20 == 12 && *(_BYTE *)(v20 + 48) == 4 )
      {
        v21 = *(_DWORD **)(v20 + 56);
        if ( *v21 == 14 )
        {
          v22 = sub_1183E0(v21, 0);
          if ( v22 )
          {
            v41 = sub_325910(*(_QWORD *)(*(_QWORD *)(v22 + 8) + 16LL), *(unsigned int *)(v22 + 4), 0);
            v15 = *((_QWORD *)v50 + 1) + 32LL;
            v50 = (_DWORD *)v15;
          }
          else
          {
            v41 = 0;
            LODWORD(v15) = (_DWORD)v50;
          }
        }
      }
    }
    if ( !(unsigned __int8)sub_B61B0(v12, (unsigned int)&v47, a3, a4, v15, a6, v16, 0, (__int64)a9) )
      goto LABEL_33;
    v48 = 0;
    v48 = get_tinfo_property(v47, 13);
    copy_tinfo_t(a2, &v48);
    clear_tinfo_t(&v48);
    if ( (unsigned __int8)*a2 )
      break;
    if ( *(_BYTE *)v50 == 4 )
      goto LABEL_33;
    if ( a9 )
      goto LABEL_33;
    v48 = a4;
    v17 = (_DWORD *)sub_124F80(a3, v50, &v48, 0);
    v18 = v17;
    if ( !v17 )
      goto LABEL_33;
    v19 = *v17;
    switch ( v19 )
    {
      case 4:
        goto LABEL_32;
      case 67:
        if ( v18[9] != v18[17] )
          goto LABEL_33;
LABEL_32:
        v15 = (__int64)(v18 + 8);
        v50 = v18 + 8;
        break;
      case 2:
        v15 = (__int64)(v18 + 12);
        v50 = v18 + 12;
        break;
      default:
        if ( (unsigned int)(v19 - 12) > 1 || !(unsigned __int8)sub_11E950(&v49, v18) )
          goto LABEL_33;
        v40 += v49;
        v15 = (__int64)v50;
        break;
    }
    v16 = *v18 == 2;
    a4 = v48;
  }
  v34 = get_tinfo_size(0, *a2, 0);
  if ( v34 - 1 > 0xFFFFFFFFFFFFFFFDLL || v41 && v41 % v34 )
    goto LABEL_33;
  v35 = get_tinfo_size(0, *a2, 0);
  if ( v35 <= 0 )
    goto LABEL_33;
  v36 = v40 % v35;
  if ( v36 < 0 )
    v36 += v35;
  v37 = v36;
  if ( a7 || (a8 = 0, (get_tinfo_property(*a2, 2) & 0x2F) == 0xD) )
  {
    if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
    {
      v24 = sub_32F670(a2, v37, a8 | 2u);
      goto LABEL_34;
    }
LABEL_33:
    v24 = 0;
    goto LABEL_34;
  }
  v24 = v37 == 0;
LABEL_34:
  v45 = v24;
  clear_tinfo_t(&v47);
  return v45;
}
