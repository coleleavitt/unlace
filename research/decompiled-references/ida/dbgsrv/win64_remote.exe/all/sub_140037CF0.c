/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140037CF0
// Address: 0x0000000140037CF0

//----- (0000000140037CF0) ----------------------------------------------------
__int64 __fastcall sub_140037CF0(__int64 a1, const char *a2, _BYTE *a3, unsigned int a4, char a5, bool *a6)
{
  unsigned int v6; // r15d
  bool *v9; // rsi
  _DWORD **v10; // r14
  _QWORD *v11; // rsi
  _DWORD *v12; // r13
  _QWORD *v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // r13
  unsigned __int64 *v17; // rdi
  void *v18; // rdx
  __int64 v19; // r8
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // r14
  size_t v24; // rax
  __int64 v25; // rdi
  void *v26; // rcx
  bool v27; // bl
  size_t v28; // rax
  _DWORD *v31; // [rsp+38h] [rbp-80h]
  _QWORD *v32; // [rsp+48h] [rbp-70h] BYREF
  __int128 v33; // [rsp+58h] [rbp-60h] BYREF
  __m128i si128; // [rsp+68h] [rbp-50h]

  v6 = a4;
  v9 = a6;
  v10 = (_DWORD **)(a1 + 648);
  if ( *(_BYTE *)(a1 + 720) )
  {
    *(_BYTE *)(a1 + 720) = 0;
    v11 = operator new(0x40u);
    v32 = v11;
    if ( v11 )
    {
      v12 = *v10;
      v31 = *v10;
      *(_DWORD *)v11 = **v10;
      v11[1] = 0;
      v11[2] = 0;
      v13 = operator new(0x50u);
      *v13 = v13;
      v13[1] = v13;
      v11[1] = v13;
      v11[3] = 0;
      v11[4] = 0;
      v11[5] = 0;
      v11[6] = *((_QWORD *)v12 + 6);
      v11[7] = *((_QWORD *)v12 + 7);
      v14 = v11[1];
      v15 = (__int64)(*((_QWORD *)v12 + 4) - *((_QWORD *)v12 + 3)) >> 3;
      if ( (__int64)v11[4] >> 3 >= v15 )
      {
        v21 = (unsigned __int64)(v11[4] + 7LL) >> 3;
        if ( v21 )
          memset64(nullptr, v14, v21);
      }
      else
      {
        if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
          sub_140004220();
        v16 = v15;
        v17 = sub_140003060(8 * v15);
        v18 = (void *)v11[3];
        v19 = (__int64)(v11[5] - (_QWORD)v18) >> 3;
        if ( v19 )
          sub_140011C80((__int64)(v11 + 3), v18, v19);
        v11[3] = v17;
        v20 = &v17[v16];
        v11[4] = &v17[v16];
        for ( v11[5] = &v17[v16]; v17 != v20; ++v17 )
          *v17 = v14;
        v12 = v31;
      }
      sub_140036430(v11, **((__int64 ***)v12 + 1), *((__int64 **)v12 + 1));
      v6 = a4;
    }
    else
    {
      v11 = nullptr;
    }
    *v10 = v11;
    v9 = a6;
  }
  if ( !a2 || !*a2 || v6 > 0x7F )
    return sub_1400640B0(0x26u);
  v22 = *v10;
  v23 = *((_QWORD *)*v10 + 2);
  v33 = 0;
  si128 = 0;
  v24 = strlen(a2);
  sub_140036210(&v33, a2, v24);
  v25 = *(_QWORD *)sub_140036A90(v22, (__int64)&v32, (size_t *)&v33);
  if ( si128.m128i_i64[1] > 0xFuLL )
  {
    v26 = (void *)v33;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v26 = *(void **)(v33 - 8);
      if ( (unsigned __int64)(v33 - (_QWORD)v26 - 8) > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    j_j_free(v26);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_140096730);
  LOBYTE(v33) = 0;
  v27 = v22[2] != v23;
  if ( a3 && *a3 && (v28 = strlen(a3)) != 0 )
    sub_140001810(v25 + 48, a3, v28);
  else
    *(_QWORD *)(v25 + 56) = 0;
  *(_BYTE *)(v25 + 72) = v6;
  *(_BYTE *)(v25 + 73) = a5;
  if ( v9 )
    *v9 = v27;
  return 0;
}
// 140037FCC: control flows out of bounds to 140037FD1
// 140096730: using guessed type __int128 xmmword_140096730;
