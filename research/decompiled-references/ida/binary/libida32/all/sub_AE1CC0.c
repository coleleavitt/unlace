__int64 *__fastcall sub_AE1CC0(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v4; // rax
  __int64 v5; // rdi
  const char *v6; // rsi
  int v7; // edx
  __int64 v8; // rbp
  size_t v9; // rax
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r13
  size_t v14; // rax
  void *v15; // rdi
  size_t v16; // r13
  __int64 v17; // r13
  size_t v18; // rax
  void *v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r13
  _DWORD *v22; // r12
  __int64 *result; // rax
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r15
  size_t v27; // rax
  void *v28; // rdi
  size_t v29; // r15
  __int64 v30; // r15
  size_t v31; // rax
  void *v32; // rdi
  size_t v33; // rdx
  char *v34; // rsi
  __int64 *v35; // r10
  __int64 *v36; // r13
  __int64 v37; // r12
  size_t v38; // rax
  __int64 *i; // [rsp+10h] [rbp-88h]
  size_t v40; // [rsp+28h] [rbp-70h]
  size_t v41; // [rsp+30h] [rbp-68h]
  size_t v42; // [rsp+38h] [rbp-60h]
  __int64 *v44; // [rsp+48h] [rbp-50h]
  __int64 *v45; // [rsp+48h] [rbp-50h]
  size_t v47; // [rsp+58h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 40) )
  {
    v4 = *(_BYTE **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v4 )
    {
      v5 = sub_2257CD0(a2, 32);
    }
    else
    {
      v5 = a2;
      *(_QWORD *)(a2 + 32) = v4 + 1;
      *v4 = 32;
    }
    v6 = "inbranch";
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 != 1 )
    {
      v6 = &byte_22CD811;
      if ( v7 )
        v6 = "notinbranch";
    }
    sub_971800(v5, v6);
  }
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    sub_971800(a2, " simdlen(");
    v9 = j__strlen("\n");
    sub_EE3EC0(v8, a2, 0, a3, 0, 0, (__int64)"\n", v9);
    sub_971800(a2, ")");
  }
  if ( *(_DWORD *)(a1 + 56) )
  {
    sub_971800(a2, " uniform");
    v33 = 1;
    v34 = "(";
    v35 = *(__int64 **)(a1 + 64);
    v45 = &v35[*(unsigned int *)(a1 + 56)];
    if ( v35 != v45 )
    {
      v36 = *(__int64 **)(a1 + 64);
      do
      {
        v37 = *v36++;
        sub_9717A0(a2, v34, v33);
        v38 = j__strlen("\n");
        sub_EE3EC0(v37, a2, 0, a3, 0, 0, (__int64)"\n", v38);
        v34 = ", ";
        v33 = j__strlen(", ");
      }
      while ( v45 != v36 );
    }
    sub_971800(a2, ")");
  }
  v10 = *(__int64 **)(a1 + 80);
  v11 = *(__int64 **)(a1 + 96);
  v12 = *(unsigned int *)(a1 + 72);
  if ( v10 != &v10[v12] )
  {
    v44 = &v10[v12];
    do
    {
      while ( 1 )
      {
        v17 = *v10;
        v18 = j__strlen(" aligned(");
        v19 = *(void **)(a2 + 32);
        if ( v18 <= *(_QWORD *)(a2 + 24) - (_QWORD)v19 )
        {
          if ( v18 )
          {
            v47 = v18;
            memcpy(v19, " aligned(", v18);
            *(_QWORD *)(a2 + 32) += v47;
          }
        }
        else
        {
          sub_22581D0(a2, " aligned(", v18);
        }
        sub_EE3EC0(v17, a2, 0, a3, 0, 0, (__int64)"\n", 1);
        if ( *v11 )
        {
          sub_971800(a2, ": ");
          v13 = *v11;
          v42 = j__strlen("\n");
          sub_EE3EC0(v13, a2, 0, a3, 0, 0, (__int64)"\n", v42);
        }
        v14 = j__strlen(")");
        v15 = *(void **)(a2 + 32);
        v16 = v14;
        if ( v14 <= *(_QWORD *)(a2 + 24) - (_QWORD)v15 )
          break;
        ++v11;
        ++v10;
        sub_22581D0(a2, ")", v14);
        if ( v44 == v10 )
          goto LABEL_24;
      }
      if ( v14 )
      {
        memcpy(v15, ")", v14);
        *(_QWORD *)(a2 + 32) += v16;
      }
      ++v11;
      ++v10;
    }
    while ( v44 != v10 );
  }
LABEL_24:
  v20 = *(__int64 **)(a1 + 112);
  v21 = *(__int64 **)(a1 + 144);
  v22 = *(_DWORD **)(a1 + 128);
  result = &v20[*(unsigned int *)(a1 + 104)];
  for ( i = result; i != v20; ++v20 )
  {
    v30 = *v20;
    v31 = j__strlen(" linear(");
    v32 = *(void **)(a2 + 32);
    if ( v31 <= *(_QWORD *)(a2 + 24) - (_QWORD)v32 )
    {
      if ( v31 )
      {
        v41 = v31;
        memcpy(v32, " linear(", v31);
        *(_QWORD *)(a2 + 32) += v41;
      }
    }
    else
    {
      sub_22581D0(a2, " linear(", v31);
    }
    if ( *v22 != 4 )
    {
      v24 = (const char *)sub_FDA030(53);
      v25 = sub_971800(a2, v24);
      sub_971800(v25, "(");
    }
    sub_EE3EC0(v30, a2, 0, a3, 0, 0, (__int64)"\n", 1);
    if ( *v22 != 4 )
      sub_971800(a2, ")");
    if ( *v21 )
    {
      sub_971800(a2, ": ");
      v26 = *v21;
      v40 = j__strlen("\n");
      sub_EE3EC0(v26, a2, 0, a3, 0, 0, (__int64)"\n", v40);
    }
    v27 = j__strlen(")");
    v28 = *(void **)(a2 + 32);
    v29 = v27;
    result = (__int64 *)(*(_QWORD *)(a2 + 24) - (_QWORD)v28);
    if ( v29 > (unsigned __int64)result )
    {
      result = (__int64 *)sub_22581D0(a2, ")", v29);
    }
    else if ( v29 )
    {
      result = (__int64 *)memcpy(v28, ")", v29);
      *(_QWORD *)(a2 + 32) += v29;
    }
    ++v21;
    ++v22;
  }
  return result;
}

