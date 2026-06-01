unsigned __int64 __fastcall sub_1B270B0(
        __int64 *a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        void *a9,
        __int64 a10)
{
  void *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  _BYTE *v13; // rax
  unsigned __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  _DWORD *v17; // rbx
  unsigned int v18; // ebp
  unsigned __int64 v19; // r12
  unsigned int v20; // esi
  __int64 v21; // rbp
  __int64 v22; // r9
  char v23; // r11
  int v24; // r13d
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int16 v27; // ax
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbp
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbp
  unsigned __int64 *v54; // [rsp+8h] [rbp-180h]
  unsigned int v55; // [rsp+14h] [rbp-174h]
  unsigned __int8 v56; // [rsp+21h] [rbp-167h]
  char v57; // [rsp+22h] [rbp-166h]
  char v58; // [rsp+23h] [rbp-165h]
  int v59; // [rsp+24h] [rbp-164h]
  int v63; // [rsp+44h] [rbp-144h]
  int v65; // [rsp+60h] [rbp-128h] BYREF
  int v66; // [rsp+64h] [rbp-124h] BYREF
  __int64 v67; // [rsp+68h] [rbp-120h] BYREF
  void *ptr; // [rsp+70h] [rbp-118h] BYREF
  __int64 v69; // [rsp+78h] [rbp-110h]
  _BYTE v70[64]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v71[2]; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 *v73[11]; // [rsp+E0h] [rbp-A8h] BYREF
  char v74; // [rsp+138h] [rbp-50h]
  unsigned int v75; // [rsp+140h] [rbp-48h]
  char v76; // [rsp+144h] [rbp-44h]

  v10 = a9;
  v69 = 0x800000000LL;
  v11 = a10;
  v12 = (__int64)a9 + 8 * a10;
  v13 = v70;
  v63 = a5;
  ptr = v70;
  v54 = (unsigned __int64 *)v12;
  if ( (void *)v12 != a9 )
  {
    v14 = (unsigned __int64 *)a9;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = (_DWORD *)*v14;
        if ( (*(_WORD *)*v14 & 0x1FF) == 0x45 || (*v17 & 0x10000) != 0 )
        {
          v36 = (unsigned int)v69;
          v11 = HIDWORD(v69);
          v37 = (unsigned int)v69 + 1LL;
          if ( v37 > HIDWORD(v69) )
          {
            v12 = (__int64)v70;
            sub_2237220(&ptr, v70, v37, 8);
            v36 = (unsigned int)v69;
          }
          v10 = ptr;
          *((_QWORD *)ptr + v36) = v17;
          LODWORD(v69) = v69 + 1;
          goto LABEL_6;
        }
        v18 = sub_C00A40(*v14, v12, (__int64)v10, v11, a5);
        v55 = v18;
        v19 = sub_BFBAE0((unsigned __int64)v17);
        if ( ((*(_BYTE *)(v19 + 1) >> 1) & 3) != 1 )
          break;
        v20 = v18;
        v21 = *a1;
        v22 = *(unsigned __int8 *)(*a1 + 12592);
        v23 = *(_BYTE *)(*a1 + 10024);
        v56 = *(_BYTE *)(*a1 + 11248);
        v59 = *(_DWORD *)(*a1 + 11200);
        v24 = *(_DWORD *)(*(_QWORD *)(*a1 + 264) + 204LL);
        *(_BYTE *)(v21 + 12592) = 1;
        *(_BYTE *)(v21 + 11248) = 1;
        *(_BYTE *)(v21 + 10024) = 1;
        v58 = v22;
        v57 = v23;
        v25 = sub_19249E0(*a1, v20, 4u, v19, 0, v22, a7, a8);
        v12 = v56;
        v26 = *(_QWORD *)(v21 + 264);
        *(_BYTE *)(v21 + 10024) = v57;
        *(_DWORD *)(v21 + 11200) = v59;
        *(_BYTE *)(v21 + 12592) = v58;
        *(_BYTE *)(v21 + 11248) = v56;
        if ( *(_DWORD *)(v26 + 204) == 5 )
          *(_BYTE *)(v26 + 194) = 1;
        if ( v24 )
          v24 = 3;
        *(_DWORD *)(v26 + 204) = v24;
        if ( v25 <= 1 )
        {
          v27 = *(_WORD *)v19 & 0x1FF;
          if ( v27 != 44 && v27 != 124 )
          {
            sub_168B9F0((__int64)v71, a1, v55, 0x1183u, 0);
            v65 = 1;
            v52 = sub_1587D10((__int64)v71, &v65);
            v66 = 0;
            v53 = sub_1587D10(v52, &v66);
            v12 = (__int64)&v67;
            v67 = sub_EEC8C0((unsigned __int64)v17, (__int64)&v66, *(double *)a7.m128_u64);
            sub_1587DB0(v53, &v67);
            sub_15F7200(v71);
            goto LABEL_6;
          }
        }
        v28 = (unsigned int)v69;
        v11 = HIDWORD(v69);
        v29 = (unsigned int)v69 + 1LL;
        if ( v29 > HIDWORD(v69) )
        {
          v12 = (__int64)v70;
          sub_2237220(&ptr, v70, v29, 8);
          v28 = (unsigned int)v69;
        }
        v10 = ptr;
        ++v14;
        *((_QWORD *)ptr + v28) = v19;
        LODWORD(v69) = v69 + 1;
        if ( v54 == v14 )
        {
LABEL_20:
          v13 = ptr;
          v30 = (unsigned int)v69;
          goto LABEL_21;
        }
      }
      v15 = (__int64)a1;
      sub_168B9F0((__int64)v71, a1, v18, 0x1183u, 0);
      if ( v74 )
        break;
      if ( v76 )
      {
        v40 = sub_168B9E0(v71);
        v43 = v72;
        if ( v72 )
          v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
        v67 = v43;
        v44 = sub_1587BC0(v40, &v67, v38, v39, v41, v42);
        v15 = 1;
        sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v75 + 8), 1, 2u);
        if ( !v74 )
        {
LABEL_32:
          if ( v76 )
          {
            v47 = sub_168B9E0(v71);
            v50 = v72;
            if ( v72 )
              v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
            v67 = v50;
            v51 = sub_1587BC0(v47, &v67, v45, v46, v48, v49);
            v15 = 0;
            sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v75 + 8), 0, 2u);
          }
          goto LABEL_5;
        }
        goto LABEL_28;
      }
LABEL_5:
      v16 = sub_EEC8C0((unsigned __int64)v17, v15, *(double *)a7.m128_u64);
      v12 = (__int64)&v67;
      v67 = v16;
      sub_1587DB0((__int64)v71, &v67);
      sub_15F7200(v71);
LABEL_6:
      if ( v54 == ++v14 )
        goto LABEL_20;
    }
    v15 = 1;
    sub_AE9DF0(v73, 1, 2u);
    if ( !v74 )
      goto LABEL_32;
LABEL_28:
    v15 = 0;
    sub_AE9DF0(v73, 0, 2u);
    goto LABEL_5;
  }
  v30 = 0;
LABEL_21:
  v31 = v30;
  v32 = (__int64)v13;
  v33 = sub_168B6C0((__int64)a1);
  v34 = sub_EBEC10(v33, a2, a3, a4, v63, a6, v32, v31);
  if ( ptr != v70 )
    free(ptr);
  return v34;
}
