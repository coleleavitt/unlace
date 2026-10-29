__int64 __fastcall sub_5474B0(__int64 a1, __int64 *a2)
{
  char **exception; // r12
  __int64 v5; // rax
  char v6; // al
  __int64 v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r12
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rbp
  const char *v18; // rsi
  __int64 result; // rax
  unsigned int v20; // r13d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int8 v25; // r13
  __m128i *v26; // r12
  const char *v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // r13
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  _QWORD *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-50h] BYREF
  __m128i v35[4]; // [rsp+10h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 8) = 50000;
  *(_QWORD *)a1 = &off_1C50B70;
  v5 = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a2 + 7;
  v6 = sub_64B280(a2);
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 48) = v6;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 56) = v7;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 96) = v8;
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 104) = 8;
  *(_DWORD *)(a1 + 112) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v10 = sub_1625800(v9);
  *(_QWORD *)(a1 + 80) = v10;
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *(_QWORD **)(a1 + 64);
  if ( v12 )
  {
    v13 = *((_DWORD *)v12 - 1);
    if ( v13 == *((_DWORD *)v12 - 2) )
    {
      v20 = (3 * v13 + 1) >> 1;
      v21 = 8 * v20 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v21 || v13 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35[0].m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v12 - 1, v21);
      v23 = v22[1];
      v12 = v22 + 2;
      *v22 = v20;
      *(_QWORD *)(a1 + 64) = v22 + 2;
      LODWORD(v22) = v23;
      v16 = &v12[v23];
      v15 = (_DWORD)v22 + 1;
    }
    else
    {
      v14 = v13;
      v15 = v13 + 1;
      v16 = &v12[v14];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v12 = v33 + 1;
    *v33 = 2;
    v15 = 1;
    *(_QWORD *)(a1 + 64) = v12;
    v16 = v12;
  }
  *v16 = v11;
  *((_DWORD *)v12 - 1) = v15;
  sub_654200(a2, 0);
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2[371] + 192LL))(a2[371]);
  v18 = "fact_explanation";
  if ( *(_BYTE *)(a1 + 48) )
    v18 = "relation_explanation";
  sub_180C5A0(&v34, v18);
  result = (__int64)sub_4C3D70(v17, &v34);
  *(_QWORD *)(a1 + 72) = result;
  if ( !result )
  {
    v24 = sub_186B270(0x40u);
    v25 = *(_BYTE *)(a1 + 48);
    v26 = (__m128i *)v24;
    v27 = "fact_explanation";
    if ( v25 )
      v27 = "relation_explanation";
    sub_180C5A0(v35, v27);
    v28 = _mm_loadl_epi64(v35);
    v26->m128i_i32[2] = -1;
    v26[2].m128i_i32[0] = 0;
    v26->m128i_i64[0] = (__int64)&off_1C50940;
    v26[2].m128i_i8[4] = v25;
    v26[1] = _mm_unpacklo_epi64(v28, (__m128i)(unsigned __int64)v17);
    v29 = sub_4D6490(v17);
    v30 = (__int64 *)sub_4D6480(v26[1].m128i_i64[1]);
    v31 = sub_546570(v30);
    v26[2].m128i_i64[1] = v31;
    v26[3].m128i_i64[0] = v29;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    v26[3].m128i_i64[1] = 0;
    *(_QWORD *)(a1 + 72) = v26;
    result = sub_4C8680(v17, (__int64)v26);
    if ( !*(_BYTE *)(a1 + 48) )
    {
      v32 = sub_186B270(0x70u);
      sub_5A0F30(v32, *(_QWORD *)(a1 + 72), v17);
      return sub_4C8680(v17, v32);
    }
  }
  return result;
}

