__int64 __fastcall sub_1571CA0(__int64 a1, __int64 a2, unsigned int a3, char a4, __m128i a5, double a6)
{
  __int64 v7; // r13
  __int64 v10; // rdx
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  unsigned __int64 v13; // rax
  __int16 v14; // ax
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 *v28; // rdi
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 *v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // r12
  unsigned __int64 v34; // [rsp+0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+8h] [rbp-40h]

  v7 = a1 + 40;
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_QWORD *)(a1 + 32) = 0x600000000LL;
  if ( *(_WORD *)(a2 + 32) != 5 )
    goto LABEL_3;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  if ( *(_DWORD *)v10 != 6 )
    goto LABEL_3;
  v23 = v10 + 16;
  if ( *(_DWORD *)(v10 + 16) == 1853252964 && *(_WORD *)(v10 + 20) == 28021 )
  {
    v29 = *(_QWORD *)(a2 + 8);
    v30 = *(_QWORD *)(v29 + 2944);
    if ( *(unsigned int *)(v29 + 2912) <= v30 )
    {
      if ( *(_WORD *)(sub_14180A0(v29, 1u) + 16) != 62 )
      {
LABEL_35:
        if ( *(_WORD *)(a2 + 32) != 5 )
          goto LABEL_3;
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
        if ( *(_DWORD *)v10 != 6 )
          goto LABEL_3;
        v23 = v10 + 16;
        goto LABEL_21;
      }
      v29 = *(_QWORD *)(a2 + 8);
LABEL_30:
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
      sub_14634E0((__int64 *)v29, (int *)(a2 + 16));
      v31 = *(__int64 **)(a2 + 8);
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
      sub_14634E0(v31, (int *)(a2 + 16));
      v32 = sub_14BDAD0(a2, 0, a5);
      if ( v32 > 1 )
      {
        v33 = sub_1AA2500(
                *(_QWORD *)(*(_QWORD *)(a2 + 96) + 744LL),
                a4 == 0 ? 20 : 18,
                (unsigned __int8)(a4 == 0 ? 48 : 51),
                a3,
                v32 & 0xFFFFFFFFFFFFFFFELL);
      }
      else
      {
        if ( v32 == 1 )
          goto LABEL_10;
        v33 = 0;
      }
      if ( !(unsigned __int8)sub_1569A00(a2, 0x3Eu, 14, &byte_22F0C30, 0, a5, a6) )
      {
        *(_QWORD *)(a1 + 8) = v33 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_35;
      }
LABEL_10:
      *(_BYTE *)a1 = 1;
      return a1;
    }
    if ( *(_WORD *)(*(_QWORD *)(v29 + 2904) + 24 * v30 + 16) == 62 )
      goto LABEL_30;
  }
LABEL_21:
  if ( *(_DWORD *)(v10 + 16) == 1969583473 && *(_WORD *)(v23 + 4) == 29541 )
  {
    v24 = *(_QWORD *)(a2 + 8);
    v25 = *(_QWORD *)(v24 + 2944);
    v26 = v25 >= *(unsigned int *)(v24 + 2912) ? sub_14180A0(v24, 1u) : *(_QWORD *)(v24 + 2904) + 24 * v25;
    if ( *(_WORD *)(v26 + 16) == 62 )
    {
      v27 = *(__int64 **)(a2 + 8);
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
      sub_14634E0(v27, (int *)(a2 + 16));
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 40);
      v28 = *(__int64 **)(a2 + 8);
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
      sub_14634E0(v28, (int *)(a2 + 16));
    }
  }
LABEL_3:
  v11 = a4 == 0 ? 48 : 51;
  v12 = a4 == 0 ? 20 : 18;
  v13 = sub_14BDAD0(a2, 0, a5);
  if ( v13 <= 1 )
  {
    if ( v13 != 1 )
      goto LABEL_5;
    goto LABEL_10;
  }
  v17 = sub_1AA2500(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 744LL), v12, v11, a3, v13 & 0xFFFFFFFFFFFFFFFELL);
  if ( v17 >= 2 )
  {
    v18 = *(unsigned int *)(a1 + 32);
    v19 = v17 & 0xFFFFFFFFFFFFFFFELL;
    if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
    {
      v34 = v19;
      sub_2237220(a1 + 24, v7, v18 + 1, 8);
      v18 = *(unsigned int *)(a1 + 32);
      v19 = v34;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v18) = v19;
    ++*(_DWORD *)(a1 + 32);
  }
LABEL_5:
  while ( 1 )
  {
    v14 = *(_WORD *)(a2 + 32);
    if ( v14 == 451 || v14 == 23 )
      return a1;
    if ( (unsigned __int8)sub_1569A00(a2, 0x42u, 14, &byte_22F0C30, 0, a5, a6) )
      goto LABEL_10;
    v15 = sub_14BDAD0(a2, 0, a5);
    if ( v15 > 1 )
    {
      v20 = sub_1AA2500(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 744LL), v12, v11, a3, v15 & 0xFFFFFFFFFFFFFFFELL);
      if ( v20 >= 2 )
      {
        v21 = *(unsigned int *)(a1 + 32);
        v22 = v20 & 0xFFFFFFFFFFFFFFFELL;
        if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
        {
          v35 = v22;
          sub_2237220(a1 + 24, v7, v21 + 1, 8);
          v21 = *(unsigned int *)(a1 + 32);
          v22 = v35;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v21) = v22;
        ++*(_DWORD *)(a1 + 32);
      }
    }
    else if ( v15 == 1 )
    {
      goto LABEL_10;
    }
  }
}
