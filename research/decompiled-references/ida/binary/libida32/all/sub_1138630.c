__m128i *__fastcall sub_1138630(__m128i *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __m128i *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  char *v15; // rbx
  size_t v16; // rax
  char *v17; // rsi
  _BYTE *v19; // rax
  size_t v20; // rdx
  int v21; // [rsp+Ch] [rbp-5Ch] BYREF
  void *v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-50h]
  __m128i v24[4]; // [rsp+20h] [rbp-48h] BYREF

  v23 = 0;
  v24[0].m128i_i8[0] = 0;
  v22 = v24;
  v21 = 2323;
  v4 = sub_2193060(a2, &v21, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 != v7 )
  {
    while ( !*v6 || !(unsigned __int8)sub_2195AD0(*v6, 2323) )
    {
      if ( v7 == ++v6 )
        goto LABEL_5;
    }
    if ( v7 != v6 )
    {
      do
      {
        v13 = *v6;
        v14 = *(_QWORD *)(*v6 + 16LL);
        if ( !v14 )
          v14 = *v6;
        ++v6;
        *(_BYTE *)(v14 + 44) |= 1u;
        if ( v6 == v7 )
          break;
        while ( !*v6 || !(unsigned __int8)sub_2195AD0(*v6, 2323) )
        {
          if ( v7 == ++v6 )
            goto LABEL_18;
        }
      }
      while ( v6 != v7 );
LABEL_18:
      v15 = **(char ***)(v13 + 48);
      v16 = strlen(v15);
      sub_978080(&v22, 0, v23, v15, v16);
    }
  }
LABEL_5:
  if ( !sub_990D60((__int64)&v22, "native") )
  {
    v19 = (_BYTE *)sub_227F670(&v22, "native", v8, v9, v10);
    sub_978080(&v22, 0, v23, v19, v20);
  }
  v11 = v23;
  v12 = a1 + 1;
  if ( v23 )
  {
    a1->m128i_i64[0] = (__int64)v12;
    if ( v22 == v24 )
    {
      a1[1] = _mm_load_si128(v24);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v22;
      a1[1].m128i_i64[0] = v24[0].m128i_i64[0];
    }
    a1->m128i_i64[1] = v11;
  }
  else
  {
    v17 = "generic-rv64";
    if ( *(_DWORD *)(a3 + 32) != 28 )
      v17 = "generic-rv32";
    a1->m128i_i64[0] = (__int64)v12;
    sub_1135060(a1, v17, (__int64)(v17 + 12));
    if ( v22 != v24 )
      operator delete(v22);
  }
  return a1;
}

