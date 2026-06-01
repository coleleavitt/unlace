__int64 __fastcall sub_1C85500(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // eax
  unsigned int v9; // r9d
  __int64 v10; // r12
  unsigned __int64 p_ptr; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // ebx
  unsigned int v15; // r15d
  char v16; // r14
  unsigned __int16 *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _BYTE *v20; // rdi
  __int64 v21; // rbx
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  __int128 v26; // [rsp-38h] [rbp-F0h]
  unsigned int v27; // [rsp+14h] [rbp-A4h]
  __int64 v28; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v29; // [rsp+20h] [rbp-98h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+38h] [rbp-80h]
  _BYTE v32[120]; // [rsp+40h] [rbp-78h] BYREF

  v8 = *(_DWORD *)(a2 + 64);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 32);
  p_ptr = (unsigned __int64)&ptr;
  v31 = 0x800000000LL;
  v27 = v8;
  v28 = *(_QWORD *)(a2 + 72);
  v12 = *(_DWORD *)(a2 + 20);
  ptr = v32;
  v13 = v9 + v12;
  v14 = v13;
  if ( (unsigned int)v13 > 8 )
  {
    sub_2237220(&ptr, v32, v13, 8);
  }
  else if ( !(_DWORD)v13 )
  {
    v23 = 0;
    v20 = v32;
    v24 = 0;
    goto LABEL_15;
  }
  v15 = 0;
  v16 = 0;
  do
  {
    while ( 1 )
    {
      v17 = sub_1C7CFE0(a1, *(_QWORD *)(v10 + 8LL * v15), a3, a4, v13, p_ptr, a7);
      if ( (unsigned __int64)v17 > 1 )
        break;
      ++v15;
      v16 = 1;
      if ( v14 == v15 )
        goto LABEL_9;
    }
    p_ptr = (unsigned int)v31;
    v18 = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFELL;
    v19 = (unsigned int)v31 + 1LL;
    if ( v19 > HIDWORD(v31) )
    {
      v29 = v18;
      sub_2237220(&ptr, v32, v19, 8);
      p_ptr = (unsigned int)v31;
      v18 = v29;
    }
    v13 = (__int64)ptr;
    ++v15;
    *((_QWORD *)ptr + p_ptr) = v18;
    LODWORD(v31) = v31 + 1;
  }
  while ( v14 != v15 );
LABEL_9:
  v20 = ptr;
  v21 = 1;
  if ( !v16 )
  {
    v12 = *(_DWORD *)(a2 + 20);
    v9 = *(_DWORD *)(a2 + 16);
    v23 = (unsigned int)v31;
    v24 = v12 + v9;
LABEL_15:
    *((_QWORD *)&v26 + 1) = v24;
    *(_QWORD *)&v26 = *(_QWORD *)(a2 + 80);
    v25 = sub_1C54D50(
            *a1,
            *(_DWORD *)(a2 + 8),
            *(_DWORD *)(a2 + 40),
            v28,
            v27,
            v9,
            *(double *)a3.m128_u64,
            *(const void **)(a2 + 48),
            *(_QWORD *)(a2 + 56),
            v12,
            v26,
            *(char **)(a2 + 88),
            *(unsigned int *)(a2 + 24),
            (__int64)v20,
            v23,
            *(_DWORD *)(a2 + 44));
    v20 = ptr;
    v21 = v25;
  }
  if ( v20 != v32 )
    free(v20);
  return v21;
}
