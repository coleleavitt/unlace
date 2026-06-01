/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100016E60
// Address: 0x0000000100016E60

//----- (0000000100016E60) ----------------------------------------------------
char __fastcall sub_100016E60(char **a1, __int64 a2)
{
  char **v3; // rbx
  char *v4; // rsi
  char *v5; // rcx
  __int64 v6; // r14
  char *v7; // r15
  const char *v8; // r13
  __int64 v9; // r12
  const char *v10; // rsi
  size_t v11; // r14
  void *v13; // r13
  __int64 v14; // rax
  size_t __n; // [rsp+8h] [rbp-78h]
  char *v16; // [rsp+18h] [rbp-68h]
  char *v17; // [rsp+20h] [rbp-60h]
  __int64 v18; // [rsp+28h] [rbp-58h]

  v3 = a1;
  v4 = *a1;
  v5 = a1[1];
  v6 = 24LL * (_QWORD)v5;
  v7 = *a1;
  if ( 24LL * (_QWORD)v5 )
  {
    v17 = a1[1];
    v8 = _s1;
    __n = *(_QWORD *)(a2 + 8);
    if ( __n )
      v8 = *(const char **)a2;
    v18 = a2;
    v9 = 24LL * (_QWORD)v5;
    v16 = *a1;
    v7 = *a1;
    while ( 1 )
    {
      v10 = _s1;
      if ( *((_QWORD *)v7 + 1) )
        v10 = *(const char **)v7;
      if ( !strcmp(v8, v10) )
        break;
      v7 += 24;
      v9 -= 24;
      if ( !v9 )
      {
        v3 = a1;
        v11 = __n;
        v4 = v16;
        v5 = v17;
        a2 = v18;
        goto LABEL_14;
      }
    }
    v3 = a1;
    v4 = v16;
    v5 = v17;
    a2 = v18;
  }
  if ( v7 != &v4[v6] )
    return 0;
  v11 = *(_QWORD *)(a2 + 8);
LABEL_14:
  if ( v11 )
  {
    v13 = qalloc_or_throw(v11);
    memcpy(v13, *(const void **)a2, v11);
    v4 = *v3;
    v5 = v3[1];
  }
  else
  {
    v13 = nullptr;
  }
  if ( v3[2] < v5 + 1 )
  {
    v4 = (char *)qvector_reserve((__int64)v3, v4, (unsigned __int64)(v5 + 1), 0x18u);
    *v3 = v4;
    v5 = v3[1];
  }
  v14 = 3LL * (_QWORD)v5;
  *(_QWORD *)&v4[8 * v14] = v13;
  *(_QWORD *)&v4[8 * v14 + 8] = v11;
  *(_QWORD *)&v4[8 * v14 + 16] = v11;
  ++v3[1];
  return 1;
}
