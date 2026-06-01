unsigned __int64 __fastcall sub_7EF750(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  int v8; // eax
  size_t v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  size_t v12; // r15
  void *v13; // rax
  void *v14; // rsi
  unsigned __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v22; // rax
  void *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // [rsp+18h] [rbp-110h] BYREF
  __int128 v26; // [rsp+20h] [rbp-108h]
  void *v27; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-F0h]
  int v29; // [rsp+48h] [rbp-E0h]
  void *src; // [rsp+50h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-D0h]
  __int64 v32; // [rsp+68h] [rbp-C0h]
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  size_t v34[3]; // [rsp+78h] [rbp-B0h]
  __int64 v35; // [rsp+90h] [rbp-98h] BYREF
  __int128 v36; // [rsp+98h] [rbp-90h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a1[1] == a2 )
    return v37 - __readfsqword(0x28u);
  v25 = 0;
  v35 = 0;
  v27 = nullptr;
  v29 = 0;
  src = nullptr;
  v26 = 0;
  v36 = 0;
  v28 = 0;
  *(_OWORD *)n = 0;
  sub_7DCF50(&src, (__int64)&v35);
  v32 = 0;
  ptr = nullptr;
  *(_OWORD *)v34 = 0;
  sub_7DCF50(&ptr, (__int64)&v25);
  v4 = a1[1];
  if ( a2 < v4 )
  {
    v15 = a2;
    v16 = 88 * a2;
    do
    {
      v17 = v16 + *a1;
      v18 = *(void **)(v17 + 64);
      if ( v18 )
      {
        *(_QWORD *)(v17 + 72) = 0;
        qfree(v18);
      }
      v19 = *(void **)(v17 + 32);
      if ( v19 )
      {
        *(_QWORD *)(v17 + 40) = 0;
        qfree(v19);
      }
      v20 = *(void **)v17;
      if ( *(_QWORD *)v17 )
      {
        *(_QWORD *)(v17 + 8) = 0;
        qfree(v20);
      }
      ++v15;
      v16 += 88;
    }
    while ( v4 != v15 );
LABEL_21:
    a1[1] = a2;
    goto LABEL_22;
  }
  if ( v4 < a2 )
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v27 >= *a1 && (unsigned __int64)&v27 < v5 + 88 * v6 )
    {
      sub_7EE140((__int64)&v35, (__int64)&v27);
      sub_7EF580(a1, a2, (__int64)&v35);
      sub_7E2290((__int64)&v35);
      goto LABEL_22;
    }
    if ( v6 >= a2 || (v24 = qvector_reserve(a1, v5, a2, 88), v4 = a1[1], *a1 = v24, v5 = v24, v4 < a2) )
    {
      v7 = 88 * v4;
      while ( 1 )
      {
        v10 = v7 + v5;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        sub_7DCEA0((_QWORD *)v10, (__int64)&v27);
        v11 = v29;
        v12 = n[0];
        *(_QWORD *)(v10 + 32) = 0;
        *(_OWORD *)(v10 + 40) = 0;
        *(_DWORD *)(v10 + 24) = v11;
        if ( v12 )
        {
          v13 = (void *)qalloc_or_throw(v12);
          *(_QWORD *)(v10 + 32) = v13;
          v14 = src;
          *(_QWORD *)(v10 + 48) = v12;
          memcpy(v13, v14, v12);
          *(_QWORD *)(v10 + 40) = v12;
        }
        v8 = v32;
        v9 = v34[0];
        *(_QWORD *)(v10 + 64) = 0;
        *(_OWORD *)(v10 + 72) = 0;
        *(_DWORD *)(v10 + 56) = v8;
        if ( v9 )
        {
          v22 = (void *)qalloc_or_throw(v9);
          *(_QWORD *)(v10 + 64) = v22;
          v23 = ptr;
          *(_QWORD *)(v10 + 80) = v9;
          memcpy(v22, v23, v9);
          *(_QWORD *)(v10 + 72) = v9;
        }
        ++v4;
        v7 += 88;
        if ( v4 >= a2 )
          break;
        v5 = *a1;
      }
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( ptr )
    qfree(ptr);
  if ( src )
    qfree(src);
  if ( v27 )
    qfree(v27);
  return v37 - __readfsqword(0x28u);
}
