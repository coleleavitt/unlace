unsigned __int64 __fastcall sub_110AB20(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  size_t v4; // rax
  __int64 v5; // rbx
  void *v6; // r14
  size_t v7; // r13
  size_t v8; // rdx
  char *v9; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r13
  _QWORD *v12; // rbx
  _QWORD *v13; // r13
  _BYTE *v14; // rbp
  __int64 v15; // r14
  size_t v16; // rax
  void *v17; // rdi
  size_t v18; // r15
  unsigned __int64 v19; // rcx
  void *v20; // rdi
  size_t v21; // r14
  const void *v22; // rsi
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( v3 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    v7 = v3 - 1;
    v6 = *(void **)(a2 + 32);
    v9 = (char *)(*a1 + 1LL);
    if ( (unsigned __int64)(v3 - 1) > *(_QWORD *)(a2 + 24) - (_QWORD)v6 )
    {
      sub_227BF10(a2, v9, v3 - 1);
      v6 = *(void **)(a2 + 32);
      v5 = *(_QWORD *)(a2 + 24);
    }
    else if ( v3 != 1 )
    {
      v8 = v3 - 1;
LABEL_4:
      memcpy(v6, v9, v8);
      *(_QWORD *)(a2 + 32) += v7;
      v5 = *(_QWORD *)(a2 + 24);
      v6 = *(void **)(a2 + 32);
    }
  }
  else
  {
    v4 = j__strlen(".");
    v5 = *(_QWORD *)(a2 + 24);
    v6 = *(void **)(a2 + 32);
    v7 = v4;
    if ( v4 <= v5 - (__int64)v6 )
    {
      v8 = v4;
      v9 = ".";
      if ( !v4 )
        goto LABEL_7;
      goto LABEL_4;
    }
    sub_227BF10(a2, ".", v4);
    v6 = *(void **)(a2 + 32);
    v5 = *(_QWORD *)(a2 + 24);
  }
LABEL_7:
  result = j__strlen(";");
  v11 = result;
  if ( result > v5 - (__int64)v6 )
  {
    result = sub_227BF10(a2, ";", result);
  }
  else if ( result )
  {
    result = (unsigned __int64)memcpy(v6, ";", result);
    *(_QWORD *)(a2 + 32) += v11;
  }
  v12 = (_QWORD *)a1[12];
  v13 = (_QWORD *)a1[13];
  if ( v13 != v12 )
  {
    while ( 1 )
    {
      v14 = (_BYTE *)*v12;
      if ( *(_BYTE *)*v12 != 45 )
        goto LABEL_12;
      v15 = v12[1];
      v16 = j__strlen("@");
      v17 = *(void **)(a2 + 32);
      v18 = v16;
      result = *(_QWORD *)(a2 + 24) - (_QWORD)v17;
      if ( v18 > result )
      {
        result = sub_227BF10(a2, "@", v18);
        v19 = result;
      }
      else
      {
        v19 = a2;
        if ( v18 )
        {
          result = (unsigned __int64)memcpy(v17, "@", v18);
          *(_QWORD *)(a2 + 32) += v18;
          v19 = a2;
        }
      }
      if ( !v15 )
        goto LABEL_12;
      v20 = *(void **)(v19 + 32);
      v21 = v15 - 1;
      v22 = v14 + 1;
      result = *(_QWORD *)(v19 + 24) - (_QWORD)v20;
      if ( v21 <= result )
      {
        v23 = v19;
        if ( v21 )
        {
          result = (unsigned __int64)memcpy(v20, v22, v21);
          *(_QWORD *)(v23 + 32) += v21;
        }
LABEL_12:
        v12 += 4;
        if ( v13 == v12 )
          return result;
      }
      else
      {
        v12 += 4;
        result = sub_227BF10(v19, v22, v21);
        if ( v13 == v12 )
          return result;
      }
    }
  }
  return result;
}
