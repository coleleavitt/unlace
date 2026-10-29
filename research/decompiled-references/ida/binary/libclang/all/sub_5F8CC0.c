int __fastcall sub_5F8CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 i; // r15
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // r13
  unsigned int *v11; // rsi
  unsigned int *v12; // rdi
  size_t v13; // r8
  size_t v14; // r9
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // r9
  unsigned int *v20; // rsi
  size_t v21; // r15
  unsigned int *v22; // rdi
  size_t v23; // r8
  size_t v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  size_t v28; // [rsp+0h] [rbp-68h]
  __int64 v29; // [rsp+0h] [rbp-68h]
  size_t v30; // [rsp+8h] [rbp-60h]
  size_t v31; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __int64 v34; // [rsp+20h] [rbp-48h]

  v6 = (a3 - 1) / 2;
  v33 = v6;
  v34 = a3 & 1;
  if ( a2 < v6 )
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = (__int64 *)(a1 + 16 * (i + 1));
      v10 = *v9;
      v11 = *(unsigned int **)(*(_QWORD *)(*(v9 - 1) + 40) + 16LL);
      v12 = *(unsigned int **)(*(_QWORD *)(*v9 + 40) + 16LL);
      v13 = *v11;
      v14 = *v12;
      v15 = v14;
      if ( v13 <= v14 )
        v15 = *v11;
      if ( v15 && (v30 = *v12, v28 = *v11, v16 = memcmp(v12 + 4, v11 + 4, v15), v13 = v28, v14 = v30, v16) )
      {
        if ( v16 >= 0 )
        {
LABEL_3:
          *(_QWORD *)(a1 + 8 * i) = v10;
          if ( v8 >= v33 )
            goto LABEL_12;
          continue;
        }
        --v8;
        v9 = (__int64 *)(a1 + 8 * v8);
        v17 = *v9;
      }
      else
      {
        if ( v14 >= v13 )
          goto LABEL_3;
        --v8;
        v9 = (__int64 *)(a1 + 8 * v8);
        v17 = *v9;
      }
      *(_QWORD *)(a1 + 8 * i) = v17;
      if ( v8 >= v33 )
      {
LABEL_12:
        if ( !v34 && (a3 - 2) / 2 == v8 )
        {
LABEL_27:
          v25 = 2 * v8 + 2;
          v26 = *(_QWORD *)(a1 + 8 * v25 - 8);
          v8 = v25 - 1;
          *v9 = v26;
          v9 = (__int64 *)(a1 + 8 * v8);
        }
        LODWORD(v6) = a2;
        v18 = (v8 - 1) / 2;
        if ( v8 > a2 )
        {
          while ( 1 )
          {
            v9 = (__int64 *)(a1 + 8 * v18);
            v19 = *v9;
            v20 = *(unsigned int **)(*(_QWORD *)(a4 + 40) + 16LL);
            v6 = *(_QWORD *)(*v9 + 40);
            v21 = *v20;
            v22 = *(unsigned int **)(v6 + 16);
            v23 = *v22;
            v24 = v23;
            if ( v21 <= v23 )
              v24 = *v20;
            if ( v24
              && (v31 = *v22, v29 = *v9, LODWORD(v6) = memcmp(v22 + 4, v20 + 4, v24), v19 = v29, v23 = v31, (_DWORD)v6) )
            {
              if ( (int)v6 >= 0 )
              {
LABEL_19:
                v9 = (__int64 *)(a1 + 8 * v8);
                goto LABEL_20;
              }
            }
            else if ( v23 >= v21 )
            {
              goto LABEL_19;
            }
            *(_QWORD *)(a1 + 8 * v8) = v19;
            v8 = v18;
            v6 = (v18 - 1) / 2;
            if ( a2 >= v18 )
              goto LABEL_20;
            v18 = (v18 - 1) / 2;
          }
        }
        goto LABEL_20;
      }
    }
  }
  v9 = (__int64 *)(a1 + 8 * a2);
  if ( (a3 & 1) == 0 )
  {
    v6 = (a3 - 2) / 2;
    if ( a2 == v6 )
    {
      v8 = a2;
      goto LABEL_27;
    }
  }
LABEL_20:
  *v9 = a4;
  return v6;
}

