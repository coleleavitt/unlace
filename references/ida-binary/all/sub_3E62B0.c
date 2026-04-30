__int64 __fastcall sub_3E62B0(
        __int64 a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  char *v14; // r13
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  const char *v28; // r14
  _DWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  double v39; // xmm4_8
  double v40; // xmm5_8
  __int64 v41; // r13
  int v42; // eax
  __int64 v44[9]; // [rsp+0h] [rbp-48h] BYREF

  v44[1] = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    v14 = "down";
    if ( a2 )
      v14 = "up";
    v15 = sub_3DED80(a1, 0);
    sub_3E25E0((__int64)"<%s> scroll_nodes(%s)\n", (__int64)v15, (__int64)v14, v16, v17, v18);
  }
  v19 = *(_QWORD *)(a1 + 48);
  v20 = *(_QWORD *)(a1 + 64);
  if ( a2 )
  {
    if ( v19 > v20 )
      v19 = *(_QWORD *)(a1 + 64);
    v21 = v19;
    v22 = v20 - v19;
  }
  else
  {
    v26 = *(int *)(a1 + 312);
    v21 = 1;
    if ( (int)v26 < 0 )
      v26 = 0;
    v27 = v26 - v20;
    if ( v27 > v19 )
      v27 = *(_QWORD *)(a1 + 48);
    v22 = v27 + v20;
  }
  v23 = dword_8D1258;
  *(_QWORD *)(a1 + 64) = v22;
  dword_8D1258 = v23 + 1;
  v24 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v24 == 1 )
  {
    v28 = *(const char **)(a1 + 80);
    v29 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 128LL))(*(_QWORD *)(a1 + 376));
    v44[0] = 0;
    v35 = sub_3E3320(v44, v29, v28, a3, a4, a5, a6, v33, v34, a9, a10, v30, v31, v32);
    v41 = v44[0];
    if ( v35 )
    {
      sub_3E5190(a1, (__int64 *)(a1 + 376), qword_8BA5A8, (int *)(a1 + 72), a3, a4, a5, a6, v39, v40, a9, a10);
    }
    else
    {
      v42 = dword_8D1258++;
      if ( (debug & 0x40000) != 0 )
      {
        sub_3E25E0(
          (__int64)"Failed to retrieve local var with name: \"%s\"\n",
          (__int64)v28,
          debug & 0x40000,
          v36,
          v37,
          v38);
        v42 = dword_8D1258 - 1;
      }
      dword_8D1258 = v42;
    }
    if ( v41 )
    {
      if ( (*(_DWORD *)(v41 + 8))-- == 1 )
        (**(void (__fastcall ***)(__int64))v41)(v41);
    }
    v23 = dword_8D1258 - 1;
  }
  else if ( (_DWORD)v24 == 2 )
  {
    sub_3E5E80(a1, nullptr, a3, a4, a5, a6, a7, a8, a9, a10, v24, v19, a13, a14);
    v23 = dword_8D1258 - 1;
  }
  dword_8D1258 = v23;
  return v21;
}
