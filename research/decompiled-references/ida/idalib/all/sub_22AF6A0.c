__int64 __fastcall sub_22AF6A0(__int64 a1, _BYTE *a2, size_t a3)
{
  __int64 v3; // r13
  int v5; // ecx
  __int64 i; // rax
  char v8; // dl
  size_t v9; // rbx
  char v11; // dl
  size_t v12; // rax
  __m128i *v13; // rax
  _BYTE *v14; // rdi
  void *v15[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1 + 16;
  if ( !a3 )
  {
LABEL_11:
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v5 = a3 - 1;
  i = (int)a3 - 1;
  if ( (int)a3 - 1 <= 0 )
    goto LABEL_8;
  v8 = a2[v5];
  if ( (unsigned __int8)(v8 - 48) <= 9u )
  {
    for ( i = v5 - 1LL; --v5; --i )
    {
      v8 = a2[i];
      if ( (unsigned __int8)(v8 - 48) > 9u )
        goto LABEL_23;
    }
    goto LABEL_8;
  }
LABEL_23:
  if ( v8 != 112 || (unsigned __int8)(a2[v5 - 1] - 48) > 9u )
  {
LABEL_8:
    v9 = i + 1;
    goto LABEL_9;
  }
  i = v5 - 2;
  if ( v5 != 1 )
  {
    while ( (_DWORD)i )
    {
      if ( (unsigned __int8)(a2[i] - 48) > 9u )
        goto LABEL_8;
      --i;
    }
  }
  v9 = 1;
LABEL_9:
  if ( a3 != v9 && !(unsigned __int8)sub_22AE5C0(a2, a3) )
    goto LABEL_11;
  if ( a3 <= v9 )
    v9 = a3;
  if ( !(unsigned __int8)sub_22A9170(a2, v9) )
    goto LABEL_11;
  sub_22A8D00(a2, v9);
  if ( v11 )
  {
    v15[0] = v16;
    if ( a2 )
    {
      sub_22A8AD0(v15, a2, (__int64)&a2[v9]);
    }
    else
    {
      v15[1] = nullptr;
      v16[0] = 0;
    }
    v12 = j__strlen("experimental-");
    v13 = (__m128i *)sub_99BDC0(v15, 0, 0, "experimental-", v12);
    *(_QWORD *)a1 = v3;
    if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
    {
      *(__m128i *)(a1 + 16) = _mm_loadu_si128(v13 + 1);
    }
    else
    {
      *(_QWORD *)a1 = v13->m128i_i64[0];
      *(_QWORD *)(a1 + 16) = v13[1].m128i_i64[0];
    }
    *(_QWORD *)(a1 + 8) = v13->m128i_i64[1];
    v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
    v14 = v15[0];
    v13->m128i_i64[1] = 0;
    v13[1].m128i_i8[0] = 0;
    if ( v14 != v16 )
      operator delete(v14);
  }
  else
  {
    *(_QWORD *)a1 = v3;
    if ( a2 )
    {
      sub_22A8AD0((_QWORD *)a1, a2, (__int64)&a2[v9]);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
    }
  }
  return a1;
}
