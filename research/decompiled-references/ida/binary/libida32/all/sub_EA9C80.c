const char *__fastcall sub_EA9C80(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  __int64 v5; // rdi
  char *v6; // rax
  char *v7; // r12
  size_t v8; // rax
  void *v9; // rdi
  size_t v10; // r13
  const char *result; // rax
  const char *v12; // rbp
  size_t v13; // rax
  void *v14; // rdi
  size_t v15; // r12
  _BYTE *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rax
  _BYTE *v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rdx

  v3 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == v3 )
  {
    sub_22581D0(a2, "%", 1);
  }
  else
  {
    *v3 = 37;
    ++*(_QWORD *)(a2 + 32);
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    v21 = sub_2257BD0(a2, (unsigned int)(*(_DWORD *)(a1 + 100) + 1));
    v22 = *(_BYTE **)(v21 + 32);
    if ( *(_BYTE **)(v21 + 24) == v22 )
    {
      sub_22581D0(v21, "$", 1);
    }
    else
    {
      *v22 = 36;
      ++*(_QWORD *)(v21 + 32);
    }
  }
  if ( *(_BYTE *)(a1 + 144) )
  {
    v20 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v20 )
    {
      sub_22581D0(a2, "-", 1);
    }
    else
    {
      *v20 = 45;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    v19 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v19 )
    {
      sub_22581D0(a2, "+", 1);
    }
    else
    {
      *v19 = 43;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  if ( *(_BYTE *)(a1 + 192) )
  {
    v18 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v18 )
    {
      sub_22581D0(a2, " ", 1);
    }
    else
    {
      *v18 = 32;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  if ( *(_BYTE *)(a1 + 216) )
  {
    v17 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v17 )
    {
      sub_22581D0(a2, "#", 1);
    }
    else
    {
      *v17 = 35;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  if ( *(_BYTE *)(a1 + 240) )
  {
    v16 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v16 )
    {
      sub_22581D0(a2, "0", 1);
    }
    else
    {
      *v16 = 48;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  sub_C7A070(a1 + 16, a2);
  sub_C7A070(a1 + 344, a2);
  if ( *(_DWORD *)(a1 + 84) != 3 )
  {
    v4 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a2 + 24) )
    {
      v5 = sub_2257CD0(a2, 118);
    }
    else
    {
      v5 = a2;
      *(_QWORD *)(a2 + 32) = v4 + 1;
      *v4 = 118;
    }
    sub_2257BD0(v5, *(unsigned int *)(a1 + 88));
  }
  v6 = sub_C79C70(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = strlen(v6);
    v9 = *(void **)(a2 + 32);
    v10 = v8;
    if ( v8 <= *(_QWORD *)(a2 + 24) - (_QWORD)v9 )
    {
      if ( v8 )
      {
        memcpy(v9, v7, v8);
        *(_QWORD *)(a2 + 32) += v10;
      }
    }
    else
    {
      sub_22581D0(a2, v7, v8);
    }
  }
  result = sub_C79DB0(a1 + 40);
  v12 = result;
  if ( result )
  {
    v13 = strlen(result);
    v14 = *(void **)(a2 + 32);
    v15 = v13;
    result = (const char *)(*(_QWORD *)(a2 + 24) - (_QWORD)v14);
    if ( v15 <= (unsigned __int64)result )
    {
      if ( v15 )
      {
        result = (const char *)memcpy(v14, v12, v15);
        *(_QWORD *)(a2 + 32) += v15;
      }
    }
    else
    {
      return (const char *)sub_22581D0(a2, v12, v15);
    }
  }
  return result;
}

