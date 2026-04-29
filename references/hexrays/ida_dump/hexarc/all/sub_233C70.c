unsigned __int64 __fastcall sub_233C70(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // r14
  char v8; // al
  char v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __m128i v14; // xmm0
  unsigned __int64 *v15; // rax
  __int64 *v16; // rax
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // rdx
  unsigned __int64 *v22; // rcx
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // r15
  _DWORD *v26; // rdi
  int v27; // eax
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm0
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rbp
  __int64 v35; // rax
  __m128i v36; // xmm0
  char i; // dl
  bool v38; // cc
  _BYTE *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // r8
  _QWORD *exception; // rdi
  unsigned __int64 v43; // [rsp+8h] [rbp-70h]
  __int64 *v44; // [rsp+10h] [rbp-68h]
  __int64 v45; // [rsp+28h] [rbp-50h] BYREF
  signed __int64 v46; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v47 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 432) + 104LL * a3;
  v8 = sub_1BCC60(v7, &v45, &v46, *(_DWORD *)(v7 + 88));
  if ( !v8 )
  {
    if ( !under_debugger )
      sub_37B760(52279);
    goto LABEL_84;
  }
  v9 = v8;
  v10 = sub_1869C0(*(_QWORD *)(a1 + 8));
  if ( v45 < v10 && (*(_BYTE *)(a1 + 136) & 1) == 0 )
  {
    if ( (*(_BYTE *)(v7 + 25) & 4) != 0 )
      return v47 - __readfsqword(0x28u);
    if ( !under_debugger )
      sub_37B760(52321);
LABEL_84:
    BUG();
  }
  if ( a2[1] )
  {
    v18 = (unsigned __int64 *)*a2;
    if ( *a2 )
    {
      v19 = *v18;
      v20 = *v18 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v20 )
      {
        v21 = nullptr;
        if ( v45 >= 0 )
          goto LABEL_25;
        v21 = (unsigned __int64 *)v18[1];
        if ( !v21 )
          goto LABEL_25;
        v21 = nullptr;
LABEL_51:
        v19 = *v21;
        goto LABEL_20;
      }
      v21 = (unsigned __int64 *)*a2;
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_20;
      v32 = *(_QWORD *)(v20 + 8);
      v33 = *(_QWORD *)(v20 + 16);
      if ( v45 > *(_QWORD *)(v20 + 24) )
        goto LABEL_41;
LABEL_38:
      v21 = (unsigned __int64 *)v20;
      while ( (*(_BYTE *)v32 & 2) == 0 )
      {
        v20 = v32;
        v32 = *(_QWORD *)(v32 + 8);
        v33 = *(_QWORD *)(v20 + 16);
        if ( v45 <= *(_QWORD *)(v20 + 24) )
          goto LABEL_38;
LABEL_41:
        v32 = v33;
      }
      if ( v18 != v21 )
      {
        if ( v45 >= (__int64)v21[3] )
          goto LABEL_25;
        if ( (unsigned __int64 *)v18[1] == v21 )
          goto LABEL_24;
        goto LABEL_51;
      }
      v19 = *v18;
    }
    else
    {
      v19 = unk_0;
      v21 = nullptr;
    }
LABEL_20:
    if ( (v19 & 2) != 0 )
    {
      v21 = (unsigned __int64 *)v21[2];
    }
    else
    {
      v22 = (unsigned __int64 *)v21[1];
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
        v23 = (unsigned __int64 *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
        v24 = *v23;
        if ( (*v23 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v23[1] == v21 )
          {
            v21 = v23;
            v41 = v24 & 0xFFFFFFFFFFFFFFFCLL;
            v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v24 & 2) != 0 )
            {
              v21 = (unsigned __int64 *)v41;
              goto LABEL_24;
            }
            v23 = (unsigned __int64 *)v41;
          }
        }
        v21 = v23;
      }
      else
      {
        do
        {
          v21 = v22;
          v22 = (unsigned __int64 *)v22[2];
        }
        while ( (*(_BYTE *)v22 & 2) == 0 );
      }
    }
LABEL_24:
    if ( v21 == v18 )
      goto LABEL_8;
LABEL_25:
    v44 = (__int64 *)v21;
    v25 = (int)v46 - (int)v45;
    v26 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * *((int *)v21 + 8));
    v43 = v21[3];
    v27 = sub_1BCD40(v26, v26[22]);
    if ( !v25 )
      goto LABEL_8;
    if ( v27 == v43 )
      goto LABEL_8;
    v28 = v25 + v45 - 1;
    if ( v28 < v43 )
      goto LABEL_8;
    v29 = v27 - 1LL;
    if ( v29 < v45 )
      goto LABEL_8;
    if ( *(_DWORD *)v7 != 2 && *v26 != 2 && (*(_BYTE *)(a1 + 136) & 1) == 0 )
    {
      if ( !under_debugger )
        sub_37B760(52301);
      goto LABEL_84;
    }
    if ( v45 >= v43 )
    {
      if ( v29 >= v28 )
        return v47 - __readfsqword(0x28u);
      if ( v43 != v45 )
        goto LABEL_8;
    }
    else if ( v28 < v29 )
    {
      goto LABEL_8;
    }
    sub_2284C0((unsigned __int64 **)a2, v44);
  }
