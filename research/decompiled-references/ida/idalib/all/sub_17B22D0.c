__int64 __fastcall sub_17B22D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6, double a7)
{
  char v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 result; // rax
  _WORD *v13; // rbp
  int v14; // eax
  __int64 v15; // rbx
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  void *v24; // rcx
  _QWORD *v25; // rdi
  __int64 *v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp-8h] [rbp-140h]
  int v40; // [rsp+8h] [rbp-130h]
  __int64 v41; // [rsp+8h] [rbp-130h]
  unsigned int v42; // [rsp+8h] [rbp-130h]
  __int64 v43; // [rsp+8h] [rbp-130h]
  __int64 v44; // [rsp+8h] [rbp-130h]
  unsigned int v45; // [rsp+8h] [rbp-130h]
  char v46; // [rsp+17h] [rbp-121h]
  unsigned __int64 v47; // [rsp+18h] [rbp-120h]
  __int64 v48; // [rsp+20h] [rbp-118h] BYREF
  __int64 v49[2]; // [rsp+28h] [rbp-110h] BYREF
  bool v50; // [rsp+3Ah] [rbp-FEh] BYREF
  unsigned __int8 v51; // [rsp+3Bh] [rbp-FDh] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-FCh] BYREF
  void *v53; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-F0h]
  char v55; // [rsp+4Ch] [rbp-ECh]
  void *v56; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-E0h]
  char v58; // [rsp+5Ch] [rbp-DCh]
  _BYTE v59[16]; // [rsp+60h] [rbp-D8h] BYREF
  void *v60; // [rsp+70h] [rbp-C8h] BYREF
  void *v61; // [rsp+78h] [rbp-C0h]
  unsigned int v62; // [rsp+80h] [rbp-B8h]
  char v63; // [rsp+84h] [rbp-B4h]

  v49[0] = a3;
  v48 = a4;
  if ( (*a6 & 0x40000) != 0 )
    return 1;
  v9 = a5;
  v10 = a2;
  v11 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v11 + 17) & 4) != 0 || sub_C1C400(v11, a2, a3, a4, a5) )
  {
    if ( (unsigned __int8)sub_1E534E0(a1, a6, 4) )
      return 1;
    result = (__int64)a6;
    if ( ((*a6 >> 14) & 0xC) != 0 )
      return result;
    v54 = 1;
    v53 = nullptr;
    v55 = 0;
    result = sub_1915F20(a1, a6, &v53, 1);
    if ( result == 1 )
      goto LABEL_33;
    LODWORD(v61) = 64;
    v13 = (_WORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    BYTE4(v61) = 0;
    v60 = nullptr;
    v14 = sub_98E2D0((__int64 *)&v53, (__int64 *)&v60);
    if ( (unsigned int)v61 > 0x40 && v60 )
    {
      v40 = v14;
      operator delete[](v60);
      v14 = v40;
    }
    if ( !v14 && v49[0] )
    {
      sub_168B9F0((__int64)&v60, a1 + 1, a2, 0xCFEu, 0);
      v15 = sub_17AE460((__int64)&v60, v49);
      v56 = (void *)sub_EEC8C0((unsigned __int64)v13, (__int64)v49, a7);
      sub_1587DB0(v15, (__int64 *)&v56);
LABEL_12:
      sub_15F7200(&v60);
      v16 = v54;
      result = 1;
      goto LABEL_13;
    }
    if ( !v55 && sub_179A730((__int64 *)&v53) )
    {
      v26 = a1 + 1;
      if ( v49[0] )
      {
        sub_168B9F0((__int64)&v60, v26, v10, 0xCFDu, 0);
        v27 = (__int64)&v60;
LABEL_39:
        v28 = sub_17AE460(v27, v49);
        sub_C1DEB0(&v56, (int)&v53, 10, v55 ^ 1, 0, 1u, 0);
        sub_1682AF0(v28, (__int64)&v56);
        goto LABEL_40;
      }
      sub_168B9F0((__int64)&v60, v26, v10, 0xBB6u, 0);
      sub_C1DEB0(&v56, (int)&v53, 10, v55 ^ 1, 0, 1u, 0);
      sub_1682AF0((__int64)&v60, (__int64)&v56);
LABEL_40:
      if ( v56 != v59 )
        operator delete(v56);
      goto LABEL_12;
    }
    v20 = sub_C16760((__int64)&v53);
    v42 = v54 - v20;
    if ( (unsigned int)sub_F56FC0((_QWORD *)a1[31]) < v42 )
    {
      sub_168B9F0((__int64)&v60, a1 + 1, a2, 0xCFFu, 0);
      LOBYTE(v52) = v49[0] == 0;
      v27 = sub_1588420((__int64)&v60, (unsigned __int8 *)&v52);
      goto LABEL_39;
    }
    v23 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v23 + 17) & 4) != 0 )
    {
LABEL_25:
      v16 = v54;
      if ( (*v13 & 0x1FF) == 0x3D )
      {
        result = (__int64)v13;
LABEL_13:
        if ( v16 > 0x40 )
        {
          if ( v53 )
          {
            v41 = result;
            operator delete[](v53);
            return v41;
          }
        }
        return result;
      }
      v57 = v54;
      if ( v54 > 0x40 )
      {
        sub_2205510(&v56);
        v16 = v57;
        v24 = v56;
      }
      else
      {
        v24 = v53;
        v56 = v53;
      }
      v25 = (_QWORD *)a1[31];
      v61 = v24;
      v62 = v16;
      BYTE4(v60) &= ~1u;
      v58 = v55;
      LODWORD(v60) = 2;
      v57 = 0;
      v63 = v55;
      result = sub_C09C20(v25, (__int64)v13, (int *)&v60, (__int64)v24, v21, v22);
      if ( (unsigned int)v60 > 1 )
      {
        v43 = result;
        sub_A4F8E0((int *)&v60);
        result = v43;
      }
      if ( v57 > 0x40 && v56 )
      {
        v44 = result;
        operator delete[](v56);
        result = v44;
      }
LABEL_33:
      v16 = v54;
      goto LABEL_13;
    }
    v47 = sub_A97D20(a1[31], v23);
    v45 = sub_AAC1F0(a1[31], v48, v29, v30, v31);
    v46 = sub_9EC640((__int64)&v53, v45);
    if ( v46 )
    {
      v32 = sub_9EC640((__int64)&v53, v47);
      if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
        goto LABEL_61;
      if ( !v32 )
        goto LABEL_46;
    }
    else if ( !sub_9EC640((__int64)&v53, v47) )
    {
      goto LABEL_25;
    }
    if ( !v9 && *(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 340LL) != 10 )
    {
      if ( !v46 )
        goto LABEL_25;
LABEL_46:
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v33 + 16) != 13 || ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) != 0x1B4) && v49[0] )
      {
        sub_168B9F0((__int64)&v60, a1 + 1, v10, 0x19DEu, 0);
        v39 = sub_17AE460((__int64)&v60, v49);
        sub_C1DEB0(&v56, (int)&v53, 10, v55 ^ 1, 0, 1u, 0);
        v34 = sub_1682AF0(v39, (__int64)&v56);
        v52 = v45;
        sub_16CF160(v34, &v52);
        if ( v56 != v59 )
          operator delete(v56);
        sub_15F7200(&v60);
      }
      goto LABEL_25;
    }
    v46 = 0;
    v45 = v47;
