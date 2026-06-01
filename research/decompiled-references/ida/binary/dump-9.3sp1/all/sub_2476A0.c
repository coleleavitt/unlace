__int64 __fastcall sub_2476A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, int a6, char a7)
{
  __int64 v8; // r12
  int v9; // ebp
  int v11; // edx
  int v12; // r15d
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // r10
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int tinfo_size; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  char v27; // al
  bool v29; // r11
  char v30; // al
  int v31; // r9d
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // [rsp-10h] [rbp-A8h]
  __int64 v38; // [rsp-8h] [rbp-A0h]
  int v39; // [rsp+8h] [rbp-90h]
  __int64 v40; // [rsp+8h] [rbp-90h]
  __int64 v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+8h] [rbp-90h]
  char v43; // [rsp+10h] [rbp-88h]
  __int64 v44; // [rsp+10h] [rbp-88h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  __int64 tinfo_property; // [rsp+20h] [rbp-78h]
  bool v47; // [rsp+2Bh] [rbp-6Dh]
  bool v49; // [rsp+3Fh] [rbp-59h]
  __int64 v50; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v51[8]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+58h] [rbp-40h]

  v8 = a4;
  v9 = a6;
  v52 = __readfsqword(0x28u);
  v43 = *(_BYTE *)(a1 + 145);
  if ( a4 >= 0 )
  {
    v11 = 1;
    if ( a6 != -1 )
      v11 = a6;
    v12 = v11;
    if ( *(_DWORD *)(a3 + 8) == 65 )
    {
      v8 = sub_1F0E60(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 432LL) + 104LL * *(int *)(a3 + 32), a1, a4, v11);
    }
    else if ( v43 )
    {
      if ( !(unsigned __int8)sub_2566C0(a3, a1) )
      {
        tinfo_size = get_tinfo_size();
        if ( tinfo_size > 0 )
        {
          v24 = v8 + v12;
          if ( v24 <= tinfo_size )
            v8 = tinfo_size - v24;
        }
      }
    }
  }
  v13 = 2;
  if ( (get_tinfo_property() & 0xF) != 0xE )
    v13 = v8 != 0;
  v14 = 6;
  tinfo_property = get_tinfo_property();
  v17 = v9 != -1;
  if ( !tinfo_property && v9 == -1 )
  {
    *(_DWORD *)(a3 + 40) = -1;
    v39 = 0;
    goto LABEL_11;
  }
  v47 = v8 == 0;
  if ( v9 != -1 || (v39 = 0, !v8) )
  {
    v25 = get_tinfo_size();
    v17 = v9 != -1;
    v39 = v25;
    if ( v9 != -1 )
    {
      if ( (unsigned __int8)*a5 )
      {
        v26 = get_tinfo_size();
        v17 = v9 != -1;
        if ( v9 != v26 )
        {
          if ( !under_debugger )
            sub_383060(50977);
          BUG();
        }
      }
    }
  }
  v14 = v8;
  v49 = v17;
  v20 = sub_2423C0(a3, v8, a5, v9, v39, (a7 & 5) != 0);
  v17 = v49;
  if ( v20 )
  {
    if ( !v43 )
      goto LABEL_23;
    v16 = (unsigned int)v39;
    v29 = v47 && v39 > v9;
    if ( v20 == 1 && v49 )
    {
      v15 = v39;
      if ( v8 + v9 == v39 && (a7 & 5) == 0 )
      {
        v14 = 0;
        v36 = sub_2423C0(a3, 0, a5, v9, v39, 0);
        v17 = v49;
        v13 = v36;
        if ( v47 && v39 > v9 )
          goto LABEL_23;
LABEL_64:
        *(_DWORD *)(a3 + 40) = v9;
        goto LABEL_11;
      }
      if ( v29 )
        goto LABEL_23;
      if ( (a7 & 4) != 0 )
      {
        if ( (a7 & 2) != 0 )
        {
LABEL_26:
          if ( !v8 )
            goto LABEL_27;
          v13 = 2;
          goto LABEL_68;
        }
LABEL_54:
        a3 = sub_247510(*(_QWORD *)(a1 + 112), a3, v15, v16);
        goto LABEL_26;
      }
      *(_DWORD *)(a3 + 40) = v9;
      if ( (a7 & 2) != 0 )
        goto LABEL_26;
    }
    else
    {
      if ( v29 )
        goto LABEL_23;
      if ( (a7 & 4) != 0 )
      {
        if ( (a7 & 2) != 0 )
          goto LABEL_26;
        goto LABEL_54;
      }
      *(_DWORD *)(a3 + 40) = v9;
      if ( (a7 & 2) != 0 )
        goto LABEL_26;
    }
    v13 = 2;
LABEL_72:
    v19 = sub_247510(*(_QWORD *)(a1 + 112), a3, v15, v16);
    goto LABEL_56;
  }
  if ( v43 && v39 > v9 && !v8 )
  {
LABEL_23:
    v16 = a7 & 4;
    if ( (a7 & 4) == 0 )
      *(_DWORD *)(a3 + 40) = v9;
    if ( (a7 & 2) != 0 )
      goto LABEL_26;
    goto LABEL_54;
  }
  if ( (a7 & 4) == 0 )
    goto LABEL_64;
