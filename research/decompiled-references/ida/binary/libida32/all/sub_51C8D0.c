__int64 __fastcall sub_51C8D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  const char *v6; // r12
  __int64 v7; // rsi
  const char *numbered_type_name; // rax
  const char *v9; // rbp
  size_t v10; // r14
  void *v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  void *v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-6Ch] BYREF
  void *v18; // [rsp+10h] [rbp-68h] BYREF
  __m128i v19; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __int128 v21; // [rsp+38h] [rbp-40h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
  {
    if ( !under_debugger )
      interr(983);
    BUG();
  }
  v5 = a3;
  v17 = 0;
  v18 = nullptr;
  v19 = 0;
  if ( a3 == 2 )
  {
    v7 = *(unsigned int *)(v3 + 24);
    if ( (_DWORD)v7 )
    {
      v17 = *(_DWORD *)(v3 + 24);
      ptr = nullptr;
      v21 = 0;
      goto LABEL_12;
    }
    v6 = *(const char **)(v3 + 16);
    if ( v6 )
    {
      ptr = nullptr;
      v21 = 0;
      if ( !a2 )
        goto LABEL_19;
      v10 = strlen(v6);
      if ( !v10 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        goto LABEL_19;
      }
      v9 = v6;
      goto LABEL_50;
    }
    if ( (*(_BYTE *)(a1 + 68) & 8) == 0 )
    {
      ptr = nullptr;
      v6 = *(const char **)(v3 + 8);
      v21 = 0;
      goto LABEL_30;
    }
    v7 = *(unsigned int *)(v3 + 8);
    v17 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    if ( a3 > 2 )
    {
      if ( a3 != 8 )
      {
        ptr = nullptr;
        v6 = nullptr;
        v21 = 0;
        if ( a2 )
          goto LABEL_24;
LABEL_27:
        v5 = 0;
        goto LABEL_20;
      }
    }
    else if ( a3 )
    {
      if ( a3 != 1 )
      {
        ptr = nullptr;
        v6 = nullptr;
        v21 = 0;
        if ( !a2 )
        {
          v5 = 0;
          goto LABEL_20;
        }
LABEL_24:
        v11 = *(void **)a2;
        v12 = _mm_loadu_si128((const __m128i *)(a2 + 8));
        *(_QWORD *)a2 = v6;
        v13 = _mm_loadu_si128(&v19);
        v18 = v11;
        *(__m128i *)(a2 + 8) = v13;
        v19 = v12;
        if ( v5 == 8 )
          sub_4B8BE0(qword_2CA1698, a2);
LABEL_26:
        if ( v6 )
          goto LABEL_19;
        goto LABEL_27;
      }
      if ( !(unsigned __int8)sub_51C800(a1, (__int64)&v18) )
      {
LABEL_34:
        v5 = 0;
        goto LABEL_35;
      }
      v6 = haystack;
      if ( v19.m128i_i64[0] )
        v6 = (const char *)v18;
      is_ordinal_name(v6, &v17);
      v7 = v17;
      goto LABEL_10;
    }
    if ( (*(_BYTE *)(a1 + 68) & 8) == 0 )
    {
      ptr = nullptr;
      v6 = *(const char **)(v3 + 8);
      v21 = 0;
      goto LABEL_30;
    }
    v7 = *(unsigned int *)(v3 + 8);
    v6 = nullptr;
    v17 = *(_DWORD *)(v3 + 8);
  }
LABEL_10:
  ptr = nullptr;
  v21 = 0;
  if ( !(_DWORD)v7 )
    goto LABEL_30;
  v3 = *(_QWORD *)(a1 + 32);
LABEL_12:
  if ( !*(_QWORD *)v3 )
    goto LABEL_34;
  numbered_type_name = (const char *)get_numbered_type_name(*(_QWORD *)v3, v7);
  v9 = numbered_type_name;
  if ( numbered_type_name )
  {
    if ( !a2 )
    {
LABEL_18:
      v6 = v9;
LABEL_19:
      LOBYTE(v5) = *v6 != 0;
      goto LABEL_20;
    }
    v6 = (const char *)v18;
    if ( numbered_type_name != v18 )
    {
LABEL_16:
      v10 = strlen(v9);
      if ( !v10 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        if ( v5 != 8 )
          goto LABEL_18;
LABEL_53:
        sub_4B8BE0(qword_2CA1698, a2);
        goto LABEL_18;
      }
LABEL_50:
      v15 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v10 + 1 )
      {
        v16 = qvector_reserve(a2, *(_QWORD *)a2, v10 + 1, 1);
        *(_QWORD *)a2 = v16;
        v15 = (void *)v16;
      }
      *(_QWORD *)(a2 + 8) = v10 + 1;
      memmove(v15, v9, v10);
      *(_BYTE *)(*(_QWORD *)a2 + v10) = 0;
      if ( v5 != 8 )
        goto LABEL_18;
      goto LABEL_53;
    }
    goto LABEL_24;
  }
  if ( create_numbered_type_name(&ptr, v17) == -1 )
    goto LABEL_27;
  v6 = haystack;
  if ( (_QWORD)v21 )
    v6 = (const char *)ptr;
LABEL_30:
  if ( !a2 )
    goto LABEL_26;
  if ( v6 == v18 )
    goto LABEL_24;
  if ( v6 )
  {
    v9 = v6;
    goto LABEL_16;
  }
  *(_QWORD *)(a2 + 8) = 0;
  if ( v5 != 8 )
    goto LABEL_27;
  sub_4B8BE0(qword_2CA1698, a2);
  v5 = 0;
LABEL_20:
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
LABEL_35:
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree(v18);
  }
  return v5;
}

