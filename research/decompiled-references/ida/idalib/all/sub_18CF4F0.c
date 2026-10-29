void __fastcall sub_18CF4F0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        double a6)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // r9
  char v16; // al
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int8 v25; // dl
  __int64 v26; // rsi
  __int16 v27; // bp
  __int16 v28; // ax
  _BOOL8 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rsi
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v43; // [rsp+0h] [rbp-118h]
  unsigned int v44; // [rsp+0h] [rbp-118h]
  __int64 v45; // [rsp+8h] [rbp-110h]
  unsigned __int64 v46; // [rsp+8h] [rbp-110h]
  __int64 v47; // [rsp+8h] [rbp-110h]
  __int64 v48; // [rsp+8h] [rbp-110h]
  unsigned int v49; // [rsp+14h] [rbp-104h]
  char v50; // [rsp+18h] [rbp-100h]
  __int64 v51; // [rsp+18h] [rbp-100h]
  __int64 v52; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+3Ch] [rbp-DCh] BYREF
  __int64 v55; // [rsp+44h] [rbp-D4h] BYREF
  char v56; // [rsp+4Ch] [rbp-CCh]
  unsigned __int8 *v57; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-C0h]

  v8 = a3;
  v49 = (unsigned int)a2;
  v9 = sub_BFBAE0(a3);
  v10 = sub_BFBAE0(a4);
  v11 = (__int64 *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v45 = *(_QWORD *)(a4 + 8);
  if ( sub_F580C0(*v11) )
    return;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
  {
    if ( a5 - 14 > 1 || *(_DWORD *)(a1 + 12596) < *(_DWORD *)(a1 + 11320) )
      return;
  }
  else if ( *(_DWORD *)(a1 + 12596) < *(_DWORD *)(a1 + 11320) )
  {
    return;
  }
  if ( sub_F65F60(*v11) )
    return;
  v12 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
  v46 = v45 & 0xFFFFFFFFFFFFFFF0LL;
  if ( sub_F65F60(v12)
    || a5 == 9
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    return;
  }
  v13 = *(_QWORD *)(a1 + 232);
  v14 = v8;
  v15 = *(unsigned __int8 *)(v13 + 1);
  v47 = v13;
  v50 = *(_BYTE *)(v13 + 1);
  if ( (v15 & 8) != 0
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) <= 4u
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) <= 4u )
  {
    v16 = sub_FD3830(
            *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
            0x1AA4u,
            (unsigned int)a2,
            *(_QWORD *)(a1 + 264),
            v13,
            v15);
    v17 = 6521;
    if ( (*(_BYTE *)(v47 + 2) & 2) == 0 )
    {
      if ( v50 >= 0 || (v17 = 6820, v16 == 1) )
        v17 = 6520;
    }
    sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), (unsigned int)a2, v17, 0);
    v54 = sub_EEC8C0(v8, a1 + 8, a6);
    v51 = sub_1587DB0((__int64)&v57, &v54);
    v55 = sub_EEC8C0(a4, (__int64)&v54, a6);
    v18 = sub_1587DB0(v51, &v55);
    v52 = *(_QWORD *)(v9 + 8);
    v19 = sub_162B6D0(v18, &v52);
    a2 = &v53;
    v53 = *(_QWORD *)(v10 + 8);
    sub_162B6D0(v19, &v53);
    sub_15F7200(&v57);
  }
  if ( (int)sub_EEB7E0(v8, (__int64)a2, a6) >= 0 && (int)sub_EEB7E0(a4, (__int64)a2, a6) >= 0 )
  {
    if ( (unsigned __int8)sub_BFFAE0(v8, a4, v20, v21, v22) )
    {
      v23 = 0;
      if ( a5 <= 0xF )
      {
        v23 = 2;
        v24 = 1LL << a5;
        if ( ((1LL << a5) & 0x8C00) == 0 )
        {
          v23 = 1;
          if ( (v24 & 0x7000) == 0 )
          {
            v23 = (1LL << a5) & 0x200;
            if ( (v24 & 0x200) != 0 )
              v23 = 3;
          }
        }
      }
      v43 = v23;
      sub_168B9B0((__int64)&v57, a1 + 8, 6675);
      sub_AE9DF0(&v57, 0, 2u);
      v25 = 3;
      v26 = v43;
LABEL_25:
      sub_AE9DF0(&v57, v26, v25);
      sub_18CA280(a1, v49, nullptr, 0, (__int64)&v57);
      if ( v57 && v58 )
        sub_1580C40(v58, (unsigned __int64)v57);
      goto LABEL_28;
    }
    if ( (unsigned __int8)sub_18BB5E0(v9) && (unsigned __int8)sub_18BB5E0(v10) )
    {
      v33 = 2;
      if ( a5 != 14 )
        v33 = a5 == 15;
      v44 = v33;
      sub_168B9B0((__int64)&v57, a1 + 8, 6675);
      sub_AE9DF0(&v57, 1, 2u);
      v26 = v44;
      v25 = 3;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 42
      || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 120LL) & 1) != 0 )
    {
      goto LABEL_28;
    }
    if ( a5 == 11 )
    {
      v34 = v8;
      a5 = 10;
      v8 = a4;
    }
    else
    {
      if ( a5 <= 0xB )
      {
        if ( a5 != 10 )
          goto LABEL_28;
      }
      else
      {
        if ( a5 == 12 )
        {
          a5 = 13;
          v34 = v8;
          v8 = a4;
          goto LABEL_60;
        }
        if ( a5 != 13 )
          goto LABEL_28;
      }
      v34 = a4;
    }
