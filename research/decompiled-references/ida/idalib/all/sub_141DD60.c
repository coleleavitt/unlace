void __fastcall sub_141DD60(__int64 *a1, int *a2)
{
  char v3; // r14
  char v4; // r15
  unsigned int v5; // eax
  char v6; // r9
  char v7; // r9
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // edx
  __int64 v11; // rsi
  int v12; // ecx
  unsigned int v13; // r13d
  __int64 v14; // rbp
  __int64 v15; // rsi
  unsigned int v16; // r12d
  __int64 *v17; // rdi
  void (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // r14
  __int64 (__fastcall *v19)(__int64); // rax
  unsigned int v20; // eax
  char v21; // r9
  void *v22; // rsi
  size_t v23; // rdx
  unsigned int v24; // ecx
  __int64 *v25; // r14
  char v26; // al
  __int64 v27; // [rsp-8h] [rbp-3C0h]
  char v28; // [rsp+8h] [rbp-3B0h]
  int v29; // [rsp+8h] [rbp-3B0h]
  char v30; // [rsp+10h] [rbp-3A8h]
  unsigned int v31; // [rsp+10h] [rbp-3A8h]
  unsigned int v32; // [rsp+10h] [rbp-3A8h]
  char v33; // [rsp+10h] [rbp-3A8h]
  char v34; // [rsp+18h] [rbp-3A0h]
  char v35; // [rsp+1Fh] [rbp-399h]
  unsigned int v36; // [rsp+28h] [rbp-390h] BYREF
  unsigned int v37; // [rsp+2Ch] [rbp-38Ch] BYREF
  int v38[4]; // [rsp+30h] [rbp-388h] BYREF
  __int16 v39; // [rsp+40h] [rbp-378h]
  char v40; // [rsp+42h] [rbp-376h]
  int v41[4]; // [rsp+50h] [rbp-368h] BYREF
  __int16 v42; // [rsp+60h] [rbp-358h]
  __int64 v43; // [rsp+70h] [rbp-348h] BYREF
  int v44; // [rsp+84h] [rbp-334h]
  unsigned int v45[20]; // [rsp+90h] [rbp-328h] BYREF
  unsigned int v46[12]; // [rsp+E0h] [rbp-2D8h] BYREF
  void *v47; // [rsp+110h] [rbp-2A8h]
  _BYTE v48[512]; // [rsp+128h] [rbp-290h] BYREF
  __int64 v49; // [rsp+328h] [rbp-90h]
  void *ptr; // [rsp+330h] [rbp-88h]
  _BYTE v51[45]; // [rsp+348h] [rbp-70h] BYREF
  char v52; // [rsp+375h] [rbp-43h]

  if ( (unsigned __int8)sub_141A960((__int64)a2, &v36, 1152, a1, 1u) )
    return;
  sub_14634E0(a1, v38);
  if ( v39 == 2 )
  {
    sub_FC70B0((__int64)v46, a1[6], v38[0], 1240);
    sub_AEA040((__int64)v46);
    v13 = sub_1021680(a1[11], *a2);
    sub_1021710(a1[11], *a2, v36, 0xFFFFFFFF, 0, 0, v13);
    v14 = a1[149];
    v15 = v27;
    if ( !v14 )
      return;
    v16 = 3;
    goto LABEL_30;
  }
  if ( v39 != 14 )
  {
    v11 = a1[6];
    v12 = 1149;
    goto LABEL_26;
  }
  if ( (v40 & 0x20) != 0 )
  {
    v11 = a1[6];
    v12 = 29;
LABEL_26:
    sub_FC70B0((__int64)v46, v11, v38[0], v12);
    sub_AEA040((__int64)v46);
    sub_141A820((__int64)a1, v46);
    return;
  }
  sub_13EE5A0((__int64)v46, v38, 1, a1, 0);
  if ( v51[44] )
  {
    sub_141A820((__int64)a1, v45);
    goto LABEL_21;
  }
  v3 = v52;
  if ( v52 )
  {
    v8 = a1[6];
    v9 = 1149;
    v10 = v38[0];
    goto LABEL_20;
  }
  sub_14634E0(a1, v41);
  if ( v42 == 2 )
  {
    v34 = 0;
    v4 = 0;
LABEL_36:
    v13 = 0;
    v28 = 0;
    v21 = sub_141A660((__int64 *)a1[11], *a2);
    if ( v21 )
    {
      v22 = v47;
      v23 = (unsigned int)(v49 - (_DWORD)v47);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  v4 = sub_141A960((__int64)v41, &v37, 1150, a1, 0);
  if ( v4 )
    goto LABEL_21;
  v5 = v37;
  if ( v37 == 1 )
  {
    sub_14634E0(a1, v41);
    if ( v42 != 2 )
    {
      v6 = sub_141A960((__int64)v41, &v37, 1150, a1, 0);
      if ( v6 )
        goto LABEL_21;
      v5 = v37;
      v34 = 1;
      v4 = 1;
      v28 = 0;
      goto LABEL_13;
    }
    v34 = 1;
    v4 = 1;
    goto LABEL_36;
  }
  if ( v37 != 2 )
  {
    v34 = 0;
    v6 = 0;
    v28 = 0;
LABEL_13:
    if ( v5 != 3 )
    {
LABEL_18:
      v8 = a1[6];
      v9 = 1150;
LABEL_19:
      v10 = v41[0];
LABEL_20:
      sub_FC70B0((__int64)v45, v8, v10, v9);
      sub_AEA040((__int64)v45);
      sub_141A820((__int64)a1, v45);
      goto LABEL_21;
    }
    v35 = v6;
    sub_14634E0(a1, v41);
    v7 = v35;
    if ( v42 == 2 )
    {
      v13 = 1;
      goto LABEL_58;
    }
    if ( !(unsigned __int8)sub_141A960((__int64)v41, &v37, 1150, a1, 0) )
    {
      if ( v37 != 4 )
        goto LABEL_18;
      sub_14634E0(a1, v41);
      v7 = v35;
      if ( v42 != 2 )
        goto LABEL_18;
      v13 = 2;
LABEL_58:
      v33 = v7;
      v26 = sub_141A660((__int64 *)a1[11], *a2);
      v21 = v33;
      if ( v26 )
        goto LABEL_38;
      goto LABEL_37;
    }
LABEL_21:
    if ( ptr != v51 )
      free(ptr);
    if ( v47 != v48 )
      free(v47);
    return;
  }
  v25 = (__int64 *)a1[11];
  v29 = sub_10214C0((__int64)v25, v41[0]);
  sub_1022900((__int64)&v43, v25, v41[0], 1);
  if ( !v43 )
    goto LABEL_21;
  if ( !v44 || v29 != (unsigned int)sub_10214C0((__int64)v25, v44) )
  {
    v8 = a1[6];
    v9 = 1151;
    goto LABEL_19;
  }
  sub_14634E0(a1, v41);
  if ( v42 != 2 )
  {
    v4 = sub_141A960((__int64)v41, &v37, 1150, a1, 0);
    if ( v4 )
      goto LABEL_21;
    v5 = v37;
    v34 = 0;
    v6 = 1;
    v28 = 1;
    goto LABEL_13;
  }
  if ( (unsigned __int8)sub_141A660((__int64 *)a1[11], *a2) )
  {
    v22 = v47;
    v13 = 0;
    v34 = 0;
    v28 = 1;
    v23 = (unsigned int)(v49 - (_DWORD)v47);
LABEL_39:
    v3 = 1;
    v24 = -1;
    if ( !v23 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v4 = 0;
  v34 = 0;
  v13 = 0;
  v21 = 1;
  v28 = 1;
LABEL_37:
  v30 = v21;
  sub_FC70B0((__int64)v45, a1[6], v38[0], 1240);
  sub_AEA040((__int64)v45);
  v21 = v30;
LABEL_38:
  v22 = v47;
  v23 = (unsigned int)(v49 - (_DWORD)v47);
  if ( v21 )
    goto LABEL_39;
  v3 = 0;
LABEL_40:
  v24 = sub_1022E90(a1[11], v22, v23);
LABEL_41:
  if ( ptr != v51 )
  {
    v31 = v24;
    free(ptr);
    v24 = v31;
  }
  if ( v47 != v48 )
  {
    v32 = v24;
    free(v47);
    v24 = v32;
  }
  v15 = (unsigned int)*a2;
  sub_1021710(a1[11], v15, v36, v24, v34, v28, v13);
  v14 = a1[149];
  if ( v14 )
  {
    v16 = 0;
    if ( !v4 )
      v16 = v3 == 0 ? 3 : 1;
LABEL_30:
    v17 = (__int64 *)a1[140];
    v18 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 16LL);
    v19 = *(__int64 (__fastcall **)(__int64))(*v17 + 32);
    if ( v19 == sub_13D0890 )
      v20 = sub_13D1500((__int64)v17, v17[19], 1);
    else
      v20 = ((__int64 (__fastcall *)(__int64 *, __int64))v19)(v17, v15);
    v18(v14, v20, v16, v13, 0);
  }
}
