__int64 __fastcall sub_D4B870(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  int v10; // edi
  __int16 v11; // ax
  __int64 v12; // rdi
  _WORD *v13; // rax
  unsigned __int16 v14; // si
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // eax
  void *v22; // rax
  _WORD *v23; // rax
  __int64 v24; // [rsp-8h] [rbp-120h]
  unsigned __int64 v25; // [rsp+8h] [rbp-110h]
  __int64 v26; // [rsp+10h] [rbp-108h]
  char v27; // [rsp+1Fh] [rbp-F9h]
  __int16 v28; // [rsp+2Eh] [rbp-EAh] BYREF
  void *v29; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-E0h]
  char v31; // [rsp+3Ch] [rbp-DCh]
  void *v32; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-D0h]
  char v34; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  signed __int64 v36; // [rsp+58h] [rbp-C0h]
  __int64 v37; // [rsp+60h] [rbp-B8h]
  _BYTE v38[40]; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int8 *v39; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+98h] [rbp-80h]

  v10 = (__int16)*a4;
  v28 = 0;
  v11 = sub_D4B3B0(v10, (__int16)*a5, &v28);
  v12 = *(_QWORD *)(a1 + 176);
  if ( v11 )
  {
    v13 = (_WORD *)sub_DFD980(v12, 8);
    *v13 = v28;
    sub_CCCC50((__int64)&v39, *a5, a3);
    v14 = *a4;
    BYTE4(v36) = 0;
    LODWORD(v36) = v40;
    ptr = v39;
    sub_CCCC50((__int64)&v39, v14, a3);
    v34 = 0;
    v33 = v40;
    v32 = v39;
    sub_21E5FA0(&v39, &v32, &ptr);
    v31 = 0;
    v30 = v40;
    v29 = v39;
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    if ( (unsigned int)v36 > 0x40 && ptr )
      operator delete[](ptr);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24)) )
    {
      v25 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v17 = *(_QWORD *)(v25 + 8);
      v36 = 0;
      v26 = v17;
      ptr = v38;
      v37 = 32;
      v27 = v31;
      sub_21E2D00(&v39, &v29);
      v34 = v27;
      v33 = v40;
      v32 = v39;
      sub_21E7D50((unsigned int)&v32, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      v20 = v24;
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
      v21 = sub_BDCD00(v25, (__int64)&ptr, v20, v18, v19);
      sub_E0E4C0(&v39, a1, v21, 2561);
      sub_AC84E0(&v39, ptr, v36);
      sub_AC60B0(&v39, v26, 8u);
      v22 = (void *)sub_EC8B80(v25);
      LOBYTE(v33) = 1;
      v32 = v22;
      sub_AC88D0((__int64 *)&v39, (__int64 *)&v32);
      sub_AC6300((__int64)&v39);
      if ( ptr != v38 )
        free(ptr);
    }
    v15 = sub_CD4D80(a1, a2, (__int64)&v29);
    if ( !(_BYTE)v15 )
      sub_CFF630(*(_QWORD *)(a1 + 176));
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
  }
  else
  {
    v23 = (_WORD *)sub_DFD980(v12, 8);
    v15 = 1;
    *v23 = v28;
  }
  return v15;
}

