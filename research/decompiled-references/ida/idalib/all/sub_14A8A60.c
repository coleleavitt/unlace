__int64 __fastcall sub_14A8A60(
        const __m128i *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 a5,
        __m128i a6,
        __m128 a7)
{
  __int32 v12; // eax
  unsigned int v13; // edi
  __int16 v14; // si
  _DWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r8
  _QWORD *v20; // r15
  __int64 v21; // r14
  __int64 result; // rax
  __int64 v23; // r15
  int v24; // eax
  __int64 *v25; // rdi
  __int64 v26; // rax
  _DWORD *v27; // rdx
  int v28; // eax
  __int64 v29; // r9
  _QWORD *v30; // [rsp+0h] [rbp-A8h]
  __int16 v31; // [rsp+1Eh] [rbp-8Ah] BYREF
  __int64 v32; // [rsp+20h] [rbp-88h] BYREF
  char *v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  _BYTE v35[16]; // [rsp+38h] [rbp-70h] BYREF
  __int8 *v36; // [rsp+48h] [rbp-60h] BYREF
  _BYTE *v37; // [rsp+50h] [rbp-58h]
  __int64 v38; // [rsp+58h] [rbp-50h]
  _BYTE v39[72]; // [rsp+60h] [rbp-48h] BYREF

  if ( a1[2].m128i_i16[0] == 62 )
  {
    v12 = a1[1].m128i_i32[0];
    *(_DWORD *)(a2 + 56) = 0;
    *(_QWORD *)(a2 + 64) = 0;
    *(_DWORD *)(a2 + 84) = v12;
    *(_DWORD *)(a2 + 80) = v12;
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 89LL) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    sub_147E3E0((__int64)a1, a2);
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 89LL) & 1) == 0 )
      goto LABEL_3;
    v14 = a1[2].m128i_i16[0];
    if ( v14 != 62 )
    {
      v13 = *(_DWORD *)(a2 + 136);
      if ( !v13 )
        goto LABEL_6;
      goto LABEL_4;
    }
  }
  v36 = &a1[31].m128i_i8[8];
  v33 = v35;
  v37 = v39;
  v34 = 0x200000000LL;
  v38 = 0x200000000LL;
  v32 = 0;
  sub_14D7300(a1, &v32, 0, 1);
  sub_147F860(a2 + 728, (__int64)&v32);
  if ( HIDWORD(v32) )
    *(_DWORD *)(a2 + 92) = HIDWORD(v32);
  sub_147A450(&v32);
LABEL_3:
  v13 = *(_DWORD *)(a2 + 136);
  v14 = a1[2].m128i_i16[0];
  if ( v13 )
  {
LABEL_4:
    v15 = *(_DWORD **)(a2 + 128);
    v16 = 1LL << *v15;
    if ( (v16 & 0xB7) == 0 )
    {
      if ( (v16 & 0x40) == 0 )
        goto LABEL_6;
      v27 = v15 + 36;
      v28 = 0;
      while ( v13 > ++v28 )
      {
        v29 = 1LL << *v27;
        if ( (v29 & 0xB7) != 0 )
          break;
        v27 += 36;
        if ( (v29 & 0x40) == 0 )
        {
          if ( v14 != 176 )
            goto LABEL_7;
          goto LABEL_50;
        }
      }
    }
  }
  if ( v14 == 62 )
  {
    v25 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v25, a1[1].m128i_i32);
    v26 = sub_14C4CD0(a1);
    *a4 = v26;
    if ( v26 == 1 )
    {
      LOWORD(v32) = 66;
      sub_15680D0(a1, &v32, 1, 3);
    }
    goto LABEL_10;
  }
LABEL_6:
  if ( v14 == 176 )
  {
LABEL_50:
    sub_14A12D0((__int64)a1, a2, *(double *)a6.m128i_i64, a7);
    goto LABEL_10;
  }
LABEL_7:
  v17 = a1[120].m128i_i64[0];
  if ( v17 == a1[120].m128i_i64[1] )
    v17 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
  sub_14A7FA0((__int64)a1, (__int64)a3, (**(_BYTE **)(v17 - 8) & 2) != 0, *(_DWORD *)(*(_QWORD *)a2 + 264LL));
  if ( !*a3 )
  {
LABEL_10:
    if ( a1[2].m128i_i16[0] != 126 )
      goto LABEL_11;
    goto LABEL_31;
  }
  sub_14A7280(a1, a2, (__int64)a3, a6, a7);
  if ( a1[2].m128i_i16[0] != 126 )
    goto LABEL_11;
LABEL_31:
  LODWORD(v32) = 0;
  v23 = sub_156E540(a1, 1, &v32);
  if ( v23 == 1 )
  {
    v31 = 66;
    sub_15680D0(a1, &v31, 1, 3);
  }
  v24 = v32;
  *(_QWORD *)(a2 + 816) = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v24 )
  {
LABEL_11:
    sub_14A1D90((__int64)a1);
    if ( a1[2].m128i_i16[0] != 189 )
      goto LABEL_12;
    goto LABEL_35;
  }
  *(_DWORD *)(a2 + 92) = v24;
  sub_14A1D90((__int64)a1);
  if ( a1[2].m128i_i16[0] != 189 )
    goto LABEL_12;
LABEL_35:
  v36 = &a1[31].m128i_i8[8];
  v33 = v35;
  v37 = v39;
  v34 = 0x200000000LL;
  v38 = 0x200000000LL;
  v32 = 0;
  sub_1490230(a1, (__int64)&v32, a5, a2, a6, a7);
  sub_147F500((__int64 *)(a2 + 736), *(char **)(a2 + 736), v33, &v33[8 * (unsigned int)v34]);
  LODWORD(v34) = 0;
  sub_15D8C50(a2 + 768, &v36);
  LODWORD(v38) = 0;
  if ( HIDWORD(v32) )
    *(_DWORD *)(a2 + 92) = HIDWORD(v32);
  sub_147A450(&v32);
LABEL_12:
  sub_14A1D90((__int64)a1);
  if ( !*a4 && !*a3 )
  {
    v18 = a1[120].m128i_i64[0];
    if ( v18 == a1[120].m128i_i64[1] )
      v18 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
    sub_14A7FA0((__int64)a1, (__int64)a3, (**(_BYTE **)(v18 - 8) & 2) != 0, *(_DWORD *)(*(_QWORD *)a2 + 264LL));
    if ( *a3 )
    {
      v19 = *(_QWORD **)(a2 + 736);
      v20 = v19;
      v30 = &v19[*(unsigned int *)(a2 + 744)];
      if ( v30 != v19 )
      {
        do
        {
          v21 = *v20;
          if ( (unsigned __int8)sub_15D8650(*v20)
            && (*(_BYTE *)(v21 + 34) & 0xF) != 2
            && (*(_BYTE *)(v21 + 35) & 1) == 0 )
          {
            sub_1564820(&v32, a1, *(unsigned int *)(v21 + 24), 2145);
            sub_AEA040((__int64)&v32);
          }
          ++v20;
        }
        while ( v30 != v20 );
      }
      sub_14A7280(a1, a2, (__int64)a3, a6, a7);
    }
  }
  result = 0;
  if ( !*(_DWORD *)(a2 + 56) && !*(_QWORD *)(a2 + 64) && !*(_DWORD *)(a2 + 104) && !*a4 )
  {
    LOWORD(v32) = 25;
    sub_15680D0(a1, &v32, 1, 3);
    return 1;
  }
  return result;
}
