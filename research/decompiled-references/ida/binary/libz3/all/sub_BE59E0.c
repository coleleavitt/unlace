__m128i *__fastcall sub_BE59E0(__m128i *a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v5; // rax
  __m128i v6; // xmm1
  void *v7; // rbx
  void *v8; // rbx
  __int8 v10; // cl
  void *v11; // rdi
  bool v12; // al
  _DWORD *v13; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __m128i v21; // [rsp+0h] [rbp-98h] BYREF
  __int8 v22; // [rsp+1Fh] [rbp-79h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+50h] [rbp-48h] BYREF

  v23[0] = 0;
  v23[1] = 0;
  v24[0] = 1;
  v24[1] = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26[0] = 1;
  v26[1] = 0;
  v22 = 0;
  v5 = *(_DWORD **)(sub_15D1F10(a3) + 24);
  if ( !v5 )
    goto LABEL_3;
  if ( *v5 != 5 )
    goto LABEL_3;
  if ( !(unsigned __int8)sub_BE52D0((_QWORD *)a2, a3, (int *)v23, (bool *)&v22) )
    goto LABEL_3;
  if ( v22 )
    goto LABEL_3;
  if ( !(unsigned __int8)sub_BE51C0((_QWORD *)a2, a3, (int *)v25, (bool *)&v22) )
    goto LABEL_3;
  v10 = v22;
  if ( v22 )
    goto LABEL_3;
  v11 = qword_1C7F2C0;
  if ( (v23[0] & 0x100000000LL) != 0 || (v25[0] & 0x100000000LL) != 0 )
  {
    v21.m128i_i8[8] = v22;
    v21.m128i_i64[0] = (__int64)qword_1C7F2C0;
    v19 = sub_182C7B0(qword_1C7F2C0, v23, v25);
    v10 = v21.m128i_i8[8];
    if ( !v19 )
      goto LABEL_13;
LABEL_3:
    v6 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
LABEL_4:
    ++a3[2];
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, v6);
    goto LABEL_5;
  }
  if ( LODWORD(v23[0]) != LODWORD(v25[0]) )
    goto LABEL_3;
LABEL_13:
  if ( (v24[0] & 0x100000000LL) != 0 || (v26[0] & 0x100000000LL) != 0 )
  {
    v21.m128i_i8[0] = v10;
    v20 = sub_182C7B0(v11, v24, v26);
    v10 = v21.m128i_i8[0];
    v12 = v20 == 0;
  }
  else
  {
    v12 = LODWORD(v24[0]) == LODWORD(v26[0]);
  }
  v6 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  if ( !v12 )
    goto LABEL_4;
  v21.m128i_i8[0] = v10;
  v21.m128i_i64[1] = v6.m128i_i64[0];
  v13 = *(_DWORD **)(sub_15D1F10(a3) + 24);
  v16 = v21.m128i_u8[0];
  if ( v13 && *v13 == 5 )
    LOBYTE(v16) = v13[1] == 1;
  v17 = *(_QWORD *)(a2 + 24);
  if ( !v17 )
  {
    v21.m128i_i8[0] = v16;
    v21.m128i_i64[1] = v6.m128i_i64[0];
    sub_16669E0(a2 + 16);
    v17 = *(_QWORD *)(a2 + 24);
    v16 = v21.m128i_u8[0];
  }
  v21.m128i_i64[0] = v6.m128i_i64[0];
  v18 = sub_166A700(v17, (unsigned int)v23, (unsigned __int8)v16, v16, v14, v15);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, _mm_loadl_epi64(&v21));
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
LABEL_5:
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v7, v26);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v23);
  sub_182CBA0(v8, v24);
  return a1;
}

