__int64 __fastcall sub_11088F0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rax
  __int64 v5; // rdx
  _BYTE *v6; // r13
  unsigned __int64 v7; // r15
  _BYTE *v8; // r14
  size_t v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  _BYTE *v13; // rdx
  _BYTE *v14; // rsi
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdx
  _BYTE *v22; // r15
  __int64 v23; // r13
  _BYTE *v24; // rsi
  _BYTE *v25; // rsi
  _BYTE *v26; // rdi
  size_t v27; // rax
  unsigned __int64 v28; // r13
  size_t v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  __int64 v35; // [rsp+0h] [rbp-128h]
  char *v36; // [rsp+18h] [rbp-110h]
  unsigned __int64 v37; // [rsp+28h] [rbp-100h] BYREF
  void *v38; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-F0h]
  _BYTE v40[16]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE *v41[2]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v42[16]; // [rsp+60h] [rbp-C8h] BYREF
  void *v43[2]; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v44[16]; // [rsp+80h] [rbp-A8h] BYREF
  void *v45; // [rsp+90h] [rbp-98h] BYREF
  __int64 v46; // [rsp+98h] [rbp-90h]
  _BYTE v47[16]; // [rsp+A0h] [rbp-88h] BYREF
  void *v48; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+B8h] [rbp-70h]
  _BYTE v50[104]; // [rsp+C0h] [rbp-68h] BYREF

  v4 = (_BYTE *)sub_2266D20(a2, a3, 0);
  v38 = v40;
  sub_1107830(&v38, v4, (__int64)&v4[v5]);
  v48 = v38;
  v49 = v39;
  v6 = sub_11079E0((__int64)v38, v39, &v37);
  if ( v6 )
    goto LABEL_2;
  v27 = j__strlen(".exe");
  v28 = v49;
  if ( v27 <= v49 && (!v27 || !memcmp((char *)v48 + v49 - v27, ".exe", v27)) )
  {
    v34 = v28 - 4;
    if ( v28 < 4 )
      v34 = v28;
    v49 = v34;
    v6 = sub_11079E0((__int64)v48, v34, &v37);
    if ( v6 )
      goto LABEL_2;
    v28 = v49;
  }
  v29 = j__strlen("0123456789.");
  v30 = sub_22233F0(&v48, "0123456789.", v29, -1) + 1;
  if ( v30 > v49 )
    v30 = v49;
  v31 = v49 - v28 + v30;
  if ( v31 > v49 )
    v31 = v49;
  v49 = v31;
  v6 = sub_11079E0((__int64)v48, v31, &v37);
  if ( v6 )
    goto LABEL_2;
  v32 = v49;
  if ( v49 )
  {
    v33 = v49 - 1;
    if ( *((char *)v48 + v49 - 1) == 45 )
      goto LABEL_57;
    if ( v49 == 1 )
    {
      v32 = 1;
      goto LABEL_51;
    }
    v33 = v49 - 2;
    if ( *((char *)v48 + v49 - 2) == 45 )
    {
LABEL_57:
      if ( v49 > v33 )
        v32 = v33;
    }
    else
    {
      while ( v33 )
      {
        --v33;
        if ( *((_BYTE *)v48 + v33) == 45 )
          goto LABEL_57;
      }
    }
  }
LABEL_51:
  v49 = v32;
  v6 = sub_11079E0((__int64)v48, v32, &v37);
  if ( !v6 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_OWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 48) = 0;
    *(_OWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 32) = a1 + 48;
    *(_QWORD *)(a1 + 40) = 0;
    goto LABEL_13;
  }
LABEL_2:
  v7 = v39;
  v8 = v38;
  if ( v39 )
  {
    v9 = strlen(*(const char **)v6);
    v10 = v37;
    v11 = v37 + v9;
    if ( v37 > v7 - 1 )
      v10 = v7 - 1;
    while ( v8[v10] != 45 )
    {
      if ( --v10 == -1 )
      {
        v12 = *((_QWORD *)v6 + 1);
        if ( v11 > v7 )
          v11 = v7;
        v48 = v50;
        v13 = &v8[v11];
        goto LABEL_11;
      }
    }
    v18 = v10 + 1;
    v19 = v11 - 1 - v10;
    if ( v10 + 1 > v7 )
      std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
    v20 = v7 - v18;
    if ( v20 > v19 )
      v20 = v19;
    v41[0] = v42;
    sub_1107830(v41, &v8[v18], (__int64)&v8[v18 + v20]);
    v21 = v10;
    v22 = v38;
    v43[0] = v44;
    if ( v39 <= v10 )
      v21 = v39;
    v43[1] = nullptr;
    v44[0] = 0;
    v45 = v47;
    if ( v38 )
    {
      v36 = (char *)v38 + v21;
      sub_1107830(&v45, v38, (__int64)v38 + v21);
    }
    else
    {
      v46 = 0;
      v47[0] = 0;
      v36 = (char *)v21;
    }
    sub_2296190(&v48, &v45);
    if ( v45 != v47 )
      operator delete(v45);
    v35 = sub_20FFC00(&v48, v43);
    if ( v48 != v50 )
      operator delete(v48);
    v45 = v47;
    sub_1107830(&v45, v22, (__int64)v36);
    v48 = v50;
    sub_11078F0(&v48, v41[0], (__int64)&v41[0][(unsigned __int64)v41[1]]);
    v23 = *((_QWORD *)v6 + 1);
    v24 = v45;
    *(_QWORD *)a1 = a1 + 16;
    sub_11078F0((_QWORD *)a1, v24, (__int64)&v24[v46]);
    v25 = v48;
    *(_QWORD *)(a1 + 32) = a1 + 48;
    sub_11078F0((_QWORD *)(a1 + 32), v25, (__int64)&v25[v49]);
    *(_QWORD *)(a1 + 64) = v23;
    v26 = v48;
    *(_BYTE *)(a1 + 72) = v35 != 0;
    if ( v26 != v50 )
      operator delete(v26);
    if ( v45 != v47 )
      operator delete(v45);
    if ( v43[0] != v44 )
      operator delete(v43[0]);
    v16 = v41[0];
    if ( v41[0] == v42 )
      goto LABEL_13;
LABEL_12:
    operator delete(v16);
    goto LABEL_13;
  }
  v12 = *((_QWORD *)v6 + 1);
  v13 = v38;
  v48 = v50;
LABEL_11:
  sub_1107830(&v48, v8, (__int64)v13);
  v14 = v48;
  v15 = v49;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_11078F0((_QWORD *)(a1 + 32), v14, (__int64)&v14[v15]);
  *(_QWORD *)(a1 + 64) = v12;
  v16 = v48;
  *(_BYTE *)(a1 + 72) = 0;
  if ( v16 != v50 )
    goto LABEL_12;
LABEL_13:
  if ( v38 != v40 )
    operator delete(v38);
  return a1;
}

