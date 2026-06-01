__int64 __fastcall sub_D00290(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  int v9; // edx
  __int64 v10; // rdi
  int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // eax
  void *v20; // rax
  __int64 v21; // [rsp-8h] [rbp-110h]
  unsigned __int64 v23; // [rsp+8h] [rbp-100h]
  __int64 v24; // [rsp+10h] [rbp-F8h]
  char v25; // [rsp+1Fh] [rbp-E9h]
  void *v26; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-E0h]
  char v28; // [rsp+2Ch] [rbp-DCh]
  void *v29; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-D0h]
  char v31; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  signed __int64 v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  _BYTE v35[40]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v36; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+88h] [rbp-80h]

  v9 = *a5;
  v10 = *(_QWORD *)(a1 + 176);
  v11 = *a4 + *a5;
  if ( (int)*a4 <= 0 || v9 <= 0 )
  {
    if ( (*a4 & 0x80000000) == 0 || v9 >= 0 || v11 < 0 )
      goto LABEL_4;
  }
  else if ( v11 > 0 )
  {
LABEL_4:
    *(_DWORD *)sub_DFD980(v10, 8) = v11;
    return 1;
  }
  *(_DWORD *)sub_DFD980(v10, 8) = v11;
  sub_CCCC90((__int64)&v36, *a5, a3);
  v14 = *a4;
  BYTE4(v33) = 0;
  LODWORD(v33) = v37;
  ptr = v36;
  sub_CCCC90((__int64)&v36, v14, a3);
  v31 = 0;
  v30 = v37;
  v29 = v36;
  sub_CD4B40((__int64)&v26, (__int64 *)&v29, (__int64)&ptr);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  if ( (unsigned int)v33 > 0x40 && ptr )
    operator delete[](ptr);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24)) )
  {
    v23 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v15 = *(_QWORD *)(v23 + 8);
    v33 = 0;
    v24 = v15;
    ptr = v35;
    v34 = 32;
    v25 = v28;
    sub_21E2D00(&v36, &v26);
    v31 = v25;
    v30 = v37;
    v29 = v36;
    sub_21E7D50((unsigned int)&v29, (unsigned int)&ptr, 10, 1, 0, 1, 1);
    v18 = v21;
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    v19 = sub_BDCD00(v23, (__int64)&ptr, v18, v16, v17);
    sub_E0E4C0(&v36, a1, v19, 2561);
    sub_AC84E0(&v36, ptr, v33);
    sub_AC60B0(&v36, v24, 8u);
    v20 = (void *)sub_EC8B80(v23);
    LOBYTE(v30) = 1;
    v29 = v20;
    sub_AC88D0((__int64 *)&v36, (__int64 *)&v29);
    sub_AC6300((__int64)&v36);
    if ( ptr != v35 )
      free(ptr);
  }
  v12 = sub_CD4D80(a1, a2, (__int64)&v26);
  if ( !(_BYTE)v12 )
    sub_CFFE60(*(_QWORD *)(a1 + 176));
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  return v12;
}