LABEL_11:
  if ( !v13 )
  {
    if ( !(unsigned __int8)*a5 )
      return a3;
    if ( (a7 & 2) != 0 )
    {
      v19 = a3;
      goto LABEL_60;
    }
    if ( v39 > v9 && v17 )
    {
      v18 = j__qalloc_or_throw(64, v14, v15, v16);
      *(_QWORD *)v18 = -1;
      *(_DWORD *)(v18 + 8) = 48;
      *(_QWORD *)(v18 + 12) = -1;
      *(_QWORD *)(v18 + 24) = a3;
      *(_QWORD *)(v18 + 32) = 0;
      *(_QWORD *)(v18 + 40) = 0;
      *(_QWORD *)(v18 + 48) = 0;
      *(_DWORD *)(v18 + 56) = 0;
      v40 = v18;
      *(_QWORD *)v18 = *(_QWORD *)a3;
      copy_tinfo_t();
      return v40;
    }
    v27 = sub_246B40(a3, a1, a5);
    if ( (a7 & 5) == 0 || !v27 || *(_DWORD *)(a3 + 8) != 48 )
      return a3;
    sub_255850(a3, *(_QWORD *)(a3 + 24));
    goto LABEL_54;
  }
  v19 = a3;
  if ( (a7 & 2) == 0 )
    goto LABEL_72;
LABEL_56:
  a3 = v19;
  if ( v8 )
  {
LABEL_68:
    v32 = v8;
    v33 = sub_240F50(a1, v8, 0, a2, 0, 0, 0);
    v34 = j__qalloc_or_throw(64, v32, v37, v38);
    *(_QWORD *)v34 = -1;
    *(_DWORD *)(v34 + 8) = 35;
    *(_QWORD *)(v34 + 12) = -1;
    *(_QWORD *)(v34 + 24) = a3;
    *(_QWORD *)(v34 + 32) = v33;
    *(_QWORD *)(v34 + 40) = 0;
    *(_QWORD *)(v34 + 48) = 0;
    *(_DWORD *)(v34 + 56) = 0;
    v45 = v34;
    *(_QWORD *)v34 = *(_QWORD *)a3;
    sub_2441C0(v34, *(_QWORD *)(a1 + 112), 0);
    v19 = v45;
  }
  if ( v13 != 2 )
    goto LABEL_58;
  a3 = v19;
LABEL_27:
  if ( *(_BYTE *)a5 )
  {
    v50 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_32C270(&v50, *(_QWORD *)(a1 + 112), (unsigned int)v9);
  }
  if ( !tinfo_property )
  {
    sub_32C540(v51, *(_QWORD *)(a1 + 112), &v50);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v44 = sub_244E70(a3, (__int64)&v50, v21, v22);
  clear_tinfo_t();
  v19 = v44;
LABEL_58:
  if ( tinfo_property && v39 <= 0 )
    return v19;
LABEL_60:
  if ( v9 == -1 )
  {
    v42 = v19;
    v35 = get_tinfo_size();
    v19 = v42;
    v9 = v35;
  }
  v41 = v19;
  v30 = get_tinfo_property();
  return sub_244320(*(_QWORD *)(a1 + 112), v41, (unsigned int)v9, (v30 & 0xF) == 9, v41, v31);
}
