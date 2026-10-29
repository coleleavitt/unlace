unsigned __int64 __fastcall sub_13FC920(__int64 a1, int a2, _BYTE *a3, signed __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r14d
  __int64 *v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rax
  __m128i si128; // xmm0
  unsigned int v18; // eax
  __int64 *v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = sub_13FC7D0(a1, a2, a3, a4, 3, a6);
  *(_QWORD *)(a1 + 72) = v6;
  v7 = v6;
  v8 = sub_2244B30(".ImplementationUnit", 19);
  v9 = sub_2244CB0(a1 + 256, ".ImplementationUnit", 19, v8);
  v13 = v9;
  v14 = (__int64 *)(*(_QWORD *)(a1 + 256) + 8LL * v9);
  if ( !*v14 )
    goto LABEL_5;
  if ( *v14 == -8 )
  {
    --*(_DWORD *)(a1 + 272);
LABEL_5:
    v16 = sub_22300B0(36, 8, v9, v10, v11, v12);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5B0);
    *(_WORD *)(v16 + 32) = 26990;
    *(_BYTE *)(v16 + 34) = 116;
    *(__m128i *)(v16 + 16) = si128;
    *(_BYTE *)(v16 + 35) = 0;
    *(_QWORD *)v16 = 19;
    *(_QWORD *)(v16 + 8) = 0;
    *v14 = v16;
    ++*(_DWORD *)(a1 + 268);
    v18 = sub_22450D0(a1 + 256, v13);
    sub_13FA370(v20, (__int64 *)(*(_QWORD *)(a1 + 256) + 8LL * v18), 0);
    v15 = v20[0];
    goto LABEL_6;
  }
  sub_13FA370(v20, v14, 0);
  v15 = v20[0];
LABEL_6:
  *(_QWORD *)(*v15 + 8) = v7;
  return v7;
}
