__int64 __fastcall sub_1ACA350(__int64 *a1, void **a2, double a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  unsigned int v8; // eax
  void *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned __int8 v16; // bl
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rbx
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
  if ( v42 )
  {
    LODWORD(v44) = 64;
    a2 = &v43;
    BYTE4(v44) = 0;
    v43 = nullptr;
    v7 = sub_98E2D0((__int64 *)&v39, (__int64 *)&v43);
    if ( (unsigned int)v44 > 0x40 && v43 )
      operator delete[](v43);
    if ( v7 > 0 )
    {
      v8 = v40;
      v37 = v40;
      if ( v40 > 0x40 )
      {
        sub_2205510(&v36);
        v8 = v37;
        v9 = v36;
      }
      else
      {
        v9 = v39;
        v36 = v39;
      }
      BYTE4(v43) &= ~1u;
      v44 = v9;
      v38 = v41;
      BYTE4(v45) = v41;
      LODWORD(v43) = 2;
      v37 = 0;
      LODWORD(v45) = v8;
      v10 = (_QWORD *)sub_168B6C0((__int64)a1);
      v14 = sub_C09C20(v10, v3, (int *)&v43, v11, v12, v13);
      if ( (unsigned int)v43 > 1 )
        sub_A4F8E0((int *)&v43);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
      goto LABEL_23;
    }
  }
  v15 = sub_EEB7E0(v3, (__int64)a2, a3);
  sub_168B9F0((__int64)&v43, a1, v15, 0xB73u, 0);
  v16 = v42;
  if ( v47 )
  {
    sub_AE9DF0(v46, v42, 2u);
    if ( !v42 )
      goto LABEL_24;
  }
  else
  {
    if ( !v49 )
    {
      if ( v42 )
        goto LABEL_14;
LABEL_24:
      v37 = 1;
      v17 = 1;
      v18 = 0;
      v36 = nullptr;
      v38 = 0;
      goto LABEL_25;
    }
    v25 = sub_168B9E0(&v43);
    v26 = v45;
    if ( v45 )
      v26 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v45 + 32LL))(v45);
    v36 = v26;
    v27 = sub_1587BC0(v25, (__int64 *)&v36, v21, v22, v23, v24);
    sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v48 + 8), v16, 2u);
    if ( !v42 )
      goto LABEL_24;
  }
LABEL_14:
  v17 = v40;
  v37 = v40;
  if ( v40 > 0x40 )
  {
    sub_2205510(&v36);
    v17 = v37;
    v18 = (__int64)v36;
    v38 = v41;
    if ( v41 )
    {
      if ( v37 <= 0x40 )
        goto LABEL_16;
    }
    else if ( v37 <= 0x40 )
    {
      goto LABEL_43;
    }
    v19 = *(_QWORD *)v36;
    goto LABEL_17;
  }
  v18 = (__int64)v39;
  v36 = v39;
  v38 = v41;
  if ( v41 )
  {
LABEL_16:
    v19 = v18;
    goto LABEL_17;
  }
LABEL_43:
  if ( !v17 )
  {
    v19 = 0;
LABEL_17:
    if ( !v47 )
      goto LABEL_18;
    goto LABEL_26;
  }
LABEL_25:
  v19 = v18 << (64 - (unsigned __int8)v17) >> (64 - (unsigned __int8)v17);
  if ( !v47 )
  {
LABEL_18:
    if ( v49 )
    {
      v32 = sub_168B9E0(&v43);
      v33 = (__int64)v45;
      if ( v45 )
        v33 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v45 + 32LL))(v45);
      v35 = v33;
      v34 = sub_1587BC0(v32, &v35, v28, v29, v30, v31);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v48 + 8), v19, 2u);
      v17 = v37;
    }
    goto LABEL_19;
  }
LABEL_26:
  sub_AE9DF0(v46, v19, 2u);
  v17 = v37;
LABEL_19:
  if ( v17 > 0x40 && v36 )
    operator delete[](v36);
  v14 = 1;
  sub_15F7200(&v43);
LABEL_23:
  sub_98E4B0((__int64)&v39);
  return v14;
}
