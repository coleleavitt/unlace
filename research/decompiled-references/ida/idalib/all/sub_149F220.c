__int64 __fastcall sub_149F220(_QWORD *a1, char a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  bool v6; // zf
  unsigned int v7; // ebx
  size_t v9; // r14
  const void *v10; // rax
  size_t v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int16 v14; // ax
  __int64 v15; // rbp
  _DWORD *v16; // r13
  __int64 *v17; // rdi
  int *v18; // rsi
  int v19; // eax
  __int64 v20; // rbp
  _DWORD *v21; // rbx
  __int64 *v22; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+8h] [rbp-40h]
  _BYTE v25[48]; // [rsp+18h] [rbp-30h] BYREF

  if ( *(_WORD *)(*a1 + 32LL) != 64 )
    return 0;
  v3 = *(_QWORD *)(*a1 + 8LL);
  v4 = *(_QWORD *)(v3 + 2944);
  v5 = v4 >= *(unsigned int *)(v3 + 2912) ? sub_14180A0(v3, 1u) : *(_QWORD *)(v3 + 2904) + 24 * v4;
  v6 = *(_WORD *)(v5 + 16) == 7;
  ptr = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  if ( !v6 )
    return 0;
  v9 = j__strlen("0");
  v10 = (const void *)sub_145C740(*(_QWORD *)(*a1 + 8LL), v5, (__int64 *)&ptr, nullptr);
  if ( v11 == v9
    && (!v11 || !memcmp(v10, "0", v11))
    && *(_WORD *)(*a1 + 32LL) != 1
    && ((v12 = *(_QWORD *)(*a1 + 8LL), v13 = *(_QWORD *)(v12 + 2944) + 1LL, v13 >= *(unsigned int *)(v12 + 2912))
      ? (v14 = *(_WORD *)(sub_14180A0(v12, 2u) + 16))
      : (v14 = *(_WORD *)(*(_QWORD *)(v12 + 2904) + 24 * v13 + 16)),
        v14 == 63 || v14 == 66 || a2 && (v14 == 62 || v14 == 24 || v14 == 150)) )
  {
    v15 = *a1;
    v16 = (_DWORD *)a1[1];
    v17 = *(__int64 **)(*a1 + 8LL);
    v18 = (int *)(*a1 + 16LL);
    *(_DWORD *)(*a1 + 40LL) = *v18;
    sub_14634E0(v17, v18);
    v19 = *(_DWORD *)(v15 + 40);
    v20 = *a1;
    v21 = (_DWORD *)a1[2];
    *v16 = v19;
    v22 = *(__int64 **)(v20 + 8);
    *(_DWORD *)(v20 + 40) = *(_DWORD *)(v20 + 16);
    sub_14634E0(v22, (int *)(v20 + 16));
    *v21 = *(_DWORD *)(v20 + 40);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( ptr == v25 )
    return v7;
  free(ptr);
  return v7;
}
