void __fastcall sub_D29930(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // r12
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  void *v20; // rsi
  char v21; // cl
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-D0h]
  void *v25; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-C0h]
  char v27; // [rsp+1Ch] [rbp-BCh]
  int v28; // [rsp+20h] [rbp-B8h]
  _BYTE v29[48]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-78h] BYREF
  char v31; // [rsp+64h] [rbp-74h]
  void *v32; // [rsp+68h] [rbp-70h]
  unsigned int v33; // [rsp+70h] [rbp-68h]
  char v34; // [rsp+74h] [rbp-64h]
  int v35; // [rsp+78h] [rbp-60h]
  char v36; // [rsp+98h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 824);
  for ( i = &v1[2 * *(unsigned int *)(a1 + 832)]; i != v1; v1 += 2 )
  {
    while ( 1 )
    {
      v3 = sub_E0AC20(*(_QWORD *)(a1 + 376), *v1);
      if ( BYTE4(v3) )
        break;
      v1 += 2;
      if ( i == v1 )
        goto LABEL_12;
    }
    sub_E05460(v29, *(_QWORD *)(a1 + 376), (unsigned int)v3);
    v4 = sub_B77A50(v1[1], 1);
    v8 = sub_CC2440(*(_QWORD *)(a1 + 368), *(_QWORD *)(*v1 + 8LL), v5, v6, v7);
    if ( BYTE4(v8) )
    {
      switch ( v8 )
      {
        case 0LL:
          v11 = (void *)*(unsigned __int8 *)sub_CE8890((__int64)v29);
          v26 = 8;
          v27 = 0;
          v25 = v11;
          goto LABEL_18;
        case 1LL:
          v12 = (void *)*(unsigned __int8 *)sub_CE8AA0((__int64)v29);
          v26 = 8;
          goto LABEL_22;
        case 2LL:
          v13 = (void *)*(unsigned __int16 *)sub_CE8E90((__int64)v29);
          v26 = 16;
          v27 = 0;
          v25 = v13;
          goto LABEL_18;
        case 3LL:
          v12 = (void *)*(unsigned __int16 *)sub_CE90A0((__int64)v29);
          v26 = 16;
          goto LABEL_22;
        case 4LL:
          v14 = (void *)*(unsigned int *)sub_CE9490((__int64)v29);
          v26 = 32;
          v27 = 0;
          v25 = v14;
          goto LABEL_18;
        case 5LL:
          v12 = (void *)*(unsigned int *)sub_CE96A0((__int64)v29);
          v26 = 32;
          goto LABEL_22;
        case 6LL:
          v15 = *(void **)sub_CE9C80((__int64)v29);
          v26 = 64;
          v27 = 0;
          v25 = v15;
          goto LABEL_18;
        case 7LL:
          v12 = *(void **)sub_CE9E90((__int64)v29);
          v26 = 64;
          goto LABEL_22;
        case 8LL:
          v16 = sub_CEA4A0((__int64)v29);
          sub_D23FD0((__int64)&v25, v16, 0);
          goto LABEL_18;
        case 9LL:
          v17 = sub_CEA4F0((__int64)v29);
          sub_D27A40((__int64)&v25, v17, 0);
          goto LABEL_18;
        case 10LL:
          v12 = (void *)*(unsigned __int8 *)sub_CEAA70((__int64)v29);
          v26 = 1;
LABEL_22:
          v25 = v12;
          v27 = 1;
LABEL_18:
          sub_B72A30((__int64)&v30, (__int64 *)&v25);
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          goto LABEL_14;
        case 11LL:
          v18 = sub_CEB480((__int64)v29);
          v19 = *(_DWORD *)(v18 + 8);
          v26 = v19;
          if ( v19 > 0x40 )
          {
            v24 = v18;
            sub_21E17D0(&v25);
            v19 = v26;
            v20 = v25;
            v18 = v24;
          }
          else
          {
            v20 = *(void **)v18;
          }
          v21 = *(_BYTE *)(v18 + 12);
          v22 = *(_DWORD *)(v18 + 16);
          v33 = v19;
          v31 &= ~1u;
          v28 = v22;
          v32 = v20;
          v34 = v21;
          v35 = v22;
          v30 = 4;
          goto LABEL_14;
        case 12LL:
          v23 = sub_CEA540((__int64)v29);
          sub_CDADA0((__int64)&v25, v23);
          sub_BF4E50((__int64)&v30, &v25);
          sub_971860(&v25);
          goto LABEL_14;
        case 13LL:
          v9 = sub_CEACF0((__int64)v29);
          sub_E01600(&v30, v9, **(_QWORD **)(a1 + 368));
          goto LABEL_14;
        case 14LL:
          v10 = sub_CEB200((__int64)v29);
          sub_E103F0(&v30, v10, **(_QWORD **)(a1 + 368));
LABEL_14:
          sub_A2BFE0(v4, (__int64)&v30);
          if ( v30 <= 1 )
            goto LABEL_11;
          goto LABEL_10;
        default:
          goto LABEL_11;
      }
    }
    sub_E04EA0(&v30, v29, *(_QWORD *)(a1 + 368), *(_QWORD *)(*(_QWORD *)(v1[1] + 40LL) + 8LL));
    if ( v36 )
    {
      sub_A30FE0(v4, (int *)&v30);
      if ( v36 )
      {
        if ( v30 > 1 )
LABEL_10:
          sub_A2BBA0((int *)&v30);
      }
    }
LABEL_11:
    sub_DFF560(v29);
  }
LABEL_12:
  *(_DWORD *)(a1 + 832) = 0;
}

