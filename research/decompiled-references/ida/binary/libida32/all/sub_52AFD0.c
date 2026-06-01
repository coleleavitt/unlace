__int64 __fastcall sub_52AFD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char **a5, __int64 a6, __int64 a7)
{
  const char *v8; // rdx
  const char **v9; // rbp
  char *v14; // rax
  char v15; // r8
  __int64 v16; // r10
  char v17; // si
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // r10
  const char *v22; // rax
  _BYTE **v23; // r10
  _BYTE *v24; // rax
  const char *v25; // rax
  char v26; // al
  const char *v27; // rax
  char tinfo_property; // al
  signed int v29; // eax
  signed int v30; // r15d
  __int64 v31; // r13
  __int64 v32; // rbp
  char v33; // al
  const char *v34; // rax
  char v35; // [rsp+0h] [rbp-98h]
  char v36; // [rsp+0h] [rbp-98h]
  __int64 v37; // [rsp+0h] [rbp-98h]
  _QWORD *v38; // [rsp+0h] [rbp-98h]
  __int64 v39; // [rsp+0h] [rbp-98h]
  unsigned int v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+10h] [rbp-88h]
  _BYTE **v43; // [rsp+18h] [rbp-80h]
  __int64 v44; // [rsp+18h] [rbp-80h]
  __int64 v45; // [rsp+20h] [rbp-78h]
  __int64 v46; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v47; // [rsp+28h] [rbp-70h]
  const char **v48; // [rsp+30h] [rbp-68h]
  _BYTE **v49; // [rsp+38h] [rbp-60h]
  int v50[2]; // [rsp+40h] [rbp-58h] BYREF
  const char *v51; // [rsp+48h] [rbp-50h] BYREF
  int v52[2]; // [rsp+50h] [rbp-48h] BYREF
  void *ptr; // [rsp+58h] [rbp-40h]

  v8 = *a5;
  ptr = (void *)__readfsqword(0x28u);
  *(_QWORD *)v50 = v8;
  if ( !v8 )
    return 0;
  v9 = a5;
  if ( (*v8 & 0xF) != 0xC )
    return 0;
  v35 = *v8;
  v14 = (char *)sub_688400(a3 + 64, a3 + 24);
  *(_QWORD *)v50 = v14;
  if ( !v14 || !*v14 )
    return 0;
  v15 = v35;
  v16 = a6;
  *(_QWORD *)v50 = v14 + 1;
  v17 = *v14;
  *(_BYTE *)(a3 + 88) = *v14;
  LOBYTE(v18) = v17 & 0xF0;
  if ( (_BYTE)v18 != 0xC0 )
  {
    *(_DWORD *)(a3 + 28) = 0;
    v19 = *(_QWORD *)(qword_2CA1698 + 1480);
LABEL_8:
    v18 = (unsigned __int8)v18;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)sub_693030(v50, a3 + 28) )
    return 0;
  v15 = v35;
  v16 = a6;
  LOBYTE(v18) = *(_BYTE *)(a3 + 88) & 0xF0;
  v19 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( (_BYTE)v18 != 0xC0 )
    goto LABEL_8;
  v18 = *(unsigned int *)(a3 + 28);
LABEL_9:
  v42 = v16;
  v36 = v15;
  v20 = sub_5EE1D0(v19, v18);
  v21 = v42;
  v41 = v20;
  v22 = *(const char **)v50;
  *(_DWORD *)(a3 + 24) |= 4 * (v36 & 0x30);
  if ( *v22 == -2 )
  {
    if ( !(unsigned __int8)sub_51F860((const char **)v50, v52, (__int64 **)(a1 + 40)) )
      return 0;
    v21 = v42;
    *(_BYTE *)(a1 + 71) = v52[0] & 0xF;
    v22 = *(const char **)v50;
  }
  v51 = v22;
  v37 = v21;
  if ( (*v22 & 0xFu) <= 9 )
  {
    if ( *v22 )
    {
      *(_QWORD *)v50 = v22 + 1;
      *(_QWORD *)v52 = *(unsigned __int8 *)v22;
      v47 = (unsigned __int64 *)(a3 + 32);
      copy_tinfo_t(a3 + 32);
      clear_tinfo_t(v52);
      v23 = (_BYTE **)v37;
      goto LABEL_13;
    }
    return 0;
  }
  v47 = (unsigned __int64 *)(a3 + 32);
  v26 = sub_5225A0(*(__int64 **)(a2 + 1480), (unsigned __int64 *)(a3 + 32), a4, (const char **)v50, 0, 0, nullptr);
  v23 = (_BYTE **)v37;
  if ( !v26 )
    return 0;
