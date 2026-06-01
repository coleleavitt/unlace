__int64 __fastcall sub_DBEB00(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  void *v4; // rbp
  __int64 v5; // r14
  void *v6; // r13
  __int16 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebp
  _QWORD *v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rdx
  _QWORD *v15; // rdi
  _QWORD **v16; // rdi
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // eax
  void *v23; // rax
  __int64 v24; // [rsp-8h] [rbp-110h]
  unsigned __int64 v25; // [rsp+8h] [rbp-100h]
  __int64 v26; // [rsp+10h] [rbp-F8h]
  char v27; // [rsp+1Fh] [rbp-E9h]
  void *v28; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-E0h]
  char v30; // [rsp+2Ch] [rbp-DCh]
  void *v31; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-D0h]
  char v33; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  signed __int64 v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h]
  _BYTE v37[40]; // [rsp+58h] [rbp-B0h] BYREF
  void *v38; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-80h]
  char v40; // [rsp+8Ch] [rbp-7Ch]

  v3 = a1[22];
  v4 = (void *)*(unsigned __int16 *)sub_DFDA20(v3, 8);
  sub_DFDA50(v3, 8);
  v5 = a1[22];
  v6 = (void *)*(unsigned __int16 *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v7 = (_WORD)v6 + (_WORD)v4;
  if ( (__int16)v6 <= 0 || (__int16)v4 <= 0 )
  {
    v8 = a1[22];
    if ( (__int16)v6 >= 0 || (__int16)v4 >= 0 || v7 < 0 )
      goto LABEL_4;
  }
  else
  {
    v8 = a1[22];
    if ( v7 > 0 )
    {
LABEL_4:
      v9 = 1;
      *(_WORD *)sub_DFD980(v8, 8) = v7;
      return v9;
    }
  }
  *(_WORD *)sub_DFD980(v8, 8) = (_WORD)v6 + (_WORD)v4;
  v38 = v4;
  v39 = 16;
  sub_21E30A0(&v31, &v38, 17);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  BYTE4(v35) = 0;
  LODWORD(v35) = v32;
  v39 = 16;
  ptr = v31;
  v38 = v6;
  sub_21E30A0(&v28, &v38, 17);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  v33 = 0;
  v32 = v29;
  v31 = v28;
  v39 = v29;
  if ( v29 > 0x40 )
    sub_21E17D0(&v38);
  else
    v38 = v28;
  sub_21E1C60(&v38, &ptr);
  v30 = 0;
  v29 = v39;
  v28 = v38;
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  if ( (unsigned int)v35 > 0x40 && ptr )
    operator delete[](ptr);
  v11 = (_QWORD *)a1[3];
  v12 = *(__int64 (__fastcall **)(__int64))(*v11 + 16LL);
  if ( v12 != sub_C8A730 )
    goto LABEL_40;
  v13 = (_QWORD *)v11[3];
  v14 = *(__int64 (**)(void))(*v13 + 16LL);
  if ( (char *)v14 != (char *)v12 )
  {
LABEL_41:
    v17 = v14();
    goto LABEL_28;
  }
  v15 = (_QWORD *)v13[3];
  v12 = *(__int64 (__fastcall **)(__int64))(*v15 + 16LL);
  if ( (char *)v12 != (char *)v14 )
  {
LABEL_40:
    v17 = ((__int64 (*)(void))v12)();
    goto LABEL_28;
  }
  v16 = (_QWORD **)v15[3];
  v14 = (__int64 (*)(void))(*v16)[2];
  if ( (char *)v14 != (char *)v12 )
    goto LABEL_41;
  v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 16LL))(v16[3]);
LABEL_28:
  if ( v17 )
  {
    v25 = sub_DFB220(a1[50]);
    v18 = *(_QWORD *)(v25 + 8);
    v35 = 0;
    v26 = v18;
    ptr = v37;
    v36 = 32;
    v27 = v30;
    sub_21E2D00(&v31, &v28);
    v39 = v32;
    v40 = v27;
    v38 = v31;
    sub_21E7D50((unsigned int)&v38, (unsigned int)&ptr, 10, 1, 0, 1, 1);
    v21 = v24;
    if ( v39 > 0x40 && v38 )
      operator delete[](v38);
    v22 = sub_BDCD00(v25, (__int64)&ptr, v21, v19, v20);
    sub_E0E4C0(&v38, a1, v22, 2561);
    sub_AC84E0((unsigned __int8 **)&v38, ptr, v35);
    sub_AC60B0((unsigned __int8 **)&v38, v26, 8u);
    v23 = (void *)sub_EC8B80(v25);
    LOBYTE(v32) = 1;
    v31 = v23;
    sub_AC88D0((__int64 *)&v38, (__int64 *)&v31);
    sub_AC6300((__int64)&v38);
    if ( ptr != v37 )
      free(ptr);
  }
  v9 = sub_D9D900((__int64)a1, a2, (__int64)&v28);
  if ( !(_BYTE)v9 )
    sub_CFF630(a1[22]);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v9;
}