LABEL_60:
    if ( ((*(_WORD *)v8 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v8 + 2) >> 3) & 0x3F) != 5 )
      goto LABEL_28;
    v35 = v34;
    v48 = v34;
    v36 = sub_BFFAE0(*(_QWORD *)(v8 + 16), v34, v34, v31, v32);
    v40 = v48;
    if ( v36 )
    {
      v41 = *(_QWORD *)(v8 + 24);
    }
    else
    {
      v35 = v48;
      if ( !(unsigned __int8)sub_BFFAE0(*(_QWORD *)(v8 + 24), v48, v48, v37, v38) )
        goto LABEL_28;
      v41 = *(_QWORD *)(v8 + 16);
    }
    if ( !sub_F65360(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL), v35, v40, v37, v38, v39) )
      goto LABEL_28;
    sub_168B9B0((__int64)&v57, a1 + 8, 6675);
    sub_AE9DF0(&v57, 2, 2u);
    v25 = 2;
    v26 = (unsigned int)(a5 != 13) + 1;
    goto LABEL_25;
  }
LABEL_28:
  v27 = *(_WORD *)v9 & 0x1FF;
  if ( ((v27 + 433) & 0x1FFu) <= 9 )
  {
    v9 = sub_BFD550(v9);
    v27 = *(_WORD *)v9 & 0x1FF;
  }
  if ( ((*(_WORD *)v10 + 433) & 0x1FFu) <= 9 )
    v10 = sub_BFD550(v10);
  if ( (v27 == 37 || v27 == 9) && !(unsigned int)sub_BFE6E0(v10, *(_QWORD *)(a1 + 248), 1, a6) )
    goto LABEL_38;
  v28 = *(_WORD *)v10 & 0x1FF;
  if ( (v28 == 9 || v28 == 37) && !(unsigned int)sub_BFE6E0(v9, *(_QWORD *)(a1 + 248), 1, a6) )
  {
    v14 = a4;
    v9 = v10;
LABEL_38:
    sub_168B9B0((__int64)&v57, a1 + 8, 7390);
    v29 = (*(_WORD *)v9 & 0x1FF) == 37;
    sub_AE9DF0(&v57, v29, 2u);
    v30 = sub_EEC8C0(v14, v29, a6);
    v56 = 1;
    v55 = v30;
    sub_AEC610((__int64 *)&v57, &v55);
    sub_18CA280(a1, v49, nullptr, 0, (__int64)&v57);
    if ( v57 )
    {
      if ( v58 )
        sub_1580C40(v58, (unsigned __int64)v57);
    }
  }
}
