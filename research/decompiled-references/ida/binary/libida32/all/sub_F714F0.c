void __fastcall sub_F714F0(__int64 a1, const void *a2, __int16 *a3)
{
  size_t v6; // rcx
  void *v7; // rbp
  size_t v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  char *v13; // rbx
  unsigned __int64 v14; // r14
  __int16 v15; // ax
  char *v16; // r9
  size_t v17; // r15
  char *v18; // [rsp+8h] [rbp-50h] BYREF
  size_t n; // [rsp+10h] [rbp-48h]
  void *dest; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(void **)a1;
  v8 = (size_t)a2 - *(_QWORD *)a1;
  v9 = v6 - *(_QWORD *)a1;
  if ( !(v9 >> 1) )
  {
    v10 = 1;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v11 = -2;
  if ( v9 >> 1 > (unsigned __int64)v9 || v9 < 0 )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_16:
    v11 = 2 * v10;
LABEL_3:
    n = v8;
    v18 = (char *)v6;
    v12 = operator new(v11);
    v6 = (size_t)v18;
    v13 = (char *)v12;
    v14 = v12 + v11;
    goto LABEL_4;
  }
  v14 = 0;
  v13 = nullptr;
LABEL_4:
  v15 = *a3;
  v16 = &v13[v8 + 2];
  v17 = v6 - (_QWORD)a2;
  *(_WORD *)&v13[v8] = v15;
  v18 = &v16[v6 - (_QWORD)a2];
  if ( a2 != v7 )
  {
    dest = &v13[v8 + 2];
    n = v6;
    memmove(v13, v7, v8);
    v16 = (char *)dest;
    if ( a2 == (const void *)n )
    {
LABEL_9:
      operator delete(v7);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( a2 != (const void *)v6 )
LABEL_6:
    memcpy(v16, a2, v17);
  if ( v7 )
    goto LABEL_9;
LABEL_8:
  n = (size_t)v13;
  *(_QWORD *)(a1 + 16) = v14;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v18);
}

