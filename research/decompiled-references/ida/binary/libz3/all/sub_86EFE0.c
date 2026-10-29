__int64 __fastcall sub_86EFE0(__int64 a1)
{
  char **exception; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r13d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  __m128i *v26; // rax
  _QWORD *v27; // rax
  __m128i v28; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29; // [rsp+30h] [rbp-58h]
  __m128i v30; // [rsp+40h] [rbp-48h] BYREF
  __int32 v31; // [rsp+50h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 700) == -2 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    v5 = sub_180C100(v4 + 2144, 24);
    v6 = *(_QWORD **)(v4 + 2128);
    v7 = v5;
    *(_QWORD *)v5 = off_1C55700;
    *(_QWORD *)(v5 + 8) = a1 + 700;
    *(_DWORD *)(v5 + 16) = -2;
    if ( v6 )
    {
      v8 = *((_DWORD *)v6 - 1);
      if ( v8 == *((_DWORD *)v6 - 2) )
      {
        v21 = (3 * v8 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v8 + 8 >= (unsigned int)v22 || v8 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v30.m128i_i64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v30);
          sub_233E40((__int64)&v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v6 - 1, v22);
        v24 = v23[1];
        v6 = v23 + 2;
        *(_QWORD *)(v4 + 2128) = v23 + 2;
        *v23 = v21;
        LODWORD(v23) = v24;
        v11 = &v6[v24];
        v10 = (_DWORD)v23 + 1;
      }
      else
      {
        v9 = v8;
        v10 = v8 + 1;
        v11 = &v6[v9];
      }
    }
    else
    {
      v27 = (_QWORD *)sub_186B270(0x18u);
      v6 = v27 + 1;
      *v27 = 2;
      v10 = 1;
      *(_QWORD *)(v4 + 2128) = v6;
      v11 = v6;
    }
    *v11 = v7;
    v12 = *(_QWORD *)(a1 + 80);
    *((_DWORD *)v6 - 1) = v10;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v12 + 472LL))(
            v12,
            *(_QWORD *)(*(_QWORD *)(a1 + 72) + 856LL),
            0,
            1);
    v17 = *(_QWORD *)(a1 + 24);
    v28.m128i_i32[0] = 0;
    v18 = v13;
    LODWORD(v29) = 0;
    v19 = *(_QWORD *)(v17 + 3288);
    *(_DWORD *)(a1 + 700) = v18;
    v28.m128i_i64[1] = 0;
    v20 = *(_DWORD *)(v19 + 4 * v18);
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        v25 = *(_BYTE *)(v17 + 3832) == 0;
        v30.m128i_i32[0] = 0;
        v30.m128i_i64[1] = 0;
        v31 = 0;
        if ( v25 )
        {
          v26 = (__m128i *)(*(_QWORD *)(v17 + 3296) + 24LL * ((unsigned int)v18 >> 1));
          if ( v26->m128i_i32[0] )
          {
            *v26 = _mm_load_si128(&v30);
            v26[1].m128i_i32[0] = v31;
          }
        }
      }
      else if ( v20 == -1 )
      {
        v28.m128i_i32[0] = 0;
        v28.m128i_i64[1] = 0;
        LODWORD(v29) = 0;
        sub_11B4C90(v17, v18 ^ 1, v18, v14, v15, v16, (__int128)_mm_load_si128(&v28), 0);
      }
    }
    else
    {
      v28.m128i_i32[0] = 0;
      v28.m128i_i64[1] = 0;
      LODWORD(v29) = 0;
      sub_11C3360(v17, v18, v18, v14, v15, v16, (__int128)_mm_load_si128(&v28), v29);
    }
  }
  return *(unsigned int *)(a1 + 700);
}

