__int64 __fastcall sub_1AC9F70(__int64 *a1, void **a2, double a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned __int8 v8; // bl
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v14; // r14d
  unsigned int v15; // eax
  void *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  void *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-F0h] BYREF
  void *v36; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v37; // [rsp+18h] [rbp-E0h]
  char v38; // [rsp+1Ch] [rbp-DCh]
  void *v39; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v40; // [rsp+28h] [rbp-D0h]
  char v41; // [rsp+2Ch] [rbp-CCh]
  unsigned __int8 v42; // [rsp+30h] [rbp-C8h]
  void *v43; // [rsp+40h] [rbp-B8h] BYREF
  void *v44; // [rsp+48h] [rbp-B0h]
  void *v45; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v46[11]; // [rsp+60h] [rbp-98h] BYREF
  char v47; // [rsp+B8h] [rbp-40h]
  unsigned int v48; // [rsp+C0h] [rbp-38h]
  char v49; // [rsp+C4h] [rbp-34h]

  v3 = (unsigned __int64)a2;
  v4 = sub_168B6C0((__int64)a1);
  sub_C3EB00((__int64)&v39, (unsigned __int64)a2, v4, nullptr, v5, v6);
  if ( !v42 )
    goto LABEL_2;
  LODWORD(v44) = 64;
  a2 = &v43;
  BYTE4(v44) = 0;
  v43 = nullptr;
  v14 = sub_98E2D0((__int64 *)&v39, (__int64 *)&v43);
  if ( (unsigned int)v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v14 <= 0 )
  {
LABEL_2:
    v7 = sub_EEB7E0(v3, (__int64)a2, a3);
    sub_168B9F0((__int64)&v43, a1, v7, 0xB44u, 0);
    v8 = v42;
    if ( v47 )
    {
      sub_AE9DF0(v46, v42, 2u);
      if ( !v42 )
        goto LABEL_15;
    }
    else
    {
      if ( !v49 )
      {
        if ( v42 )
          goto LABEL_5;
LABEL_15:
        v37 = 1;
        v9 = 1;
        v10 = 0;
        v36 = nullptr;
        v38 = 0;
        goto LABEL_16;
      }
      v25 = sub_168B9E0(&v43);
      v26 = v45;
      if ( v45 )
        v26 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v45 + 32LL))(v45);
      v36 = v26;
      v27 = sub_1587BC0(v25, (__int64 *)&v36, v21, v22, v23, v24);
      sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v48 + 8), v8, 2u);
      if ( !v42 )
        goto LABEL_15;
    }
LABEL_5:
    v9 = v40;
    v37 = v40;
    if ( v40 <= 0x40 )
    {
      v10 = (__int64)v39;
      v36 = v39;
      v38 = v41;
      if ( v41 )
      {
LABEL_7:
        v11 = v10;
        goto LABEL_8;
      }
LABEL_43:
      if ( !v9 )
      {
        v11 = 0;
LABEL_8:
        if ( !v47 )
          goto LABEL_9;
        goto LABEL_17;
      }
LABEL_16:
      v11 = v10 << (64 - (unsigned __int8)v9) >> (64 - (unsigned __int8)v9);
      if ( !v47 )
      {
LABEL_9:
        if ( v49 )
        {
          v32 = sub_168B9E0(&v43);
          v33 = (__int64)v45;
          if ( v45 )
            v33 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v45 + 32LL))(v45);
          v35 = v33;
          v34 = sub_1587BC0(v32, &v35, v28, v29, v30, v31);
          sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v48 + 8), v11, 2u);
          v9 = v37;
        }
        goto LABEL_10;
      }
LABEL_17:
      sub_AE9DF0(v46, v11, 2u);
      v9 = v37;
LABEL_10:
      if ( v9 > 0x40 && v36 )
        operator delete[](v36);
      v12 = 1;
      sub_15F7200(&v43);
      goto LABEL_14;
    }
    sub_2205510(&v36);
    v9 = v37;
    v10 = (__int64)v36;
    v38 = v41;
    if ( v41 )
    {
      if ( v37 <= 0x40 )
        goto LABEL_7;
    }
    else if ( v37 <= 0x40 )
    {
      goto LABEL_43;
    }
    v11 = *(_QWORD *)v36;
    goto LABEL_8;
  }
  v15 = v40;
  v37 = v40;
  if ( v40 > 0x40 )
  {
    sub_2205510(&v36);
    v15 = v37;
    v16 = v36;
  }
  else
  {
    v16 = v39;
    v36 = v39;
  }
  BYTE4(v43) &= ~1u;
  v44 = v16;
  v38 = v41;
  BYTE4(v45) = v41;
  LODWORD(v43) = 2;
  v37 = 0;
  LODWORD(v45) = v15;
  v17 = (_QWORD *)sub_168B6C0((__int64)a1);
  v12 = sub_C09C20(v17, v3, (int *)&v43, v18, v19, v20);
  if ( (unsigned int)v43 > 1 )
    sub_A4F8E0((int *)&v43);
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
LABEL_14:
  sub_98E4B0((__int64)&v39);
  return v12;
}
