void __fastcall sub_1148710(__int64 *a1)
{
  __int64 **v2; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdi
  unsigned __int8 (__fastcall *v7)(__int64, __m128i *); // rax
  bool v8; // zf
  unsigned __int8 (__fastcall *v9)(__int64, __m128i *); // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  const char *v15; // r12
  __int64 v16; // rax
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r13
  __m128i *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // rax
  int v32; // ecx
  __int64 v33; // rsi
  _QWORD v34[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v35; // [rsp+20h] [rbp-88h]
  __m128i v36; // [rsp+30h] [rbp-78h] BYREF
  __m128i v37; // [rsp+40h] [rbp-68h] BYREF
  __m128i v38; // [rsp+50h] [rbp-58h] BYREF
  __m128i v39; // [rsp+60h] [rbp-48h] BYREF

  v2 = (__int64 **)a1[2];
  v3 = (__int64)v2[43];
  v4 = (__int64)v2[42];
  v5 = (*v2)[1];
  if ( !*((_BYTE *)v2 + 10) )
  {
    if ( v2[22]
      || (v6 = (*v2)[1],
          v7 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v5 + 96LL),
          v38.m128i_i16[0] = 773,
          v36.m128i_i64[0] = v4,
          v36.m128i_i64[1] = v3,
          v37.m128i_i64[0] = (__int64)"/thrust/system/hip/hipstdpar/hipstdpar_lib.hpp",
          v8 = v7(v6, &v36) == 0,
          v2 = (__int64 **)a1[2],
          v8) )
    {
      v32 = 435;
      v33 = **v2;
LABEL_21:
      sub_FA3370((__int64)&v36, v33, 0, v32);
      sub_AC6300((__int64)&v36);
      return;
    }
  }
  if ( !*((_BYTE *)v2 + 11) )
  {
    v9 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v5 + 96LL);
    v38.m128i_i16[0] = 773;
    v36.m128i_i64[0] = v4;
    v36.m128i_i64[1] = v3;
    v37.m128i_i64[0] = (__int64)"/thrust";
    v8 = v9(v5, &v36) == 0;
    v2 = (__int64 **)a1[2];
    if ( v8 )
    {
      v32 = 437;
      v33 = **v2;
      goto LABEL_21;
    }
  }
  if ( !*((_BYTE *)v2 + 12) )
  {
    v10 = *(_QWORD *)v5;
    v35 = 773;
    v34[0] = v4;
    v34[1] = v3;
    v34[2] = "/rocprim";
    v8 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(v10 + 96))(v5, v34) == 0;
    v2 = (__int64 **)a1[2];
    if ( v8 )
    {
      v32 = 436;
      v33 = **v2;
      goto LABEL_21;
    }
  }
  v11 = *a1;
  if ( *((_BYTE *)v2 + 11) )
  {
    v12 = (__int64)v2[23];
    v38.m128i_i16[0] = 261;
    v36.m128i_i64[0] = v12;
    v36.m128i_i64[1] = (__int64)v2[24];
    v13 = sub_10B6980(v11, (__int64)&v36);
    v14 = *a1;
    v15 = (const char *)v13;
    v16 = a1[2];
    if ( !*(_BYTE *)(v16 + 10) )
      goto LABEL_10;
  }
  else
  {
    v36.m128i_i64[1] = v3;
    v38.m128i_i16[0] = 773;
    v36.m128i_i64[0] = v4;
    v37.m128i_i64[0] = (__int64)"/thrust";
    v28 = sub_10B6980(v11, (__int64)&v36);
    v14 = *a1;
    v15 = (const char *)v28;
    v16 = a1[2];
    if ( !*(_BYTE *)(v16 + 10) )
    {
LABEL_10:
      v17 = 0;
      if ( v15 )
        v17 = j__strlen(v15);
      v36.m128i_i64[1] = v17;
      v38.m128i_i16[0] = 773;
      v36.m128i_i64[0] = (__int64)v15;
      v37.m128i_i64[0] = (__int64)"/system/hip/hipstdpar";
      v18 = sub_10B6980(v14, (__int64)&v36);
      v19 = *a1;
      v20 = v18;
      v21 = (__m128i *)a1[2];
      if ( v21->m128i_i8[12] )
        goto LABEL_13;
LABEL_19:
      v31 = v21[21];
      v38.m128i_i16[0] = 773;
      v36 = v31;
      v37.m128i_i64[0] = (__int64)"/rocprim";
      v23 = sub_10B6980(v19, (__int64)&v36);
      goto LABEL_14;
    }
  }
  v29 = *(_QWORD *)(v16 + 168);
  v38.m128i_i16[0] = 261;
  v36.m128i_i64[0] = v29;
  v36.m128i_i64[1] = *(_QWORD *)(v16 + 176);
  v30 = sub_10B6980(v14, (__int64)&v36);
  v19 = *a1;
  v20 = v30;
  v21 = (__m128i *)a1[2];
  if ( !v21->m128i_i8[12] )
    goto LABEL_19;
LABEL_13:
  v22 = v21[12].m128i_i64[1];
  v38.m128i_i16[0] = 261;
  v36.m128i_i64[0] = v22;
  v36.m128i_i64[1] = v21[13].m128i_i64[0];
  v23 = sub_10B6980(v19, (__int64)&v36);
LABEL_14:
  v24 = a1[1];
  v37.m128i_i64[1] = v23;
  v39.m128i_i64[0] = (__int64)"-include";
  v39.m128i_i64[1] = (__int64)"hipstdpar_lib.hpp";
  v25 = *(unsigned int *)(v24 + 8);
  v26 = *(unsigned int *)(v24 + 12);
  v36.m128i_i64[0] = (__int64)"-idirafter";
  v37.m128i_i64[0] = (__int64)"-idirafter";
  v38.m128i_i64[0] = (__int64)"-idirafter";
  v36.m128i_i64[1] = (__int64)v15;
  v38.m128i_i64[1] = v20;
  if ( v25 + 8 > v26 )
  {
    sub_22134E0(v24, v24 + 16, v25 + 8, 8);
    v25 = *(unsigned int *)(v24 + 8);
  }
  v27 = (__m128i *)(*(_QWORD *)v24 + 8 * v25);
  *v27 = _mm_load_si128(&v36);
  v27[1] = _mm_load_si128(&v37);
  v27[2] = _mm_load_si128(&v38);
  v27[3] = _mm_load_si128(&v39);
  *(_DWORD *)(v24 + 8) += 8;
}

