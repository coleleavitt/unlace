unsigned __int16 *__fastcall sub_1DDE930(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // r14
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int16 *v20; // rax
  void *v21; // rdi
  unsigned __int16 *v22; // rbp
  unsigned __int64 v24; // rsi
  unsigned __int16 *v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  unsigned int v28; // r15d
  _QWORD *v29; // rax
  unsigned __int64 v30; // r14
  unsigned int v31; // r15d
  _QWORD *v32; // rax
  unsigned int v33; // ecx
  __int64 *v34; // r10
  unsigned __int16 *v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-118h]
  unsigned int *v37; // [rsp+0h] [rbp-118h]
  unsigned int *v38; // [rsp+0h] [rbp-118h]
  unsigned int *v39; // [rsp+8h] [rbp-110h]
  unsigned __int64 v40; // [rsp+8h] [rbp-110h]
  unsigned __int64 v41; // [rsp+8h] [rbp-110h]
  __int64 *v42; // [rsp+10h] [rbp-108h]
  __int64 *v43; // [rsp+10h] [rbp-108h]
  __int64 *v44; // [rsp+10h] [rbp-108h]
  __int64 v45; // [rsp+18h] [rbp-100h]
  __int64 v46; // [rsp+18h] [rbp-100h]
  __int64 v47; // [rsp+18h] [rbp-100h]
  unsigned int v48; // [rsp+20h] [rbp-F8h]
  unsigned int v49; // [rsp+20h] [rbp-F8h]
  __int64 v50; // [rsp+20h] [rbp-F8h]
  unsigned int v51; // [rsp+28h] [rbp-F0h]
  __int64 v52; // [rsp+28h] [rbp-F0h]
  unsigned int v53; // [rsp+28h] [rbp-F0h]
  char v54; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v55; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-D0h]
  _BYTE v57[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v59; // [rsp+98h] [rbp-80h]
  _BYTE v60[120]; // [rsp+A0h] [rbp-78h] BYREF

  v6 = *(unsigned __int16 *)(a2 + 24);
  v56 = 0x800000000LL;
  v54 = 0;
  v7 = v6;
  v55 = v57;
  if ( v6 > 8 )
  {
    sub_2237220(&v55, v57, v6, 8);
    v7 = *(_WORD *)(a2 + 24);
  }
  if ( (unsigned __int8)sub_1DDBD00(a1, (unsigned __int64 *)(a2 + 48), v7, 0, (__int64)&v55, &v54, a3, a4) )
    goto LABEL_17;
  v11 = *(unsigned __int8 *)(a2 + 26);
  if ( !*(_BYTE *)(a2 + 26) )
  {
    v12 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 40), a3, a4);
    v15 = v12;
    if ( v12 )
    {
      v16 = *a1;
      v17 = *(unsigned int *)(*a1 + 12632);
      if ( !(_DWORD)v17 && !*(_BYTE *)(a2 + 26) && v12 == *(__int64 **)(a2 + 40) && !v54 )
      {
LABEL_29:
        v22 = sub_19A3E40(v16, (unsigned __int16 *)a2, v17, v13, v14, a3, a4);
        goto LABEL_18;
      }
      v18 = 0;
      ptr = v60;
      v59 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v42 = (__int64 *)v55;
      v45 = (unsigned int)v56;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v18 = *(_QWORD *)(a2 + 16);
      v51 = *(_DWORD *)(a2 + 32);
      v48 = *(_DWORD *)(a2 + 36);
      v39 = (unsigned int *)ptr;
      v36 = (unsigned int)v59;
      v19 = sub_C9AC10(a2);
      v20 = sub_19E15D0(*(__int64 **)(*a1 + 736), v15, *v15, 0, v19, v18, a3, a4, v51, v39, v36, v48, v42, v45, 0);
      goto LABEL_12;
    }
    goto LABEL_17;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 > 1 )
  {
    v24 = 0;
    if ( (_BYTE)v11 == 1 )
      v24 = *(_QWORD *)(a2 + 40);
    v25 = sub_1DC71F0(a1, v24, v11, v8, v9, v10, a3, a4);
    if ( v25 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v16 = *a1;
      v26 = (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        v27 = 0;
        if ( *(_BYTE *)(a2 + 26) == 1 )
          v27 = *(_QWORD *)(a2 + 40);
        if ( v27 == v26 && !v54 )
          goto LABEL_29;
      }
      ptr = v60;
      v59 = 0x1000000000LL;
      sub_C9AA70(a2, (__int64)&ptr);
      v28 = *(_DWORD *)(a2 + 32);
      v43 = (__int64 *)v55;
      v46 = (unsigned int)v56;
      if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
        v52 = *(_QWORD *)(a2 + 16);
      else
        v52 = 0;
      v49 = *(_DWORD *)(a2 + 36);
      v40 = (unsigned int)v59;
      v37 = (unsigned int *)ptr;
      v29 = (_QWORD *)sub_C9AC10(a2);
      v20 = sub_19DEE70(
              *(__int64 **)(*a1 + 736),
              v26,
              *(_QWORD *)(v26 + 8),
              0,
              v29,
              v52,
              a3,
              a4,
              v28,
              v37,
              v40,
              v49,
              v43,
              v46,
              0);
LABEL_12:
      v21 = ptr;
      v22 = v20;
      if ( ptr == v60 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_17:
    v22 = (_WORD *)(&dword_0 + 1);
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || !*(_QWORD *)(a2 + 16) )
    goto LABEL_17;
  v30 = 0;
  ptr = v60;
  v59 = 0x1000000000LL;
  sub_C9AA70(a2, (__int64)&ptr);
  v31 = *(_DWORD *)(a2 + 32);
  v44 = (__int64 *)v55;
  v47 = (unsigned int)v56;
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
    v30 = *(_QWORD *)(a2 + 16);
  v53 = *(_DWORD *)(a2 + 36);
  v50 = sub_C9AC20(a2);
  v38 = (unsigned int *)ptr;
  v41 = (unsigned int)v59;
  v32 = (_QWORD *)sub_C9AC10(a2);
  v33 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
    v33 = *(_DWORD *)(a2 + 28);
  v34 = *(__int64 **)(*a1 + 736);
  if ( (*(_BYTE *)(v30 + 58) & 2) != 0 )
    v35 = sub_19DEE70(v34, 0, v50, v33, v32, v30, a3, a4, v31, v38, v41, v53, v44, v47, 0);
  else
    v35 = sub_19E15D0(v34, nullptr, v50, v33, (__int64)v32, v30, a3, a4, v31, v38, v41, v53, v44, v47, 0);
  v21 = ptr;
  v22 = v35;
  if ( ptr != v60 )
LABEL_13:
    free(v21);
LABEL_18:
  if ( v55 != v57 )
    free(v55);
  return v22;
}
