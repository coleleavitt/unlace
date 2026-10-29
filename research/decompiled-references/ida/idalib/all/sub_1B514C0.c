void __fastcall sub_1B514C0(__int64 *a1, __int64 a2, unsigned int a3, int a4, __int64 a5, double a6)
{
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r15
  char v15; // dl
  int v16; // eax
  __int64 v17; // rcx
  char v18; // r15
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  void (*v26)(); // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  void *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // r9
  char v48; // al
  __int64 v49; // rbp
  int v50; // [rsp+4h] [rbp-104h]
  __int64 v51; // [rsp+8h] [rbp-100h]
  char *v52; // [rsp+18h] [rbp-F0h] BYREF
  void *v53[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v56[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 *v57; // [rsp+60h] [rbp-A8h] BYREF
  char v58; // [rsp+B8h] [rbp-50h]
  unsigned int v59; // [rsp+C0h] [rbp-48h]
  char v60; // [rsp+C4h] [rbp-44h]

  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v10 - 40 > 6 )
    goto LABEL_7;
  if ( ((v10 + 85) & 0x7D) == 0 )
    goto LABEL_30;
  v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 8);
  v12 = *(_BYTE *)(sub_B8EAA0(v11) + 8) & 0x7F;
  if ( v12 != 24 && v12 )
  {
    v10 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v10 == 43 )
    {
      if ( (*(_BYTE *)(a2 + 96) & 7) != 2 && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) )
        goto LABEL_37;
LABEL_50:
      if ( !sub_A5EB90(a2) )
        goto LABEL_7;
      v10 = *(_BYTE *)(a2 + 28) & 0x7F;
LABEL_33:
      if ( v10 != 43 )
      {
        v32 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v32 = *(_QWORD *)v32;
        if ( ((*(_BYTE *)(v32 + 8) + 70) & 0x7Fu) <= 3 )
          goto LABEL_7;
      }
LABEL_37:
      sub_168B9F0((__int64)ptr, a1, a3, 0x1169u, 0);
      sub_B86A00((__int64)v53, (__int64 *)(a2 + 40));
      sub_1682AF0((__int64)ptr, (__int64)v53);
      if ( v53[0] != &v54 )
        operator delete(v53[0]);
      goto LABEL_39;
    }
    v31 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v31 = *(_QWORD *)v31;
    if ( ((*(_BYTE *)(v31 + 8) + 70) & 0x7Fu) <= 3 )
      goto LABEL_7;
LABEL_30:
    if ( (*(_BYTE *)(a2 + 96) & 7) != 2 && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) )
      goto LABEL_33;
    goto LABEL_50;
  }
LABEL_7:
  if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x31u && (sub_B8C400(a2, 0) || sub_B8C090((_BYTE *)a2)) )
  {
    sub_168B9F0((__int64)ptr, a1, a3, 0x1C2Eu, 0);
    sub_15F7200(ptr);
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 60) & 0x20) != 0 )
  {
    sub_168B9F0((__int64)ptr, a1, a3, 0x1B37u, 0);
    sub_15F7200(ptr);
  }
  v13 = sub_B06110((_BYTE *)a2);
  v14 = v13;
  if ( !v15 )
    goto LABEL_13;
  v16 = *(_DWORD *)(v13 + 60);
  if ( *(_DWORD *)(a5 + 24) != *(_DWORD *)(v14 + 44) )
  {
    if ( v16 == -1 )
    {
      sub_168B9F0((__int64)ptr, a1, a3, 0x117Du, 0);
      v52 = sub_B15880(*(_DWORD *)(a5 + 24));
      v49 = sub_15AFC70((__int64)ptr, &v52);
      v53[0] = sub_B15880(*(_DWORD *)(v14 + 44));
      sub_15AFC70(v49, v53);
      sub_15F7200(ptr);
      return;
    }
    goto LABEL_13;
  }
  if ( a4 != *(_DWORD *)(v14 + 40) )
  {
    if ( v16 != -1 )
      goto LABEL_13;
    sub_168B9F0((__int64)ptr, a1, a3, 0x116Au, 0);
    if ( v58 )
    {
      sub_AE9DF0(&v57, a2, 0xAu);
    }
    else if ( v60 )
    {
      v39 = sub_168B9E0(ptr);
      v42 = (void *)v56[0];
      if ( v56[0] )
        v42 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v56[0] + 32LL))(v56[0]);
      v53[0] = v42;
      v43 = sub_1587BC0(v39, (__int64 *)v53, v37, v38, v40, v41);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v59 + 8), a2, 0xAu);
    }
LABEL_39:
    sub_15F7200(ptr);
    return;
  }
  if ( v16 == -1 )
    return;
LABEL_13:
  if ( *(_BYTE *)(a5 + 40) )
  {
    v17 = *(_QWORD *)(a5 + 32);
    v18 = v17 == 0;
  }
  else
  {
    v18 = 0;
    v17 = 0;
  }
  v51 = v17;
  v50 = *(_DWORD *)(a5 + 24);
  v19 = sub_168B6C0((__int64)a1);
  v20 = sub_B30E20(v19, a4, v50, v51, v18, -1, a3 | ((unsigned __int64)a3 << 32));
  sub_B8CC60(a2, v20, v21, v22, v23, v24);
  v25 = *(_QWORD *)(sub_168B6C0((__int64)a1) + 18368);
  if ( v25 )
  {
    v26 = *(void (**)())(*(_QWORD *)v25 + 160LL);
    if ( v26 != nullsub_447 )
      ((void (__fastcall *)(__int64, __int64, __int64))v26)(v25, a2, v20);
  }
  sub_1B21670((__int64)a1, 0, (char *)a2, a3, a6);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
  {
    sub_168B6E0((__int64)a1);
    return;
  }
  if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) && (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v33 = sub_B8C3D0(a2, 0, v27, v28, v29, v30);
    v34 = *v33;
    v35 = *v33 + 8LL * *((unsigned int *)v33 + 2);
    if ( *v33 >= v35 )
    {
      if ( v34 == v35 )
        return;
      while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 295 )
      {
        v35 += 8LL;
        if ( v34 == v35 )
          return;
      }
    }
    else
    {
      v36 = *v33;
      while ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 295 )
      {
        v36 += 8LL;
        if ( v35 == v36 )
          return;
      }
      if ( v35 == v36 )
        return;
    }
    if ( !sub_9B48E0(a2) )
    {
      ptr[1] = (void *)0x600000000LL;
      v48 = *(_BYTE *)(a2 + 28);
      ptr[0] = v56;
      if ( (v48 & 0x7Fu) - 40 <= 6 )
      {
        sub_1B50E20((__int64)ptr, a2, v44, v45, v46, v47);
        if ( ptr[0] != v56 )
          free(ptr[0]);
      }
    }
  }
}