LABEL_13:
  if ( v41 - 208 <= 0x2F )
  {
    v38 = v23;
    tinfo_property = get_tinfo_property(*(_QWORD *)(a3 + 32), 2);
    v23 = (_BYTE **)v38;
    if ( (tinfo_property & 0x3F) == 1 )
    {
      if ( v38 )
      {
        *(_QWORD *)v52 = *v38;
        goto LABEL_38;
      }
    }
    else
    {
      if ( !(unsigned __int8)extract_argloc(a3 + 40, v50, 0) || !*(_DWORD *)(a3 + 40) )
        return 0;
      v23 = (_BYTE **)v38;
      if ( v38 )
      {
        *(_QWORD *)v52 = *v38;
        goto LABEL_38;
      }
    }
    *(_QWORD *)v52 = 0;
  }
  else if ( v23 )
  {
    v24 = *v23;
    *(_QWORD *)v52 = *v23;
    if ( v41 == 32 )
    {
      if ( !v24 )
      {
        v34 = *(const char **)v50;
        *(_QWORD *)(a3 + 32) &= 0xFFFFFFFFFFFFFF3FLL;
        *v9 = v34;
        *v23 = nullptr;
        goto LABEL_33;
      }
      goto LABEL_17;
    }
  }
  else
  {
    *(_QWORD *)v52 = 0;
    if ( v41 == 32 )
    {
      v27 = *(const char **)v50;
      *(_QWORD *)(a3 + 32) &= 0xFFFFFFFFFFFFFF3FLL;
      *v9 = v27;
      goto LABEL_33;
    }
  }
LABEL_38:
  v43 = v23;
  v29 = sub_692FE0(v50);
  v30 = v29;
  if ( (unsigned int)v29 > 0xFF )
    return 0;
  v45 = v29;
  sub_52AB20((__int64 *)a3, v29);
  v23 = v43;
  if ( v30 )
  {
    v44 = a4;
    v48 = v9;
    v31 = 0;
    v46 = 80 * v45;
    v49 = v23;
    while ( 1 )
    {
      v32 = v31 + *(_QWORD *)a3;
      if ( *(_QWORD *)v52 )
        sub_54DE00(v32 + 16, v52);
      if ( **(_BYTE **)v50 == 0xFF )
      {
        ++*(_QWORD *)v50;
        if ( !(unsigned __int8)sub_693030(v50, v32 + 72) )
          return 0;
      }
      if ( a7 && !(unsigned __int8)sub_54DE00(v32 + 40, a7)
        || !(unsigned __int8)sub_5225A0(
                               *(__int64 **)(a2 + 1480),
                               (unsigned __int64 *)(v32 + 64),
                               v44,
                               (const char **)v50,
                               (__int64)v52,
                               a7,
                               nullptr)
        || v41 - 208 <= 0x2F && (!(unsigned __int8)extract_argloc(v32, v50, 0) || !*(_DWORD *)v32) )
      {
        return 0;
      }
      v31 += 80;
      if ( v31 == v46 )
      {
        a4 = v44;
        v9 = v48;
        v23 = v49;
        break;
      }
    }
  }
  v24 = *(_BYTE **)v52;
  if ( *(_QWORD *)v52 )
  {
LABEL_17:
    if ( *v24 )
    {
      if ( (*v51 & 0xFu) > 9 )
      {
        v39 = (__int64)v23;
        v33 = sub_5225A0(*(__int64 **)(a2 + 1480), v47, a4, &v51, (__int64)v52, a7, nullptr);
        v23 = (_BYTE **)v39;
        if ( !v33 )
          return 0;
      }
    }
  }
  v25 = *(const char **)v50;
  *(_QWORD *)(a3 + 32) &= 0xFFFFFFFFFFFFFF3FLL;
  *v9 = v25;
  if ( v23 )
    *v23 = *(_BYTE **)v52;
  if ( v41 > 0x1FF )
    return sub_3D7CC0(a3, 0);
  if ( v41 > 0xFF )
    return 1;
LABEL_33:
  if ( (v41 & 0xFFFFFF0F) == 0 )
    return 1;
  return sub_3D7CC0(a3, 0);
}

