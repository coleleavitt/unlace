__int64 __fastcall sub_149FD30(__int64 a1, int a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned int v6; // r12d
  int v7; // edx
  __int64 v8; // rdi
  unsigned __int16 v9; // r15
  __int64 v10; // r14
  _BOOL4 v11; // eax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rdi
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rdi
  unsigned int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v36[136]; // [rsp+10h] [rbp-88h] BYREF

  v5 = *(_WORD *)(a1 + 32);
  *(_DWORD *)(a3 + 88) = 0;
  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  *(_DWORD *)(a3 + 32) = 0;
  *(_DWORD *)(a3 + 56) = 0;
  *(_QWORD *)(a3 + 64) = 0;
  *(_QWORD *)(a3 + 80) = 0;
  if ( v5 == 151 )
  {
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 40);
    if ( *(_WORD *)(a1 + 32) != 329 )
      goto LABEL_3;
LABEL_16:
    v6 = 1;
    sub_1564820(v36, a1, *(unsigned int *)(a1 + 16), 1892);
    sub_AEA040((__int64)v36);
    return v6;
  }
  if ( v5 == 329 )
    goto LABEL_16;
LABEL_3:
  v35 = 0;
  v6 = sub_14D0170(a1, (int)a3 + 8, 0, 0, 0, 0, 0, (__int64)&v35, 0, 1, 0);
  if ( (_BYTE)v6 )
    return 1;
  v7 = *(_DWORD *)(a3 + 8);
  if ( v7 )
  {
    if ( *(_DWORD *)(a3 + 12) && !*(_QWORD *)(a3 + 16) )
      return 1;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_WORD *)(a1 + 32);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 56) + 1LL) & 0x10) == 0 || a2 != 7 )
    goto LABEL_7;
  v10 = a3 + 56;
  v11 = 1;
  if ( v9 != 5 )
    goto LABEL_8;
  v17 = *(_QWORD *)(v8 + 2944);
  if ( v17 < *(unsigned int *)(v8 + 2912) )
  {
    v18 = *(_WORD *)(*(_QWORD *)(v8 + 2904) + 24 * v17 + 16);
    if ( v18 == 63 )
    {
LABEL_29:
      if ( v7 && *(_DWORD *)(a3 + 12) || *(_QWORD *)(a3 + 16) )
      {
        v19 = sub_141A630(v9);
        if ( v9 == 1 || v19 )
          v20 = 0;
        else
          v20 = *(_QWORD *)(a1 + 24);
        if ( v35 == v20 )
        {
          if ( !sub_E90060(*(_QWORD *)(a3 + 16)) && !sub_E90090(*(_QWORD *)(a3 + 16)) )
          {
            v32 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v32, (int *)(a1 + 16));
            v33 = *(_DWORD *)(a1 + 40);
            v34 = sub_19A2670(*(_QWORD *)(a1 + 96), a3 + 8, v33, v35);
            *(_DWORD *)(a3 + 56) = 4;
            *(_DWORD *)(a3 + 80) = v33;
            *(_DWORD *)(a3 + 84) = v33;
            *(_QWORD *)(a3 + 64) = v34;
            goto LABEL_9;
          }
          v9 = *(_WORD *)(a1 + 32);
        }
      }
      goto LABEL_7;
    }
