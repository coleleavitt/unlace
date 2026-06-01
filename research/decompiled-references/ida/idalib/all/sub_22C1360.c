void __fastcall sub_22C1360(unsigned int **a1, __int64 a2, __int64 a3, unsigned __int8 a4, char a5)
{
  unsigned __int64 v7; // rcx
  char *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned int v27; // edi
  _QWORD *v28; // rdx
  int v29; // eax
  int v30; // esi
  bool v31; // zf
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int8 *v34; // rsi
  size_t v35; // rax
  __m128i *v36; // rax
  __int64 v37; // [rsp+8h] [rbp-E0h]
  __int64 v38; // [rsp+10h] [rbp-D8h]
  __int64 v42; // [rsp+48h] [rbp-A0h] BYREF
  void *v43[2]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v44[16]; // [rsp+60h] [rbp-88h] BYREF
  void *v45; // [rsp+70h] [rbp-78h] BYREF
  __int64 v46; // [rsp+78h] [rbp-70h]
  __m128i v47; // [rsp+80h] [rbp-68h] BYREF
  void *v48[2]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v49[4]; // [rsp+A0h] [rbp-48h] BYREF
  char v50; // [rsp+A4h] [rbp-44h] BYREF
  _BYTE v51[67]; // [rsp+A5h] [rbp-43h] BYREF

  v7 = **a1;
  **a1 = v7 + 1;
  if ( v7 )
  {
    v8 = v51;
    while ( 1 )
    {
      *--v8 = v7 % 0xA + 48;
      if ( v7 <= 9 )
        break;
      v7 /= 0xAu;
    }
  }
  else
  {
    v50 = 48;
    v8 = &v50;
  }
  v9 = a2;
  v43[0] = v44;
  sub_22BFEB0(v43, v8, (__int64)v51);
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + 8LL) == 7 )
    v9 = sub_2055240(*(_QWORD *)a1[1], 0, 0);
  v10 = sub_208B330(a2 + 48);
  v11 = (__int64 *)a1[5];
  v37 = v10;
  v38 = (__int64)a1[2];
  v16 = sub_22C0110(*v11, *(_QWORD *)(v9 + 8), v12, v13, v14, v15);
  v17 = v11[1];
  v42 = v16;
  if ( (unsigned __int8)sub_22C0550((__int64 *)v17, &v42, &v45) )
  {
    v18 = (__int64 *)((char *)v45 + 8);
    v19 = *((_QWORD *)v45 + 1);
    if ( v19 )
      goto LABEL_7;
    goto LABEL_19;
  }
  v27 = *(_DWORD *)(v17 + 16);
  v28 = v45;
  v29 = *(_DWORD *)(v17 + 8) + 1;
  v30 = 2 * v27;
  v48[0] = v45;
  if ( 4 * v29 >= 3 * v27 )
    goto LABEL_33;
  if ( v27 - *(_DWORD *)(v17 + 12) - v29 <= v27 >> 3 )
  {
    v30 = v27;
LABEL_33:
    sub_22C11D0(v17, v30);
    sub_22C0550((__int64 *)v17, &v42, v48);
    v28 = v48[0];
    v29 = *(_DWORD *)(v17 + 8) + 1;
  }
  v31 = *v28 == -1;
  *(_DWORD *)(v17 + 8) = v29;
  if ( !v31 )
    --*(_DWORD *)(v17 + 12);
  v32 = v42;
  v28[1] = 0;
  v18 = v28 + 1;
  *v28 = v32;
LABEL_19:
  v33 = v42;
  if ( v42 )
  {
    v34 = &v47.m128i_i8[5];
    while ( 1 )
    {
      *--v34 = v33 % 0xA + 48;
      if ( v33 <= 9 )
        break;
      v33 /= 0xAu;
    }
  }
  else
  {
    v47.m128i_i8[4] = 48;
    v34 = &v47.m128i_i8[4];
  }
  v48[0] = v49;
  sub_22BFEB0(v48, v34, (__int64)v47.m128i_i64 + 5);
  v35 = j__strlen("ty");
  v36 = (__m128i *)sub_99BDC0(v48, 0, 0, "ty", v35);
  v45 = &v47;
  if ( (__m128i *)v36->m128i_i64[0] == &v36[1] )
  {
    v47 = _mm_loadu_si128(v36 + 1);
  }
  else
  {
    v45 = (void *)v36->m128i_i64[0];
    v47.m128i_i64[0] = v36[1].m128i_i64[0];
  }
  v46 = v36->m128i_i64[1];
  v36->m128i_i64[0] = (__int64)v36[1].m128i_i64;
  v36->m128i_i64[1] = 0;
  v36[1].m128i_i8[0] = 0;
  if ( v48[0] != v49 )
    operator delete(v48[0]);
  *v18 = sub_2061770(v11[2], (__int64)v45, v46, v42, 7, 0, 0);
  if ( v45 != &v47 )
    operator delete(v45);
  v19 = *v18;
LABEL_7:
  v20 = sub_2064B80(
          v38,
          *(_QWORD *)a1[3],
          (__int64)v43[0],
          (__int64)v43[1],
          *(_QWORD *)a1[4],
          *(_DWORD *)(v37 + 4),
          v19,
          1,
          0,
          0);
  v21 = (__int64)a1[2];
  v22 = v20;
  v23 = a4;
  BYTE1(v23) = a5;
  v24 = v23;
  v25 = sub_2061900(v21, 0, 0);
  sub_2061FE0(v21, v9, v22, v25, v37, v26, a3, v24);
  if ( v43[0] != v44 )
    operator delete(v43[0]);
}
