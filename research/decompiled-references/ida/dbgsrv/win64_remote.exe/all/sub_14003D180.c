/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003D180
// Address: 0x000000014003D180

//----- (000000014003D180) ----------------------------------------------------
char __fastcall sub_14003D180(__int64 a1, const char **a2)
{
  const char **v2; // r15
  const char *v4; // rbp
  __m128i si128; // xmm6
  const char *v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  void *v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  size_t v16; // rax
  __int64 v17; // rbx
  void *v18; // rcx
  size_t v19; // rax
  __int64 v21; // [rsp+30h] [rbp-98h]
  __int64 v22; // [rsp+38h] [rbp-90h]
  char v23[16]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v24; // [rsp+58h] [rbp-70h] BYREF
  __m128i v25; // [rsp+68h] [rbp-60h]

  v2 = a2;
  v4 = *a2;
  if ( !*a2 )
    return 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140096730);
  while ( 1 )
  {
    v6 = v2[1];
    if ( *(_BYTE *)(a1 + 720) )
    {
      *(_BYTE *)(a1 + 720) = 0;
      v7 = operator new(0x40u);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 648);
        v21 = v8;
        *(_DWORD *)v7 = *(_DWORD *)v8;
        v7[1] = 0;
        v7[2] = 0;
        v9 = operator new(0x50u);
        *v9 = v9;
        v9[1] = v9;
        v7[1] = v9;
        v7[3] = 0;
        v7[4] = 0;
        v7[5] = 0;
        v7[6] = *(_QWORD *)(v8 + 48);
        v7[7] = *(_QWORD *)(v8 + 56);
        v10 = (__int64)(*(_QWORD *)(v8 + 32) - *(_QWORD *)(v8 + 24)) >> 3;
        if ( v10 )
        {
          if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
            sub_140004220();
          v22 = v10;
          v11 = sub_140003060(8 * v10);
          v12 = (void *)v7[3];
          v13 = (__int64)(v7[5] - (_QWORD)v12) >> 3;
          if ( v13 )
            sub_140011C80((__int64)(v7 + 3), v12, v13);
          v7[3] = v11;
          v14 = &v11[v22];
          v7[4] = &v11[v22];
          for ( v7[5] = &v11[v22]; v11 != v14; ++v11 )
            *v11 = v9;
          v8 = v21;
        }
        sub_140036430(v7, **(__int64 ***)(v8 + 8), *(__int64 **)(v8 + 8));
      }
      else
      {
        v7 = nullptr;
      }
      *(_QWORD *)(a1 + 648) = v7;
    }
    if ( v4 && *v4 )
    {
      v15 = *(_QWORD **)(a1 + 648);
      v24 = 0;
      v25 = 0;
      v16 = strlen(v4);
      sub_140036210(&v24, v4, v16);
      v17 = *(_QWORD *)sub_140036A90(v15, (__int64)v23, (size_t *)&v24);
      if ( v25.m128i_i64[1] > 0xFuLL )
      {
        v18 = (void *)v24;
        if ( (unsigned __int64)(v25.m128i_i64[1] + 1) >= 0x1000 )
        {
          v18 = *(void **)(v24 - 8);
          if ( (unsigned __int64)(v24 - (_QWORD)v18 - 8) > 0x1F )
            invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        }
        j_j_free(v18);
      }
      v25 = si128;
      LOBYTE(v24) = 0;
      if ( v6 && *v6 && (v19 = strlen(v6)) != 0 )
      {
        sub_140001810(v17 + 48, v6, v19);
        *(_WORD *)(v17 + 72) = 0;
      }
      else
      {
        *(_QWORD *)(v17 + 56) = 0;
        *(_WORD *)(v17 + 72) = 0;
      }
      goto LABEL_27;
    }
    if ( (unsigned int)sub_1400640B0(0x26u) )
      return 0;
LABEL_27:
    v2 += 2;
    v4 = *v2;
    if ( !*v2 )
      return 1;
  }
}
// 14003D446: control flows out of bounds to 14003D44B
// 140096730: using guessed type __int128 xmmword_140096730;
