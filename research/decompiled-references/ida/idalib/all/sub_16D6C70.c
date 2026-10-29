void __fastcall sub_16D6C70(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, double a7)
{
  char v7; // bl
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  _WORD *v19; // r12
  __int16 *v20; // r13
  unsigned __int8 v21; // r14
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int16 v37; // ax
  __int64 *v38; // [rsp+0h] [rbp-168h]
  __int64 v39; // [rsp+8h] [rbp-160h]
  unsigned __int8 v40; // [rsp+17h] [rbp-151h] BYREF
  __int64 v41; // [rsp+18h] [rbp-150h] BYREF
  __int64 v42; // [rsp+20h] [rbp-148h] BYREF
  char v43; // [rsp+28h] [rbp-140h]
  __int64 v44; // [rsp+2Ch] [rbp-13Ch]
  char v45; // [rsp+34h] [rbp-134h]
  void *v46; // [rsp+38h] [rbp-130h]
  __int64 v47; // [rsp+40h] [rbp-128h]
  _BYTE v48[24]; // [rsp+48h] [rbp-120h] BYREF
  __int64 v49; // [rsp+60h] [rbp-108h] BYREF
  char v50; // [rsp+68h] [rbp-100h]
  __int64 v51; // [rsp+6Ch] [rbp-FCh]
  char v52; // [rsp+74h] [rbp-F4h]
  void *v53; // [rsp+78h] [rbp-F0h]
  __int64 v54; // [rsp+80h] [rbp-E8h]
  _BYTE v55[24]; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v56[200]; // [rsp+A0h] [rbp-C8h] BYREF

  v7 = a3 == 0 || a2 == 0;
  if ( v7 )
    return;
  if ( *(_DWORD *)(a1 + 12596) < *(_DWORD *)(a1 + 11320) )
    return;
  LOBYTE(a4) = a2 == 0;
  if ( (int)sub_C00A40(a2, a2, a3, a4, a5) < 0 )
    return;
  if ( *(_DWORD *)(a2 + 16) != 2 )
    return;
  v10 = *(_QWORD *)(a3 + 40);
  if ( (v10 & 7) != 0 )
    return;
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v11 )
    return;
  v12 = *(_QWORD *)(v11 + 16);
  if ( *(_DWORD *)v12 != 3 )
    return;
  if ( *(_WORD *)(v12 + 16) != 24941 )
    return;
  if ( *(_BYTE *)(v12 + 18) != 120 )
    return;
  if ( !sub_B8EC80(a3) )
    return;
  v13 = sub_B77B50(a3);
  if ( !v13 )
    return;
  if ( *(_DWORD *)v13 != 1 )
    return;
  v17 = *(_DWORD *)(v13 + 8) & 0x7FFFFFFF;
  if ( (_DWORD)v17 != 1
    || !sub_F65360(*(_QWORD *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF0LL), a2, v17, v14, v15, v16) )
  {
    return;
  }
  v18 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v19 = *(_WORD **)(a2 + v18 + 32);
  v20 = *(__int16 **)(a2 + v18 + 40);
  if ( (*v19 & 0x1FF) == 0x30 )
  {
    v21 = sub_16BA690((__int64)v19);
    v40 = v21;
    if ( (*v20 & 0x1FF) != 0x30 )
      goto LABEL_19;
  }
  else
  {
    v37 = *v20;
    v40 = 0;
    if ( (v37 & 0x1FF) != 0x30 )
      return;
  }
  v21 = v40;
  v7 = sub_16BA690((__int64)v20);
LABEL_19:
  if ( v7 != v21 )
  {
    v22 = sub_EEC8C0((unsigned __int64)v19, a2, *(double *)a6.m128i_i64);
    v26 = sub_EEC8C0((unsigned __int64)v20, a2, *(double *)a6.m128i_i64);
    v27 = v22;
    if ( !v21 )
      v27 = v26;
    v41 = v27;
    v38 = (__int64 *)(a1 + 8);
    v28 = sub_C00A40(a2, a2, v23, v24, v25);
    sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), v28, 0x1BACu, 0);
    v39 = sub_15890D0((__int64)v56, &v40);
    v49 = sub_EEC8C0(*(_QWORD *)(a2 + 32), (__int64)&v40, *(double *)a6.m128i_i64);
    v29 = sub_1587DB0(v39, &v49);
    v30 = &v41;
    sub_15884C0(v29, &v41);
    sub_15F7200(v56);
    if ( v40 )
    {
      LODWORD(v26) = v26 - 1;
    }
    else
    {
      v26 >>= 32;
      v30 = (__int64 *)HIDWORD(v22);
      LODWORD(v22) = sub_15F0EF0(a1, SHIDWORD(v22), 0, a6, a7);
    }
    v34 = sub_C00A40(a2, (__int64)v30, v31, v32, v33);
    sub_168B9F0((__int64)v56, v38, v34, 0x18CFu, 0);
    v35 = sub_EEC8C0(*(_QWORD *)(a2 + 32), (__int64)v38, *(double *)a6.m128i_i64);
    v46 = v48;
    v44 = 0;
    v45 = 0;
    v47 = 0;
    v48[0] = 0;
    v48[16] = 0;
    v42 = v35;
    v43 = 1;
    v36 = sub_1589170((__int64)v56, &v42);
    v51 = 0;
    v52 = 0;
    v53 = v55;
    v54 = 0;
    v55[0] = 0;
    v55[16] = 0;
    v49 = __PAIR64__(v26, v22);
    v50 = 1;
    sub_1589170(v36, &v49);
    if ( v53 != v55 )
      operator delete(v53);
    if ( v46 != v48 )
      operator delete(v46);
    sub_15F7200(v56);
  }
}
