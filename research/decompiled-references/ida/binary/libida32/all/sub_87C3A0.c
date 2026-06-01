__int64 __fastcall sub_87C3A0(__int64 a1, __int64 a2, char *a3, int a4, __int64 a5, char **a6)
{
  int v6; // r15d
  __int64 v10; // r14
  __int64 v11; // rdi
  char *v12; // rsi
  size_t v13; // r8
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // r8d
  void *v18; // r12
  __int64 v19; // rax
  void *v20; // rdx
  size_t v21; // r14
  void *v22; // rdi
  __int64 v23; // rcx
  void *v25; // rdi
  size_t v26; // r13
  size_t v28; // [rsp+10h] [rbp-90h]
  size_t v29; // [rsp+10h] [rbp-90h]
  int v31; // [rsp+1Ch] [rbp-84h]
  unsigned int v32; // [rsp+1Ch] [rbp-84h]
  unsigned int v33; // [rsp+1Ch] [rbp-84h]
  unsigned int v34; // [rsp+1Ch] [rbp-84h]
  unsigned int v35; // [rsp+1Ch] [rbp-84h]
  size_t n; // [rsp+28h] [rbp-78h] BYREF
  void *src; // [rsp+30h] [rbp-70h] BYREF
  __int128 v38; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int128 v40; // [rsp+58h] [rbp-48h]
  unsigned __int64 v41; // [rsp+68h] [rbp-38h]

  v6 = 2;
  v41 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = 0;
  v12 = nullptr;
  n = strlen(a3);
  v13 = n;
  v14 = a4;
  src = nullptr;
  BYTE1(v14) = BYTE1(a4) | 0x10;
  v38 = 0;
  v31 = v14;
  v15 = n == 0;
  if ( n )
    goto LABEL_17;
LABEL_2:
  if ( !v15 )
    *(_QWORD *)&v38 = v13;
  while ( 1 )
  {
    v16 = sub_8790A0(
            *(const __m128i **)v10,
            a3,
            0xFFFFFFFFFFFFFFFFLL,
            0,
            v31,
            *(__m128i **)(v10 + 8),
            nullptr,
            a5,
            0xFFFFFFFFFFFFFFFFLL,
            v12,
            &n);
    v17 = v16;
    if ( v16 != -48 )
      break;
    if ( v6 == 1 )
      goto LABEL_6;
    v13 = n;
    v11 = v38;
    v6 = 1;
    v12 = (char *)src;
    v15 = (_QWORD)v38 == n;
    if ( (unsigned __int64)v38 >= n )
      goto LABEL_2;
LABEL_17:
    if ( *((_QWORD *)&v38 + 1) < v13 )
    {
      v29 = v13;
      src = (void *)qvector_reserve(&src, v12, v13, 1);
      v11 = v38;
      v12 = (char *)src;
      v13 = v29;
    }
    v28 = v13;
    memset(&v12[v11], 0, v13 - v11);
    v12 = (char *)src;
    *(_QWORD *)&v38 = v28;
  }
  if ( v16 < 0 )
  {
LABEL_6:
    if ( a6 )
      sub_87C2C0(a6, v16);
    v17 = -1;
    goto LABEL_13;
  }
  v18 = src;
  v19 = 0;
  ptr = nullptr;
  v20 = nullptr;
  v21 = n;
  v40 = 0;
  if ( n )
  {
    v25 = nullptr;
    v26 = n + 1;
    if ( n != -1 )
    {
      v35 = v17;
      ptr = (void *)qvector_reserve(&ptr, 0, v26, 1);
      v17 = v35;
      v25 = ptr;
    }
    v34 = v17;
    *(_QWORD *)&v40 = v26;
    memmove(v25, v18, v21);
    v17 = v34;
    *((_BYTE *)ptr + v21) = 0;
    v20 = ptr;
    v19 = *((_QWORD *)&v40 + 1);
    v21 = v40;
  }
  v22 = *(void **)a1;
  v23 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v20;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 16) = v19;
  ptr = v22;
  *((_QWORD *)&v40 + 1) = v23;
  if ( v22 )
  {
    v32 = v17;
    *(_QWORD *)&v40 = 0;
    qfree(v22);
    v17 = v32;
  }
LABEL_13:
  if ( src )
  {
    v33 = v17;
    *(_QWORD *)&v38 = 0;
    qfree(src);
    return v33;
  }
  return v17;
}

