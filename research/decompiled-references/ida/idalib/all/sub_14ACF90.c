__int64 __fastcall sub_14ACF90(__int64 a1, int a2, __m128i a3, __m128 a4)
{
  int v5; // ebp
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // r13d
  char v9; // r15
  unsigned __int16 v10; // dx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // rbp
  __int64 *v20; // rdi
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // esi
  __int64 *v25; // rdi
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r13d
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-130h]
  unsigned int v34; // [rsp+14h] [rbp-124h]
  unsigned int v36[2]; // [rsp+20h] [rbp-118h] BYREF
  char v37; // [rsp+28h] [rbp-110h]
  __int64 v38; // [rsp+2Ch] [rbp-10Ch]
  char v39; // [rsp+34h] [rbp-104h]
  void *v40; // [rsp+38h] [rbp-100h]
  __int64 v41; // [rsp+40h] [rbp-F8h]
  _BYTE v42[24]; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v43[10]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-88h] BYREF
  void *v45; // [rsp+B8h] [rbp-80h]
  __int64 v46; // [rsp+C0h] [rbp-78h]
  _BYTE v47[16]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-60h] BYREF
  void *ptr; // [rsp+E0h] [rbp-58h]
  __int64 v50; // [rsp+E8h] [rbp-50h]
  _BYTE v51[72]; // [rsp+F0h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  v48 = a1 + 504;
  v45 = v47;
  v46 = 0x200000000LL;
  v50 = 0x200000000LL;
  v6 = *(_WORD *)(a1 + 32);
  v44 = 0;
  ptr = v51;
  if ( (unsigned __int16)(v6 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    sub_14AB020(a1, (unsigned int *)&v44, a3, a4);
  v7 = *(_WORD *)(a1 + 32);
  v8 = 0;
  v9 = 0;
  if ( v7 == 154 )
  {
    v25 = *(__int64 **)(a1 + 8);
    v8 = 1;
    v9 = 1;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v25, (int *)(a1 + 16));
    v7 = *(_WORD *)(a1 + 32);
  }
  if ( (unsigned __int16)(v7 - 406) <= 8u )
    goto LABEL_35;
  if ( v7 != 20 )
  {
    if ( v7 != 158 )
      goto LABEL_8;
LABEL_35:
    sub_1481A00(a1, (__int64)&v44, v5);
    v7 = *(_WORD *)(a1 + 32);
    v10 = v7 - 141;
    if ( (unsigned __int16)(v7 - 141) > 2u )
      goto LABEL_9;
    goto LABEL_36;
  }
  v21 = *(_QWORD *)(a1 + 8);
  v22 = *(_QWORD *)(v21 + 2944);
  if ( v22 >= *(unsigned int *)(v21 + 2912) )
    v23 = sub_14180A0(v21, 1u);
  else
    v23 = *(_QWORD *)(v21 + 2904) + 24 * v22;
  if ( *(_WORD *)(v23 + 16) == 20 )
    goto LABEL_35;
  v7 = *(_WORD *)(a1 + 32);
  if ( v7 == 158 )
    goto LABEL_35;
LABEL_8:
  v10 = v7 - 141;
  if ( (unsigned __int16)(v7 - 141) > 2u )
  {
LABEL_9:
    v34 = 3;
    goto LABEL_10;
  }
LABEL_36:
  v34 = dword_2617160[v10];
  if ( v34 != 3 )
  {
    v20 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v20, (int *)(a1 + 16));
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 89LL) & 1) != 0 )
    {
      sub_1564820(v43, a1, *(unsigned int *)(a1 + 16), 1995);
      sub_AEA040((__int64)v43);
    }
    v7 = *(_WORD *)(a1 + 32);
LABEL_10:
    if ( (unsigned __int16)(v7 - 406) > 8u )
    {
      if ( v7 != 20 )
        goto LABEL_16;
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD *)(v11 + 2944);
      if ( v12 >= *(unsigned int *)(v11 + 2912) )
        v13 = sub_14180A0(v11, 1u);
      else
        v13 = *(_QWORD *)(v11 + 2904) + 24 * v12;
      if ( *(_WORD *)(v13 + 16) != 20 )
      {
        v7 = *(_WORD *)(a1 + 32);
LABEL_16:
        if ( v7 != 158 )
          goto LABEL_18;
      }
    }
    sub_1481A00(a1, (__int64)&v44, v5);
    v7 = *(_WORD *)(a1 + 32);
  }
