__int64 __fastcall sub_575640(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // rbp
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r12
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax

  v8 = 1;
  v9 = *((_QWORD *)&a8 + 1);
  v10 = a1;
  *(_DWORD *)(a1 + 16) = 0;
  v11 = *(char **)(a1 + 8);
  *(_QWORD *)a1 = v9;
  *(_WORD *)(a1 + 24) = a7.m128i_i16[6];
  if ( !*(_DWORD *)(a1 + 20) )
  {
    if ( v11 )
    {
      a2 = 256;
      a1 = (__int64)v11;
      v12 = (char *)off_8C52A8(v11, 0x100u);
    }
    else
    {
      a1 = 256;
      v12 = (char *)off_8C52B8(0x100u);
    }
    v13 = *(unsigned int *)(v10 + 16);
    *(_QWORD *)(v10 + 8) = v12;
    *(_DWORD *)(v10 + 20) = 8;
    v8 = (unsigned int)(v13 + 1);
    a4 = 32 * v13;
    v11 = &v12[a4];
  }
  v14 = a8;
  *(_DWORD *)(v10 + 16) = v8;
  v15 = sub_565DC0(a1, a2, v8, a4, a5, a6, _mm_loadu_si128(&a7).m128i_u32[0]);
  result = sub_565DD0(a1, a2, v16, v17, v18, v19, (__int128)_mm_loadu_si128(&a7));
  *((_DWORD *)v11 + 2) = v15;
  *(_QWORD *)v11 = v14;
  *(_QWORD *)(v11 + 12) = result;
  *(_QWORD *)(v11 + 20) = 0;
  *((_DWORD *)v11 + 7) = 0;
  return result;
}
