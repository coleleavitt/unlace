__int64 __fastcall sub_9862E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  char v8; // dl
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rdi
  unsigned int v13; // r15d
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 *v18; // r15
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-70h]
  void *v25; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-60h]
  void *v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+38h] [rbp-40h]
  char v31; // [rsp+3Ch] [rbp-3Ch]

  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  v5 = 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
  v6 = a2 + *(unsigned __int8 *)(a2 + 3);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + v5) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  switch ( v8 )
  {
    case 13:
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        return 0;
      break;
    case 46:
      v23 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + v5) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v23 + 74) & 1) == 0 && *(_QWORD *)(v23 + 128) <= 7u || *(char *)(sub_B14A40(v7) + 76) < 0 )
        return 0;
      v5 = 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
      v6 = a2 + *(unsigned __int8 *)(a2 + 3);
      break;
    case 10:
      break;
    default:
      return 0;
  }
  LOBYTE(v9) = sub_6B3140(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + v6 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  v2 = v9;
  if ( !(_BYTE)v9 )
    return 0;
  v10 = sub_985340(
          *(__int64 **)(a1 + 192),
          *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)));
  v11 = *(unsigned __int8 *)(a2 + 3);
  v12 = *(__int64 **)(a1 + 192);
  v13 = v10;
  v29 = v10;
  v14 = sub_985340(v12, *(_QWORD *)(v11 + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8));
  v15 = v14;
  v29 = v14;
  v16 = sub_A24BE0(v13);
  v17 = sub_A24BE0(v15);
  sub_97E960(
    (__int64)&v25,
    *(_QWORD *)(a1 + 184),
    v13,
    ((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v18 = (unsigned __int64 *)v25;
  sub_97E960((__int64)&v27, *(_QWORD *)(a1 + 184), v15, 0);
  v19 = v26;
  v24 = sub_2587110(&v27, 8, 0);
  v20 = sub_2587110(&v27, 8, 8);
  if ( v20 > v19 )
    v20 = v19;
  if ( v20 && v24 < v19 )
  {
    v21 = (unsigned __int64)v18;
    if ( v19 > 0x40 )
      v21 = *v18;
    v22 = *(_QWORD *)(a2 + 8);
    v31 = 1;
    v30 = 64;
    v29 = (v21 >> v24) & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v20));
    sub_97E3E0(a1, (__int64)&v29, v22);
  }
  else
  {
    sub_97E900(a1, 0, *(_QWORD *)(a2 + 8));
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return v2;
}

