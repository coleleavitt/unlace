unsigned __int8 __fastcall sub_9B3B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v5; // ebp
  int v6; // r12d
  unsigned __int8 result; // al
  __int64 v8; // rax
  char v9; // cl
  void *v10; // rdi
  char v11; // dl
  char v12; // dl
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi
  char v17; // cl
  char v18; // dl
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rdi
  __int64 v24; // rsi
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rsi
  char v28; // al
  char v29; // al
  bool v30; // al
  bool v31; // r12
  __int64 v32; // [rsp+0h] [rbp-128h]
  unsigned int v33; // [rsp+Ch] [rbp-11Ch]
  void *v34; // [rsp+18h] [rbp-110h]
  unsigned int v35; // [rsp+20h] [rbp-108h]
  char v36; // [rsp+27h] [rbp-101h]
  __int64 v37; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-E8h] BYREF
  char v39; // [rsp+48h] [rbp-E0h]
  __int64 v40; // [rsp+50h] [rbp-D8h] BYREF
  char v41; // [rsp+58h] [rbp-D0h]
  __int64 v42; // [rsp+60h] [rbp-C8h] BYREF
  char v43; // [rsp+68h] [rbp-C0h]
  __int64 v44; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+78h] [rbp-B0h]
  __int64 v46; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+88h] [rbp-A0h]
  __int64 v48; // [rsp+90h] [rbp-98h] BYREF
  __int64 v49; // [rsp+98h] [rbp-90h]
  __int64 v50; // [rsp+A0h] [rbp-88h]
  __int64 v51; // [rsp+A8h] [rbp-80h]
  __int64 v52; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-70h]
  __int64 v54; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-60h]
  char v56[88]; // [rsp+D0h] [rbp-58h] BYREF

  v3 = a3 + 88;
  v32 = a2 + 88;
  v5 = *(_BYTE *)(a3 + 152) & 3;
  v35 = 2 * *(_DWORD *)(a2 + 84);
  v6 = *(_BYTE *)(a2 + 152) & 3;
  v33 = 2 * *(_DWORD *)(a3 + 84);
  v36 = *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * *(unsigned int *)(a2 + 8) + 3) & 0x40;
  result = sub_9B0850(a2 + 88, a3 + 88);
  if ( (result & (v5 == v6)) == 0 )
  {
    sub_180C5A0(&v37, "farkas");
    v39 = 2;
    v44 = 1;
    v38 = v37;
    v45 = 0;
    v46 = 1;
    v47 = 0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    BYTE4(v46) &= ~1u;
    LODWORD(v46) = 1;
    v8 = sub_186B270(0x20u);
    v9 = BYTE4(v44);
    v40 = v8;
    v10 = qword_1C7F2C0;
    v41 = 4;
    *(_DWORD *)v8 = v44;
    v11 = *(_BYTE *)(v8 + 4);
    v52 = 1;
    v53 = 0;
    v54 = 1;
    v12 = v9 & 3 | v11 & 0xFC;
    v13 = BYTE4(v46);
    *(_BYTE *)(v8 + 4) = v12;
    v55 = 0;
    *(_QWORD *)(v8 + 8) = v45;
    v45 = 0;
    *(_DWORD *)(v8 + 16) = v46;
    *(_BYTE *)(v8 + 20) = v13 & 3 | *(_BYTE *)(v8 + 20) & 0xFC;
    v14 = v47;
    v47 = 0;
    *(_QWORD *)(v8 + 24) = v14;
    sub_182CBA0(v10, &v54);
    BYTE4(v54) &= ~1u;
    LODWORD(v54) = 1;
    v15 = sub_186B270(0x20u);
    v16 = qword_1C7F2C0;
    v42 = v15;
    v17 = BYTE4(v52);
    v43 = 4;
    *(_DWORD *)v15 = v52;
    v18 = v17 & 3 | *(_BYTE *)(v15 + 4) & 0xFC;
    v19 = BYTE4(v54);
    *(_BYTE *)(v15 + 4) = v18;
    v20 = v53;
    v53 = 0;
    *(_QWORD *)(v15 + 8) = v20;
    *(_DWORD *)(v15 + 16) = v54;
    *(_BYTE *)(v15 + 20) = v19 & 3 | *(_BYTE *)(v15 + 20) & 0xFC;
    v21 = v55;
    v55 = 0;
    *(_QWORD *)(v15 + 24) = v21;
    sub_182CBA0(v16, &v52);
    sub_182CBA0(v16, &v54);
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    sub_182CBA0(v34, &v46);
    if ( v6 )
    {
      if ( v5 )
      {
        v28 = sub_927C80(v32, v3);
        v23 = *(_QWORD *)(a1 + 16);
        v24 = *(unsigned int *)(a1 + 8);
        if ( v28 )
          goto LABEL_5;
        goto LABEL_12;
      }
      v25 = sub_927C80(v32, v3);
      v26 = *(_QWORD *)(a1 + 16);
      v27 = *(unsigned int *)(a1 + 8);
      if ( v25 )
      {
        sub_B6A470(v26, v27, v35 ^ 1, v33 ^ 1, 3, &v38);
        if ( !v36 )
          goto LABEL_9;
        v44 = 1;
        v45 = 0;
        v46 = 1;
        v47 = 0;
        sub_182CBA0(qword_1C7F2C0, &v46);
        BYTE4(v46) &= ~1u;
        LODWORD(v46) = 1;
        v48 = 0;
        v49 = 0;
        v50 = 1;
        v51 = 0;
        sub_992E80((__int64)&v52, v3, (__int64)&v44);
        v30 = sub_9B0850(v32, (__int64)&v52);
LABEL_20:
        v31 = v30;
        sub_25A130(v56);
        sub_25A130((char *)&v52);
        sub_25A130((char *)&v48);
        sub_25A130((char *)&v44);
        if ( !v31 )
          goto LABEL_9;
        v27 = *(unsigned int *)(a1 + 8);
        v26 = *(_QWORD *)(a1 + 16);
      }
    }
    else
    {
      if ( !v5 )
      {
        v22 = sub_927C80(v32, v3);
        v23 = *(_QWORD *)(a1 + 16);
        v24 = *(unsigned int *)(a1 + 8);
        if ( !v22 )
        {
LABEL_5:
          sub_B6A470(v23, v24, v35 ^ 1, v33, 3, &v38);
LABEL_9:
          sub_15D0DF0(&v42);
          sub_15D0DF0(&v40);
          return sub_15D0DF0(&v38);
        }
LABEL_12:
        sub_B6A470(v23, v24, v35, v33 ^ 1, 3, &v38);
        goto LABEL_9;
      }
      v29 = sub_927C80(v3, v32);
      v26 = *(_QWORD *)(a1 + 16);
      v27 = *(unsigned int *)(a1 + 8);
      if ( v29 )
      {
        sub_B6A470(v26, v27, v35 ^ 1, v33 ^ 1, 3, &v38);
        if ( !v36 )
          goto LABEL_9;
        v44 = 1;
        v45 = 0;
        v46 = 1;
        v47 = 0;
        sub_182CBA0(qword_1C7F2C0, &v46);
        BYTE4(v46) &= ~1u;
        LODWORD(v46) = 1;
        v48 = 0;
        v49 = 0;
        v50 = 1;
        v51 = 0;
        sub_89A7E0((__int64)&v52, v3, (__int64)&v44);
        v30 = sub_9B0850(v32, (__int64)&v52);
        goto LABEL_20;
      }
    }
    sub_B6A470(v26, v27, v35, v33, 3, &v38);
    goto LABEL_9;
  }
  return result;
}

