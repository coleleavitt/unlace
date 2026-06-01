__int64 __fastcall sub_16D58B0(__int64 *a1, unsigned __int64 a2, int a3, int a4, double a5)
{
  __int64 v9; // rdi
  char v10; // r8
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // r8d
  __int16 v16; // ax
  __int16 v17; // r15
  _DWORD *v18; // rsi
  int v19; // eax
  __int64 i; // r15
  __int64 v21; // rax
  __int64 v23; // rbx
  __int64 (*v24)(); // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbp
  unsigned int v31; // eax
  __int64 v32; // rax
  __int16 v33; // dx
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r12
  unsigned int v37; // eax
  __int64 v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v43; // [rsp+8h] [rbp-F0h]
  int v44; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v45; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v47[200]; // [rsp+30h] [rbp-C8h] BYREF

  v9 = a1[29];
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    v11 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
    v12 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
    v13 = (*(_WORD *)(v9 + 206) >> 7) & 3;
    if ( v13 == 3 )
      v13 = 2;
    v10 = *(_BYTE *)(v9 + 46);
    v14 = v13
        | (((v10 & 8) != 0) << 14)
        | (((v10 & 4) != 0) << 13)
        | (((v10 & 2) != 0) << 12)
        | (8 * *(unsigned __int8 *)(v9 + 45)) & 0x400
        | (((*(_BYTE *)(v9 + 45) & 0x40) != 0) << 9)
        | (4 * ((unsigned int)*(char *)(v9 + 106) >> 31))
        | ((v10 & 1) << 11)
        | (((*(_BYTE *)(v9 + 207) >> 1) & 3) << 6);
    v15 = v13 & 3;
    v16 = v14 | 0x38;
    if ( v15 == 1 && (v14 & 4) != 0 )
    {
      v33 = v14 | 0x138;
      if ( (unsigned __int8)v16 >> 6 == 2 )
        v16 = v33;
    }
    v17 = v16 ^ (v16 ^ v11) & v12;
  }
  else
  {
    v17 = sub_FEAD90(v9);
  }
  if ( (v17 & 0x800) != 0 && ((unsigned int)(a4 - 808) <= 1 || a4 == 804) )
  {
    v31 = sub_BF6D70(a2);
    sub_168B9F0((__int64)v47, a1 + 1, v31, 0x8Au, 0);
    LODWORD(v45) = 0;
    v32 = sub_1587D10((__int64)v47, (int *)&v45);
    v44 = 0;
    v42 = sub_1587D10(v32, &v44);
    v46 = sub_EEC8C0(a2, (__int64)&v44, a5);
    sub_1587DB0(v42, &v46);
    sub_15F7200(v47);
  }
  if ( (v17 & 0x400) != 0 && (a4 == 814 || a4 == 821) )
  {
    v34 = sub_BF6D70(a2);
    sub_168B9F0((__int64)v47, a1 + 1, v34, 0x8Au, 0);
    LODWORD(v45) = 1;
    v35 = sub_1587D10((__int64)v47, (int *)&v45);
    v44 = 0;
    v36 = sub_1587D10(v35, &v44);
    v46 = sub_EEC8C0(a2, (__int64)&v44, a5);
    sub_1587DB0(v36, &v46);
    sub_15F7200(v47);
  }
  v18 = *(_DWORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v19 = (*v18 >> 14) & 4;
  if ( a3 != 2 && a3 != 1 )
  {
    if ( !(_BYTE)v19 )
    {
      for ( i = 0; ; i += 8 )
      {
        v21 = sub_1BFA490(a1, v18, *(_QWORD *)(a1[31] + 18720), 1, 0);
        if ( v21 == 1 )
          break;
        *(_QWORD *)(i + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v21 & 0xFFFFFFFFFFFFFFFELL;
        if ( 8LL * (unsigned int)(a3 - 2) == i )
        {
          v23 = 8LL * (unsigned int)(a3 - 1);
          v18 = *(_DWORD **)(v23 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
          v19 = (*v18 >> 14) & 4;
          goto LABEL_22;
        }
        v18 = *(_DWORD **)(i + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
        if ( (*v18 & 0x10000) != 0 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  v23 = 0;
LABEL_22:
  if ( (_BYTE)v19 )
    return 0;
  v24 = *(__int64 (**)())(**(_QWORD **)(a1[31] + 17448) + 256LL);
  if ( v24 == sub_102B8D0 || (unsigned __int8)v24() )
  {
    v25 = sub_191BD20(a1, v18);
    if ( v25 <= 1 )
      return 1;
  }
  else
  {
    v25 = sub_19179A0(a1, v18, 1);
    if ( v25 <= 1 )
      return 1;
  }
  v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v23 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v25 & 0xFFFFFFFFFFFFFFFELL;
  v27 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v28 = v27 & 0xFFFFFFFFFFFFFFF0LL;
  v29 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
  {
    if ( a3 == 2 )
    {
      v30 = sub_18C2B90(a1);
      v40 = *(_QWORD *)v28;
      v41 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v28 + 16LL) - 57;
      if ( (unsigned int)v41 > 1 )
        v40 = sub_F63050(v40, v27, v41, v39);
      if ( sub_F58100(*(_QWORD *)(*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        if ( !(unsigned __int8)sub_16D5460((__int64)a1, a2, 1u, 0, 1023, 1u, a5) )
        {
          if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_30;
          goto LABEL_29;
        }
        return 1;
      }
    }
    else if ( sub_F58100(v29) )
    {
      return 0;
    }
  }
  else if ( sub_F58100(v29) )
  {
    if ( a3 == 2 )
    {
      if ( !(unsigned __int8)sub_16D5460((__int64)a1, a2, 1u, 0, 1023, 1u, a5) )
      {
LABEL_29:
        v30 = *(_QWORD *)(a1[31] + 18720);
LABEL_30:
        *(_QWORD *)(a2 + 8) = v30;
        return 0;
      }
      return 1;
    }
    return 0;
  }
  v37 = sub_EEB7E0(v26, v27, a5);
  sub_168B9F0((__int64)v47, a1 + 1, v37, 0x1465u, 0);
  v45 = *(_QWORD *)(v26 + 8);
  v38 = sub_162B6D0((__int64)v47, &v45);
  v46 = sub_EEC8C0(v26, (__int64)&v45, a5);
  v43 = *(_BYTE *)(sub_1587DB0(v38, &v46) + 120);
  sub_15F7200(v47);
  return v43;
}
