__int64 __fastcall sub_1EA8D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // eax
  size_t v9; // rbp
  size_t v10; // r14
  const void *v11; // r13
  const void *v12; // rcx
  size_t v13; // r8
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r13
  const void *v20; // r15
  _QWORD *v21; // rax
  void *s1; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-40h]

  v6 = a1;
  if ( a4 != a3 && a2 != a1 )
  {
    v7 = a3;
    v26 = a5 + 16;
    do
    {
      v9 = *(_QWORD *)(v6 + 8);
      v10 = *(_QWORD *)(v7 + 8);
      v11 = *(const void **)v6;
      v12 = *(const void **)v7;
      v13 = v10;
      if ( v9 <= v10 )
        v13 = *(_QWORD *)(v6 + 8);
      if ( v13
        && (n = v13, s1 = *(void **)v7,
                     v14 = memcmp(*(const void **)v6, *(const void **)v7, v13),
                     v12 = s1,
                     v13 = n,
                     v14) )
      {
        if ( v14 >= 0 )
        {
          v8 = memcmp(s1, v11, n);
          if ( !v8 )
          {
            if ( v9 == v10 )
              goto LABEL_7;
LABEL_6:
            if ( v9 <= v10 )
              goto LABEL_7;
LABEL_8:
            v7 += 16;
            if ( a2 == v6 )
              break;
            continue;
          }
LABEL_31:
          if ( v8 >= 0 )
            goto LABEL_7;
          goto LABEL_8;
        }
      }
      else
      {
        if ( v9 == v10 )
        {
          if ( !v9 || (v8 = memcmp(v12, v11, v9)) == 0 )
          {
LABEL_7:
            v6 += 16;
            goto LABEL_8;
          }
          goto LABEL_31;
        }
        if ( v9 >= v10 )
        {
          if ( !v13 )
            goto LABEL_6;
          v8 = memcmp(v12, v11, v13);
          if ( !v8 )
            goto LABEL_6;
          goto LABEL_31;
        }
      }
      v15 = *(unsigned int *)(a5 + 8);
      if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        sub_2237220(a5, v26, v15 + 1, 16);
        v15 = *(unsigned int *)(a5 + 8);
      }
      v16 = (_QWORD *)(*(_QWORD *)a5 + 16 * v15);
      v6 += 16;
      *v16 = v11;
      v16[1] = v9;
      ++*(_DWORD *)(a5 + 8);
      if ( a2 == v6 )
        break;
    }
    while ( a4 != v7 );
  }
  v17 = (a2 - v6) >> 4;
  if ( a2 - v6 > 0 )
  {
    v18 = *(unsigned int *)(a5 + 8);
    do
    {
      v19 = *(_QWORD *)(v6 + 8);
      v20 = *(const void **)v6;
      if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        sub_2237220(a5, a5 + 16, v18 + 1, 16);
        v18 = *(unsigned int *)(a5 + 8);
      }
      v21 = (_QWORD *)(*(_QWORD *)a5 + 16 * v18);
      v6 += 16;
      *v21 = v20;
      v21[1] = v19;
      v18 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
      *(_DWORD *)(a5 + 8) = v18;
      --v17;
    }
    while ( v17 );
  }
  return a5;
}
