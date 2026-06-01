unsigned __int64 __fastcall sub_1E712B0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // r14d
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // r14
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rt2
  unsigned __int64 v30; // [rsp+0h] [rbp-108h]
  __int64 v31; // [rsp+8h] [rbp-100h] BYREF
  int v32; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v33; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD *v34; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-E0h]
  char v36; // [rsp+30h] [rbp-D8h]
  _BYTE v37[32]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 *v38; // [rsp+60h] [rbp-A8h] BYREF
  char v39; // [rsp+B8h] [rbp-50h]
  char v40; // [rsp+C4h] [rbp-44h]

  v31 = a2;
  v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)v11;
  v13 = *(unsigned __int8 *)(*(_QWORD *)v11 + 16LL);
  if ( (*(_BYTE *)(v10 + 17) & 4) == 0 )
  {
    if ( (_BYTE)v13 != 13 )
      goto LABEL_3;
    if ( ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1B4 )
      goto LABEL_12;
    v15 = sub_9EC890(v10, a2, v12, v11, a5) == 0;
    v16 = v31;
    if ( v15 )
    {
      v15 = !sub_F58100(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL));
      v16 = v31;
      if ( v15 )
      {
        v10 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v13) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_3:
        if ( (_BYTE)v13 == 10 )
        {
          if ( *(_BYTE *)(v10 + 16) == 10 )
            goto LABEL_5;
LABEL_18:
          v10 = sub_F63050(v10, a2, v12, v11);
          if ( !v10 )
            goto LABEL_6;
          goto LABEL_5;
        }
LABEL_12:
        sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a4, 0xC79u, 0);
        sub_1605D30((__int64)v37, &v31);
        sub_15F7200(v37);
        return 0;
      }
    }
    v10 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
  v12 = (unsigned int)(v13 - 2);
  if ( (unsigned __int8)(v13 - 2) <= 4u )
    goto LABEL_12;
  if ( *(_BYTE *)(v10 + 16) != 10 )
  {
    if ( (_BYTE)v13 != 10 )
      goto LABEL_6;
    goto LABEL_18;
  }
LABEL_5:
  if ( (unsigned __int8)sub_1E67DC0(a1, a4, v10, 0) )
    return 0;
LABEL_6:
  if ( ((*a3 >> 14) & 0xC) != 0 )
    return sub_A76870(*(_QWORD *)(a1 + 248), v31, (__int64)a3, a4, 0);
  sub_C3EB00((__int64)&v34, (unsigned __int64)a3, *(_QWORD *)(a1 + 248), nullptr, a5, a6);
  if ( !v36 )
  {
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a4, 0xC57u, 0);
    if ( v39 )
    {
      sub_AE9DF0(&v38, (__int64)"vector_size", 1u);
    }
    else if ( v40 )
    {
      sub_1E63E10((__int64)v37, (__int64)"vector_size");
    }
    v32 = 1;
    v25 = sub_180A710((__int64)v37, &v32);
    v33 = sub_EEC8C0((unsigned __int64)a3, (__int64)&v32, a7);
    sub_1587DB0(v25, &v33);
    sub_15F7200(v37);
    v24 = 0;
    goto LABEL_27;
  }
  v17 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v17 + 17) & 4) != 0 )
  {
    v24 = sub_A76870(*(_QWORD *)(a1 + 248), v31, (__int64)a3, a4, 0);
    goto LABEL_27;
  }
  v18 = v35;
  if ( v35 > 0x40 )
  {
    if ( v18 - (unsigned int)sub_2206780(&v34) > 0x3D )
      goto LABEL_25;
    v19 = (_QWORD *)*v34;
    goto LABEL_34;
  }
  v19 = v34;
  if ( !v34 )
  {
    sub_A97D20(*(_QWORD *)(a1 + 248), v17);
    goto LABEL_43;
  }
  _BitScanReverse64(&v20, (unsigned __int64)v34);
  if ( 64 - ((unsigned int)v20 ^ 0x3F) <= 0x3D )
  {
LABEL_34:
    v26 = 8LL * (_QWORD)v19;
    v27 = sub_A97D20(*(_QWORD *)(a1 + 248), v17);
    if ( v26 )
    {
      if ( !v27 || (v29 = v26 % v27, v28 = v26 / v27, v29) )
      {
        sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a4, 0xC77u, 0);
        v33 = sub_EEC8C0((unsigned __int64)a3, a1 + 8, a7);
        sub_1587DB0((__int64)v37, &v33);
        sub_15F7200(v37);
        v24 = 0;
        goto LABEL_27;
      }
      if ( v28 <= 0xFFFFFFFF )
      {
        v24 = sub_A70300(*(_QWORD *)(a1 + 248), v31, v28, 0);
        goto LABEL_27;
      }
      goto LABEL_25;
    }
LABEL_43:
    v21 = (__int64 *)(a1 + 8);
    v22 = 3244;
    goto LABEL_26;
  }
LABEL_25:
  v21 = (__int64 *)(a1 + 8);
  v22 = 3226;
LABEL_26:
  sub_168B9F0((__int64)v37, v21, a4, v22, 0);
  v33 = sub_EEC8C0((unsigned __int64)a3, (__int64)v21, a7);
  v23 = sub_1587DB0((__int64)v37, &v33);
  sub_162BBD0(v23, (__int64)"vector");
  sub_15F7200(v37);
  v24 = 0;
LABEL_27:
  v30 = v24;
  sub_98E4B0((__int64)&v34);
  return v30;
}
