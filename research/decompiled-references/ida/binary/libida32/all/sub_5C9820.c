unsigned __int64 __fastcall sub_5C9820(__int64 *a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // r8
  unsigned __int64 v10; // r15
  size_t v11; // rax
  size_t v12; // r12
  void *v13; // rax
  __int128 v14; // kr00_16
  void *v15; // rdi
  void *v16; // rdi
  char *v17; // rax
  __m128i v18; // xmm0
  char *v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v22; // rax
  char *v23; // rbp
  void *v24; // rdi
  size_t v25; // rdx
  __int64 v26; // rax
  void *v27; // [rsp+0h] [rbp-68h]
  size_t v28; // [rsp+0h] [rbp-68h]
  char *v29; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = a3[1];
    if ( !v7 )
      goto LABEL_6;
    v8 = v7 - 1;
    v9 = (char *)*a3;
    ptr = nullptr;
    v10 = v8;
    v31 = 0;
    if ( a4 <= v8 )
      v10 = a4;
    v11 = v8 - v10;
    v12 = v11;
    if ( v11 )
    {
      v24 = nullptr;
      v25 = v11 + 1;
      if ( v11 != -1 )
      {
        v28 = v11 + 1;
        v29 = v9;
        ptr = (void *)qvector_reserve(&ptr, 0, v25, 1);
        v9 = v29;
        v24 = ptr;
        v25 = v28;
      }
      *(_QWORD *)&v31 = v25;
      memmove(v24, &v9[v10], v12);
      *((_BYTE *)ptr + v12) = 0;
      v13 = ptr;
      v14 = v31;
    }
    else
    {
LABEL_6:
      v13 = nullptr;
      v14 = 0u;
    }
    v15 = *(void **)a2;
    ptr = nullptr;
    v31 = 0;
    if ( v15 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v27 = v13;
      qfree(v15);
      v16 = ptr;
      *(_OWORD *)(a2 + 8) = v14;
      *(_QWORD *)a2 = v27;
      if ( v16 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v16);
      }
    }
    else
    {
      *(_QWORD *)a2 = v13;
      *(_OWORD *)(a2 + 8) = v14;
    }
  }
  if ( a1 )
  {
    v17 = (char *)*a1;
    v18 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    *a1 = *a3;
    a1[1] = a3[1];
    a1[2] = a3[2];
    *a3 = v17;
    *(__m128i *)(a3 + 1) = v18;
    v19 = (char *)*a1;
    v20 = *a1;
    if ( a4 )
    {
      v22 = a1[1];
      v23 = (char *)(a4 + 1);
      if ( v22 < a4 + 1 )
      {
        if ( a1[2] < (unsigned __int64)v23 )
        {
          v26 = qvector_reserve(a1, *a1, a4 + 1, 1);
          *a1 = v26;
          v19 = (char *)v26;
          v22 = a1[1];
        }
        memset(&v19[v22], 0, (size_t)&v23[-v22]);
        a1[1] = (__int64)v23;
        v20 = *a1;
      }
      else if ( v23 != (char *)v22 )
      {
        a1[1] = (__int64)v23;
      }
      *(_BYTE *)(v20 + a4) = 0;
    }
    else if ( v19 )
    {
      a1[1] = 0;
      qfree(v19);
      *a1 = 0;
      a1[2] = 0;
    }
  }
  return v32 - __readfsqword(0x28u);
}

