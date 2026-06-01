_QWORD *__fastcall Z3_ast_vector_translate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __m128i *exception; // rbp
  char *v4; // rax
  char v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  _OWORD *v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rsi
  int v23; // eax
  __int64 *v24; // rsi
  __int64 v25; // r13
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // r9d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rsi
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+8h] [rbp-C0h]
  char v35; // [rsp+Fh] [rbp-B9h]
  _QWORD v36[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v38[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v39; // [rsp+50h] [rbp-78h]
  void *ptr; // [rsp+58h] [rbp-70h]
  __int64 v41; // [rsp+60h] [rbp-68h]
  int v42; // [rsp+68h] [rbp-60h]
  __int128 v43; // [rsp+70h] [rbp-58h]
  int v44; // [rsp+80h] [rbp-48h]

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v35 = v7;
  if ( v7 )
  {
    sub_29E9F0(a1);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a1 == a3 )
    {
      sub_2BB620(a2);
      v17 = a2;
LABEL_28:
      byte_1C7EBA0 = 1;
      return v17;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a1 == a3 )
      return a2;
  }
  v8 = *(_QWORD *)(a3 + 232);
  v39 = 0;
  v9 = *(_QWORD *)(a1 + 232);
  v38[0] = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v8);
  v38[1] = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  ptr = v10;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v41 = 8;
  v42 = 0;
  v44 = 0;
  v43 = 0;
  if ( v8 != v9 )
  {
    sub_15DA640(DWORD2(v38[0]), v38[0], v11, v12, v13, v14, a1);
    sub_15D2280(*((_QWORD *)&v38[0] + 1), *(_QWORD *)&v38[0]);
  }
  v15 = sub_186B270(0x28u);
  v16 = *(_QWORD *)(a3 + 232);
  v17 = (_QWORD *)v15;
  sub_2518F0(v15, a3);
  v17[3] = v16;
  v17[4] = 0;
  *v17 = &off_1C4CA20;
  sub_24FBE0(a3, (__int64)v17);
  v18 = a2[4];
  if ( v18 )
  {
    v19 = *(unsigned int *)(v18 - 4);
    if ( (_DWORD)v19 )
    {
      v20 = 8 * v19;
      v21 = 0;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v18 + v21);
        if ( *((_QWORD *)&v38[0] + 1) != *(_QWORD *)&v38[0] )
          v25 = sub_15CFF50(v38, v25);
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        v26 = (_QWORD *)v17[4];
        if ( !v26 )
          break;
        v27 = *((_DWORD *)v26 - 1);
        if ( v27 != *((_DWORD *)v26 - 2) )
        {
          v22 = v27;
          v23 = v27 + 1;
          v24 = &v26[v22];
          goto LABEL_9;
        }
        v28 = (3 * v27 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v4 = (char *)operator new(0x2Bu);
          strcpy(v4, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v4;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v36[0] = &v37;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v36[1] = 0;
          v37 = 0;
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = (3 * v27 + 1) >> 1;
        v30 = (unsigned int *)sub_186B300(v26 - 1, v29);
        v31 = v30[1];
        v21 += 8;
        v17[4] = v30 + 2;
        *v30 = v34;
        *(_QWORD *)&v30[2 * v31 + 2] = v25;
        v30[1] = v31 + 1;
        if ( v20 == v21 )
          goto LABEL_20;
LABEL_10:
        v18 = a2[4];
      }
      v33 = (_QWORD *)sub_186B270(0x18u);
      v26 = v33 + 1;
      *v33 = 2;
      v23 = 1;
      v17[4] = v26;
      v24 = v26;
LABEL_9:
      v21 += 8;
      *v24 = v25;
      *((_DWORD *)v26 - 1) = v23;
      if ( v20 == v21 )
        goto LABEL_20;
      goto LABEL_10;
    }
  }
LABEL_20:
  if ( v35 )
  {
    sub_2BB620(v17);
    sub_15CE760(v38);
    goto LABEL_28;
  }
  sub_15CE760(v38);
  return v17;
}

