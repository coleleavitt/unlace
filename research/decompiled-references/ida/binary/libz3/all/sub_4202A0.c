__int64 __fastcall sub_4202A0(__int64 a1, __int64 a2, __int64 i, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // r13
  unsigned int v16; // edi
  __int64 v17; // r13
  unsigned int v18; // edi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // [rsp+8h] [rbp-60h]
  _QWORD *v29; // [rsp+8h] [rbp-60h]
  _DWORD *v30; // [rsp+8h] [rbp-60h]
  unsigned int *v31; // [rsp+10h] [rbp-58h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __int64 v34; // [rsp+28h] [rbp-40h]

  result = i - 1;
  v9 = i & 1;
  v10 = i;
  v11 = (i - 1) / 2;
  if ( a2 < v11 )
  {
    for ( i = a2; ; i = v13 )
    {
      v13 = 2 * (i + 1);
      v14 = (__int64 *)(a1 + 16 * (i + 1));
      v15 = *v14;
      v16 = *(_DWORD *)(*(v14 - 1) + 96);
      if ( *(_DWORD *)(*v14 + 96) < v16 )
        goto LABEL_7;
      if ( *(_DWORD *)(*v14 + 96) != v16 )
      {
        *(_QWORD *)(a1 + 8 * i) = v15;
        if ( v13 >= v11 )
          goto LABEL_9;
        continue;
      }
      v34 = v11;
      v33 = v9;
      v32 = i;
      v29 = (_QWORD *)*(v14 - 1);
      sub_407990(v29, v10, i, v11, v9, a6);
      v30 = (_DWORD *)v29[2];
      sub_407990((_QWORD *)v15, v10, v22, v23, v24, v25);
      i = v32;
      v9 = v33;
      v11 = v34;
      if ( **(_DWORD **)(v15 + 16) < *v30 )
      {
LABEL_7:
        --v13;
        v14 = (__int64 *)(a1 + 8 * v13);
      }
      *(_QWORD *)(a1 + 8 * i) = *v14;
      if ( v13 >= v11 )
      {
LABEL_9:
        if ( !v9 )
        {
          v10 -= 2;
          if ( v10 / 2 == v13 )
          {
LABEL_22:
            v26 = 2 * v13 + 2;
            v27 = *(_QWORD *)(a1 + 8 * v26 - 8);
            v13 = v26 - 1;
            *v14 = v27;
            v14 = (__int64 *)(a1 + 8 * v13);
          }
        }
        result = v13 - 1;
        v17 = (v13 - 1) / 2;
        if ( v13 > a2 )
        {
          while ( 1 )
          {
            v14 = (__int64 *)(a1 + 8 * v17);
            v18 = *(_DWORD *)(a4 + 96);
            result = *v14;
            if ( *(_DWORD *)(*v14 + 96) >= v18 )
            {
              if ( *(_DWORD *)(*v14 + 96) != v18
                || (v28 = (_QWORD *)*v14,
                    sub_407990((_QWORD *)a4, v10, i, v11, v9, a6),
                    v31 = *(unsigned int **)(a4 + 16),
                    sub_407990(v28, v10, (__int64)v31, v19, v20, v21),
                    result = v28[2],
                    v10 = *v31,
                    *(_DWORD *)result >= (unsigned int)v10) )
              {
                v14 = (__int64 *)(a1 + 8 * v13);
                goto LABEL_14;
              }
              result = *v14;
            }
            i = v17 - 1;
            *(_QWORD *)(a1 + 8 * v13) = result;
            v13 = v17;
            result = (v17 - 1) / 2;
            if ( a2 >= v17 )
              goto LABEL_14;
            v17 = (v17 - 1) / 2;
          }
        }
        goto LABEL_14;
      }
    }
  }
  v14 = (__int64 *)(a1 + 8 * a2);
  if ( (i & 1) == 0 )
  {
    v10 = i - 2;
    result = (i - 2) / 2;
    if ( a2 == result )
    {
      v13 = a2;
      goto LABEL_22;
    }
  }
LABEL_14:
  *v14 = a4;
  return result;
}

