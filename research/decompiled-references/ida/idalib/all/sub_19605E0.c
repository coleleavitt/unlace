__int64 __fastcall sub_19605E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int16 v6; // ax
  void **v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v12; // rbp
  unsigned __int16 *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r14
  int v19; // r15d
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-118h]
  void *v25; // [rsp+0h] [rbp-118h]
  void *v26; // [rsp+0h] [rbp-118h]
  void *v27; // [rsp+8h] [rbp-110h]
  __int64 v28; // [rsp+8h] [rbp-110h]
  __int64 v29; // [rsp+8h] [rbp-110h]
  void *v30; // [rsp+10h] [rbp-108h]
  void *v31; // [rsp+10h] [rbp-108h]
  void *v32; // [rsp+10h] [rbp-108h]
  __int64 v33; // [rsp+18h] [rbp-100h]
  __int64 v34; // [rsp+18h] [rbp-100h]
  __int64 v35; // [rsp+18h] [rbp-100h]
  int v36; // [rsp+20h] [rbp-F8h]
  int v37; // [rsp+20h] [rbp-F8h]
  int v38; // [rsp+20h] [rbp-F8h]
  int v39; // [rsp+2Ch] [rbp-ECh]
  int v40; // [rsp+2Ch] [rbp-ECh]
  int v41; // [rsp+2Ch] [rbp-ECh]
  char v42; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v43; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-D0h]
  _BYTE v45[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v47; // [rsp+98h] [rbp-80h]
  _BYTE v48[120]; // [rsp+A0h] [rbp-78h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 24);
  v44 = 0x800000000LL;
  v42 = 0;
  v6 = v5;
  v43 = v45;
  if ( v5 > 8 )
  {
    sub_2237220(&v43, v45, v5, 8);
    v6 = *(_WORD *)(a2 + 24);
  }
  if ( (unsigned __int8)sub_195E940(a1, (unsigned __int16 **)(a2 + 48), v6, 0, (__int64)&v43, &v42, a3, a4) )
    goto LABEL_14;
  if ( !*(_BYTE *)(a2 + 26) )
  {
    v7 = sub_1946B40(a1, *(void ***)(a2 + 40), a3, a4);
    if ( v7 )
    {
      LODWORD(v8) = 0;
      ptr = v48;
      v47 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v30 = v43;
      v33 = (unsigned int)v44;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v8 = *(_QWORD *)(a2 + 16);
      v36 = *(_DWORD *)(a2 + 32);
      v39 = *(_DWORD *)(a2 + 36);
      v27 = ptr;
      v24 = (unsigned int)v47;
      v9 = sub_C9AC10(a2);
      v10 = sub_19E15D0(
              *(_QWORD *)(*a1 + 736),
              (_DWORD)v7,
              (unsigned int)*v7,
              0,
              v9,
              v8,
              v36,
              (__int64)v27,
              v24,
              v39,
              (__int64)v30,
              v33,
              0);
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 > 1 )
  {
    v14 = nullptr;
    if ( *(_BYTE *)(a2 + 26) == 1 )
      v14 = *(unsigned __int16 **)(a2 + 40);
    v15 = sub_1944E10(a1, v14, a3, a4);
    if ( v15 != 1 )
    {
      LODWORD(v16) = 0;
      ptr = v48;
      v47 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v31 = v43;
      v34 = (unsigned int)v44;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v16 = *(_QWORD *)(a2 + 16);
      v40 = *(_DWORD *)(a2 + 36);
      v37 = *(_DWORD *)(a2 + 32);
      v25 = ptr;
      v28 = (unsigned int)v47;
      v17 = sub_C9AC10(a2);
      v10 = sub_19DEE70(
              *(_QWORD *)(*a1 + 736),
              (unsigned int)v15 & 0xFFFFFFFE,
              *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8),
              0,
              v17,
              v16,
              v37,
              (__int64)v25,
              v28,
              v40,
              (__int64)v31,
              v34,
              0);
LABEL_9:
      v11 = ptr;
      v12 = v10;
      if ( ptr == v48 )
        goto LABEL_15;
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || !*(_QWORD *)(a2 + 16) )
  {
LABEL_14:
    v12 = 1;
    goto LABEL_15;
  }
  v18 = 0;
  ptr = v48;
  v47 = 0x1000000000LL;
  sub_C9AA70(a2, (__int64)&ptr);
  v19 = *(_DWORD *)(a2 + 32);
  v32 = v43;
  v35 = (unsigned int)v44;
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
    v18 = *(_QWORD *)(a2 + 16);
  v41 = *(_DWORD *)(a2 + 36);
  v38 = sub_C9AC20(a2);
  v26 = ptr;
  v29 = (unsigned int)v47;
  v20 = sub_C9AC10(a2);
  v21 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
    v21 = *(_DWORD *)(a2 + 28);
  v22 = *(_QWORD *)(*a1 + 736);
  if ( (*(_BYTE *)(v18 + 58) & 2) != 0 )
    v23 = sub_19DEE70(v22, 0, v38, v21, v20, v18, v19, (__int64)v26, v29, v41, (__int64)v32, v35, 0);
  else
    v23 = sub_19E15D0(v22, 0, v38, v21, v20, v18, v19, (__int64)v26, v29, v41, (__int64)v32, v35, 0);
  v11 = ptr;
  v12 = v23;
  if ( ptr != v48 )
LABEL_10:
    free(v11);
LABEL_15:
  if ( v43 != v45 )
    free(v43);
  return v12;
}