LABEL_8:
  v11 = *a2;
  if ( !*a2 )
  {
    v30 = qalloc(40);
    v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
    if ( !v30 )
      goto LABEL_78;
    *(_QWORD *)(v30 + 32) = 0;
    *(_OWORD *)(v30 + 16) = 0;
    *(__m128i *)(v30 + 8) = v31;
    *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *a2 = v30;
    *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
    *(__m128i *)(*a2 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a2, (__m128i)(unsigned __int64)*a2);
    *(_QWORD *)*a2 &= ~1uLL;
    *(_QWORD *)*a2 |= 2uLL;
    v11 = *a2;
    goto LABEL_10;
  }
  if ( !a2[1] )
  {
LABEL_10:
    v12 = qalloc(40);
    v13 = v12;
    if ( v12 )
    {
      *(_QWORD *)(v12 + 32) = 0;
      *(_OWORD *)v12 = 0;
      *(_OWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = v45;
      *(_QWORD *)v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      v14 = _mm_loadl_epi64((const __m128i *)a2);
      *(_QWORD *)v12 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v14, v14);
      if ( v11 != *a2 )
      {
        *(_QWORD *)(v11 + 8) = v12;
        v15 = (unsigned __int64 *)*a2;
        if ( v11 != *(_QWORD *)(*a2 + 8) )
          goto LABEL_13;
        goto LABEL_47;
      }
      goto LABEL_61;
    }
    goto LABEL_78;
  }
  v34 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v34 & 2) != 0 )
    goto LABEL_43;
  i = v9;
  v16 = (__int64 *)(v34 + 24);
  v38 = v45 <= *(_QWORD *)(v34 + 24);
  if ( v45 >= *(_QWORD *)(v34 + 24) )
    goto LABEL_59;
LABEL_56:
  v39 = *(_BYTE **)(v34 + 8);
  for ( i = v9; ; i = 0 )
  {
    if ( (*v39 & 2) != 0 )
    {
      v11 = v34;
      v9 = i;
LABEL_43:
      v35 = qalloc(40);
      v13 = v35;
      if ( v35 )
      {
        *(_QWORD *)(v35 + 32) = 0;
        *(_OWORD *)v35 = 0;
        *(_OWORD *)(v35 + 16) = 0;
        *(_QWORD *)(v35 + 24) = v45;
        *(_QWORD *)v35 = v11 & 0xFFFFFFFFFFFFFFFCLL;
        v36 = _mm_loadl_epi64((const __m128i *)a2);
        *(_QWORD *)v35 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v35 + 8) = _mm_unpacklo_epi64(v36, v36);
        if ( *a2 != v11 )
        {
          if ( !v9 )
          {
            *(_QWORD *)(v11 + 16) = v35;
            if ( *(_QWORD *)(*a2 + 16) == v11 )
              *(_QWORD *)(*a2 + 16) = v35;
            goto LABEL_13;
          }
          *(_QWORD *)(v11 + 8) = v35;
          v15 = (unsigned __int64 *)*a2;
          if ( *(_QWORD *)(*a2 + 8) != v11 )
          {
LABEL_13:
            sub_D1720(a2, (__int64 *)v13);
LABEL_14:
            ++a2[1];
            v16 = (__int64 *)(v13 + 24);
            goto LABEL_15;
          }
LABEL_47:
          v15[1] = v13;
          goto LABEL_13;
        }
LABEL_61:
        *(_QWORD *)v11 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
        *(_QWORD *)(*a2 + 8) = v13;
        *(_QWORD *)(*a2 + 16) = v13;
        v40 = *(_QWORD *)v13 & 2LL;
        *(_QWORD *)v13 &= ~1uLL;
        *(_QWORD *)v13 = v40 | *a2 & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_14;
      }
LABEL_78:
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v34 = (unsigned __int64)v39;
    v16 = (__int64 *)(v39 + 24);
    v38 = v45 <= *v16;
    if ( v45 < *v16 )
      goto LABEL_56;
LABEL_59:
    if ( v38 )
      break;
    v39 = *(_BYTE **)(v34 + 16);
  }
  if ( !v34 )
  {
    v11 = 0;
    v9 = i;
    goto LABEL_43;
  }
LABEL_15:
  *((_DWORD *)v16 + 2) = a3;
  return v47 - __readfsqword(0x28u);
}
