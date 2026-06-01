void __fastcall sub_11C32C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  void **v6; // rbx
  __int64 v7; // r8
  void **v8; // r15
  __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(__int64, void **); // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  void **v14; // rbx
  __int64 v15; // r8
  void **v16; // r15
  void **v17; // rbx
  _QWORD *v18; // rdi
  __m128i *v19; // rbx
  __m128i *v20; // rdi
  int v21; // eax
  __int64 v22; // [rsp+8h] [rbp-290h]
  int v23; // [rsp+8h] [rbp-290h]
  __int64 v24; // [rsp+18h] [rbp-280h] BYREF
  void *v25; // [rsp+20h] [rbp-278h] BYREF
  __int64 v26; // [rsp+28h] [rbp-270h]
  _BYTE v27[32]; // [rsp+30h] [rbp-268h] BYREF
  void *ptr; // [rsp+50h] [rbp-248h] BYREF
  __int64 v29; // [rsp+58h] [rbp-240h]
  _BYTE v30[16]; // [rsp+60h] [rbp-238h] BYREF
  __int16 v31; // [rsp+70h] [rbp-228h]

  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 328LL))(&ptr, a1);
  v25 = v27;
  v26 = 0x100000000LL;
  if ( (_DWORD)v29 )
  {
    sub_CEFDD0((__int64)&v25, (__int64)&ptr);
    v16 = (void **)ptr;
    v17 = (void **)((char *)ptr + 32 * (unsigned int)v29);
    while ( v16 != v17 )
    {
      while ( 1 )
      {
        v17 -= 4;
        if ( *v17 == v17 + 2 )
          break;
        operator delete(*v17);
        if ( v16 == v17 )
          goto LABEL_2;
      }
    }
  }
LABEL_2:
  if ( ptr != v30 )
    free(ptr);
  sub_1131310((__int64)&ptr, a1);
  if ( !(_BYTE)v31 )
    goto LABEL_5;
  if ( HIDWORD(v26) <= (unsigned int)v26 )
  {
    v19 = (__m128i *)sub_2237400(&v25, v27, 0, 32, &v24);
    v20 = &v19[2 * (unsigned int)v26];
    v20->m128i_i64[0] = (__int64)v20[1].m128i_i64;
    sub_11BA820(v20, ptr, (__int64)ptr + v29);
    sub_10E9550((__int64)&v25, v19);
    v21 = v24;
    if ( v25 != v27 )
    {
      v23 = v24;
      free(v25);
      v21 = v23;
    }
    HIDWORD(v26) = v21;
    v25 = v19;
    v5 = (unsigned int)(v26 + 1);
    LODWORD(v26) = v26 + 1;
  }
  else
  {
    v18 = (char *)v25 + 32 * (unsigned int)v26;
    *v18 = v18 + 2;
    sub_11BA820(v18, ptr, (__int64)ptr + v29);
    v5 = (unsigned int)(v26 + 1);
    LODWORD(v26) = v26 + 1;
  }
  if ( (_BYTE)v31 && ptr != v30 )
  {
    operator delete(ptr);
LABEL_5:
    v5 = (unsigned int)v26;
  }
  v6 = (void **)v25;
  v7 = 32 * v5;
  v8 = (void **)((char *)v25 + v7);
  if ( v25 != (char *)v25 + v7 )
  {
    do
    {
      while ( 1 )
      {
        v9 = sub_112C5D0(a1);
        v10 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 96LL);
        v31 = 260;
        ptr = v6;
        if ( v10(v9, &ptr) )
          break;
        v6 += 4;
        if ( v8 == v6 )
          goto LABEL_15;
      }
      v11 = *(unsigned int *)(a3 + 8);
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v11 + 1, 8);
        v11 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = "-rpath";
      ++*(_DWORD *)(a3 + 8);
      v31 = 260;
      ptr = v6;
      v12 = sub_10DA6C0(a2, (__int64)&ptr);
      v13 = *(unsigned int *)(a3 + 8);
      if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v22 = v12;
        sub_2237220(a3, a3 + 16, v13 + 1, 8);
        v13 = *(unsigned int *)(a3 + 8);
        v12 = v22;
      }
      v6 += 4;
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v13) = v12;
      ++*(_DWORD *)(a3 + 8);
    }
    while ( v8 != v6 );
LABEL_15:
    v14 = (void **)v25;
    v15 = 32LL * (unsigned int)v26;
    v8 = (void **)((char *)v25 + v15);
    if ( v25 != (char *)v25 + v15 )
    {
      do
      {
        while ( 1 )
        {
          v8 -= 4;
          if ( *v8 == v8 + 2 )
            break;
          operator delete(*v8);
          if ( v14 == v8 )
          {
            v8 = (void **)v25;
            goto LABEL_19;
          }
        }
      }
      while ( v14 != v8 );
      v8 = (void **)v25;
    }
  }
LABEL_19:
  if ( v8 != (void **)v27 )
    free(v8);
}
