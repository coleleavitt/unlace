__int64 __fastcall sub_9172F0(__int64 a1, __int64 a2)
{
  __m128i *exception; // rbx
  char *v3; // rax
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  unsigned int v22; // r14d
  unsigned int v23; // ecx
  unsigned int *v24; // rax
  __int64 v25; // rcx
  _QWORD v26[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+10h] [rbp-38h] BYREF

  result = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)result )
    return result;
  v5 = a2 + 8 * result;
  v7 = a2;
  do
  {
    v8 = *(_QWORD *)(v7 + 32);
    v9 = *(unsigned int *)(a1 + 32);
    v10 = *(__int64 **)(a1 + 24);
    v11 = *(_DWORD *)(v8 + 12);
    v12 = v9 - 1;
    v9 *= 8;
    v13 = (char *)v10 + v9;
    v14 = 8LL * (v11 & v12);
    v15 = &v10[(unsigned __int64)v14 / 8];
    if ( v14 != v9 )
    {
      for ( result = (__int64)&v10[(unsigned __int64)v14 / 8]; v13 != (char *)result; result += 8 )
      {
        v16 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v16 + 12) == v11 && v8 == v16 )
            goto LABEL_14;
        }
        else if ( !v16 )
        {
          goto LABEL_10;
        }
      }
    }
    if ( v10 == v15 )
    {
LABEL_10:
      v17 = *(_QWORD **)(a1 + 48);
      if ( !v17 )
        goto LABEL_24;
      goto LABEL_11;
    }
    while ( 1 )
    {
      result = *v10;
      if ( (unsigned __int64)*v10 <= 1 )
        break;
      if ( *(_DWORD *)(result + 12) == v11 && v8 == result )
        goto LABEL_14;
LABEL_20:
      if ( v15 == ++v10 )
        goto LABEL_10;
    }
    if ( result )
      goto LABEL_20;
    v17 = *(_QWORD **)(a1 + 48);
    if ( !v17 )
    {
LABEL_24:
      v21 = (_QWORD *)sub_186B270(0x18u);
      *v21 = 2;
      result = 1;
      v17 = v21 + 1;
      *(_QWORD *)(a1 + 48) = v17;
      v20 = v17;
      goto LABEL_13;
    }
LABEL_11:
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v22 = (3 * v18 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v18 + 8 >= v23 || v18 >= v22 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v3 = (char *)operator new(0x2Bu);
        strcpy(v3, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v3;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        v26[0] = &v27;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        v26[1] = 0;
        v27 = 0;
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v17 - 1, v23);
      v25 = v24[1];
      v17 = v24 + 2;
      *v24 = v22;
      *(_QWORD *)(a1 + 48) = v24 + 2;
      LODWORD(v24) = v25;
      v20 = &v17[v25];
      result = (unsigned int)((_DWORD)v24 + 1);
    }
    else
    {
      v19 = v18;
      result = v18 + 1;
      v20 = &v17[v19];
    }
LABEL_13:
    *v20 = v8;
    *((_DWORD *)v17 - 1) = result;
LABEL_14:
    v7 += 8;
  }
  while ( v7 != v5 );
  return result;
}

