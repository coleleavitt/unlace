__int16 *__fastcall sub_1CD7830(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rbp
  _QWORD *v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  char *v15; // rax
  void *v16; // r12
  __int16 *result; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int16 *v21; // rax
  __int64 v22; // rbx
  __int16 *v23; // rbp
  unsigned int v24; // ebp
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  const __m128i *v28; // [rsp+10h] [rbp-58h]
  char v29; // [rsp+18h] [rbp-50h]
  unsigned __int8 v30; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int64 v31[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = a3;
  v9 = a4;
  v10 = a6;
  v11 = *(_QWORD **)(a4 + 8);
  v29 = a5;
  if ( *(_DWORD *)a4 != 2 )
  {
    v30 = 0;
    v28 = (const __m128i *)(a4 + 120);
    goto LABEL_22;
  }
  v12 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
  a3 = *(_BYTE *)(v12 + 28) & 0x7F;
  if ( (((_BYTE)a3 + 52) & 0x7Fu) > 1 && (unsigned int)(unsigned __int8)a3 - 53 > 1 )
  {
    a4 = (unsigned int)(unsigned __int8)a3 - 68;
    if ( (unsigned int)a4 <= 6 && !a6 && (_BYTE)a3 != 71 )
    {
      v13 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_25:
      v24 = *(_DWORD *)(v9 + 128);
      v25 = *(_QWORD *)(a1 + 248);
      sub_F22AA0(v31, v13);
      v26 = sub_A80CA0(v25, a2[1], v8 != 0, v31[0]);
      sub_1CCD5B0(a1, v26, v24);
      return (_WORD *)(&dword_0 + 1);
    }
    v28 = (const __m128i *)(v9 + 120);
    v15 = (char *)(*v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (_BYTE)a3 != 69 )
    {
      a6 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
      v30 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v13 = sub_B72ED0(*v11 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = *(_BYTE *)(v13 + 28) & 0x7F;
    if ( (unsigned int)v14 - 68 <= 6 && !v10 && v14 != 71 )
      goto LABEL_25;
    v15 = (char *)sub_B72ED0(v12);
    v28 = (const __m128i *)(v9 + 120);
    if ( (v15[28] & 0x7F) != 0x45 )
    {
      v30 = 0;
      goto LABEL_17;
    }
  }
  v16 = sub_1CD6960(a1, v15, *(_DWORD *)(v9 + 128), v10, *(double *)a7.m128i_i64, a8);
  result = (_WORD *)(&dword_0 + 1);
  if ( !(_BYTE)a3 )
  {
    if ( !v16 )
      goto LABEL_12;
    if ( !(unsigned int)sub_B740B0((__int64)v16) )
      sub_B74430((__int64)v16, 1, *(_DWORD *)(v9 + 128));
    result = (__int16 *)sub_190AE60(a1, a2, (__int64)v28, (__int64)v16, v12, v10, a7, a8, 0);
    if ( !result )
    {
LABEL_12:
      v11 = *(_QWORD **)(v9 + 8);
      if ( *(_DWORD *)v9 == 2 )
      {
        v12 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
        a3 = *(_BYTE *)(v12 + 28) & 0x7F;
        if ( (((_BYTE)a3 + 52) & 0x7Fu) <= 1 || (unsigned int)(unsigned __int8)a3 - 53 <= 1 )
        {
          v30 = 1;
LABEL_17:
          a6 = sub_B72ED0(v12);
          a3 = *(_BYTE *)(a6 + 28) & 0x7F;
          goto LABEL_18;
        }
        a6 = *v11 & 0xFFFFFFFFFFFFFFF8LL;
        v30 = 1;
LABEL_18:
        if ( (_BYTE)a3 == 73 )
          return (__int16 *)sub_1CD12A0(a1, (__int64)a2, v8, (__int64)v28, v12, a6, *(double *)a7.m128i_i64, a8, v10);
        goto LABEL_22;
      }
      v30 = 1;
LABEL_22:
      *(_WORD *)(v9 + 163) = 0;
      v18 = (__int64)&v11[*(unsigned int *)(v9 + 16)];
      v19 = sub_15AB9E0((__int64)a2, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
      v21 = sub_C9A370(*(_QWORD **)(a1 + 248), *(_QWORD *)(v9 + 96), v19, v20, v8, v28, v29, v10, v11, v18, v30, 0);
      v22 = *(_QWORD *)(a1 + 248);
      v23 = v21;
      if ( *(_QWORD *)(v22 + 19080) == *((_QWORD *)v21 + 1) && *(_DWORD *)v9 == 2 )
      {
        v27 = sub_16C47B0(**(_QWORD **)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !sub_B8BF30(v27) )
          *((_QWORD *)v23 + 1) = *(_QWORD *)(v22 + 19096);
      }
      return v23;
    }
  }
  return result;
}
