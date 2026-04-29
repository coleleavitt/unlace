__int64 __fastcall sub_11EC0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // edx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  char *v9; // rsi
  size_t v10; // r8
  unsigned __int64 v11; // rax
  unsigned int v12; // r12d
  char *v13; // rcx
  unsigned __int64 v14; // r15
  char *v15; // rax
  unsigned __int64 v16; // r14
  size_t v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // [rsp+8h] [rbp-40h]

  result = *(unsigned int *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 12);
  v7 = *(_QWORD **)a1;
  if ( (unsigned int)result >= v6 )
  {
    v9 = (char *)a3[1];
    v10 = 8LL * v6;
    if ( v9 == (char *)v7 + v10 && (unsigned __int64)(v9 + 8) <= a3[2] )
    {
      a3[1] = v9 + 8;
      result = *(unsigned int *)(a1 + 8);
      ++*(_DWORD *)(a1 + 12);
      v7 = *(_QWORD **)a1;
    }
    else
    {
      v11 = 2 * v6;
      v12 = 2 * v6;
      if ( v11 < 4 )
        v11 = 4;
      v13 = (char *)((unsigned __int64)(v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      a3[1] = v13;
      v14 = 8 * (v6 + v11);
      if ( !v13 || (v15 = &v13[v14], (unsigned __int64)&v13[v14] > a3[2]) )
      {
        v22 = 8LL * v6;
        v16 = 2LL * a3[4];
        if ( v16 < v14 + 8 )
          v16 = v14 + 8;
        a3[4] = v16;
        v17 = v16 + 8;
        v18 = malloc(v17);
        v19 = a3[3];
        v10 = v22;
        a3[3] = v18;
        *v18 = v19;
        v13 = (char *)(((unsigned __int64)v18 + 15) & 0xFFFFFFFFFFFFFFF8LL);
        a3[2] = (char *)v18 + v17;
        v15 = &v13[v14];
      }
      a3[1] = v15;
      v20 = memcpy(v13, *(const void **)a1, v10);
      *(_QWORD *)a1 = v20;
      v7 = v20;
      v21 = 4;
      if ( v12 >= 4 )
        v21 = v12;
      *(_DWORD *)(a1 + 12) += v21;
      result = *(unsigned int *)(a1 + 8);
    }
  }
  v8 = *a2;
  *(_DWORD *)(a1 + 8) = result + 1;
  v7[result] = v8;
  return result;
}
