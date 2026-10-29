__int64 __fastcall sub_198ABD0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int16 v6; // ax
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // rbp
  unsigned __int16 *v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  int v19; // r15d
  int v20; // eax
  __int64 v21; // r14
  int v22; // r15d
  int v23; // eax
  int v24; // ecx
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-118h]
  void *v28; // [rsp+0h] [rbp-118h]
  void *v29; // [rsp+0h] [rbp-118h]
  void *v30; // [rsp+8h] [rbp-110h]
  __int64 v31; // [rsp+8h] [rbp-110h]
  __int64 v32; // [rsp+8h] [rbp-110h]
  void *v33; // [rsp+10h] [rbp-108h]
  void *v34; // [rsp+10h] [rbp-108h]
  void *v35; // [rsp+10h] [rbp-108h]
  __int64 v36; // [rsp+18h] [rbp-100h]
  __int64 v37; // [rsp+18h] [rbp-100h]
  __int64 v38; // [rsp+18h] [rbp-100h]
  int v39; // [rsp+20h] [rbp-F8h]
  int v40; // [rsp+20h] [rbp-F8h]
  int v41; // [rsp+20h] [rbp-F8h]
  int v42; // [rsp+28h] [rbp-F0h]
  __int64 v43; // [rsp+28h] [rbp-F0h]
  int v44; // [rsp+28h] [rbp-F0h]
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
  if ( (unsigned __int8)sub_197B2A0(
                          a1,
                          (unsigned __int16 **)(a2 + 48),
                          v6,
                          0,
                          (__int64)&v46,
                          &v45,
                          *(double *)a3.m128_u64,
                          a4) )
    goto LABEL_17;
  if ( !*(_BYTE *)(a2 + 26) )
  {
    v7 = sub_1988430(a1, *(_QWORD *)(a2 + 40), a3, a4);
    v8 = v7;
    if ( v7 )
    {
      if ( *(_BYTE *)(a2 + 26) || v7 != *(_QWORD **)(a2 + 40) || v45 )
      {
        LODWORD(v9) = 0;
        ptr = v51;
        v50 = 0x1000000000LL;
        sub_C9AA70(a2, (__int64)&ptr);
        v33 = v46;
        v36 = (unsigned int)v47;
        if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
          v9 = *(_QWORD *)(a2 + 16);
        v42 = *(_DWORD *)(a2 + 32);
        v39 = *(_DWORD *)(a2 + 36);
        v30 = ptr;
        v27 = (unsigned int)v50;
        v10 = sub_C9AC10(a2);
        v11 = sub_19E15D0(
                *(_QWORD *)(*a1 + 736),
                (_DWORD)v8,
                *v8,
                0,
                v10,
                v9,
                v42,
                (__int64)v30,
                v27,
                v39,
                (__int64)v33,
                v36,
                0);
LABEL_12:
        v12 = ptr;
        v13 = v11;
        if ( ptr == v51 )
          goto LABEL_18;
        goto LABEL_13;
      }
LABEL_31:
      v13 = sub_19A3E40(*a1, a2);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 > 1 )
  {
    v15 = nullptr;
    if ( *(_BYTE *)(a2 + 26) == 1 )
      v15 = *(unsigned __int16 **)(a2 + 40);
    v16 = sub_190CCA0(a1, v15, *(double *)a3.m128_u64, a4);
    if ( v16 != 1 )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
      v18 = 0;
      if ( *(_BYTE *)(a2 + 26) == 1 )
        v18 = *(_QWORD *)(a2 + 40);
      if ( v18 != v17 || v45 )
      {
        ptr = v51;
        v50 = 0x1000000000LL;
        sub_C9AA70(a2, (__int64)&ptr);
        v19 = *(_DWORD *)(a2 + 32);
        v34 = v46;
        v37 = (unsigned int)v47;
        if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
          v43 = *(_QWORD *)(a2 + 16);
        else
          LODWORD(v43) = 0;
        v40 = *(_DWORD *)(a2 + 36);
        v31 = (unsigned int)v50;
        v28 = ptr;
        v20 = sub_C9AC10(a2);
        v11 = sub_19DEE70(
                *(_QWORD *)(*a1 + 736),
                v17,
                *(_QWORD *)(v17 + 8),
                0,
                v20,
                v43,
                v19,
                (__int64)v28,
                v31,
                v40,
                (__int64)v34,
                v37,
                0);
        goto LABEL_12;
      }
      goto LABEL_31;
    }
LABEL_17:
    v13 = 1;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || !*(_QWORD *)(a2 + 16) )
    goto LABEL_17;
  v21 = 0;
  ptr = v51;
  v50 = 0x1000000000LL;
  sub_C9AA70(a2, (__int64)&ptr);
  v22 = *(_DWORD *)(a2 + 32);
  v35 = v46;
  v38 = (unsigned int)v47;
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
    v21 = *(_QWORD *)(a2 + 16);
  v44 = *(_DWORD *)(a2 + 36);
  v41 = sub_C9AC20(a2);
  v29 = ptr;
  v32 = (unsigned int)v50;
  v23 = sub_C9AC10(a2);
  v24 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
    v24 = *(_DWORD *)(a2 + 28);
  v25 = *(_QWORD *)(*a1 + 736);
  if ( (*(_BYTE *)(v21 + 58) & 2) != 0 )
    v26 = sub_19DEE70(v25, 0, v41, v24, v23, v21, v22, (__int64)v29, v32, v44, (__int64)v35, v38, 0);
  else
    v26 = sub_19E15D0(v25, 0, v41, v24, v23, v21, v22, (__int64)v29, v32, v44, (__int64)v35, v38, 0);
  v12 = ptr;
  v13 = v26;
  if ( ptr != v51 )
LABEL_13:
    free(v12);
LABEL_18:
  if ( v46 != v48 )
    free(v46);
  return v13;
}
