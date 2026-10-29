unsigned __int64 __fastcall sub_1E71AF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  _DWORD *v8; // r13
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 *v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-138h]
  __int64 v27; // [rsp+8h] [rbp-130h] BYREF
  int v28; // [rsp+1Ch] [rbp-11Ch] BYREF
  __int64 v29; // [rsp+20h] [rbp-118h] BYREF
  __int64 v30; // [rsp+28h] [rbp-110h] BYREF
  __int64 *v31; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-100h]
  char v33; // [rsp+40h] [rbp-F8h]
  __int64 *v34; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-E0h]
  char v36; // [rsp+60h] [rbp-D8h]
  _BYTE v37[32]; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int8 *v38[11]; // [rsp+90h] [rbp-A8h] BYREF
  char v39; // [rsp+E8h] [rbp-50h]
  char v40; // [rsp+F4h] [rbp-44h]

  v8 = (_DWORD *)a3;
  v10 = a5;
  v27 = a2;
  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v11 + 17) & 4) != 0 )
    goto LABEL_2;
  if ( !sub_F61040(v11, a2, a3, (__int64)a4, a5, a6) )
    goto LABEL_15;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  a3 = *(unsigned __int8 *)(v13 + 16);
  if ( (_BYTE)a3 != 13 )
  {
    if ( (_BYTE)a3 != 47 )
      goto LABEL_13;
LABEL_15:
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v10, 0xC74u, 0);
    sub_1605D30((__int64)v37, &v27);
    sub_15F7200(v37);
    return 0;
  }
  if ( ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B4 )
    goto LABEL_15;
LABEL_13:
  v11 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_2:
  if ( *(_BYTE *)(v11 + 16) == 10
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 10
    && (v11 = sub_F63050(v11, a2, a3, a4)) != 0 )
  {
    if ( (unsigned __int8)sub_1E67DC0(a1, v10, v11, 1u) )
      return 0;
  }
  if ( ((*v8 >> 14) & 4) != 0 || (*a4 >> 14) & 4 | (*a4 >> 14) & 8 | (*v8 >> 14) & 8 )
    return sub_A76F70(*(_QWORD *)(a1 + 248), v27, (__int64)v8, (__int64)a4, v10);
  sub_C3EB00((__int64)&v31, (unsigned __int64)v8, *(_QWORD *)(a1 + 248), nullptr, a5, a6);
  sub_C3EB00((__int64)&v34, (unsigned __int64)a4, *(_QWORD *)(a1 + 248), nullptr, v14, v15);
  v29 = sub_EEC8C0((unsigned __int64)v8, (__int64)a4, a7);
  v30 = sub_EEC8C0((unsigned __int64)a4, (__int64)a4, a7);
  if ( !v33 )
  {
    v16 = (__int64 *)(a1 + 8);
    if ( !v36 )
    {
      sub_168B9F0((__int64)v37, v16, v10, 0xC57u, 0);
      if ( v39 )
      {
        sub_AE9DF0(v38, (__int64)"matrix_type", 1u);
      }
      else if ( v40 )
      {
        sub_1E63E10((__int64)v37, (__int64)"matrix_type");
      }
      v28 = 1;
      v23 = sub_180A710((__int64)v37, &v28);
      v17 = sub_15884C0(v23, &v29);
      v18 = &v30;
      goto LABEL_23;
    }
    sub_168B9F0((__int64)v37, v16, v10, 0xC57u, 0);
    if ( v39 )
    {
      sub_AE9DF0(v38, (__int64)"matrix_type", 1u);
    }
    else if ( v40 )
    {
      sub_1E63E10((__int64)v37, (__int64)"matrix_type");
    }
    v28 = 1;
    v17 = sub_180A710((__int64)v37, &v28);
    goto LABEL_22;
  }
  if ( !v36 )
  {
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v10, 0xC57u, 0);
    if ( v39 )
    {
      sub_AE9DF0(v38, (__int64)"matrix_type", 1u);
    }
    else if ( v40 )
    {
      sub_1E63E10((__int64)v37, (__int64)"matrix_type");
    }
    v28 = 1;
    v17 = sub_180A710((__int64)v37, &v28);
    v18 = &v30;
    goto LABEL_23;
  }
  LODWORD(v20) = (_DWORD)v31;
  if ( v32 > 0x40 )
    v20 = *v31;
  LODWORD(v21) = (_DWORD)v34;
  if ( v35 > 0x40 )
    v21 = *v34;
  if ( !((unsigned int)v21 | (unsigned int)v20) )
  {
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v10, 0xCACu, 0);
    v24 = sub_162BBD0((__int64)v37, (__int64)"matrix");
    v17 = sub_15884C0(v24, &v29);
    v18 = &v30;
    goto LABEL_23;
  }
  if ( !(_DWORD)v20 )
  {
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v10, 0xCACu, 0);
    v17 = sub_162BBD0((__int64)v37, (__int64)"matrix");
LABEL_22:
    v18 = &v29;
LABEL_23:
    sub_15884C0(v17, v18);
    goto LABEL_24;
  }
  if ( !(_DWORD)v21 )
  {
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v10, 0xCACu, 0);
    v17 = sub_162BBD0((__int64)v37, (__int64)"matrix");
    v18 = &v30;
    goto LABEL_23;
  }
  if ( (unsigned __int64)(unsigned int)v20 - 1 > 0xFFFFE )
  {
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v10, 0xC9Au, 0);
    v25 = sub_15884C0((__int64)v37, &v29);
    if ( *(_BYTE *)(v25 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v25 + 32), (__int64)"matrix row", 1u);
    }
    else if ( *(_BYTE *)(v25 + 132) )
    {
      sub_1E63E10(v25, (__int64)"matrix row");
    }
  }
  else
  {
    if ( (unsigned __int64)(unsigned int)v21 - 1 <= 0xFFFFE )
    {
      v19 = sub_A76DD0(*(_QWORD *)(a1 + 248), v27, v20, v21);
      goto LABEL_25;
    }
    sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v10, 0xC9Au, 0);
    v22 = sub_15884C0((__int64)v37, &v30);
    if ( *(_BYTE *)(v22 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v22 + 32), (__int64)"matrix column", 1u);
    }
    else if ( *(_BYTE *)(v22 + 132) )
    {
      sub_1E63E10(v22, (__int64)"matrix column");
    }
  }
LABEL_24:
  sub_15F7200(v37);
  v19 = 0;
LABEL_25:
  v26 = v19;
  sub_98E4B0((__int64)&v34);
  sub_98E4B0((__int64)&v31);
  return v26;
}
