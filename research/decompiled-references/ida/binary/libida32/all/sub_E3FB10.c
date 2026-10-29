__int64 __fastcall sub_E3FB10(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  char *v12; // rdi
  size_t v13; // rdx
  void *v14; // rbp
  __int64 v15; // r13
  void **v16; // rbp
  void **v17; // r13
  void *v18; // rax
  bool v19; // al
  __int64 v20; // [rsp+0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  void *v22; // [rsp+10h] [rbp-48h] BYREF
  void *s2; // [rsp+18h] [rbp-40h]
  __int64 v24; // [rsp+20h] [rbp-38h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  result = sub_E3A630((__int64 *)a1, a2, &v20);
  if ( (_BYTE)result )
    return result;
  v7 = *(unsigned int *)(a1 + 16);
  v21 = v20;
  v8 = 2 * v7;
  v9 = (unsigned int)(3 * v7);
  v10 = *(_DWORD *)(a1 + 8) + 1;
  if ( 4 * v10 < (unsigned int)v9 )
  {
    v9 = (unsigned int)(v7 - *(_DWORD *)(a1 + 12) - v10);
    if ( (unsigned int)v9 > (unsigned int)v7 >> 3 )
      goto LABEL_4;
    v8 = v7;
  }
  sub_E3EDD0(a1, v8, v7, v9, v5, v6);
  sub_E3A630((__int64 *)a1, a2, &v21);
  v10 = *(_DWORD *)(a1 + 8) + 1;
LABEL_4:
  *(_DWORD *)(a1 + 8) = v10;
  sub_E35C20((void ***)&v22, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v11 = v21;
  v12 = *(char **)(v21 + 8);
  if ( s2 == (void *)-1LL )
  {
    v19 = v12 + 1 == nullptr;
  }
  else
  {
    if ( s2 != (void *)-2LL )
    {
      v13 = *(_QWORD *)(v21 + 16);
      if ( v24 == v13 && (!v13 || !memcmp(v12, s2, v13)) )
        goto LABEL_9;
      goto LABEL_22;
    }
    v19 = v12 + 2 == nullptr;
  }
  if ( !v19 )
LABEL_22:
    --*(_DWORD *)(a1 + 12);
LABEL_9:
  v14 = v22;
  if ( v22 )
  {
    if ( *(void **)v22 != (char *)v22 + 16 )
      operator delete(*(void **)v22);
    operator delete(v14, 0x20u);
  }
  v15 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v16 = (void **)operator new(0x20u);
    *v16 = v16 + 2;
    sub_E34980(v16, *(_BYTE **)v15, *(_QWORD *)v15 + *(_QWORD *)(v15 + 8));
    v17 = *(void ***)v11;
    *(_QWORD *)v11 = v16;
    if ( v17 )
    {
      if ( *v17 != v17 + 2 )
        operator delete(*v17);
      operator delete(v17, 0x20u);
      v16 = *(void ***)v11;
    }
    v18 = v16[1];
    *(_QWORD *)(v11 + 8) = *v16;
    *(_QWORD *)(v11 + 16) = v18;
  }
  else
  {
    *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  }
  *(_WORD *)(v11 + 24) = 0;
  return sub_2205840(v11 + 24, a2 + 24);
}

