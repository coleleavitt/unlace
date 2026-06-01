void __fastcall sub_120AE90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i *v10; // rax
  __m128i *v11; // rdx
  __int64 v12; // rsi
  __m128i *v13; // rcx
  _WORD *v14; // rdi
  unsigned __int8 (__fastcall *v15)(__int64, void **); // r11
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  __int64 v24; // rdi
  unsigned __int8 (__fastcall *v25)(__int64, void **); // [rsp+10h] [rbp-158h]
  __int64 v26; // [rsp+18h] [rbp-150h]
  void *v27[2]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-138h] BYREF
  void *v29[2]; // [rsp+40h] [rbp-128h] BYREF
  _WORD v30[16]; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v31[4]; // [rsp+70h] [rbp-F8h] BYREF
  __int16 v32; // [rsp+90h] [rbp-D8h]
  _BYTE v33[32]; // [rsp+A0h] [rbp-C8h] BYREF
  __int16 v34; // [rsp+C0h] [rbp-A8h]
  _BYTE v35[32]; // [rsp+D0h] [rbp-98h] BYREF
  __int16 v36; // [rsp+F0h] [rbp-78h]
  _BYTE v37[32]; // [rsp+100h] [rbp-68h] BYREF
  __int16 v38; // [rsp+120h] [rbp-48h]

  sub_121FCF0(a1, a2, a3, a4);
  *(_QWORD *)a1 = off_2C3A620;
  if ( (unsigned __int8)sub_22B7EC0(a3) )
  {
    v26 = *(_QWORD *)(a2 + 8);
    v15 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v26 + 96LL);
    v16 = *(_QWORD *)(a1 + 8);
    v31[0] = "/usr/lib32/crt1.o";
    v38 = 257;
    v25 = v15;
    v36 = 257;
    v34 = 257;
    v32 = 259;
    sub_1130220(
      v27,
      *(_BYTE **)(v16 + 488),
      *(_QWORD *)(v16 + 496),
      (__int64)v31,
      (__int64)v33,
      (__int64)v35,
      (__int64)v37);
    v30[8] = 260;
    v29[0] = v27;
    if ( v25(v26, v29) )
    {
      if ( v27[0] != v28 )
        operator delete(v27[0]);
      v31[0] = "/usr/lib32";
      v32 = 259;
      v17 = *(_QWORD *)(a1 + 8);
      v38 = 257;
      v36 = 257;
      v34 = 257;
      sub_1130220(
        v29,
        *(_BYTE **)(v17 + 488),
        *(_QWORD *)(v17 + 496),
        (__int64)v31,
        (__int64)v33,
        (__int64)v35,
        (__int64)v37);
      v18 = *(unsigned int *)(a1 + 632);
      v19 = v18 + 1;
      if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
      {
        v23 = *(_QWORD *)(a1 + 624);
        v24 = a1 + 624;
        if ( v23 > (unsigned __int64)v29 || (unsigned __int64)v29 >= v23 + 32 * v18 )
        {
          sub_A8C1F0(v24, v19);
          v20 = *(_QWORD *)(a1 + 624);
          v18 = *(unsigned int *)(a1 + 632);
          v10 = (__m128i *)v29;
        }
        else
        {
          sub_A8C1F0(v24, v19);
          v20 = *(_QWORD *)(a1 + 624);
          v18 = *(unsigned int *)(a1 + 632);
          v10 = (__m128i *)((char *)v29 + v20 - v23);
        }
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 624);
        v10 = (__m128i *)v29;
      }
      v11 = (__m128i *)(v20 + 32 * v18);
      v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
      v12 = v10->m128i_i64[0];
      v13 = v10 + 1;
      if ( (__m128i *)v10->m128i_i64[0] != &v10[1] )
        goto LABEL_5;
      goto LABEL_15;
    }
    if ( v27[0] != v28 )
      operator delete(v27[0]);
  }
  v38 = 257;
  v31[0] = "/usr/lib";
  v6 = *(_QWORD *)(a1 + 8);
  v34 = 257;
  v36 = 257;
  v32 = 259;
  sub_1130220(v29, *(_BYTE **)(v6 + 488), *(_QWORD *)(v6 + 496), (__int64)v31, (__int64)v33, (__int64)v35, (__int64)v37);
  v7 = *(unsigned int *)(a1 + 632);
  v8 = v7 + 1;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v21 = *(_QWORD *)(a1 + 624);
    v22 = a1 + 624;
    if ( v21 > (unsigned __int64)v29 || (unsigned __int64)v29 >= v21 + 32 * v7 )
    {
      sub_A8C1F0(v22, v8);
      v9 = *(_QWORD *)(a1 + 624);
      v7 = *(unsigned int *)(a1 + 632);
      v10 = (__m128i *)v29;
    }
    else
    {
      sub_A8C1F0(v22, v8);
      v9 = *(_QWORD *)(a1 + 624);
      v7 = *(unsigned int *)(a1 + 632);
      v10 = (__m128i *)((char *)v29 + v9 - v21);
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 624);
    v10 = (__m128i *)v29;
  }
  v11 = (__m128i *)(v9 + 32 * v7);
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v12 = v10->m128i_i64[0];
  v13 = v10 + 1;
  if ( (__m128i *)v10->m128i_i64[0] != &v10[1] )
  {
LABEL_5:
    v11->m128i_i64[0] = v12;
    v11[1].m128i_i64[0] = v10[1].m128i_i64[0];
    goto LABEL_6;
  }
LABEL_15:
  v11[1] = _mm_loadu_si128(v10 + 1);
LABEL_6:
  v11->m128i_i64[1] = v10->m128i_i64[1];
  v10->m128i_i64[0] = (__int64)v13;
  v10->m128i_i64[1] = 0;
  v10[1].m128i_i8[0] = 0;
  v14 = v29[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v14 != v30 )
    operator delete(v14);
}
