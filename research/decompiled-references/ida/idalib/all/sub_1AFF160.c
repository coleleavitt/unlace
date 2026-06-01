void __fastcall sub_1AFF160(__int64 a1, __int64 a2, unsigned int **a3)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int ***v7; // rax
  __int64 v8; // rdx
  char *v9; // rsi
  __int64 *v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  unsigned int **v13; // [rsp+0h] [rbp-48h] BYREF
  void *v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15; // [rsp+18h] [rbp-30h] BYREF

  v13 = a3;
  sub_EB79F0((__int64)&v14, a3);
  v4 = *(unsigned int *)(a1 + 264);
  v5 = v4 + 1;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 268) )
  {
    v11 = *(_QWORD *)(a1 + 256);
    v12 = a1 + 256;
    if ( v11 > (unsigned __int64)&v13 || (unsigned __int64)&v13 >= v11 + 40 * v4 )
    {
      sub_1AFF000(v12, v5);
      v6 = *(_QWORD *)(a1 + 256);
      v4 = *(unsigned int *)(a1 + 264);
      v7 = &v13;
    }
    else
    {
      sub_1AFF000(v12, v5);
      v6 = *(_QWORD *)(a1 + 256);
      v4 = *(unsigned int *)(a1 + 264);
      v7 = (unsigned int ***)((char *)&v13 + v6 - v11);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 256);
    v7 = &v13;
  }
  v8 = v6 + 40 * v4;
  *(_QWORD *)v8 = *v7;
  *(_QWORD *)(v8 + 8) = v8 + 24;
  v9 = (char *)v7[1];
  if ( v9 == (char *)(v7 + 3) )
  {
    *(__m128i *)(v8 + 24) = _mm_loadu_si128((const __m128i *)(v7 + 3));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v8 + 24) = v7[3];
  }
  *(_QWORD *)(v8 + 16) = v7[2];
  v7[1] = (unsigned int **)(v7 + 3);
  v10 = (__int64 *)v14;
  v7[2] = nullptr;
  *((_BYTE *)v7 + 24) = 0;
  ++*(_DWORD *)(a1 + 264);
  if ( v10 != &v15 )
    operator delete(v10);
}
