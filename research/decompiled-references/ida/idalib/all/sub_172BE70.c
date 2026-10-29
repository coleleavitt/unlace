void __fastcall sub_172BE70(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  void *v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  _QWORD *v19; // r12
  __int64 v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rsi
  char *v23; // rax
  char *v24; // rcx
  char *v25; // rax
  char *v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64); // rdx
  __int64 (*v32)(void); // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  _QWORD *v35; // rax
  __int64 v36; // r9
  __int64 v37; // rsi
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rdi
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-340h]
  void *ptr; // [rsp+8h] [rbp-338h] BYREF
  __int64 v46; // [rsp+10h] [rbp-330h]
  int v47; // [rsp+18h] [rbp-328h]
  char v48; // [rsp+1Ch] [rbp-324h]
  __int64 v49; // [rsp+20h] [rbp-320h] BYREF
  __int64 i; // [rsp+60h] [rbp-2E0h]
  unsigned int v51; // [rsp+68h] [rbp-2D8h] BYREF
  char v52; // [rsp+6Ch] [rbp-2D4h]
  __int64 v53; // [rsp+70h] [rbp-2D0h]
  __int64 v54; // [rsp+78h] [rbp-2C8h]
  __int64 v55; // [rsp+80h] [rbp-2C0h]
  __int64 v56; // [rsp+88h] [rbp-2B8h]
  char v57; // [rsp+C0h] [rbp-280h]
  __int64 *v58; // [rsp+C8h] [rbp-278h]
  __int64 v59; // [rsp+D0h] [rbp-270h]
  int v60; // [rsp+D8h] [rbp-268h]
  char v61; // [rsp+DCh] [rbp-264h]
  __int64 v62; // [rsp+E0h] [rbp-260h] BYREF
  __int64 v63; // [rsp+128h] [rbp-218h] BYREF
  __int64 v64; // [rsp+130h] [rbp-210h]
  _BYTE *v65; // [rsp+138h] [rbp-208h]
  __int64 v66; // [rsp+140h] [rbp-200h]
  _BYTE v67[272]; // [rsp+148h] [rbp-1F8h] BYREF
  int v68[58]; // [rsp+258h] [rbp-E8h] BYREF

  v2 = *(unsigned int *)(*a1 + 40);
  if ( !(_DWORD)v2 )
    BUG();
  v3 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v2 - 8);
  v4 = *(unsigned int *)(v3 + 64);
  if ( !(_DWORD)v4 )
    return;
  if ( !a1[1] )
    return;
  v5 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 8 * v4 - 8) & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v5[((*v5 & 0x400) != 0) + 3 + ((*v5 & 0x200) != 0)] )
    return;
  v7 = *(_QWORD *)(sub_BFB900(v5[((*v5 & 0x200) != 0) + 3 + ((*v5 & 0x400) != 0)]) + 8);
  v11 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v11 + 16) != 47 )
  {
    v63 = v7;
    *(_WORD *)((char *)&v64 + 1) = 0;
    v65 = v67;
    v66 = 0x400000000LL;
    LOBYTE(v64) = 1;
    sub_172AF50(a1, a2, (__int64)&v63, v8, v9, v10);
    v12 = v65;
    if ( v65 == v67 )
      return;
LABEL_35:
    free(v12);
    return;
  }
  v13 = sub_F60F10(*v11, a2, v7, v8, v9, v10);
  v47 = 0;
  v19 = sub_B7E870((__int64)v13, a2, v14, v15, v16, v17);
  v46 = 8;
  if ( !v19 )
    v19 = v13;
  v20 = v5[1];
  ptr = &v49;
  v48 = 1;
  for ( i = 0; v20; v20 = *(_QWORD *)(v20 + 16) )
  {
    if ( (*(_WORD *)v20 & 0x1FF) == 0x85 )
    {
      v21 = (_QWORD *)sub_BFD550(*(_QWORD *)(v20 + 24));
      if ( (*(_WORD *)v21 & 0x1FF) == 0x47 )
      {
        v22 = v21[2];
        if ( (*(_BYTE *)(v22 + 28) & 0x7F) == 0x21 )
        {
          v23 = (char *)sub_1703870((__int64)&ptr, v22);
          if ( v48 )
            v24 = (char *)ptr + 8 * HIDWORD(v46);
          else
            v24 = (char *)ptr + 8 * (unsigned int)v46;
          if ( v23 != v24 && *(_QWORD *)v23 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v25 = v23 + 8;
            do
            {
              v26 = v25;
              if ( v24 == v25 )
                break;
              v25 += 8;
            }
            while ( *(_QWORD *)v26 >= 0xFFFFFFFFFFFFFFFELL );
          }
          v27 = 0;
          if ( (*v21 & 0x80000LL) != 0 )
            v27 = v21[4];
          i = v27;
        }
      }
    }
  }
  v28 = (__int64 *)a1[1];
  v51 = 8;
  v52 = 0;
  v58 = &v62;
  v29 = (__int64)(v28 + 3);
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v30 = *v28;
  v57 = 0;
  v31 = *(__int64 (__fastcall **)(__int64))(v30 + 48);
  v61 = 1;
  v59 = 8;
  v60 = 0;
  if ( v31 != sub_15A1860 )
  {
    v42 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64), __int64))v31)(
            v28,
            sub_15A1860,
            v31,
            v29);
    v28 = (__int64 *)a1[1];
    v29 = v42;
    v30 = *v28;
  }
  v32 = *(__int64 (**)(void))(v30 + 40);
  if ( (char *)v32 == (char *)sub_15A1850 )
  {
    v33 = v28[6];
  }
  else
  {
    v44 = v29;
    v43 = v32();
    v29 = v44;
    v33 = v43;
  }
  sub_16FF270((__int64)&v63, *a1, v33, v29, &v51, v18, 0);
  sub_17038E0((__int64)&v51);
  v34 = *(_QWORD *)(*a1 + 544);
  v35 = (_QWORD *)sub_168B6C0((__int64)a1);
  sub_1716A00(&v63, v35, (__int64)v19, v34, (__int64)&ptr, v36);
  v37 = a1[1];
  v38 = *(_DWORD *)(v37 + 8);
  if ( (v38 & 1) == 0 )
  {
    v39 = v63;
    v40 = *a1;
    v41 = -1431655765 * ((v64 - v63) >> 5);
    if ( v64 == v63 )
      v39 = 0;
LABEL_32:
    sub_1700D50(v40, v37, v68, v39, v41);
    goto LABEL_33;
  }
  sub_1722040(*(_QWORD **)(*a1 + 240), &v63, (v38 & 0x20) != 0, 0, 0);
  v37 = a1[1];
  v40 = *a1;
  v39 = v63;
  v41 = -1431655765 * ((v64 - v63) >> 5);
  if ( v63 == v64 )
    v39 = 0;
  if ( v37 )
    goto LABEL_32;
LABEL_33:
  sub_1700A70((__int64)&v63);
  if ( !v48 )
  {
    v12 = ptr;
    goto LABEL_35;
  }
}
