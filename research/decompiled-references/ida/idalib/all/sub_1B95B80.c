__int64 __fastcall sub_1B95B80(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int16 *v13; // rax
  void *v14; // rdi
  __int64 v15; // rbp
  unsigned __int16 *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r14
  _QWORD *v20; // rax
  unsigned __int64 v21; // r14
  unsigned int v22; // r15d
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  __int64 *v25; // r10
  unsigned __int16 *v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-118h]
  unsigned int *v28; // [rsp+0h] [rbp-118h]
  unsigned int *v29; // [rsp+0h] [rbp-118h]
  unsigned int *v30; // [rsp+8h] [rbp-110h]
  unsigned __int64 v31; // [rsp+8h] [rbp-110h]
  unsigned __int64 v32; // [rsp+8h] [rbp-110h]
  __int64 *v33; // [rsp+10h] [rbp-108h]
  __int64 *v34; // [rsp+10h] [rbp-108h]
  __int64 *v35; // [rsp+10h] [rbp-108h]
  __int64 v36; // [rsp+18h] [rbp-100h]
  __int64 v37; // [rsp+18h] [rbp-100h]
  __int64 v38; // [rsp+18h] [rbp-100h]
  unsigned int v39; // [rsp+20h] [rbp-F8h]
  unsigned int v40; // [rsp+20h] [rbp-F8h]
  __int64 v41; // [rsp+20h] [rbp-F8h]
  unsigned int v42; // [rsp+2Ch] [rbp-ECh]
  unsigned int v43; // [rsp+2Ch] [rbp-ECh]
  unsigned int v44; // [rsp+2Ch] [rbp-ECh]
  char v45; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v46; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-D0h]
  _BYTE v48[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v50; // [rsp+98h] [rbp-80h]
  _BYTE v51[120]; // [rsp+A0h] [rbp-78h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 24);
  v47 = 0x800000000LL;
  v45 = 0;
  v6 = v5;
  v46 = v48;
  if ( v5 > 8 )
  {
    sub_2237220(&v46, v48, v5, 8);
    v6 = *(_WORD *)(a2 + 24);
  }
  if ( (unsigned __int8)sub_1B7D2C0(a1, (unsigned __int16 **)(a2 + 48), v6, 0, (__int64)&v46, &v45, a3, a4) )
    goto LABEL_14;
  v9 = *(unsigned __int8 *)(a2 + 26);
  if ( !*(_BYTE *)(a2 + 26) )
  {
    v10 = sub_1B90E50(a1, *(_QWORD *)(a2 + 40), a3, a4);
    if ( v10 )
    {
      v11 = 0;
      ptr = v51;
      v50 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v33 = (__int64 *)v46;
      v36 = (unsigned int)v47;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v11 = *(_QWORD *)(a2 + 16);
      v42 = *(_DWORD *)(a2 + 32);
      v39 = *(_DWORD *)(a2 + 36);
      v30 = (unsigned int *)ptr;
      v27 = (unsigned int)v50;
      v12 = sub_C9AC10(a2);
      v13 = sub_19E15D0(*(__int64 **)(*a1 + 736), v10, *v10, 0, v12, v11, a3, a4, v42, v30, v27, v39, v33, v36, 0);
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 > 1 )
  {
    v17 = nullptr;
    if ( (_BYTE)v9 == 1 )
      v17 = *(unsigned __int16 **)(a2 + 40);
    v18 = sub_1B7CAD0(a1, v17, a3, a4, v9, v7, v8);
    if ( v18 != 1 )
    {
      v19 = 0;
      ptr = v51;
      v50 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v34 = (__int64 *)v46;
      v37 = (unsigned int)v47;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v19 = *(_QWORD *)(a2 + 16);
      v40 = *(_DWORD *)(a2 + 36);
      v43 = *(_DWORD *)(a2 + 32);
      v28 = (unsigned int *)ptr;
      v31 = (unsigned int)v50;
      v20 = (_QWORD *)sub_C9AC10(a2);
      v13 = sub_19DEE70(
              *(__int64 **)(*a1 + 736),
              v18 & 0xFFFFFFFFFFFFFFFELL,
              *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFFELL) + 8),
              0,
              v20,
              v19,
              a3,
              a4,
              v43,
              v28,
              v31,
              v40,
              v34,
              v37,
              0);
LABEL_9:
      v14 = ptr;
      v15 = (__int64)v13;
      if ( ptr == v51 )
        goto LABEL_15;
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || !*(_QWORD *)(a2 + 16) )
  {
LABEL_14:
    v15 = 1;
    goto LABEL_15;
  }
  v21 = 0;
  ptr = v51;
  v50 = 0x1000000000LL;
  sub_C9AA70(a2, (__int64)&ptr);
  v22 = *(_DWORD *)(a2 + 32);
  v35 = (__int64 *)v46;
  v38 = (unsigned int)v47;
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
    v21 = *(_QWORD *)(a2 + 16);
  v44 = *(_DWORD *)(a2 + 36);
  v41 = sub_C9AC20(a2);
  v29 = (unsigned int *)ptr;
  v32 = (unsigned int)v50;
  v23 = (_QWORD *)sub_C9AC10(a2);
  v24 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
    v24 = *(_DWORD *)(a2 + 28);
  v25 = *(__int64 **)(*a1 + 736);
  if ( (*(_BYTE *)(v21 + 58) & 2) != 0 )
    v26 = sub_19DEE70(v25, 0, v41, v24, v23, v21, a3, a4, v22, v29, v32, v44, v35, v38, 0);
  else
    v26 = sub_19E15D0(v25, nullptr, v41, v24, (__int64)v23, v21, a3, a4, v22, v29, v32, v44, v35, v38, 0);
  v14 = ptr;
  v15 = (__int64)v26;
  if ( ptr != v51 )
LABEL_10:
    free(v14);
LABEL_15:
  if ( v46 != v48 )
    free(v46);
  return v15;
}
