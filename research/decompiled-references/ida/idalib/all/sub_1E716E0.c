unsigned __int64 __fastcall sub_1E716E0(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // al
  char v13; // r13
  __int64 v15; // rax
  __int16 v16; // ax
  __int64 v17; // rdi
  __int64 v18; // r14
  char v19; // al
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // sf
  unsigned int v27; // r14d
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 *v31; // rsi
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned __int64 v35; // [rsp+0h] [rbp-F8h]
  __int64 v36; // [rsp+8h] [rbp-F0h] BYREF
  int v37; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v38; // [rsp+18h] [rbp-E0h] BYREF
  __int64 *v39; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v40; // [rsp+28h] [rbp-D0h]
  char v41; // [rsp+30h] [rbp-C8h]
  _BYTE v42[32]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int8 *v43; // [rsp+60h] [rbp-98h] BYREF
  char v44; // [rsp+B8h] [rbp-40h]
  char v45; // [rsp+C4h] [rbp-34h]

  v10 = a1[29];
  v36 = a2;
  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_BYTE *)(v11 + 17) & 4;
  if ( (*(_BYTE *)(v10 + 47) & 0x20) != 0 )
  {
    if ( v12 )
    {
LABEL_8:
      v15 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v15 + 16) != 13 )
        goto LABEL_4;
      v16 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
LABEL_10:
      if ( v16 == 436 )
      {
LABEL_11:
        sub_168B9F0((__int64)v42, a1 + 1, a4, 0xC79u, 0);
        sub_1605D30((__int64)v42, &v36);
        sub_15F7200(v42);
        return 0;
      }
LABEL_27:
      if ( *(_BYTE *)(v11 + 16) != 10 )
        goto LABEL_14;
      goto LABEL_5;
    }
    v13 = 1;
  }
  else
  {
    v13 = *(_BYTE *)(v10 + 52) & 1;
    if ( v12 )
      goto LABEL_3;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 == 13 )
  {
    v16 = (*(_WORD *)(v18 + 18) >> 3) & 0x1FF;
    if ( ((v16 + 76) & 0x1FFu) <= 0x13 )
    {
      if ( !v13 )
        goto LABEL_27;
      goto LABEL_10;
    }
    goto LABEL_19;
  }
  if ( v19 == 47 )
  {
    v21 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v10, a5, a6);
    if ( (*((_BYTE *)v21 + 74) & 1) != 0 || (v21[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v26 = *((char *)sub_F60F10(v18, a2, v22, v23, v24, v25) + 76) < 0;
      v20 = v36;
      if ( !v26 )
      {
LABEL_21:
        v11 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_3:
        if ( !v13 )
        {
LABEL_4:
          if ( *(_BYTE *)(v11 + 16) == 10 )
            goto LABEL_5;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 10 )
            goto LABEL_14;
LABEL_13:
          v11 = sub_F63050(v11, a2, v11, v10);
          if ( !v11 )
            goto LABEL_14;
          goto LABEL_5;
        }
        goto LABEL_8;
      }
      v11 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v11 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    }
LABEL_19:
    if ( !sub_F58100(v11) )
      goto LABEL_11;
    v20 = v36;
    goto LABEL_21;
  }
  if ( v19 != 10 )
    goto LABEL_19;
  if ( *(_BYTE *)(v11 + 16) != 10 )
    goto LABEL_13;
LABEL_5:
  if ( (unsigned __int8)sub_1E67DC0((__int64)a1, a4, v11, 0) )
    return 0;
LABEL_14:
  v17 = a1[31];
  if ( ((*a3 >> 14) & 0xC) != 0 )
    return sub_A76C00(v17, v36, (__int64)a3, a4);
  sub_C3EB00((__int64)&v39, (unsigned __int64)a3, a1[31], nullptr, a5, a6);
  if ( !v41 )
  {
    sub_168B9F0((__int64)v42, a1 + 1, a4, 0xC57u, 0);
    if ( v44 )
    {
      sub_AE9DF0(&v43, (__int64)"ext_vector_type", 1u);
    }
    else if ( v45 )
    {
      sub_1E63E10((__int64)v42, (__int64)"ext_vector_type");
    }
    v37 = 1;
    v34 = sub_180A710((__int64)v42, &v37);
    v38 = sub_EEC8C0((unsigned __int64)a3, (__int64)&v37, a7);
    sub_1587DB0(v34, &v38);
    sub_15F7200(v42);
    v29 = 0;
    goto LABEL_37;
  }
  v27 = v40;
  if ( v40 <= 0x40 )
  {
    LODWORD(v28) = (_DWORD)v39;
    if ( !v39 )
      goto LABEL_49;
    _BitScanReverse64(&v30, (unsigned __int64)v39);
    if ( 64 - ((unsigned int)v30 ^ 0x3F) <= 0x20 )
      goto LABEL_35;
LABEL_43:
    v31 = a1 + 1;
    v32 = 3226;
LABEL_44:
    sub_168B9F0((__int64)v42, v31, a4, v32, 0);
    v38 = sub_EEC8C0((unsigned __int64)a3, (__int64)v31, a7);
    v33 = sub_1587DB0((__int64)v42, &v38);
    sub_162BBD0(v33, (__int64)"vector");
    sub_15F7200(v42);
    v29 = 0;
    goto LABEL_37;
  }
  if ( v27 - (unsigned int)sub_2206780(&v39) > 0x20 )
    goto LABEL_43;
  v28 = *v39;
LABEL_35:
  if ( !(_DWORD)v28 )
  {
LABEL_49:
    v31 = a1 + 1;
    v32 = 3244;
    goto LABEL_44;
  }
  v29 = sub_A76A60(a1[31], v36, v28);
LABEL_37:
  v35 = v29;
  sub_98E4B0((__int64)&v39);
  return v35;
}
