__int64 __fastcall sub_224E910(_QWORD *a1, __int64 a2, __int64 a3, const char *a4, double a5)
{
  __int64 v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rbx
  size_t v13; // rax
  _BYTE *v14; // rdi
  size_t v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // rax
  const char *v19; // [rsp+8h] [rbp-40h] BYREF
  __m128 v20; // [rsp+10h] [rbp-38h] BYREF
  double v21; // [rsp+20h] [rbp-28h]
  int v22; // [rsp+28h] [rbp-20h]

  v6 = a2;
  v9 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v9) > 6 )
  {
    *(_DWORD *)v9 = 1769218569;
    *(_WORD *)(v9 + 4) = 25965;
    *(_BYTE *)(v9 + 6) = 46;
    *(_QWORD *)(a2 + 32) += 7LL;
  }
  else
  {
    v6 = sub_227BF10(a2, "\t\"time.", 7);
  }
  v10 = sub_227BF10(v6, *a1, a1[1]);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_227BA10(v10, 46);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = 46;
  }
  v12 = sub_227BF10(v10, *(_QWORD *)(a3 + 40), *(_QWORD *)(a3 + 48));
  if ( !a4 )
    goto LABEL_8;
  v13 = strlen(a4);
  v14 = *(_BYTE **)(v12 + 32);
  v15 = v13;
  v16 = *(_QWORD *)(v12 + 24) - (_QWORD)v14;
  if ( v15 > v16 )
  {
    v12 = sub_227BF10(v12, a4, v15);
LABEL_8:
    v14 = *(_BYTE **)(v12 + 32);
    v16 = *(_QWORD *)(v12 + 24) - (_QWORD)v14;
    goto LABEL_9;
  }
  if ( v15 )
  {
    memcpy(v14, a4, v15);
    v14 = (_BYTE *)(v15 + *(_QWORD *)(v12 + 32));
    v18 = *(_QWORD *)(v12 + 24) - (_QWORD)v14;
    *(_QWORD *)(v12 + 32) = v14;
    if ( v18 <= 2 )
      goto LABEL_10;
LABEL_14:
    v14[2] = 32;
    *(_WORD *)v14 = 14882;
    *(_QWORD *)(v12 + 32) += 3LL;
    goto LABEL_11;
  }
LABEL_9:
  if ( v16 > 2 )
    goto LABEL_14;
LABEL_10:
  v12 = sub_227BF10(v12, "\": ", 3);
LABEL_11:
  v22 = 16;
  v21 = a5;
  v19 = "%.*e";
  v20 = _mm_loadh_ps((const double *)&v19);
  return sub_227C560(v12, &v20);
}
