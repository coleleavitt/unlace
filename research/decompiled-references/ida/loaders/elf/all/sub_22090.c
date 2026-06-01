__int64 __fastcall sub_22090(__int64 a1, int *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  const char *v6; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rbp
  int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 qword; // r8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  int v19; // ebx
  int v20; // r9d
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int16 custom_fixup; // ax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int16 v27; // ax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r9d
  __int64 v31; // rax
  int v32; // r8d
  unsigned __int64 v33; // rbx
  int v34; // esi
  __int64 v36; // [rsp+8h] [rbp-50h]
  int v37; // [rsp+10h] [rbp-48h]
  __int64 v38; // [rsp+10h] [rbp-48h]
  unsigned __int64 v39; // [rsp+18h] [rbp-40h]

  v6 = "Illegal REL relocation entry for SPARC";
  if ( !a2[7] )
    return (__int64)v6;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 288);
  if ( a3 && a3 >= v9 && (v6 = (const char *)(v9 + 96LL * *(_QWORD *)(v8 + 296)), (unsigned __int64)v6 >= a3) )
  {
    v23 = a3 - v9;
    v9 = *(_QWORD *)(v8 + 312);
    v10 = 1;
    v6 = (const char *)0xAAAAAAAAAAAAAAABLL;
    a3 = 0xAAAAAAAAAAAAAAABLL * (v23 >> 5);
    v37 = a3;
    if ( a3 >= v9 )
    {
      v37 = a3 - v9;
      v10 = 2;
    }
  }
  else
  {
    v37 = 0;
    v10 = 0;
  }
  v11 = *(_QWORD *)(a2 + 1);
  v12 = *a2;
  v13 = *(_QWORD *)(a2 + 5);
  v14 = *(_QWORD *)(a2 + 3);
  v39 = *(_QWORD *)(a4 + 16);
  if ( *(_BYTE *)(v8 + 508) == 2 )
  {
    qword = get_qword(v11);
    v16 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v16 + 320) != v10 )
      goto LABEL_8;
  }
  else
  {
    qword = (int)get_dword(v11, v6, a3, a4, v9);
    v16 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v16 + 320) != v10 )
      goto LABEL_8;
  }
  if ( *(_DWORD *)(v16 + 324) == v37 )
  {
    v38 = qword;
    v22 = sub_4A750(a5 + 16, *(_QWORD *)(a5 + 8), 1);
    qword = v38;
    LODWORD(v14) = v22;
    if ( !v22 )
      return 0;
  }
LABEL_8:
  if ( (unsigned __int8)v12 > 0x15u )
  {
    if ( (unsigned __int8)v12 > 0x37u )
    {
      if ( (unsigned __int8)v12 != 249 )
        return 2;
      v36 = qword;
      sub_40E20(a1, v11, 4);
      v31 = *(_QWORD *)(a1 + 16);
      v32 = v36;
      v33 = *(_QWORD *)(v31 + 456) & (v39 + *(_QWORD *)(v31 + 608));
      if ( v33 < v39 )
      {
        sub_40E00(v11, *(_QWORD *)(v31 + 456) & (v39 + *(_QWORD *)(v31 + 608)), v28, v29, v36);
        v32 = v36;
      }
      v34 = v33;
      v19 = v13;
      sub_47DB0(a1, v34, v28, v29, v32, v30);
    }
    else
    {
      v25 = 1LL << v12;
      if ( ((1LL << v12) & 0xBFFFFEFF000000LL) != 0 )
        return 3;
      v19 = v13 + qword;
      v20 = 12;
      if ( (v25 & 0x40000100000000LL) != 0 )
        goto LABEL_14;
      if ( (v25 & 0xC00000) == 0 )
        return 2;
LABEL_34:
      v19 = v13 + qword;
    }
LABEL_13:
    v20 = 4;
LABEL_14:
    sub_42050(a1, v11, v14, v19, v13 - v14, v20, 0, 0, 0);
    return 0;
  }
  if ( !(_BYTE)v12 )
    return 2;
  switch ( (char)v12 )
  {
    case 3:
      goto LABEL_34;
    case 7:
    case 18:
      v17 = qword & 0xC0000000;
      v18 = ((unsigned __int64)(v13 - v11) >> 2) & 0x3FFFFFFF;
      goto LABEL_12;
    case 9:
    case 15:
      custom_fixup = *(_WORD *)(a1 + 348);
      if ( custom_fixup == 0x8000 )
      {
        custom_fixup = find_custom_fixup("HI22");
        *(_WORD *)(a1 + 348) = custom_fixup;
      }
      goto LABEL_26;
    case 11:
      LODWORD(v18) = qword & 0xFFFFE000;
      v17 = v13 & 0x1FFF;
LABEL_12:
      v19 = v17 | v18;
      auto_mark_range(v11, v11 + 1, 20);
      goto LABEL_13;
    case 12:
    case 13:
      custom_fixup = *(_WORD *)(a1 + 350);
      if ( custom_fixup == 0x8000 )
      {
        custom_fixup = find_custom_fixup("LO10");
        *(_WORD *)(a1 + 350) = custom_fixup;
      }
LABEL_26:
      sub_424F0(a1, v11, v14, v39, custom_fixup, 0, 0, 0);
      goto LABEL_27;
    case 16:
      v26 = v11 - v39;
      v27 = *(_WORD *)(a1 + 350);
      if ( v27 == 0x8000 )
      {
        v27 = find_custom_fixup("LO10");
        *(_WORD *)(a1 + 350) = v27;
      }
      goto LABEL_37;
    case 17:
      v26 = v11 - v39;
      v27 = *(_WORD *)(a1 + 348);
      if ( v27 == 0x8000 )
      {
        v27 = find_custom_fixup("HI22");
        *(_WORD *)(a1 + 348) = v27;
      }
LABEL_37:
      sub_424F0(a1, v11, v14, 0, v27, 0, v26, 0);
LABEL_27:
      v6 = nullptr;
      break;
    case 19:
      sub_40E20(a1, v11, 2);
      v6 = nullptr;
      break;
    case 20:
      v19 = v13;
      goto LABEL_13;
    case 21:
      put_dword(v11 + 4, 0x1000000);
      sub_40E60(a1, v11, v13, ".", "");
      v20 = 4;
      v19 = (((unsigned __int64)(v13 - v11) >> 2) & 0x3FFFFF) + 813694976;
      goto LABEL_14;
    default:
      return 3;
  }
  return (__int64)v6;
}

