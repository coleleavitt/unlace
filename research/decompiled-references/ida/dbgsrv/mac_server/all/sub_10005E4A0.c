/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E4A0
// Address: 0x000000010005E4A0

//----- (000000010005E4A0) ----------------------------------------------------
__int64 __fastcall sub_10005E4A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  _DWORD *v12; // rdx
  __int64 v13; // rax
  size_t v14; // rbx
  const void **v15; // r14
  char *v16; // r13
  char *v17; // rbx
  unsigned int v18; // r14d
  _QWORD *v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r14
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  char *v25; // rax
  size_t v26; // rax
  __int64 v27; // rsi
  __int64 v29; // [rsp+8h] [rbp-68h]
  void *__p; // [rsp+18h] [rbp-58h]
  unsigned __int8 v31; // [rsp+3Fh] [rbp-31h] BYREF

  v9 = *(unsigned __int16 *)(a1 + 8);
  v10 = *(_QWORD *)(a6 + 8);
  v11 = 4 * v10;
  v12 = *(_DWORD **)a6;
  if ( 4 * v10 )
  {
    v12 = *(_DWORD **)a6;
    while ( *v12 != (_DWORD)v9 )
    {
      ++v12;
      v11 -= 4;
      if ( !v11 )
        goto LABEL_9;
    }
  }
  if ( v12 == (_DWORD *)(*(_QWORD *)a6 + 4 * v10) )
  {
LABEL_9:
    sub_100000AE0((int)"Bad DWARF section index: %uh.\n", v9, v12, v10, a2);
    return (unsigned int)-1;
  }
  else
  {
    v29 = a2;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, v9);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
    {
      v15 = (const void **)v13;
      v16 = (char *)qalloc_or_throw(*(_QWORD *)(v13 + 8));
      memcpy(v16, *v15, v14);
      v17 = v16;
    }
    else
    {
      v16 = (char *)_s1;
      v17 = nullptr;
    }
    v19 = open_linput(v16, 0);
    __p = v19;
    if ( v19 )
    {
      v20 = a4[13];
      v21 = 120LL * *(unsigned __int16 *)(a1 + 8);
      qlseek((__int64)v19, *(_QWORD *)(v20 + v21 + 48), 0);
      v22 = v21 + v20;
      v23 = *(unsigned int *)(v22 + 8);
      v24 = *(_QWORD *)(v29 + 8);
      if ( v24 >= v23 )
      {
        if ( v24 != v23 )
        {
          v31 = 0;
          sub_10001CE90(v29, v23, &v31);
        }
      }
      else
      {
        v25 = *(char **)v29;
        if ( *(_QWORD *)(v29 + 16) < v23 )
        {
          v25 = (char *)qvector_reserve(v29, *(void **)v29, *(unsigned int *)(v22 + 8), 1u);
          *(_QWORD *)v29 = v25;
          v24 = *(_QWORD *)(v29 + 8);
        }
        __bzero(&v25[v24], v23 - v24);
        *(_QWORD *)(v29 + 8) = v23;
      }
      v26 = qlread((__int64)__p, *(void **)v29, *(unsigned int *)(v22 + 8));
      v27 = *(unsigned int *)(v22 + 8);
      v18 = 0;
      if ( v26 != v27 )
      {
        v18 = -1;
        sub_100000AE0((int)"Cannot read %u bytes (got %zu).\n", v27, v26);
      }
      close_linput(__p);
    }
    else
    {
      v18 = -1;
      sub_100000AE0((int)"Invalid file path: %s.\n", v16);
    }
    if ( v17 )
      qfree(v17);
  }
  return v18;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
