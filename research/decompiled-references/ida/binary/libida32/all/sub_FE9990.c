__int64 __fastcall sub_FE9990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  char *v8; // rdi
  size_t v9; // rdx
  void *v10; // r12
  __int64 v11; // r13
  void **v12; // r12
  void **v13; // r13
  void *v14; // rax
  bool v16; // al
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  void *v18; // [rsp+10h] [rbp-48h] BYREF
  void *s2; // [rsp+18h] [rbp-40h]
  __int64 v20; // [rsp+20h] [rbp-38h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v17 = 0;
  sub_E3EDD0(a1, 0, a3, a4, a5, a6);
  sub_E3A630((__int64 *)a1, a2, &v17);
  ++*(_DWORD *)(a1 + 8);
  sub_E35C20((void ***)&v18, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v7 = v17;
  v8 = *(char **)(v17 + 8);
  if ( s2 == (void *)-1LL )
  {
    v16 = v8 + 1 == nullptr;
    goto LABEL_18;
  }
  if ( s2 == (void *)-2LL )
  {
    v16 = v8 + 2 == nullptr;
LABEL_18:
    if ( v16 )
      goto LABEL_6;
    goto LABEL_19;
  }
  v9 = *(_QWORD *)(v17 + 16);
  if ( v20 != v9 || v9 && memcmp(v8, s2, v9) )
LABEL_19:
    --*(_DWORD *)(a1 + 12);
LABEL_6:
  v10 = v18;
  if ( v18 )
  {
    if ( *(void **)v18 != (char *)v18 + 16 )
      operator delete(*(void **)v18);
    operator delete(v10, 0x20u);
  }
  v11 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v12 = (void **)operator new(0x20u);
    *v12 = v12 + 2;
    sub_FE8D80(v12, *(_BYTE **)v11, *(_QWORD *)v11 + *(_QWORD *)(v11 + 8));
    v13 = *(void ***)v7;
    *(_QWORD *)v7 = v12;
    if ( v13 )
    {
      if ( *v13 != v13 + 2 )
        operator delete(*v13);
      operator delete(v13, 0x20u);
      v12 = *(void ***)v7;
    }
    v14 = v12[1];
    *(_QWORD *)(v7 + 8) = *v12;
    *(_QWORD *)(v7 + 16) = v14;
  }
  else
  {
    *(__m128i *)(v7 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  }
  *(_WORD *)(v7 + 24) = 0;
  return sub_2205840(v7 + 24, a2 + 24);
}

