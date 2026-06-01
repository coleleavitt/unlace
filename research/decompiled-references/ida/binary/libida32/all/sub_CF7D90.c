__int64 __fastcall sub_CF7D90(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  void *v13; // rax
  __int64 v14; // [rsp-8h] [rbp-150h]
  unsigned int v15; // [rsp+8h] [rbp-140h]
  void *v16; // [rsp+10h] [rbp-138h]
  __int64 v17; // [rsp+10h] [rbp-138h]
  char v18; // [rsp+1Fh] [rbp-129h]
  char v19; // [rsp+1Fh] [rbp-129h]
  void *v20; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-120h]
  char v22; // [rsp+2Ch] [rbp-11Ch]
  void *v23; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-110h]
  char v25; // [rsp+3Ch] [rbp-10Ch]
  void *v26; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-100h]
  void *v28; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-E0h]
  char v30; // [rsp+6Ch] [rbp-DCh]
  int v31; // [rsp+70h] [rbp-D8h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  signed __int64 v33; // [rsp+88h] [rbp-C0h]
  __int64 v34; // [rsp+90h] [rbp-B8h]
  _BYTE v35[40]; // [rsp+98h] [rbp-B0h] BYREF
  void *v36; // [rsp+C0h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+C8h] [rbp-80h]
  int v38; // [rsp+D0h] [rbp-78h]

  sub_CE7240((__int64)&v26, *(_QWORD *)(a1 + 176));
  sub_CDABE0((__int64)&v28);
  LOBYTE(v23) = 0;
  sub_21CE460(&ptr, &v26, &v23);
  v3 = v33;
  LODWORD(v33) = 0;
  v38 = v34;
  if ( v29 > 0x40 && v28 )
  {
    v18 = BYTE4(v33);
    v16 = ptr;
    v15 = v3;
    operator delete[](v28);
    v28 = v16;
    v29 = v15;
    v30 = v18;
    v31 = v38;
    if ( (unsigned int)v33 > 0x40 && ptr )
      operator delete[](ptr);
  }
  else
  {
    v28 = ptr;
    v29 = v3;
    v30 = BYTE4(v33);
    v31 = v34;
  }
  v4 = *(_QWORD *)(a1 + 176);
  if ( (_BYTE)v23 )
  {
    sub_CE7D50(v4, (__int64)&v28);
    sub_CD4C20((__int64)&v36, (__int64 *)&v26);
    sub_BF2C20((__int64)&v20, (__int64)&v36);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v5 )
    {
      v7 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v8 = *(_QWORD *)(v7 + 8);
      v33 = 0;
      v34 = 32;
      v17 = v8;
      ptr = v35;
      v19 = v22;
      sub_21E2D00(&v36, &v20);
      v25 = v19;
      v24 = v37;
      v23 = v36;
      sub_21E7D50((unsigned int)&v23, (unsigned int)&ptr, 10, (v31 & 0x20000000) != 0, 0, 1, 1);
      v11 = v14;
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      v12 = sub_BDCD00(v7, (__int64)&ptr, v11, v9, v10);
      sub_E0E4C0(&v36, a1, v12, 2561);
      sub_AC84E0((unsigned __int8 **)&v36, ptr, v33);
      sub_AC60B0((unsigned __int8 **)&v36, v17, 8u);
      v13 = (void *)sub_EC8B80(v7);
      LOBYTE(v24) = 1;
      v23 = v13;
      sub_AC88D0((__int64 *)&v36, (__int64 *)&v23);
      sub_AC6300((__int64)&v36);
      if ( ptr != v35 )
        free(ptr);
    }
    else
    {
      v5 = sub_CD4D80(a1, a2, (__int64)&v20);
    }
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
  }
  else
  {
    sub_CE7D50(v4, (__int64)&v28);
    v5 = 1;
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  return v5;
}

