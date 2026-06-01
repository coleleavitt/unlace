unsigned __int8 __fastcall sub_A7EB10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v5; // r14d
  int v6; // r13d
  unsigned __int8 result; // al
  __int64 v8; // rax
  char v9; // cl
  void *v10; // rdi
  char v11; // dl
  char v12; // dl
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // cl
  void *v17; // rdi
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
  __int64 v32; // [rsp+0h] [rbp-E8h]
  unsigned int v33; // [rsp+Ch] [rbp-DCh]
  void *v34; // [rsp+18h] [rbp-D0h]
  unsigned int v35; // [rsp+20h] [rbp-C8h]
  char v36; // [rsp+27h] [rbp-C1h]
  __int64 v37; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-A0h]
  __int64 v40; // [rsp+50h] [rbp-98h] BYREF
  __int64 v41; // [rsp+58h] [rbp-90h]
  __int64 v42; // [rsp+60h] [rbp-88h] BYREF
  __int64 v43; // [rsp+68h] [rbp-80h]
  __int64 v44; // [rsp+70h] [rbp-78h] BYREF
  __int64 v45; // [rsp+78h] [rbp-70h]
  __int64 v46; // [rsp+80h] [rbp-68h] BYREF
  char v47; // [rsp+88h] [rbp-60h]
  __int64 v48; // [rsp+90h] [rbp-58h] BYREF
  char v49; // [rsp+98h] [rbp-50h]
  __int64 v50; // [rsp+A0h] [rbp-48h] BYREF
  char v51; // [rsp+A8h] [rbp-40h]

  v3 = a3 + 24;
  v5 = *(_DWORD *)(a2 + 56);
  v6 = *(_DWORD *)(a3 + 56);
  v33 = *(_DWORD *)(a2 + 8);
  v35 = *(_DWORD *)(a3 + 8);
  v36 = *(_BYTE *)(a2 + 20);
  v32 = a2 + 24;
  result = sub_3ED680((__int64)qword_1C7F2C0, a2 + 24, a3 + 24);
  if ( (result & (v6 == v5)) == 0 )
  {
    sub_180C5A0(&v37, "farkas");
    v47 = 2;
    v38 = 1;
    v46 = v37;
    v39 = 0;
    v40 = 1;
    v41 = 0;
    sub_182CBA0(qword_1C7F2C0, &v40);
    BYTE4(v40) &= ~1u;
    LODWORD(v40) = 1;
    v8 = sub_186B270(0x20u);
    v9 = BYTE4(v38);
    v48 = v8;
    v10 = qword_1C7F2C0;
    v49 = 4;
    *(_DWORD *)v8 = v38;
    v11 = *(_BYTE *)(v8 + 4);
    v42 = 1;
    v43 = 0;
    v44 = 1;
    v12 = v9 & 3 | v11 & 0xFC;
    v13 = BYTE4(v40);
    *(_BYTE *)(v8 + 4) = v12;
    v45 = 0;
    *(_QWORD *)(v8 + 8) = v39;
    v39 = 0;
    *(_DWORD *)(v8 + 16) = v40;
    *(_BYTE *)(v8 + 20) = v13 & 3 | *(_BYTE *)(v8 + 20) & 0xFC;
    v14 = v41;
    v41 = 0;
    *(_QWORD *)(v8 + 24) = v14;
    sub_182CBA0(v10, &v44);
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = 1;
    v15 = sub_186B270(0x20u);
    v16 = BYTE4(v42);
    v50 = v15;
    v17 = qword_1C7F2C0;
    v51 = 4;
    *(_DWORD *)v15 = v42;
    v18 = v16 & 3 | *(_BYTE *)(v15 + 4) & 0xFC;
    v19 = BYTE4(v44);
    *(_BYTE *)(v15 + 4) = v18;
    v20 = v43;
    v43 = 0;
    *(_QWORD *)(v15 + 8) = v20;
    *(_DWORD *)(v15 + 16) = v44;
    *(_BYTE *)(v15 + 20) = v19 & 3 | *(_BYTE *)(v15 + 20) & 0xFC;
    v21 = v45;
    v45 = 0;
    *(_QWORD *)(v15 + 24) = v21;
    sub_182CBA0(v17, &v42);
    sub_182CBA0(v17, &v44);
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v38);
    sub_182CBA0(v34, &v40);
    if ( v5 )
    {
      if ( v6 )
      {
        v28 = sub_3ED700((__int64)qword_1C7F2C0, v32, v3);
        v23 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v24 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
        if ( v28 )
          goto LABEL_5;
        goto LABEL_12;
      }
      v25 = sub_3ED700((__int64)qword_1C7F2C0, v32, v3);
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      v27 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
      if ( v25 )
      {
        sub_B6A470(v26, v27, v33 ^ 1, v35 ^ 1, 3, &v46);
        if ( !v36 )
          goto LABEL_9;
        v38 = 1;
        v39 = 0;
        v40 = 1;
        v41 = 0;
        sub_182CBA0(qword_1C7F2C0, &v40);
        BYTE4(v40) &= ~1u;
        LODWORD(v40) = 1;
        sub_3EBB80((__int64)&v42, v3, (__int64)&v38);
        v30 = sub_3ED680((__int64)qword_1C7F2C0, v32, (__int64)&v42);
LABEL_20:
        v31 = v30;
        sub_25A130((char *)&v42);
        sub_25A130((char *)&v38);
        if ( !v31 )
          goto LABEL_9;
        v27 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
        v26 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      }
    }
    else
    {
      if ( !v6 )
      {
        v22 = sub_3ED700((__int64)qword_1C7F2C0, v32, v3);
        v23 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v24 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
        if ( !v22 )
        {
LABEL_5:
          sub_B6A470(v23, v24, v33 ^ 1, v35, 3, &v46);
LABEL_9:
          sub_15D0DF0(&v50);
          sub_15D0DF0(&v48);
          return sub_15D0DF0(&v46);
        }
LABEL_12:
        sub_B6A470(v23, v24, v33, v35 ^ 1, 3, &v46);
        goto LABEL_9;
      }
      v29 = sub_3ED700((__int64)qword_1C7F2C0, v3, v32);
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      v27 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
      if ( v29 )
      {
        sub_B6A470(v26, v27, v33 ^ 1, v35 ^ 1, 3, &v46);
        if ( !v36 )
          goto LABEL_9;
        v38 = 1;
        v39 = 0;
        v40 = 1;
        v41 = 0;
        sub_182CBA0(qword_1C7F2C0, &v40);
        BYTE4(v40) &= ~1u;
        LODWORD(v40) = 1;
        sub_27B340((__int64)&v42, v3, (int *)&v38);
        v30 = sub_3ED680((__int64)qword_1C7F2C0, v32, (__int64)&v42);
        goto LABEL_20;
      }
    }
    sub_B6A470(v26, v27, v33, v35, 3, &v46);
    goto LABEL_9;
  }
  return result;
}

