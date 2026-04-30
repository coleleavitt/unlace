__int64 __fastcall sub_5753C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rbx
  char *v10; // rbp
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // r12
  int v14; // eax
  char *v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  __m128i v23[3]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 1;
  v9 = a1;
  *(_DWORD *)(a1 + 16) = 0;
  v10 = *(char **)(a1 + 8);
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v12 = _mm_loadu_si128((const __m128i *)&a8);
  v13 = a8;
  *(_QWORD *)a1 = *((_QWORD *)&a8 + 1);
  v23[0] = v11;
  *(_WORD *)(a1 + 24) = WORD6(a7);
  v14 = *(_DWORD *)(a1 + 20);
  v23[1] = v12;
  if ( !v14 )
  {
    if ( v10 )
    {
      a2 = 256;
      a1 = (__int64)v10;
      v15 = (char *)off_8C52A8(v10, 0x100u);
    }
    else
    {
      a1 = 256;
      v15 = (char *)off_8C52B8(0x100u);
    }
    v16 = *(unsigned int *)(v9 + 16);
    *(_QWORD *)(v9 + 8) = v15;
    *(_DWORD *)(v9 + 20) = 8;
    v8 = (unsigned int)(v16 + 1);
    a4 = 32 * v16;
    v10 = &v15[a4];
  }
  *(_DWORD *)(v9 + 16) = v8;
  v17 = sub_565DC0(a1, a2, v8, a4, a5, a6, _mm_load_si128(v23).m128i_u32[0]);
  result = sub_565DD0(a1, a2, v18, v19, v20, v21, (__int128)_mm_load_si128(v23));
  *(_QWORD *)v10 = v13;
  *((_DWORD *)v10 + 2) = v17;
  *(_QWORD *)(v10 + 12) = result;
  *(_QWORD *)(v10 + 20) = 0;
  *((_DWORD *)v10 + 7) = 0;
  return result;
}
