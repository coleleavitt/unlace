__int64 __fastcall sub_176C9D0(__int64 *a1, __int64 a2, __m128 a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int16 v6; // ax
  void **v7; // rax
  void **v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // rbp
  unsigned __int16 *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  int v20; // r15d
  int v21; // eax
  __int64 v22; // r14
  int v23; // r15d
  int v24; // eax
  int v25; // ecx
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-118h]
  void *v29; // [rsp+0h] [rbp-118h]
  void *v30; // [rsp+0h] [rbp-118h]
  void *v31; // [rsp+8h] [rbp-110h]
  __int64 v32; // [rsp+8h] [rbp-110h]
  __int64 v33; // [rsp+8h] [rbp-110h]
  void *v34; // [rsp+10h] [rbp-108h]
  void *v35; // [rsp+10h] [rbp-108h]
  void *v36; // [rsp+10h] [rbp-108h]
  __int64 v37; // [rsp+18h] [rbp-100h]
  __int64 v38; // [rsp+18h] [rbp-100h]
  __int64 v39; // [rsp+18h] [rbp-100h]
  int v40; // [rsp+20h] [rbp-F8h]
  int v41; // [rsp+20h] [rbp-F8h]
  int v42; // [rsp+20h] [rbp-F8h]
  int v43; // [rsp+28h] [rbp-F0h]
  __int64 v44; // [rsp+28h] [rbp-F0h]
  int v45; // [rsp+28h] [rbp-F0h]
  char v46; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v47; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+48h] [rbp-D0h]
  _BYTE v49[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v51; // [rsp+98h] [rbp-80h]
  _BYTE v52[120]; // [rsp+A0h] [rbp-78h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 24);
  v48 = 0x800000000LL;
  v46 = 0;
  v6 = v5;
  v47 = v49;
  if ( v5 > 8 )
  {
    sub_2237220(&v47, v49, v5, 8);
    v6 = *(_WORD *)(a2 + 24);
  }
  if ( (unsigned __int8)sub_175C6E0(a1, (unsigned __int16 **)(a2 + 48), v6, 0, (__int64)&v47, &v46) )
    goto LABEL_17;
  if ( !*(_BYTE *)(a2 + 26) )
  {
    v7 = sub_176A140(a1, *(void ***)(a2 + 40), a3);
    v8 = v7;
    if ( v7 )
    {
      v9 = *a1;
      if ( !*(_DWORD *)(*a1 + 12632) && !*(_BYTE *)(a2 + 26) && v7 == *(void ***)(a2 + 40) && !v46 )
      {
LABEL_29:
        v14 = sub_19A3E40(v9, a2);
        goto LABEL_18;
      }
      LODWORD(v10) = 0;
      ptr = v52;
      v51 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v34 = v47;
      v37 = (unsigned int)v48;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v10 = *(_QWORD *)(a2 + 16);
      v43 = *(_DWORD *)(a2 + 32);
      v40 = *(_DWORD *)(a2 + 36);
      v31 = ptr;
      v28 = (unsigned int)v51;
      v11 = sub_C9AC10(a2);
      v12 = sub_19E15D0(
              *(_QWORD *)(*a1 + 736),
              (_DWORD)v8,
              (unsigned int)*v8,
              0,
              v11,
              v10,
              v43,
              (__int64)v31,
              v28,
              v40,
              (__int64)v34,
              v37,
              0);
      goto LABEL_12;
    }
    goto LABEL_17;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 > 1 )
  {
    v16 = nullptr;
    if ( *(_BYTE *)(a2 + 26) == 1 )
      v16 = *(unsigned __int16 **)(a2 + 40);
    v17 = sub_175B800(a1, v16);
    if ( v17 != 1 )
    {
      v9 = *a1;
      v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        v19 = 0;
        if ( *(_BYTE *)(a2 + 26) == 1 )
          v19 = *(_QWORD *)(a2 + 40);
        if ( v19 == v18 && !v46 )
          goto LABEL_29;
      }
      ptr = v52;
      v51 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v20 = *(_DWORD *)(a2 + 32);
      v35 = v47;
      v38 = (unsigned int)v48;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v44 = *(_QWORD *)(a2 + 16);
      else
        LODWORD(v44) = 0;
      v41 = *(_DWORD *)(a2 + 36);
      v32 = (unsigned int)v51;
      v29 = ptr;
      v21 = sub_C9AC10(a2);
      v12 = sub_19DEE70(
              *(_QWORD *)(*a1 + 736),
              v18,
              *(_QWORD *)(v18 + 8),
              0,
              v21,
              v44,
              v20,
              (__int64)v29,
              v32,
              v41,
              (__int64)v35,
              v38,
              0);
LABEL_12:
      v13 = ptr;
      v14 = v12;
      if ( ptr == v52 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_17:
    v14 = 1;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || !*(_QWORD *)(a2 + 16) )
    goto LABEL_17;
  v22 = 0;
  ptr = v52;
  v51 = 0x1000000000LL;
  sub_C9AA70(a2, (__int64)&ptr);
  v23 = *(_DWORD *)(a2 + 32);
  v36 = v47;
  v39 = (unsigned int)v48;
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
    v22 = *(_QWORD *)(a2 + 16);
  v45 = *(_DWORD *)(a2 + 36);
  v42 = sub_C9AC20(a2);
  v30 = ptr;
  v33 = (unsigned int)v51;
  v24 = sub_C9AC10(a2);
  v25 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
    v25 = *(_DWORD *)(a2 + 28);
  v26 = *(_QWORD *)(*a1 + 736);
  if ( (*(_BYTE *)(v22 + 58) & 2) != 0 )
    v27 = sub_19DEE70(v26, 0, v42, v25, v24, v22, v23, (__int64)v30, v33, v45, (__int64)v36, v39, 0);
  else
    v27 = sub_19E15D0(v26, 0, v42, v25, v24, v22, v23, (__int64)v30, v33, v45, (__int64)v36, v39, 0);
  v13 = ptr;
  v14 = v27;
  if ( ptr != v52 )
LABEL_13:
    free(v13);
LABEL_18:
  if ( v47 != v49 )
    free(v47);
  return v14;
}