LABEL_61:
    v52 = v45;
    sub_168B9F0((__int64)&v60, a1 + 1, v10, 0xD00u, 0);
    v50 = v49[0] != 0;
    v35 = sub_1588420((__int64)&v60, (unsigned __int8 *)&v50);
    v36 = sub_17AE460(v35, v49);
    sub_C1DEB0(&v56, (int)&v53, 10, v55 ^ 1, 0, 1u, 0);
    v37 = sub_1682AF0(v36, (__int64)&v56);
    v51 = v46 ^ 1;
    v38 = sub_1588420(v37, &v51);
    sub_1588370(v38, &v52);
    goto LABEL_40;
  }
  LODWORD(v61) = 3813;
  v60 = off_2BC6A30;
  if ( (unsigned __int8)sub_1E63C20(a1, (unsigned int)a2, v48, 0, &v60) )
    return 1;
  v17 = a1 + 1;
  if ( v49[0] )
  {
    sub_168B9F0((__int64)&v60, v17, v10, 0x10E9u, 0);
    v18 = sub_17AE460((__int64)&v60, v49);
  }
  else
  {
    sub_168B9F0((__int64)&v60, v17, v10, 0x10E8u, 0);
    v18 = (__int64)&v60;
  }
  v19 = sub_1605D30(v18, &v48);
  v56 = (void *)sub_EEC8C0((unsigned __int64)a6, (__int64)&v48, a7);
  sub_1587DB0(v19, (__int64 *)&v56);
  sub_15F7200(&v60);
  return 1;
}
