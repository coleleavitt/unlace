__int64 __fastcall sub_2476A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, signed int a6, char a7)
{
  __int64 v9; // r12
  signed int v10; // ebp
  int v12; // edx
  int v13; // r15d
  int v14; // r15d
  bool v15; // r10
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  int tinfo_size; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  char v24; // al
  bool v26; // r11
  char v27; // al
  int v28; // r9d
  __int64 v29; // r12
  __int64 v30; // rax
  signed int v31; // eax
  int v32; // eax
  int v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+8h] [rbp-90h]
  __int64 v36; // [rsp+8h] [rbp-90h]
  char v37; // [rsp+10h] [rbp-88h]
  __int64 v38; // [rsp+10h] [rbp-88h]
  __int64 v39; // [rsp+10h] [rbp-88h]
  __int64 tinfo_property; // [rsp+20h] [rbp-78h]
  bool v41; // [rsp+2Bh] [rbp-6Dh]
  bool v42; // [rsp+3Fh] [rbp-59h]
  __int64 v43; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v44[8]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v9 = a4;
  v10 = a6;
  v45 = __readfsqword(0x28u);
  v37 = *(_BYTE *)(a1 + 145);
  if ( a4 >= 0 )
  {
    v12 = 1;
    if ( a6 != -1 )
      v12 = a6;
    v13 = v12;
    if ( *(_DWORD *)(a3 + 8) == 65 )
    {
      v9 = sub_1F0E60(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 432LL) + 104LL * *(int *)(a3 + 32), a1, a4, v12);
    }
    else if ( v37 )
    {
      if ( !(unsigned __int8)sub_2566C0(a3, a1) )
      {
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(a3 + 48), 0);
        if ( tinfo_size > 0 )
        {
          v21 = v9 + v13;
          if ( v21 <= tinfo_size )
            v9 = tinfo_size - v21;
        }
      }
    }
  }
  v14 = 2;
  if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) != 0xE )
    v14 = v9 != 0;
  tinfo_property = get_tinfo_property(*a5, 6);
  v15 = v10 != -1;
  if ( !tinfo_property && v10 == -1 )
  {
    *(_DWORD *)(a3 + 40) = -1;
    v33 = 0;
    goto LABEL_11;
  }
  v41 = v9 == 0;
  if ( v10 != -1 || (v33 = 0, !v9) )
  {
    v22 = get_tinfo_size(0, *(_QWORD *)(a3 + 48), 0);
    v15 = v10 != -1;
    v33 = v22;
    if ( v10 != -1 )
    {
      if ( (unsigned __int8)*a5 )
      {
        v23 = get_tinfo_size(0, *a5, 0);
        v15 = v10 != -1;
        if ( v10 != v23 )
        {
          if ( !under_debugger )
            sub_383060(50977);
          BUG();
        }
      }
    }
  }
  v42 = v15;
  v19 = sub_2423C0(a3, v9, a5, v10, v33, (a7 & 5) != 0);
  v15 = v42;
  if ( !v19 )
  {
    if ( v37 && v33 > v10 && !v9 )
    {
LABEL_23:
      if ( (a7 & 4) == 0 )
        *(_DWORD *)(a3 + 40) = v10;
      if ( (a7 & 2) != 0 )
        goto LABEL_26;
      goto LABEL_54;
    }
    if ( (a7 & 4) != 0 )
    {
LABEL_11:
      if ( !v14 )
      {
        v16 = *a5;
        if ( !(unsigned __int8)*a5 )
          return a3;
        if ( (a7 & 2) != 0 )
        {
          v18 = a3;
          goto LABEL_61;
        }
        if ( v33 > v10 && v15 )
        {
          v17 = j__qalloc_or_throw(64);
          *(_QWORD *)v17 = -1;
          *(_DWORD *)(v17 + 8) = 48;
          *(_QWORD *)(v17 + 12) = -1;
          *(_QWORD *)(v17 + 24) = a3;
          *(_QWORD *)(v17 + 32) = 0;
          *(_QWORD *)(v17 + 40) = 0;
          *(_QWORD *)(v17 + 48) = 0;
          *(_DWORD *)(v17 + 56) = 0;
          v34 = v17;
          *(_QWORD *)v17 = *(_QWORD *)a3;
          copy_tinfo_t(v17 + 48, a5);
          return v34;
        }
        v24 = sub_246B40(a3, a1, a5);
        if ( (a7 & 5) == 0 || !v24 || *(_DWORD *)(a3 + 8) != 48 )
          return a3;
        sub_255850(a3, *(_QWORD *)(a3 + 24));
        goto LABEL_54;
      }
      v18 = a3;
      if ( (a7 & 2) != 0 )
      {
LABEL_56:
        a3 = v18;
        if ( !v9 )
          goto LABEL_57;
        goto LABEL_69;
      }
LABEL_73:
      v18 = sub_247510(*(_QWORD *)(a1 + 112), a3);
      goto LABEL_56;
    }
LABEL_65:
    *(_DWORD *)(a3 + 40) = v10;
    goto LABEL_11;
  }
  if ( !v37 )
    goto LABEL_23;
  v26 = v41 && v33 > v10;
  if ( v19 != 1 || !v42 )
  {
    if ( v26 )
      goto LABEL_23;
    if ( (a7 & 4) != 0 )
    {
      if ( (a7 & 2) != 0 )
        goto LABEL_26;
      goto LABEL_54;
    }
    *(_DWORD *)(a3 + 40) = v10;
    if ( (a7 & 2) != 0 )
      goto LABEL_26;
LABEL_72:
    v14 = 2;
    goto LABEL_73;
  }
  if ( v9 + v10 == v33 && (a7 & 5) == 0 )
  {
    v32 = sub_2423C0(a3, 0, a5, v10, v33, 0);
    v15 = v42;
    v14 = v32;
    if ( v41 && v33 > v10 )
      goto LABEL_23;
    goto LABEL_65;
  }
  if ( v26 )
    goto LABEL_23;
  if ( (a7 & 4) == 0 )
  {
    *(_DWORD *)(a3 + 40) = v10;
    if ( (a7 & 2) != 0 )
      goto LABEL_26;
    goto LABEL_72;
  }
  if ( (a7 & 2) == 0 )
