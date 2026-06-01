unsigned __int16 *__fastcall sub_1D53CC0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int16 *v19; // rax
  void *v20; // rdi
  unsigned __int16 *v21; // rbp
  unsigned __int16 *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  unsigned int v27; // r15d
  _QWORD *v28; // rax
  unsigned __int64 v29; // r14
  unsigned int v30; // r15d
  _QWORD *v31; // rax
  unsigned int v32; // ecx
  __int64 *v33; // r10
  unsigned __int16 *v34; // rax
  unsigned __int64 v35; // [rsp+0h] [rbp-118h]
  unsigned int *v36; // [rsp+0h] [rbp-118h]
  unsigned int *v37; // [rsp+0h] [rbp-118h]
  unsigned int *v38; // [rsp+8h] [rbp-110h]
  unsigned __int64 v39; // [rsp+8h] [rbp-110h]
  unsigned __int64 v40; // [rsp+8h] [rbp-110h]
  __int64 *v41; // [rsp+10h] [rbp-108h]
  __int64 *v42; // [rsp+10h] [rbp-108h]
  __int64 *v43; // [rsp+10h] [rbp-108h]
  __int64 v44; // [rsp+18h] [rbp-100h]
  __int64 v45; // [rsp+18h] [rbp-100h]
  __int64 v46; // [rsp+18h] [rbp-100h]
  unsigned int v47; // [rsp+20h] [rbp-F8h]
  unsigned int v48; // [rsp+20h] [rbp-F8h]
  __int64 v49; // [rsp+20h] [rbp-F8h]
  unsigned int v50; // [rsp+28h] [rbp-F0h]
  __int64 v51; // [rsp+28h] [rbp-F0h]
  unsigned int v52; // [rsp+28h] [rbp-F0h]
  char v53; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v54; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-D0h]
  _BYTE v56[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v58; // [rsp+98h] [rbp-80h]
  _BYTE v59[120]; // [rsp+A0h] [rbp-78h] BYREF

  v6 = *(unsigned __int16 *)(a2 + 24);
  v55 = 0x800000000LL;
  v53 = 0;
  v7 = v6;
  v54 = v56;
  if ( v6 > 8 )
  {
    sub_2237220(&v54, v56, v6, 8);
    v7 = *(_WORD *)(a2 + 24);
  }
  if ( (unsigned __int8)sub_1D43E00(a1, (unsigned __int16 **)(a2 + 48), v7, 0, (__int64)&v54, &v53, a3, a4) )
    goto LABEL_17;
  v10 = *(unsigned __int8 *)(a2 + 26);
  if ( !*(_BYTE *)(a2 + 26) )
  {
    v11 = sub_1D51480(a1, *(_QWORD *)(a2 + 40), a3, a4);
    v14 = v11;
    if ( v11 )
    {
      v15 = *a1;
      v16 = *(unsigned int *)(*a1 + 12632);
      if ( !(_DWORD)v16 && !*(_BYTE *)(a2 + 26) && v11 == *(__int64 **)(a2 + 40) && !v53 )
      {
LABEL_29:
        v21 = sub_19A3E40(v15, (unsigned __int16 *)a2, v16, v12, v13, a3, a4);
        goto LABEL_18;
      }
      v17 = 0;
      ptr = v59;
      v58 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v41 = (__int64 *)v54;
      v44 = (unsigned int)v55;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v17 = *(_QWORD *)(a2 + 16);
      v50 = *(_DWORD *)(a2 + 32);
      v47 = *(_DWORD *)(a2 + 36);
      v38 = (unsigned int *)ptr;
      v35 = (unsigned int)v58;
      v18 = sub_C9AC10(a2);
      v19 = sub_19E15D0(*(__int64 **)(*a1 + 736), v14, *v14, 0, v18, v17, a3, a4, v50, v38, v35, v47, v41, v44, 0);
      goto LABEL_12;
    }
    goto LABEL_17;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 > 1 )
  {
    v23 = nullptr;
    if ( (_BYTE)v10 == 1 )
      v23 = *(unsigned __int16 **)(a2 + 40);
    v24 = sub_1D434A0(a1, v23, a3, a4, v10, v8, v9);
    if ( v24 != 1 )
    {
      v15 = *a1;
      v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        v26 = 0;
        if ( *(_BYTE *)(a2 + 26) == 1 )
          v26 = *(_QWORD *)(a2 + 40);
        if ( v26 == v25 && !v53 )
          goto LABEL_29;
      }
      ptr = v59;
      v58 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v27 = *(_DWORD *)(a2 + 32);
      v42 = (__int64 *)v54;
      v45 = (unsigned int)v55;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v51 = *(_QWORD *)(a2 + 16);
      else
        v51 = 0;
      v48 = *(_DWORD *)(a2 + 36);
      v39 = (unsigned int)v58;
      v36 = (unsigned int *)ptr;
      v28 = (_QWORD *)sub_C9AC10(a2);
      v19 = sub_19DEE70(
              *(__int64 **)(*a1 + 736),
              v25,
              *(_QWORD *)(v25 + 8),
              0,
              v28,
              v51,
              a3,
              a4,
              v27,
              v36,
              v39,
              v48,
              v42,
              v45,
              0);
LABEL_12:
      v20 = ptr;
      v21 = v19;
      if ( ptr == v59 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_17:
    v21 = (_WORD *)(&dword_0 + 1);
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || !*(_QWORD *)(a2 + 16) )
    goto LABEL_17;
  v29 = 0;
  ptr = v59;
  v58 = 0x1000000000LL;
  sub_C9AA70(a2, (__int64)&ptr);
  v30 = *(_DWORD *)(a2 + 32);
  v43 = (__int64 *)v54;
  v46 = (unsigned int)v55;
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
    v29 = *(_QWORD *)(a2 + 16);
  v52 = *(_DWORD *)(a2 + 36);
  v49 = sub_C9AC20(a2);
  v37 = (unsigned int *)ptr;
  v40 = (unsigned int)v58;
  v31 = (_QWORD *)sub_C9AC10(a2);
  v32 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
    v32 = *(_DWORD *)(a2 + 28);
  v33 = *(__int64 **)(*a1 + 736);
  if ( (*(_BYTE *)(v29 + 58) & 2) != 0 )
    v34 = sub_19DEE70(v33, 0, v49, v32, v31, v29, a3, a4, v30, v37, v40, v52, v43, v46, 0);
  else
    v34 = sub_19E15D0(v33, nullptr, v49, v32, (__int64)v31, v29, a3, a4, v30, v37, v40, v52, v43, v46, 0);
  v20 = ptr;
  v21 = v34;
  if ( ptr != v59 )
LABEL_13:
    free(v20);
LABEL_18:
  if ( v54 != v56 )
    free(v54);
  return v21;
}
