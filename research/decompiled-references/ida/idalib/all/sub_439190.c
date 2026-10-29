void __fastcall sub_439190(__int64 a1, __int64 a2, size_t a3, char *a4, __int64 a5, __int64 a6, size_t a7, void *s)
{
  const void *v10; // rdi
  unsigned __int64 v11; // rdx
  size_t v13; // rdx
  char *v14; // rax
  char *v15; // r15
  signed __int64 v16; // r12
  __int64 v17; // rbx
  int v18; // eax
  double v19; // xmm0_8
  double v20; // xmm1_8
  double v21; // xmm0_8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  signed __int64 *v25; // rsi
  double v26; // xmm0_8
  __int64 v27; // rax
  signed __int64 v28; // r15
  int c; // [rsp+4h] [rbp-54h]

  v10 = s;
  v11 = a7;
  if ( !a3 )
  {
    v16 = 0;
    v17 = a2;
LABEL_11:
    if ( a2 < 0 )
    {
      v26 = (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1));
      v18 = a5;
      v19 = v26 + v26;
      if ( a5 >= 0 )
        goto LABEL_13;
    }
    else
    {
      v18 = a5;
      v19 = (double)(int)a2;
      if ( a5 >= 0 )
      {
LABEL_13:
        v20 = (double)v18;
LABEL_14:
        v21 = round(v19 / v20 * 100.0);
        v22 = *(_QWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 64) = (int)v21;
        v23 = *(_QWORD *)(a1 + 48);
        v24 = v23 + 1;
        if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v23 + 1) )
        {
          v27 = qvector_reserve(a1 + 40, v22, v24, 16);
          *(_QWORD *)(a1 + 40) = v27;
          v22 = v27;
          v23 = *(_QWORD *)(a1 + 48);
          v24 = v23 + 1;
        }
        *(_QWORD *)(a1 + 48) = v24;
        v25 = (signed __int64 *)(16 * v23 + v22);
        *v25 = v16;
        v25[1] = v17;
        return;
      }
    }
    v20 = (double)(int)(a5 & 1 | ((unsigned __int64)a5 >> 1)) + (double)(int)(a5 & 1 | ((unsigned __int64)a5 >> 1));
    goto LABEL_14;
  }
  if ( a7 && a7 >= a3 )
  {
    c = *a4;
    do
    {
      v13 = 1 - a3 + v11;
      if ( !v13 )
        break;
      v14 = (char *)memchr(v10, c, v13);
      v15 = v14;
      if ( !v14 )
        break;
      if ( !memcmp(v14, a4, a3) )
      {
        v28 = v15 - (_BYTE *)s;
        v16 = v28;
        if ( v28 == -1 )
          break;
        v17 = a2 + v28;
        goto LABEL_11;
      }
      v10 = v15 + 1;
      v11 = (_BYTE *)s + a7 - (v15 + 1);
    }
    while ( v11 >= a3 );
  }
  *(_DWORD *)(a1 + 64) = 0;
}
