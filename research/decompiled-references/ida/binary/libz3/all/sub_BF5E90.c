void __fastcall sub_BF5E90(__int64 *a1)
{
  __m128i *exception; // rbx
  char *v2; // rax
  int v3; // r12d
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rax
  void *v12; // r14
  int v13; // eax
  bool v14; // zf
  _DWORD *v15; // rsi
  __int64 v16; // rdi
  char v17; // r13
  __int64 v18; // r12
  __int64 v19; // r15
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  unsigned int v25; // r13d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // [rsp-B0h] [rbp-B0h]
  __int64 v32; // [rsp-A8h] [rbp-A8h]
  __int64 v33; // [rsp-A0h] [rbp-A0h]
  _DWORD *v34; // [rsp-98h] [rbp-98h]
  __int64 v35; // [rsp-80h] [rbp-80h]
  int v36; // [rsp-70h] [rbp-70h] BYREF
  int v37; // [rsp-6Ch] [rbp-6Ch] BYREF
  int v38; // [rsp-68h] [rbp-68h] BYREF
  int v39; // [rsp-64h] [rbp-64h] BYREF
  int v40; // [rsp-60h] [rbp-60h] BYREF
  _DWORD *v41; // [rsp-58h] [rbp-58h] BYREF
  __int64 v42; // [rsp-50h] [rbp-50h]
  _QWORD v43[8]; // [rsp-48h] [rbp-48h] BYREF
  __int64 v44; // [rsp-8h] [rbp-8h] BYREF

  v30 = *a1;
  if ( *(_BYTE *)(v30 + 1168) )
  {
    nullsub_1164();
  }
  else
  {
    v3 = 0;
    v4 = v30;
    v31 = v30 + 40;
    do
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)(v4 + 16);
        v6 = sub_163B390(v31, (unsigned int)(v3 + 48));
        v35 = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        v42 = 0;
        BYTE4(v41) &= 0xFCu;
        v43[0] = 1;
        v43[1] = 0;
        LODWORD(v41) = v3;
        sub_182CBA0(qword_1C7F2C0, v43);
        v10 = *(_QWORD *)(v4 + 32);
        BYTE4(v43[0]) &= ~1u;
        LODWORD(v43[0]) = 1;
        if ( !v10 )
        {
          sub_16669E0(v4 + 24);
          v10 = *(_QWORD *)(v4 + 32);
        }
        v11 = sub_166A700(v10, (unsigned int)&v41, 1, v7, v8, v9);
        v12 = qword_1C7F2C0;
        v34 = (_DWORD *)v11;
        sub_182CBA0(qword_1C7F2C0, &v41);
        sub_182CBA0(v12, v43);
        v33 = sub_15D2CD0(*(_QWORD *)(v4 + 328), 5, 1, 0, 0);
        sub_180C5A0(&v40, "seq.digit2int");
        sub_1407560((unsigned int)&v44 - 80, v4 + 176, (unsigned int)&v44 - 88, v35, 0, 0, 0, v33, 1);
        v13 = sub_966380(*(_QWORD *)v4, v41, v34);
        v14 = *(_QWORD *)(v4 + 1192) == 0;
        v36 = v13;
        v37 = -2;
        v38 = -2;
        v39 = -2;
        v40 = -2;
        if ( v14 )
          std::__throw_bad_function_call();
        (*(void (__fastcall **)(__int64, int *, int *, int *, int *, int *))(v4 + 1200))(
          v4 + 1176,
          &v36,
          &v37,
          &v38,
          &v39,
          &v40);
        v15 = v41;
        if ( v41 )
        {
          v16 = v42;
          v14 = v41[2]-- == 1;
          if ( v14 )
            sub_15D7BC0(v16, v15);
        }
        if ( v35 )
        {
          v5 = *(_DWORD *)(v35 + 8) - 1;
          *(_DWORD *)(v35 + 8) = v5;
          if ( !v5 )
            break;
        }
        if ( ++v3 == 10 )
          goto LABEL_18;
      }
      ++v3;
      sub_15D7BC0(v32, v35);
    }
    while ( v3 != 10 );
LABEL_18:
    v17 = *(_BYTE *)(v4 + 1168);
    v18 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
    v19 = sub_180C100(v18 + 8400, 24);
    *(_QWORD *)v19 = off_1C54EE8;
    *(_QWORD *)(v19 + 8) = v4 + 1168;
    *(_BYTE *)(v19 + 16) = v17;
    v20 = *(_QWORD **)(v18 + 9456);
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v25 = (3 * v21 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v26 || v21 >= v25 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v2 = (char *)operator new(0x2Bu);
          strcpy(v2, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v2;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v20 - 1, v26);
        v28 = v27[1];
        v20 = v27 + 2;
        *(_QWORD *)(v18 + 9456) = v27 + 2;
        *v27 = v25;
        LODWORD(v27) = v28;
        v24 = &v20[v28];
        v23 = (_DWORD)v27 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v20[v22];
      }
    }
    else
    {
      v29 = (_QWORD *)sub_186B270(0x18u);
      v20 = v29 + 1;
      *v29 = 2;
      v23 = 1;
      *(_QWORD *)(v18 + 9456) = v20;
      v24 = v20;
    }
    *v24 = v19;
    *((_DWORD *)v20 - 1) = v23;
    *(_BYTE *)(v4 + 1168) = 1;
  }
}

