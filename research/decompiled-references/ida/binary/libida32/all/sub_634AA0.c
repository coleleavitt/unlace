unsigned __int64 __fastcall sub_634AA0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r12
  int v14; // eax
  unsigned int v15; // r15d
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rdx
  unsigned int *v23; // rdx
  __int64 v24; // rbx
  int v25; // eax
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v28 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  v7 = *(_QWORD *)(a1 + 1512);
  v8 = *(_QWORD *)(a1 + 1480);
  v27 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v6));
  v9 = sub_62B2B0(v8, v7, nullptr, (__int64)&v27);
  v10 = v27.m128i_i64[1];
  v11 = v9;
  v12 = unpack_dd(&v27);
  v13 = (unsigned int)(v12 - 1);
  if ( v12 && ((unsigned int)v13 & 0x7FFFFFFF) >= *(_DWORD *)(v11 + 48)
    || (v10 = v27.m128i_i64[1], v14 = unpack_dd(&v27), v15 = v14 - 1, v14)
    && (v15 & 0x7FFFFFFF) >= *(_DWORD *)(v11 + 48)
    || (v10 = v27.m128i_i64[1], v16 = unpack_dd(&v27), v17 = *(_DWORD *)(v11 + 48), v18 = v16, v19 = v16 - 1, v18)
    && (v19 & 0x7FFFFFFFu) >= v17 )
  {
    sub_62A270(&v27, v10);
  }
  v20 = v19 | 0x80000000;
  if ( a3 )
  {
    v21 = v20;
    v20 = v15;
    v15 = v21;
  }
  if ( (unsigned int)v13 >= v17 )
  {
    if ( !under_debugger )
      interr(1743);
LABEL_20:
    BUG();
  }
  v22 = *(_QWORD *)(v11 + 40);
  if ( !v22 || (v23 = (unsigned int *)(v22 + 4 * v13), *v23 != v20) )
  {
    if ( !under_debugger )
      interr(1744);
    goto LABEL_20;
  }
  *v23 = v15;
  *(_DWORD *)(*(_QWORD *)v11 + 32LL) |= 0x40u;
  v24 = *(_QWORD *)(a1 + 1480);
  v25 = *(_DWORD *)(v24 + 2484) + 1;
  if ( *(_DWORD *)(v24 + 2484) == -1 )
    v25 = 1;
  *(_DWORD *)(v24 + 2484) = v25;
  mark_builtin_widgets(1024, 0, 1);
  sub_698450(v24);
  mark_builtin_widgets(512, 0, 1);
  return v28 - __readfsqword(0x28u);
}

