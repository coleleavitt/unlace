__int64 __fastcall sub_985F70(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  char v9; // dl
  unsigned int v10; // eax
  void *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rdi
  unsigned int v14; // r14d
  void *v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // r15d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  char v25; // [rsp+1Ch] [rbp-6Ch]
  void *v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-60h]
  void *v28; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-50h]
  void *v30; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  v6 = 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
  v7 = a2 + *(unsigned __int8 *)(a2 + 3);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + v6) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 == 13 )
  {
    if ( (((*(_WORD *)(v8 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
      goto LABEL_6;
    return 0;
  }
  if ( v9 != 46 )
  {
    if ( v9 == 10 )
      goto LABEL_6;
    return 0;
  }
  v21 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + v6) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                         + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL));
  if ( (*(_BYTE *)(v21 + 74) & 1) == 0 && *(_QWORD *)(v21 + 128) <= 7u || *(char *)(sub_B14A40(v8) + 76) < 0 )
    return 0;
  v6 = 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
  v7 = a2 + *(unsigned __int8 *)(a2 + 3);
LABEL_6:
  if ( !sub_6B3140(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + v7 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) )
    return 0;
  LOBYTE(v10) = sub_6B3140(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL));
  v3 = v10;
  if ( !(_BYTE)v10 )
    return 0;
  v11 = (void *)sub_985340(
                  *(__int64 **)(a1 + 192),
                  *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)));
  v12 = *(unsigned __int8 *)(a2 + 3);
  v13 = *(__int64 **)(a1 + 192);
  v14 = (unsigned int)v11;
  v30 = v11;
  v15 = (void *)sub_985340(v13, *(_QWORD *)(v12 + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8));
  v16 = (unsigned int)v15;
  v30 = v15;
  v17 = sub_A24BE0(v14);
  v18 = sub_A24BE0(v16);
  sub_97E960(
    (__int64)&v26,
    *(_QWORD *)(a1 + 184),
    v14,
    ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  sub_97E960((__int64)&v28, *(_QWORD *)(a1 + 184), v16, 0);
  v19 = v27;
  v20 = sub_2587110(&v28, 8, 0);
  if ( v20 >= v19 )
    goto LABEL_9;
  v31 = v27;
  v22 = v20 + v27 - v19;
  if ( v27 > 0x40 )
  {
    v25 = v27;
    sub_2585A50(&v30, 0, 0);
    if ( !v22 )
      goto LABEL_27;
    if ( v22 > 0x40 )
      goto LABEL_26;
    v23 = (unsigned __int64)v30;
    v24 = 0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v19 + 64 - v25 - (unsigned __int8)v20);
    if ( v31 > 0x40 )
    {
      *(_QWORD *)v30 |= v24;
      goto LABEL_27;
    }
LABEL_38:
    v30 = (void *)(v24 | v23);
LABEL_27:
    if ( v27 > 0x40 )
      sub_2586580(&v26, &v30);
    else
      v26 = (void *)((unsigned __int64)v30 & (unsigned __int64)v26);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    goto LABEL_9;
  }
  v30 = nullptr;
  if ( v22 )
  {
    if ( v22 > 0x40 )
    {
LABEL_26:
      sub_2586900(&v30, 0, v22);
      goto LABEL_27;
    }
    v23 = 0;
    v24 = 0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v19 + 64 - (unsigned __int8)v27 - (unsigned __int8)v20);
    goto LABEL_38;
  }
  v26 = nullptr;
LABEL_9:
  sub_97E3E0(a1, (__int64)&v26, v2);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  return v3;
}

