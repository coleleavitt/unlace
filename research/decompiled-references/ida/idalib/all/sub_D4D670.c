void __fastcall sub_D4D670(__int64 a1)
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
      v3 = sub_E2E960(*(_QWORD *)(a1 + 376), *v1);
      if ( BYTE4(v3) )
        break;
      v1 += 2;
      if ( i == v1 )
        goto LABEL_12;
    }
    sub_E291A0(v29, *(_QWORD *)(a1 + 376), (unsigned int)v3);
    v4 = sub_B9B790(v1[1], 1);
    v8 = sub_CE6180(*(_QWORD *)(a1 + 368), *(_QWORD *)(*v1 + 8LL), v5, v6, v7);
    if ( BYTE4(v8) )
    {
      switch ( v8 )
      {
        case 0LL:
          v11 = (void *)*(unsigned __int8 *)sub_D0C5D0((__int64)v29);
          v26 = 8;
          v27 = 0;
          v25 = v11;
          goto LABEL_18;
        case 1LL:
          v12 = (void *)*(unsigned __int8 *)sub_D0C7E0((__int64)v29);
          v26 = 8;
          goto LABEL_22;
        case 2LL:
          v13 = (void *)*(unsigned __int16 *)sub_D0CBD0((__int64)v29);
          v26 = 16;
          v27 = 0;
          v25 = v13;
          goto LABEL_18;
        case 3LL:
          v12 = (void *)*(unsigned __int16 *)sub_D0CDE0((__int64)v29);
          v26 = 16;
          goto LABEL_22;
        case 4LL:
          v14 = (void *)*(unsigned int *)sub_D0D1D0((__int64)v29);
          v26 = 32;
          v27 = 0;
          v25 = v14;
          goto LABEL_18;
        case 5LL:
          v12 = (void *)*(unsigned int *)sub_D0D3E0((__int64)v29);
          v26 = 32;
          goto LABEL_22;
        case 6LL:
          v15 = *(void **)sub_D0D9C0((__int64)v29);
          v26 = 64;
          v27 = 0;
          v25 = v15;
          goto LABEL_18;
        case 7LL:
          v12 = *(void **)sub_D0DBD0((__int64)v29);
          v26 = 64;
          goto LABEL_22;
        case 8LL:
          v16 = sub_D0E1E0((__int64)v29);
          sub_D47D10((__int64)&v25, v16, 0);
          goto LABEL_18;
        case 9LL:
          v17 = sub_D0E230((__int64)v29);
          sub_D4B780((__int64)&v25, v17, 0);
          goto LABEL_18;
        case 10LL:
          v12 = (void *)*(unsigned __int8 *)sub_D0E7B0((__int64)v29);
          v26 = 1;
LABEL_22:
          v25 = v12;
          v27 = 1;
LABEL_18:
          sub_B96770((__int64)&v30, (__int64 *)&v25);
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          goto LABEL_14;
        case 11LL:
          v18 = sub_D0F1C0((__int64)v29);
          v19 = *(_DWORD *)(v18 + 8);
          v26 = v19;
          if ( v19 > 0x40 )
          {
            v24 = v18;
            sub_2205510(&v25);
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
          v23 = sub_D0E280((__int64)v29);
          sub_CFEAE0((__int64)&v25, v23);
          sub_C18B90((__int64)&v30, &v25);
          sub_9955A0(&v25);
          goto LABEL_14;
        case 13LL:
          v9 = sub_D0EA30((__int64)v29);
          sub_E25340(&v30, v9, **(_QWORD **)(a1 + 368));
          goto LABEL_14;
        case 14LL:
          v10 = sub_D0EF40((__int64)v29);
          sub_E34130(&v30, v10, **(_QWORD **)(a1 + 368));
LABEL_14:
          sub_A4FD20(v4, (__int64)&v30);
          if ( v30 <= 1 )
            goto LABEL_11;
          goto LABEL_10;
        default:
          goto LABEL_11;
      }
    }
    sub_E28BE0(&v30, v29, *(_QWORD *)(a1 + 368), *(_QWORD *)(*(_QWORD *)(v1[1] + 40LL) + 8LL));
    if ( v36 )
    {
      sub_A54D20(v4, (int *)&v30);
      if ( v36 )
      {
        if ( v30 > 1 )
LABEL_10:
          sub_A4F8E0((int *)&v30);
      }
    }
LABEL_11:
    sub_E232A0(v29);
  }
LABEL_12:
  *(_DWORD *)(a1 + 832) = 0;
}
