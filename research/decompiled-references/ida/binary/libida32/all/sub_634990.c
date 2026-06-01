__int64 __fastcall sub_634990(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v13; // rax
  char v14; // [rsp+Fh] [rbp-39h] BYREF
  __m128i v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 8);
  v16 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  v14 = 0;
  v7 = *(_QWORD *)(a1 + 1512);
  v8 = *(_QWORD *)(a1 + 1480);
  v15 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v6));
  v9 = sub_62B2B0(v8, v7, &v14, (__int64)&v15);
  if ( ((v14 & 8) == 0) == (a3 == 0) )
  {
    qfree(*(void **)(v9 + 40));
    v13 = *(_QWORD *)v9;
    *(_QWORD *)(v9 + 40) = 0;
    *(_DWORD *)(v9 + 48) = 0;
    *(_DWORD *)(v13 + 32) &= ~0x10u;
    *(_DWORD *)(v9 + 8) &= ~2u;
  }
  else
  {
    sub_62E7B0(v9);
  }
  *(_DWORD *)(*(_QWORD *)v9 + 32LL) |= 0x40u;
  v10 = *(_QWORD *)(a1 + 1480);
  v11 = *(_DWORD *)(v10 + 2484) + 1;
  if ( *(_DWORD *)(v10 + 2484) == -1 )
    v11 = 1;
  *(_DWORD *)(v10 + 2484) = v11;
  mark_builtin_widgets(1024, 0, 1);
  sub_698450(v10);
  return mark_builtin_widgets(512, 0, 1);
}

