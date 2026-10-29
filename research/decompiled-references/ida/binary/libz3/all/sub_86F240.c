unsigned int *__fastcall sub_86F240(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v5; // r14
  __int64 v6; // r13
  int v9; // esi
  int v10; // r12d
  _QWORD *v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int *result; // rax
  unsigned int v15; // ebx
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // r15
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  _QWORD *v33; // rax
  unsigned int v34; // r8d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  bool v38; // zf
  __m128i *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // [rsp+20h] [rbp-88h]
  unsigned int v42; // [rsp+2Ch] [rbp-7Ch]
  __m128i v43; // [rsp+30h] [rbp-78h] BYREF
  __int64 v44; // [rsp+40h] [rbp-68h]
  __m128i v45; // [rsp+50h] [rbp-58h] BYREF
  __int32 v46; // [rsp+60h] [rbp-48h]

  v5 = 8LL * a2;
  v6 = a2;
  v9 = *(_DWORD *)(a1 + 700);
  v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v6) + 4LL * a3);
  if ( v9 == -2 )
  {
    v41 = *(_QWORD *)(a1 + 80);
    v18 = sub_180C100(v41 + 2144, 24);
    v19 = *(_QWORD **)(v41 + 2128);
    *(_QWORD *)v18 = off_1C55700;
    *(_QWORD *)(v18 + 8) = a1 + 700;
    *(_DWORD *)(v18 + 16) = -2;
    if ( v19 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v34 = (3 * v20 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v35 || v20 >= v34 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v45.m128i_i64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v45);
          sub_233E40((__int64)&v45);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v42 = (3 * v20 + 1) >> 1;
        v36 = (unsigned int *)sub_186B300(v19 - 1, v35);
        v19 = v36 + 2;
        *(_QWORD *)(v41 + 2128) = v36 + 2;
        v37 = v36[1];
        *v36 = v42;
        LODWORD(v36) = v37;
        v23 = &v19[v37];
        v22 = (_DWORD)v36 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = &v19[v21];
      }
    }
    else
    {
      v40 = (_QWORD *)sub_186B270(0x18u);
      v19 = v40 + 1;
      *v40 = 2;
      v22 = 1;
      *(_QWORD *)(v41 + 2128) = v19;
      v23 = v19;
    }
    *v23 = v18;
    v24 = *(_QWORD *)(a1 + 80);
    *((_DWORD *)v19 - 1) = v22;
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 472LL))(
            v24,
            *(_QWORD *)(*(_QWORD *)(a1 + 72) + 856LL),
            0,
            1);
    v29 = *(_QWORD *)(a1 + 24);
    v43.m128i_i32[0] = 0;
    v30 = v25;
    LODWORD(v44) = 0;
    v31 = *(_QWORD *)(v29 + 3288);
    *(_DWORD *)(a1 + 700) = v30;
    v9 = v30;
    v43.m128i_i64[1] = 0;
    v32 = *(_DWORD *)(v31 + 4 * v30);
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        v38 = *(_BYTE *)(v29 + 3832) == 0;
        v45.m128i_i32[0] = 0;
        v45.m128i_i64[1] = 0;
        v46 = 0;
        if ( v38 )
        {
          v39 = (__m128i *)(*(_QWORD *)(v29 + 3296) + 24LL * ((unsigned int)v30 >> 1));
          if ( v39->m128i_i32[0] )
          {
            *v39 = _mm_load_si128(&v45);
            v39[1].m128i_i32[0] = v46;
            v9 = *(_DWORD *)(a1 + 700);
          }
        }
      }
      else if ( v32 == -1 )
      {
        v43.m128i_i32[0] = 0;
        v43.m128i_i64[1] = 0;
        LODWORD(v44) = 0;
        sub_11B4C90(v29, v30 ^ 1, v30, v26, v27, v28, (__int128)_mm_load_si128(&v43), 0);
        v9 = *(_DWORD *)(a1 + 700);
      }
    }
    else
    {
      v43.m128i_i32[0] = 0;
      v43.m128i_i64[1] = 0;
      LODWORD(v44) = 0;
      sub_11C3360(v29, v30, v30, v26, v27, v28, (__int128)_mm_load_si128(&v43), v44);
      v9 = *(_DWORD *)(a1 + 700);
    }
  }
  LOBYTE(v10) = v10 == v9;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 616) + v5);
  v12 = (_QWORD *)*v11;
  if ( *v11 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
    {
      v15 = (unsigned int)(3 * v13 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * (int)v13 + 8 >= (unsigned int)v16 || (unsigned int)v13 >= v15 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v45.m128i_i64, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v45);
        sub_233E40((__int64)&v45);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v12 - 1, v16);
      v12 = v17 + 2;
      *v11 = v17 + 2;
      *v17 = v15;
      result = &v17[2 * v17[1] + 2];
    }
    else
    {
      result = (unsigned int *)&v12[v13];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v12 = v33 + 1;
    *v33 = 2;
    *v11 = v33 + 1;
    result = (unsigned int *)(v33 + 1);
  }
  *result = v6;
  result[1] = a3 & 0x7FFFFFFF | (v10 << 31);
  ++*((_DWORD *)v12 - 1);
  return result;
}

