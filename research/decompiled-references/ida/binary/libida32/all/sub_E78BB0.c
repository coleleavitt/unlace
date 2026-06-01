__int64 __fastcall sub_E78BB0(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        signed __int64 a4,
        _BYTE *a5,
        signed __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9)
{
  __int64 v10; // r13
  __int64 *v11; // rdx
  __int64 *v12; // rdx
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // edx
  unsigned __int64 (__fastcall *v17)(__int64); // rax
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  unsigned __int64 (__fastcall *v20)(__int64); // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  unsigned __int64 (__fastcall *v23)(__int64); // rax
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int64 (__fastcall *v26)(__int64); // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-118h]
  __int64 v34; // [rsp+8h] [rbp-110h]
  __int64 v35; // [rsp+10h] [rbp-108h]
  unsigned __int8 *v39; // [rsp+40h] [rbp-D8h] BYREF
  char v40; // [rsp+48h] [rbp-D0h]
  unsigned __int8 *v41[17]; // [rsp+90h] [rbp-88h] BYREF

  v10 = *(_QWORD *)(a7 + 40);
  v35 = *(_QWORD *)(a8 + 40);
  if ( v10 == v35 )
  {
    v11 = (__int64 *)(*(_QWORD *)(a7 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a7 + 80) & 4) != 0 )
    {
      v33 = v11[1];
      v12 = (__int64 *)(*(_QWORD *)(a8 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a8 + 80) & 4) == 0 )
        goto LABEL_4;
    }
    else
    {
      v33 = *v11;
      v12 = (__int64 *)(*(_QWORD *)(a8 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a8 + 80) & 4) == 0 )
      {
LABEL_4:
        v34 = *v12;
        goto LABEL_5;
      }
    }
    v34 = v12[1];
LABEL_5:
    v13 = sub_E747C0(v33);
    v14 = sub_E747C0(v34);
    v15 = 0;
    if ( v13 != v14 )
    {
      sub_FA3370(v41, *a1, *(unsigned int *)(a7 + 24), 2342);
      sub_E74340(v41, a2);
      sub_E74100(v41, a4 == 0);
      sub_AC84E0(v41, a3, a4);
      v23 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL);
      if ( v23 == sub_B4CB70 )
      {
        v24 = *(_DWORD *)(a7 + 56);
        LODWORD(v25) = *(_DWORD *)(a7 + 24);
        if ( !v24 )
          v24 = *(_DWORD *)(a7 + 24);
      }
      else
      {
        v31 = v23(a7);
        v24 = v31;
        v25 = HIDWORD(v31);
      }
      v39 = (unsigned __int8 *)__PAIR64__(v25, v24);
      v40 = 1;
      sub_AC88D0((__int64 *)v41, (__int64 *)&v39);
      sub_E74100(v41, 1);
      sub_FA33B0(&v39, v41);
      sub_AC6300((__int64)v41);
      sub_E74100(&v39, a9);
      sub_E74580(&v39, v10);
      sub_AC60B0(&v39, v33, 8u);
      sub_AC6300((__int64)&v39);
      sub_FA3370(v41, *a1, *(unsigned int *)(a8 + 24), 2524);
      sub_AC84E0(v41, a5, a6);
      v26 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a8 + 16LL);
      if ( v26 == sub_B4CB70 )
      {
        v27 = *(_DWORD *)(a8 + 56);
        LODWORD(v28) = *(_DWORD *)(a8 + 24);
        if ( !v27 )
          v27 = *(_DWORD *)(a8 + 24);
      }
      else
      {
        v32 = v26(a8);
        v27 = v32;
        v28 = HIDWORD(v32);
      }
      v39 = (unsigned __int8 *)__PAIR64__(v28, v27);
      v40 = 1;
      sub_AC88D0((__int64 *)v41, (__int64 *)&v39);
      sub_E74100(v41, 1);
      sub_FA33B0(&v39, v41);
      sub_AC6300((__int64)v41);
      sub_E74100(&v39, a9);
      sub_E74580(&v39, v35);
      sub_AC60B0(&v39, v34, 8u);
      sub_AC6300((__int64)&v39);
      return 1;
    }
    return v15;
  }
  sub_FA3370(v41, *a1, *(unsigned int *)(a7 + 24), 2342);
  sub_E74340(v41, a2);
  sub_E74100(v41, a4 == 0);
  sub_AC84E0(v41, a3, a4);
  v17 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL);
  if ( v17 == sub_B4CB70 )
  {
    v18 = *(_DWORD *)(a7 + 56);
    LODWORD(v19) = *(_DWORD *)(a7 + 24);
    if ( !v18 )
      v18 = *(_DWORD *)(a7 + 24);
  }
  else
  {
    v30 = v17(a7);
    v18 = v30;
    v19 = HIDWORD(v30);
  }
  v39 = (unsigned __int8 *)__PAIR64__(v19, v18);
  v40 = 1;
  sub_AC88D0((__int64 *)v41, (__int64 *)&v39);
  sub_E74100(v41, 0);
  sub_FA33B0(&v39, v41);
  sub_AC6300((__int64)v41);
  sub_E74100(&v39, a9);
  sub_E74580(&v39, v10);
  sub_AC6300((__int64)&v39);
  sub_FA3370(v41, *a1, *(unsigned int *)(a8 + 24), 2524);
  sub_AC84E0(v41, a5, a6);
  v20 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a8 + 16LL);
  if ( v20 == sub_B4CB70 )
  {
    v21 = *(_DWORD *)(a8 + 56);
    LODWORD(v22) = *(_DWORD *)(a8 + 24);
    if ( !v21 )
      v21 = *(_DWORD *)(a8 + 24);
  }
  else
  {
    v29 = v20(a8);
    v21 = v29;
    v22 = HIDWORD(v29);
  }
  v39 = (unsigned __int8 *)__PAIR64__(v22, v21);
  v40 = 1;
  sub_AC88D0((__int64 *)v41, (__int64 *)&v39);
  sub_E74100(v41, 0);
  sub_FA33B0(&v39, v41);
  sub_AC6300((__int64)v41);
  sub_E74100(&v39, a9);
  sub_E74580(&v39, v35);
  sub_AC6300((__int64)&v39);
  return 1;
}

