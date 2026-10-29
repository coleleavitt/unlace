__int64 __fastcall sub_19F8E50(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 *v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r13
  _QWORD *v24; // r12
  _QWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rdx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  _QWORD *v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r12
  unsigned int v58; // eax
  _QWORD *v59; // rdi
  _QWORD *v60; // r13
  int v61; // r15d
  _BYTE *v62; // rdi
  __int64 v63; // rdi
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // r15
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // [rsp+8h] [rbp-E0h]
  unsigned int v74; // [rsp+10h] [rbp-D8h]
  __int64 v75; // [rsp+10h] [rbp-D8h]
  __int64 v76; // [rsp+18h] [rbp-D0h]
  __int64 v77; // [rsp+18h] [rbp-D0h]
  __int64 v78; // [rsp+28h] [rbp-C0h] BYREF
  void *v79; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+38h] [rbp-B0h]
  _BYTE v81[48]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v83; // [rsp+78h] [rbp-70h]
  _QWORD v84[13]; // [rsp+80h] [rbp-68h] BYREF

  v8 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_F61140(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6)
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
    && !sub_F61BB0(*v8, a2, v10, v11, v12, v13) )
  {
    v55 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v55 + 8;
    return *(_QWORD *)v55;
  }
  v14 = *(_QWORD *)(a1 + 8);
  v79 = v81;
  v80 = 0x600000000LL;
  v73 = sub_F6B0C0(a2, v14, v10, v11, v12);
  v17 = v73 & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(unsigned __int8 *)(v19 + 16);
  v21 = (unsigned int)(v20 - 57);
  if ( (unsigned int)v21 <= 1 || (v21 = (unsigned int)(v20 - 2), (unsigned __int8)(v20 - 2) <= 1u) )
  {
    v22 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 57;
    if ( (unsigned int)v22 <= 1 || (v18 = sub_19F5590(v18, v21, v22, v19)) != 0 )
    {
      v23 = *(_QWORD *)(v18 + 32);
      v24 = (_QWORD *)*(unsigned int *)(v18 + 20);
    }
    else
    {
      v23 = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
      v24 = *(_QWORD **)(*(_QWORD *)v17 + 40LL);
      if ( (*(_BYTE *)(*(_QWORD *)v17 + 19LL) & 2) != 0 )
      {
        if ( *((_DWORD *)v24 + 2) <= 0x40u )
          v24 = (_QWORD *)*v24;
        else
          v24 = *(_QWORD **)*v24;
      }
    }
    v25 = nullptr;
    if ( v24 )
    {
      do
      {
        v26 = sub_19F8E50(a1, v23);
        v27 = (unsigned int)v80;
        v21 = HIDWORD(v80);
        v28 = (unsigned int)v80 + 1LL;
        if ( v28 > HIDWORD(v80) )
        {
          v21 = (__int64)v81;
          v77 = v26;
          sub_2237220(&v79, v81, v28, 8);
          v27 = (unsigned int)v80;
          v29 = v79;
          v26 = v77;
        }
        else
        {
          v29 = v79;
        }
        v25 = (_QWORD *)((char *)v25 + 1);
        v29[v27] = v26;
        LODWORD(v80) = v80 + 1;
      }
      while ( v24 != v25 );
    }
    v30 = *(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v19 = *(_QWORD *)v30;
    LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)v30 + 16LL);
  }
  if ( (_BYTE)v20 == 48 )
  {
    v84[0] = v19;
    v31 = v84;
    v83 = 0x600000001LL;
    v32 = 1;
    ptr = v84;
    while ( 1 )
    {
      v39 = sub_F63270(v31[v32 - 1], v21, (__int64)v31, v19, v15, v16);
      v21 = v39[13];
      v40 = v39;
      sub_7052B0((__int64 *)(v21 + 96), v21, v41, v42, v43, v44);
      if ( !*(_DWORD *)(v40[16] + 16LL) )
        break;
      v48 = sub_F63270(*((_QWORD *)ptr + (unsigned int)v83 - 1), v21, (unsigned int)v83, v45, v46, v47);
      v21 = v48[13];
      v49 = v48;
      sub_7052B0((__int64 *)(v21 + 96), v21, v50, v51, v52, v53);
      v54 = v49[16];
      if ( (*(_BYTE *)(v54 + 24) & 1) != 0 )
        v33 = sub_B96980(v54);
      else
        v33 = *(_QWORD *)(v54 + 24);
      v34 = 0;
      v78 = **(_QWORD **)(v33 + 16);
      v35 = sub_6D5440(&v78);
      v19 = HIDWORD(v83);
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v36 + 16) == 48 )
        v34 = v36;
      v37 = (unsigned int)v83;
      v38 = (unsigned int)v83 + 1LL;
      if ( v38 > HIDWORD(v83) )
      {
        v21 = (__int64)v84;
        sub_2237220(&ptr, v84, v38, 8);
        v37 = (unsigned int)v83;
      }
      *((_QWORD *)ptr + v37) = v34;
      v31 = ptr;
      v32 = (unsigned int)(v83 + 1);
      LODWORD(v83) = v83 + 1;
    }
    v58 = v83;
    v59 = ptr;
    if ( (_DWORD)v83 )
    {
      do
      {
        v63 = v59[v58 - 1];
        LODWORD(v83) = v58 - 1;
        v64 = sub_F60F10(v63, v21, v58, v45, v46, v47);
        v69 = sub_B7E900((__int64)v64, v21, v65, v66, v67, v68);
        if ( v69 )
        {
LABEL_32:
          v70 = sub_19F8E50(a1, *(_QWORD *)(v69 + 48));
          v45 = (unsigned int)v80;
          v21 = HIDWORD(v80);
          v71 = (unsigned int)v80 + 1LL;
          if ( v71 > HIDWORD(v80) )
          {
            v21 = (__int64)v81;
            v75 = v70;
            sub_2237220(&v79, v81, v71, 8);
            v45 = (unsigned int)v80;
            v70 = v75;
          }
          *((_QWORD *)v79 + v45) = v70;
          LODWORD(v80) = v80 + 1;
          while ( 1 )
          {
            v72 = *(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v69 = v72;
            if ( !v72 )
              break;
            if ( (*(_BYTE *)(v72 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_32;
          }
        }
        v58 = v83;
        v59 = ptr;
      }
      while ( (_DWORD)v83 );
      if ( ptr == v84 )
        goto LABEL_29;
    }
    else if ( ptr == v84 )
    {
      goto LABEL_29;
    }
    free(v59);
  }
LABEL_29:
  v60 = v79;
  v61 = sub_EEB7E0(*(_QWORD *)v79, v21, a7);
  v76 = (unsigned int)v80;
  v74 = sub_EEC140(v60[(unsigned int)v80 - 1]);
  v56 = sub_EEE9A0(64, *(_QWORD **)(a1 + 8), 8u);
  sub_C0B340(v56, *(_QWORD **)(a1 + 8), v61, (__int64)v60, v76, v74);
  v62 = v79;
  *(_QWORD *)(v56 + 8) = v73;
  if ( v62 != v81 )
    free(v62);
  return v56;
}
