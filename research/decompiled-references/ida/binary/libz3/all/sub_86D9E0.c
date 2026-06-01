unsigned int *__fastcall sub_86D9E0(__int64 a1, __int64 a2, __m128i a3)
{
  int v3; // edx
  int v4; // r13d
  char *v5; // rax
  unsigned int v6; // r9d
  __int64 v7; // r8
  char *v8; // rax
  __int64 v9; // rdx
  unsigned int *result; // rax
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // esi
  unsigned int v21; // r11d
  unsigned int v22; // ebx
  unsigned int v23; // r12d
  unsigned int *v24; // [rsp-10h] [rbp-58h]
  __int64 v25; // [rsp+0h] [rbp-48h]
  unsigned int v26; // [rsp+8h] [rbp-40h]
  int v27; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_DWORD *)(a1 + 12);
  v4 = 2 * *(_DWORD *)(a2 + 28);
  v5 = (char *)(*(_QWORD *)(a2 + 176) + 88LL);
  if ( *(int *)v5 >> 8 == -1 )
  {
LABEL_22:
    v7 = 0x7FFFFFFF8LL;
    v6 = -1;
  }
  else
  {
    while ( v3 != *v5 )
    {
      v5 = *((char **)v5 + 1);
      if ( !v5 )
        goto LABEL_22;
    }
    v6 = *(int *)v5 >> 8;
    v7 = 8LL * v6;
  }
  v8 = (char *)(*(_QWORD *)(a2 + 184) + 88LL);
  if ( *(int *)v8 >> 8 == -1 )
  {
LABEL_23:
    v26 = -1;
  }
  else
  {
    while ( v3 != *v8 )
    {
      v8 = *((char **)v8 + 1);
      if ( !v8 )
        goto LABEL_23;
    }
    v26 = *(int *)v8 >> 8;
  }
  v9 = *(_QWORD *)(a1 + 600);
  result = *(unsigned int **)(v9 + v7);
  if ( result )
  {
    v11 = *(result - 1);
    if ( v11 == 1 )
    {
      v22 = *result;
      v23 = **(_DWORD **)(v9 + 8LL * v26);
      sub_7E5420(a1, v4 ^ 1, *result ^ 1, v23, nullptr);
      sub_7E5420(a1, v4 ^ 1, v23 ^ 1, v22, nullptr);
      sub_7E5420(a1, v22 ^ 1, v23 ^ 1, v4, nullptr);
      return (unsigned int *)sub_7E5420(a1, v23, v22, v4, nullptr);
    }
    else
    {
      v12 = 0;
      if ( v11 )
      {
        v25 = v11;
        v13 = v7;
        v27 = v6;
        while ( 1 )
        {
          v15 = *(_QWORD *)(a1 + 24);
          v16 = v12;
          v17 = result[v12];
          v18 = *(_QWORD *)(v15 + 3288);
          v19 = *(unsigned int *)(*(_QWORD *)(v9 + 8LL * v26) + 4 * v12);
          v20 = (unsigned int)v17 >> 1;
          v21 = (unsigned int)v19 >> 1;
          if ( !*(_DWORD *)(v18 + 4 * v17)
            && (*(_DWORD *)(v18 + 4 * v19)
             || (v14 = 214013 * *(_DWORD *)(v15 + 2356) + 2531011, *(_DWORD *)(v15 + 2356) = v14, (v14 & 0x10000) != 0)) )
          {
            ++v12;
            sub_86D800(a1, v20, v21, v16, v27, v26, v4, a3);
            result = v24;
            if ( v25 == v12 )
              return result;
          }
          else
          {
            ++v12;
            result = (unsigned int *)sub_86D800(a1, v21, v20, v16, v26, v27, v4, a3);
            if ( v25 == v12 )
              return result;
          }
          v9 = *(_QWORD *)(a1 + 600);
          result = *(unsigned int **)(v9 + v13);
        }
      }
    }
  }
  return result;
}

