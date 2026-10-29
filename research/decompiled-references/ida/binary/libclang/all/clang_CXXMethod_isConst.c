__int64 __fastcall clang_CXXMethod_isConst(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __m128i v17; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 600) > 4 )
  {
    v7 = 0;
    if ( (unsigned int)(a7 - 1) > 0x26 )
      return v7;
  }
  v7 = 0;
  v17 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_63A250(a1, a2, (int)a7 - 600, a4, a5, a6, v17.m128i_i32[0], v17.m128i_i64[1]);
  if ( !v9 )
    return v7;
  v10 = sub_7984D0(v9);
  if ( !v10 || (*(_BYTE *)(v10 + 28) & 0x7Fu) - 33 > 3 )
    return v7;
  v11 = (__int64 *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  if ( *(_BYTE *)(*v11 + 16) != 26 )
    v12 = sub_B0D320(*v11);
  if ( (*(_BYTE *)(v12 + 20) & 0x20) == 0 )
    return (*(_BYTE *)(v12 + 16) == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_B0D320(v12))
        && (*(_BYTE *)(v12 + 20) & 4) != 0;
  v13 = 0;
  v14 = (v12 + 8LL * (unsigned __int16)(*(_DWORD *)(v12 + 20) >> 6) + 48 + 4LL * ((*(_BYTE *)(v12 + 23) & 0x10) != 0) + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v12 + 23) & 8) != 0 )
    v13 = ((*(_BYTE *)(v14 + 1) & 4) != 0) + 1LL;
  if ( ((*(_WORD *)(v12 + 22) >> 6) & 0xF) != 2 )
    __asm { jmp     rdx }
  v16 = v14 + 8 * v13 + 8LL * (*(_WORD *)v14 & 0x3FF);
  v15 = 0;
  if ( (*(_BYTE *)(v12 + 23) & 4) != 0 )
    v15 = (unsigned __int16)(*(_DWORD *)(v12 + 20) >> 6);
  return *(_DWORD *)((v16 + v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 1;
}

