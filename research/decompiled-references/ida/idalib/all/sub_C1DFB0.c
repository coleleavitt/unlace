char __fastcall sub_C1DFB0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rsi
  bool v12; // zf
  unsigned __int8 *v13; // rdx
  char v14; // r15
  unsigned int v15; // edx
  unsigned __int8 *v16; // rcx
  void **v17; // rsi
  unsigned __int8 *v18; // r12
  char result; // al
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  void *v25; // rax
  char v26; // [rsp+0h] [rbp-E8h]
  unsigned int v27; // [rsp+14h] [rbp-D4h]
  char v28; // [rsp+14h] [rbp-D4h]
  unsigned __int8 *v29; // [rsp+18h] [rbp-D0h]
  void *v30; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-C0h]
  char v32; // [rsp+2Ch] [rbp-BCh]
  void *v33; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-B0h]
  char v35; // [rsp+3Ch] [rbp-ACh]
  void *v36; // [rsp+40h] [rbp-A8h] BYREF
  signed __int64 v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int8 *v39; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-80h]

  if ( *(_BYTE *)(a4 + 12) )
  {
    sub_2206CD0(&v39, a4, a5);
    v10 = a5;
    v11 = a3;
    v12 = *(_BYTE *)(a3 + 12) == 0;
    v35 = 1;
    v34 = v40;
    v33 = v39;
    if ( !v12 )
      goto LABEL_3;
LABEL_26:
    sub_2206B70(&v39, v11, v10);
    v13 = v39;
    BYTE4(v37) = 0;
    LODWORD(v37) = v40;
    v36 = v39;
    if ( v40 <= 0x40 )
      goto LABEL_4;
LABEL_27:
    sub_2205510(&v39);
    goto LABEL_5;
  }
  sub_2206B70(&v39, a4, a5);
  v10 = a5;
  v11 = a3;
  v12 = *(_BYTE *)(a3 + 12) == 0;
  v35 = 0;
  v34 = v40;
  v33 = v39;
  if ( v12 )
    goto LABEL_26;
LABEL_3:
  sub_2206CD0(&v39, v11, v10);
  v13 = v39;
  BYTE4(v37) = 1;
  LODWORD(v37) = v40;
  v36 = v39;
  if ( v40 > 0x40 )
    goto LABEL_27;
LABEL_4:
  v39 = v13;
LABEL_5:
  sub_22059A0(&v39, &v33);
  v32 = 0;
  v31 = v40;
  v30 = v39;
  if ( (unsigned int)v37 > 0x40 && v36 )
    operator delete[](v36);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v14 = v32;
  sub_2206A40(&v39, &v30);
  v15 = v40;
  v16 = v39;
  if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
  {
    v29 = v39;
    v27 = v40;
    operator delete[](*(void **)a6);
    v16 = v29;
    v15 = v27;
  }
  *(_DWORD *)(a6 + 8) = v15;
  v17 = (void **)a6;
  *(_QWORD *)a6 = v16;
  *(_BYTE *)(a6 + 12) = v14;
  sub_2206B70(&v39, a6, a5);
  BYTE4(v37) = 0;
  v36 = v39;
  v18 = v39;
  LODWORD(v37) = v40;
  if ( v40 <= 0x40 )
  {
    result = v39 == v30;
  }
  else
  {
    v17 = &v30;
    result = sub_2205D70(&v36, &v30);
    if ( v18 )
    {
      v28 = result;
      operator delete[](v18);
      result = v28;
    }
  }
  if ( !result )
  {
    if ( *(_BYTE *)(a1 + 915) )
    {
      v20 = sub_A62AC0(*(_QWORD *)(a1 + 16));
      v24 = sub_C00A40(a2, (__int64)v17, v21, v22, v23);
      sub_FC70B0(&v39, v20, v24, 2561);
      sub_C1DEB0(&v36, a6, 10, *(_BYTE *)(a6 + 12) ^ 1, 0, 1u, 1u);
      sub_AEC220(&v39, v36, v37);
      sub_AE9DF0(&v39, *(_QWORD *)(a2 + 8), 8u);
      v25 = (void *)sub_EEC8C0(a2);
      LOBYTE(v34) = 1;
      v33 = v25;
      sub_AEC610((__int64 *)&v39, (__int64 *)&v33);
      if ( v36 != &v38 )
        operator delete(v36);
      sub_AEA040((__int64)&v39);
    }
    result = sub_C1B140(a1, a2, (__int64)&v30, *(_QWORD *)(a2 + 8));
  }
  if ( v31 > 0x40 )
  {
    if ( v30 )
    {
      v26 = result;
      operator delete[](v30);
      return v26;
    }
  }
  return result;
}
