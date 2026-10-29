__int64 __fastcall sub_626200(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 (__fastcall *v8)(unsigned __int64 *, unsigned __int64, int); // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  _QWORD *v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  const char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  char *v22; // rsi
  unsigned __int64 v23; // rbx
  size_t v24; // r13
  __int64 v25; // r12
  size_t v26; // r14
  char *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v31; // [rsp+8h] [rbp-40h]
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v5 == sub_3DB7B0 )
    v6 = a2 + 2;
  else
    v6 = (unsigned __int64 *)v5((__int64)a2);
  if ( a3 < *v6 || a3 >= v6[1] )
    return a1;
  v8 = *(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, int))(*a2 + 40);
  if ( v8 == sub_6222A0 )
  {
    if ( !a2[10] )
      return a1;
    v9 = (_QWORD *)a2[7];
    v10 = a2 + 6;
    v11 = v9;
    if ( !v9 )
      return a1;
    v12 = a2 + 6;
    do
    {
      while ( 1 )
      {
        v13 = v11[2];
        v14 = v11[3];
        if ( v11[4] >= a3 )
          break;
        v11 = (_QWORD *)v11[3];
        if ( !v14 )
          goto LABEL_13;
      }
      v12 = v11;
      v11 = (_QWORD *)v11[2];
    }
    while ( v13 );
LABEL_13:
    if ( v12 == v10 || a3 != v12[4] )
      return a1;
  }
  else
  {
    if ( a3 != v8(a2, a3, 0) )
      return a1;
    v9 = (_QWORD *)a2[7];
    v10 = a2 + 6;
    if ( !v9 )
LABEL_25:
      sub_622410();
  }
  v15 = v10;
  do
  {
    while ( 1 )
    {
      v16 = v9[2];
      v17 = v9[3];
      if ( v9[4] >= a3 )
        break;
      v9 = (_QWORD *)v9[3];
      if ( !v17 )
        goto LABEL_23;
    }
    v10 = v9;
    v9 = (_QWORD *)v9[2];
  }
  while ( v16 );
LABEL_23:
  if ( v15 == v10 || a3 < v10[4] )
    goto LABEL_25;
  if ( v10[5] != -1 )
    sub_35A790((char **)a1);
  v18 = (const char *)v10[6];
  if ( v18 )
  {
    v19 = v10[7];
    src = nullptr;
    v31 = 0;
    v20 = (unsigned int)(v19 - 1);
    if ( !v19 )
    {
      v20 = 0;
      v18 = haystack;
    }
    qstr2user(&src, v18, v20);
    v21 = *(_QWORD *)(a1 + 8);
    if ( v21 > 1 )
    {
      v22 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v21 + 1 )
      {
        v28 = qvector_reserve(a1, v22, v21 + 1, 1);
        *(_QWORD *)a1 = v28;
        v22 = (char *)v28;
      }
      *(_QWORD *)(a1 + 8) = v21 + 1;
      v22[v21] = 0;
      *(_BYTE *)(*(_QWORD *)a1 + v21 - 1) = 32;
    }
    v23 = v31;
    if ( (_QWORD)v31 )
    {
      v24 = v31 - 1;
      if ( (_QWORD)v31 != 1 )
      {
        v25 = *(_QWORD *)(a1 + 8);
        v26 = v31 - 1;
        if ( v25 )
        {
          --v25;
          v26 = v24 + v25;
          v23 = v31 + v25;
        }
        v27 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v23 )
        {
          v29 = qvector_reserve(a1, v27, v23, 1);
          *(_QWORD *)a1 = v29;
          v27 = (char *)v29;
        }
        *(_QWORD *)(a1 + 8) = v23;
        v27[v26] = 0;
        memcpy((void *)(v25 + *(_QWORD *)a1), src, v24);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v31 = 0;
      qfree(src);
    }
  }
  return a1;
}