LABEL_23:
    if ( v18 == 66 )
      goto LABEL_28;
    goto LABEL_24;
  }
  if ( *(_WORD *)(sub_14180A0(v8, 1u) + 16) == 63 )
    goto LABEL_50;
  v21 = *(_QWORD *)(a1 + 8);
  v22 = *(_QWORD *)(v21 + 2944);
  if ( v22 < *(unsigned int *)(v21 + 2912) )
  {
    v9 = *(_WORD *)(a1 + 32);
    v18 = *(_WORD *)(*(_QWORD *)(v21 + 2904) + 24 * v22 + 16);
    goto LABEL_23;
  }
  if ( *(_WORD *)(sub_14180A0(v21, 1u) + 16) == 66 )
    goto LABEL_50;
  v23 = *(_QWORD *)(a1 + 8);
  v24 = *(_QWORD *)(v23 + 2944);
  if ( v24 < *(unsigned int *)(v23 + 2912) )
  {
    v9 = *(_WORD *)(a1 + 32);
    v18 = *(_WORD *)(*(_QWORD *)(v23 + 2904) + 24 * v24 + 16);
LABEL_24:
    if ( v18 == 27 )
      goto LABEL_28;
    goto LABEL_25;
  }
  if ( *(_WORD *)(sub_14180A0(v23, 1u) + 16) == 27 )
    goto LABEL_50;
  v25 = *(_QWORD *)(a1 + 8);
  v26 = *(_QWORD *)(v25 + 2944);
  if ( v26 < *(unsigned int *)(v25 + 2912) )
  {
    v9 = *(_WORD *)(a1 + 32);
    v18 = *(_WORD *)(*(_QWORD *)(v25 + 2904) + 24 * v26 + 16);
LABEL_25:
    if ( v18 == 20 )
      goto LABEL_28;
    goto LABEL_26;
  }
  if ( *(_WORD *)(sub_14180A0(v25, 1u) + 16) == 20 )
    goto LABEL_50;
  v27 = *(_QWORD *)(a1 + 8);
  v28 = *(_QWORD *)(v27 + 2944);
  if ( v28 < *(unsigned int *)(v27 + 2912) )
  {
    v9 = *(_WORD *)(a1 + 32);
    v18 = *(_WORD *)(*(_QWORD *)(v27 + 2904) + 24 * v28 + 16);
LABEL_26:
    if ( (unsigned __int16)(v18 - 406) > 8u )
      goto LABEL_27;
LABEL_28:
    v7 = *(_DWORD *)(a3 + 8);
    goto LABEL_29;
  }
  if ( (unsigned __int16)(*(_WORD *)(sub_14180A0(v27, 1u) + 16) - 406) <= 8u )
  {
LABEL_50:
    v7 = *(_DWORD *)(a3 + 8);
    v9 = *(_WORD *)(a1 + 32);
    goto LABEL_29;
  }
  v29 = *(_QWORD *)(a1 + 8);
  v30 = *(_QWORD *)(v29 + 2944);
  if ( v30 < *(unsigned int *)(v29 + 2912) )
  {
    v9 = *(_WORD *)(a1 + 32);
    v18 = *(_WORD *)(*(_QWORD *)(v29 + 2904) + 24 * v30 + 16);
  }
  else
  {
    v31 = sub_14180A0(v29, 1u);
    v9 = *(_WORD *)(a1 + 32);
    v18 = *(_WORD *)(v31 + 16);
  }
LABEL_27:
  if ( v18 == 189 )
    goto LABEL_28;
LABEL_7:
  v10 = a3 + 56;
  v11 = 1;
  if ( v9 == 5 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(v13 + 2944);
    if ( v14 >= *(unsigned int *)(v13 + 2912) )
      v15 = sub_14180A0(v13, 1u);
    else
      v15 = *(_QWORD *)(v13 + 2904) + 24 * v14;
    v11 = *(_WORD *)(v15 + 16) != 64;
  }
LABEL_8:
  if ( (unsigned __int8)sub_14D1670(a1, (int)a3 + 8, 0, 0, 0, 1, v11, 0, 0, v10) )
    return 1;
LABEL_9:
  if ( *(_WORD *)(a1 + 32) == 27 )
  {
    v16 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v16, (int *)(a1 + 16));
    *(_DWORD *)(a3 + 88) = *(_DWORD *)(a1 + 40);
    sub_1564820(
      v36,
      a1,
      *(unsigned int *)(a1 + 16),
      (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) == 0 ? 2023 : 2096);
    sub_AEA040((__int64)v36);
  }
  return v6;
}