LABEL_18:
  v14 = *(__int64 **)(a1 + 8);
  if ( v7 != 154 )
  {
    if ( (*(_BYTE *)(v14[7] + 89) & 1) == 0 )
      goto LABEL_22;
    if ( !v9 )
    {
      v8 = 0;
      goto LABEL_22;
    }
    goto LABEL_56;
  }
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v14, (int *)(a1 + 16));
  if ( v9 )
  {
    v29 = *(_DWORD *)(a1 + 40);
    sub_1564820(v43, a1, v29, 1590);
    v39 = 0;
    v38 = 0;
    v40 = v42;
    v41 = 0;
    v42[0] = 0;
    v42[16] = 0;
    v36[0] = v29;
    v36[1] = v29;
    v37 = 1;
    if ( v29 )
    {
      sub_14A2370(v43, (unsigned __int64)v36);
      if ( v40 != v42 )
        operator delete(v40);
    }
    sub_AEA040((__int64)v43);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 89LL) & 1) != 0 )
      goto LABEL_56;
    v7 = *(_WORD *)(a1 + 32);
    v8 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 89LL) & 1) != 0 )
    {
LABEL_56:
      v8 = 1;
      sub_1564820(v43, a1, *(unsigned int *)(a1 + 16), 1698);
      sub_AEA040((__int64)v43);
      v7 = *(_WORD *)(a1 + 32);
      goto LABEL_22;
    }
    v7 = *(_WORD *)(a1 + 32);
    v8 = 1;
  }
LABEL_22:
  if ( (unsigned __int16)(v7 - 406) > 8u )
  {
    if ( v7 != 20 )
      goto LABEL_24;
    v26 = *(_QWORD *)(a1 + 8);
    v27 = *(_QWORD *)(v26 + 2944);
    if ( v27 >= *(unsigned int *)(v26 + 2912) )
      v28 = sub_14180A0(v26, 1u);
    else
      v28 = *(_QWORD *)(v26 + 2904) + 24 * v27;
    if ( *(_WORD *)(v28 + 16) != 20 )
    {
      v7 = *(_WORD *)(a1 + 32);
LABEL_24:
      if ( v7 != 158 )
        goto LABEL_26;
    }
  }
  sub_1481A00(a1, (__int64)&v44, v5);
LABEL_26:
  v15 = *(_QWORD *)(a1 + 8);
  if ( (**(_BYTE **)(v15 + 56) & 0x20) != 0 && *(_WORD *)(a1 + 32) == 113 )
  {
    v30 = *(_QWORD *)(v15 + 2944);
    v31 = v30 >= *(unsigned int *)(v15 + 2912) ? sub_14180A0(v15, 1u) : *(_QWORD *)(v15 + 2904) + 24 * v30;
    if ( *(_WORD *)(v31 + 16) == 47 )
      *(_WORD *)(a1 + 32) = 5;
  }
  v36[0] = 0;
  LODWORD(v43[0]) = 0;
  v16 = sub_14A5290(a1, v43, v36);
  if ( v17 )
  {
    v18 = 1;
  }
  else
  {
    v24 = 0;
    if ( *(_WORD *)(a1 + 32) == 27 )
    {
      v32 = *(__int64 **)(a1 + 8);
      v33 = v16;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v32, (int *)(a1 + 16));
      v24 = *(_DWORD *)(a1 + 40);
      v16 = v33;
    }
    v18 = sub_1876E60(*(_QWORD *)(a1 + 96), a2, v5, (unsigned int)&v44, v8, v34, v16, v43[0], v24);
  }
  sub_15DCED0(v48, &v48);
  if ( ptr != v51 )
    free(ptr);
  if ( v45 != v47 )
    free(v45);
  return v18;
}
