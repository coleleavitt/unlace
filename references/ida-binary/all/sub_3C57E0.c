__int64 __fastcall sub_3C57E0(__int64 a1, const char **a2)
{
  char *v2; // r12
  const char *v3; // r14
  __int64 v4; // rbp
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r8
  unsigned __int64 v8; // rdx
  __m128i v9; // xmm0
  void *v11; // rax
  unsigned __int64 v12; // [rsp+0h] [rbp-68h]
  size_t v13; // [rsp+8h] [rbp-60h]
  char *v14; // [rsp+10h] [rbp-58h] BYREF
  __m128i v15; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( a2 == (const char **)get_idati(a1) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v11 = (void *)qvector_reserve(a1, 0, 12, 1);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = 12;
    qmemcpy(v11, "Local Types", 11);
    *(_BYTE *)(*(_QWORD *)a1 + 11LL) = 0;
    return a1;
  }
  v15 = 0;
  v14 = nullptr;
  v14 = (char *)qvector_reserve(&v14, 0, 15, 1);
  v15.m128i_i64[0] = 15;
  strcpy(v14, "Type library: ");
  v2 = v14;
  v3 = *a2;
  if ( *a2 )
  {
    v4 = v15.m128i_i64[0];
    v5 = strlen(*a2);
    v6 = v5;
    v7 = v5;
    if ( v4 )
    {
      --v4;
      v7 = v5 + v4;
      v8 = v5 + v4 + 1;
      if ( v15.m128i_i64[1] >= v8 )
        goto LABEL_5;
    }
    else
    {
      v8 = v5 + 1;
      if ( v15.m128i_i64[1] >= v5 + 1 )
      {
LABEL_5:
        v15.m128i_i64[0] = v8;
        v2[v7] = 0;
        memmove(&v14[v4], v3, v6);
        v2 = v14;
        goto LABEL_6;
      }
    }
    v13 = v7;
    v12 = v8;
    v14 = (char *)qvector_reserve(&v14, v2, v8, 1);
    v7 = v13;
    v2 = v14;
    v8 = v12;
    goto LABEL_5;
  }
LABEL_6:
  v9 = _mm_loadu_si128(&v15);
  *(_QWORD *)a1 = v2;
  *(__m128i *)(a1 + 8) = v9;
  return a1;
}
