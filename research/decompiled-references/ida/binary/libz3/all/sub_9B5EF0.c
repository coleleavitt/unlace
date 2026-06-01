unsigned __int8 __fastcall sub_9B5EF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rbx
  int v6; // r12d
  int v7; // r13d
  unsigned __int8 result; // al
  __int64 v9; // rax
  char v10; // cl
  void *v11; // rdi
  char v12; // dl
  char v13; // dl
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rax
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
  bool v31; // bl
  unsigned int v32; // [rsp+Ch] [rbp-DCh]
  unsigned int v33; // [rsp+10h] [rbp-D8h]
  char v34; // [rsp+17h] [rbp-D1h]
  __int64 v35; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h] BYREF
  __int64 v39; // [rsp+58h] [rbp-90h]
  __int64 v40; // [rsp+60h] [rbp-88h] BYREF
  __int64 v41; // [rsp+68h] [rbp-80h]
  __int64 v42; // [rsp+70h] [rbp-78h] BYREF
  __int64 v43; // [rsp+78h] [rbp-70h]
  __int64 v44; // [rsp+80h] [rbp-68h] BYREF
  char v45; // [rsp+88h] [rbp-60h]
  __int64 v46; // [rsp+90h] [rbp-58h] BYREF
  char v47; // [rsp+98h] [rbp-50h]
  __int64 v48; // [rsp+A0h] [rbp-48h] BYREF
  char v49; // [rsp+A8h] [rbp-40h]

  v3 = a3 + 56;
  v5 = a2 + 56;
  v6 = *(_BYTE *)(a3 + 88) & 3;
  v33 = 2 * *(_DWORD *)(a2 + 52);
  v7 = *(_BYTE *)(a2 + 88) & 3;
  v32 = 2 * *(_DWORD *)(a3 + 52);
  v34 = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * *(unsigned int *)(a2 + 8) + 3) & 0x40;
  result = sub_3ED680((__int64)qword_1C7F2C0, a2 + 56, a3 + 56);
  if ( (result & (v6 == v7)) == 0 )
  {
    sub_180C5A0(&v35, "farkas");
    v45 = 2;
    v36 = 1;
    v44 = v35;
    v37 = 0;
    v38 = 1;
    v39 = 0;
    sub_182CBA0(qword_1C7F2C0, &v38);
    BYTE4(v38) &= ~1u;
    LODWORD(v38) = 1;
    v9 = sub_186B270(0x20u);
    v10 = BYTE4(v36);
    v46 = v9;
    v11 = qword_1C7F2C0;
    v47 = 4;
    *(_DWORD *)v9 = v36;
    v12 = *(_BYTE *)(v9 + 4);
    v40 = 1;
    v41 = 0;
    v42 = 1;
    v13 = v10 & 3 | v12 & 0xFC;
    v14 = BYTE4(v38);
    *(_BYTE *)(v9 + 4) = v13;
    v43 = 0;
    *(_QWORD *)(v9 + 8) = v37;
    v37 = 0;
    *(_DWORD *)(v9 + 16) = v38;
    *(_BYTE *)(v9 + 20) = v14 & 3 | *(_BYTE *)(v9 + 20) & 0xFC;
    v15 = v39;
    v39 = 0;
    *(_QWORD *)(v9 + 24) = v15;
    sub_182CBA0(v11, &v42);
    BYTE4(v42) &= ~1u;
    LODWORD(v42) = 1;
    v16 = sub_186B270(0x20u);
    v17 = BYTE4(v40);
    v48 = v16;
    v49 = 4;
    *(_DWORD *)v16 = v40;
    v18 = v17 & 3 | *(_BYTE *)(v16 + 4) & 0xFC;
    v19 = BYTE4(v42);
    *(_BYTE *)(v16 + 4) = v18;
    v20 = v41;
    v41 = 0;
    *(_QWORD *)(v16 + 8) = v20;
    *(_DWORD *)(v16 + 16) = v42;
    *(_BYTE *)(v16 + 20) = v19 & 3 | *(_BYTE *)(v16 + 20) & 0xFC;
    v21 = v43;
    v43 = 0;
    *(_QWORD *)(v16 + 24) = v21;
    sub_25A130((char *)&v40);
    sub_25A130((char *)&v36);
    if ( v7 )
    {
      if ( v6 )
      {
        v28 = sub_3ED700((__int64)qword_1C7F2C0, v5, v3);
        v23 = *(_QWORD *)(a1 + 16);
        v24 = *(unsigned int *)(a1 + 8);
        if ( v28 )
          goto LABEL_5;
        goto LABEL_12;
      }
      v25 = sub_3ED700((__int64)qword_1C7F2C0, v5, v3);
      v26 = *(_QWORD *)(a1 + 16);
      v27 = *(unsigned int *)(a1 + 8);
      if ( v25 )
      {
        sub_B6A470(v26, v27, v33 ^ 1, v32 ^ 1, 3, &v44);
        if ( !v34 )
          goto LABEL_9;
        v36 = 1;
        v37 = 0;
        v38 = 1;
        v39 = 0;
        sub_182CBA0(qword_1C7F2C0, &v38);
        LODWORD(v38) = 1;
        BYTE4(v38) &= ~1u;
        sub_3EBB80((__int64)&v40, v3, (__int64)&v36);
        v30 = sub_3ED680((__int64)qword_1C7F2C0, v5, (__int64)&v40);
LABEL_20:
        v31 = v30;
        sub_25A130((char *)&v40);
        sub_25A130((char *)&v36);
        if ( !v31 )
          goto LABEL_9;
        v27 = *(unsigned int *)(a1 + 8);
        v26 = *(_QWORD *)(a1 + 16);
      }
    }
    else
    {
      if ( !v6 )
      {
        v22 = sub_3ED700((__int64)qword_1C7F2C0, v5, v3);
        v23 = *(_QWORD *)(a1 + 16);
        v24 = *(unsigned int *)(a1 + 8);
        if ( !v22 )
        {
LABEL_5:
          sub_B6A470(v23, v24, v33 ^ 1, v32, 3, &v44);
LABEL_9:
          sub_15D0DF0(&v48);
          sub_15D0DF0(&v46);
          return sub_15D0DF0(&v44);
        }
LABEL_12:
        sub_B6A470(v23, v24, v33, v32 ^ 1, 3, &v44);
        goto LABEL_9;
      }
      v29 = sub_3ED700((__int64)qword_1C7F2C0, v3, v5);
      v26 = *(_QWORD *)(a1 + 16);
      v27 = *(unsigned int *)(a1 + 8);
      if ( v29 )
      {
        sub_B6A470(v26, v27, v33 ^ 1, v32 ^ 1, 3, &v44);
        if ( !v34 )
          goto LABEL_9;
        v36 = 1;
        v37 = 0;
        v38 = 1;
        v39 = 0;
        sub_182CBA0(qword_1C7F2C0, &v38);
        LODWORD(v38) = 1;
        BYTE4(v38) &= ~1u;
        sub_27B340((__int64)&v40, v3, (int *)&v36);
        v30 = sub_3ED680((__int64)qword_1C7F2C0, v5, (__int64)&v40);
        goto LABEL_20;
      }
    }
    sub_B6A470(v26, v27, v33, v32, 3, &v44);
    goto LABEL_9;
  }
  return result;
}