LABEL_54:
    a3 = sub_247510(*(_QWORD *)(a1 + 112), a3);
LABEL_26:
  if ( !v9 )
  {
LABEL_27:
    if ( *(_BYTE *)a5 )
    {
      v43 = 0;
      copy_tinfo_t(&v43, a5);
    }
    else
    {
      sub_32C270(&v43, *(_QWORD *)(a1 + 112), (unsigned int)v10);
    }
    if ( !tinfo_property )
    {
      sub_32C540(v44, *(_QWORD *)(a1 + 112), &v43);
      copy_tinfo_t(&v43, v44);
      clear_tinfo_t(v44);
    }
    v38 = sub_244E70(a3, &v43);
    clear_tinfo_t(&v43);
    v18 = v38;
    goto LABEL_58;
  }
  v14 = 2;
LABEL_69:
  v29 = sub_240F50(a1, v9, 0, a2, 0, 0, 0);
  v30 = j__qalloc_or_throw(64);
  *(_QWORD *)v30 = -1;
  *(_DWORD *)(v30 + 8) = 35;
  *(_QWORD *)(v30 + 12) = -1;
  *(_QWORD *)(v30 + 24) = a3;
  *(_QWORD *)(v30 + 32) = v29;
  *(_QWORD *)(v30 + 40) = 0;
  *(_QWORD *)(v30 + 48) = 0;
  *(_DWORD *)(v30 + 56) = 0;
  v39 = v30;
  *(_QWORD *)v30 = *(_QWORD *)a3;
  sub_2441C0(v30, *(_QWORD *)(a1 + 112), 0);
  v18 = v39;
LABEL_57:
  if ( v14 == 2 )
  {
    a3 = v18;
    goto LABEL_27;
  }
LABEL_58:
  if ( tinfo_property && v33 <= 0 )
    return v18;
  v16 = *a5;
LABEL_61:
  if ( v10 == -1 )
  {
    v36 = v18;
    v31 = get_tinfo_size(0, v16, 0);
    v16 = *a5;
    v18 = v36;
    v10 = v31;
  }
  v35 = v18;
  v27 = get_tinfo_property(v16, 2);
  return sub_244320(*(_QWORD *)(a1 + 112), v35, v10, (v27 & 0xF) == 9, v35, v28);
}
