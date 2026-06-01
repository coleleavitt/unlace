__int64 __fastcall sub_EB5A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r14
  signed __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 *v21; // rsi
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // r10
  _QWORD *v25; // rdx
  int v26; // esi
  int v27; // r8d
  __int64 v28; // r9
  unsigned __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h] BYREF
  __int64 v31; // [rsp+18h] [rbp-60h] BYREF
  __m128i v32[5]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 <= 2 )
    v6 = sub_EB2920(a2, a2, a3, a4, a5, a6);
  if ( !*(_QWORD *)a5
    || (v10 = *(_QWORD *)(*(_QWORD *)a5 + 72LL)) == 0
    || (*(_BYTE *)(v10 + 40) & 4) == 0
    || (*(_BYTE *)(*(_QWORD *)(a4 + 72) + 40LL) & 8) == 0 )
  {
    sub_EB2600(a1, (double *)a4);
    v14 = v11;
    if ( (*(_BYTE *)(a1 + 316) & 0x40) == 0 )
    {
LABEL_8:
      if ( !v6 )
      {
LABEL_9:
        v15 = v14
            * ((*(_QWORD *)(a1 + 16) != 0) + (*(_QWORD *)(a1 + 16) - (unsigned __int64)(*(_QWORD *)(a1 + 16) != 0))
                                           / v14);
        *(_QWORD *)(a1 + 16) = v15;
        goto LABEL_10;
      }
      goto LABEL_20;
    }
LABEL_13:
    v18 = *(unsigned int *)(a1 + 376);
    v19 = *(_QWORD *)(a1 + 360);
    if ( (_DWORD)v18 )
    {
      v20 = (v18 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
      v21 = (__int64 *)(v19 + 16LL * v20);
      v22 = *v21;
      if ( a3 == *v21 )
      {
LABEL_15:
        sub_EB51F0((__m128 *)v32, v21, (_QWORD *)(16 * v18 + v19), a1 + 360, 1);
        v23 = v32[0].m128i_i64[0];
        v24 = a1 + 360;
LABEL_16:
        v29 = v23;
        v25 = (_QWORD *)(*(_QWORD *)(a1 + 360) + 16LL * *(unsigned int *)(a1 + 376));
        sub_EB51F0((__m128 *)v32, v25, v25, v24, 1);
        if ( v32[0].m128i_i64[0] != v29 )
        {
          v15 = *(_QWORD *)(v29 + 8);
          if ( v15 > *(_QWORD *)(a1 + 16) )
            *(_QWORD *)(a1 + 16) = v15;
          goto LABEL_10;
        }
        if ( *(__int64 *)(a1 + 16) < 0 )
          *(_QWORD *)(a1 + 16) = 0;
        goto LABEL_8;
      }
      v26 = 1;
      if ( v22 != -4096 )
      {
        do
        {
          v27 = v26 + 1;
          v20 = (v18 - 1) & (v26 + v20);
          v21 = (__int64 *)(v19 + 16LL * v20);
          v28 = *v21;
          if ( a3 == *v21 )
            goto LABEL_15;
          v26 = v27;
        }
        while ( v28 != -4096 );
      }
    }
    sub_EB51F0(
      (__m128 *)v32,
      (_QWORD *)(v19 + 16LL * (unsigned int)v18),
      (_QWORD *)(v19 + 16LL * (unsigned int)v18),
      a1 + 360,
      1);
    v23 = v32[0].m128i_i64[0];
    v24 = a1 + 360;
    goto LABEL_16;
  }
  if ( !v6 )
  {
    ++*(_QWORD *)(a1 + 16);
    sub_EB2600(a1, (double *)a4);
    v14 = v17;
    if ( (*(_BYTE *)(a1 + 316) & 0x40) == 0 )
      goto LABEL_9;
    goto LABEL_13;
  }
  sub_EB2600(a1, (double *)a4);
  v14 = v11;
  if ( (*(_BYTE *)(a1 + 316) & 0x40) != 0 )
    goto LABEL_13;
LABEL_20:
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v11, v12, v13, (__int64)v32);
  if ( (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 1LL) & 2) == 0 )
    goto LABEL_9;
  v15 = **(_QWORD **)(a4 + 72);
  if ( v15 )
    goto LABEL_9;
LABEL_10:
  v30 = a3;
  v31 = v15;
  sub_EB58F0(v32, a1 + 264, &v30, &v31);
  *(_QWORD *)(a1 + 16) += **(_QWORD **)(a4 + 72);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)a5 = a4;
  return result;
}

