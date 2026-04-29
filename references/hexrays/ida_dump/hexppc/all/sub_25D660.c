__int64 __fastcall sub_25D660(__int64 *a1, __int64 a2, unsigned __int8 a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned int v6; // r14d
  char *v9; // rdx
  __int64 v10; // rcx
  unsigned int enum_member_expr; // ebx
  char *v12; // rax
  size_t v13; // rbp
  __int64 v14; // r13
  size_t v15; // r14
  __int64 v16; // rsi
  size_t v17; // rdx
  unsigned int v19; // eax
  char *v20; // r13
  unsigned int v21; // ebp
  char *v22; // rax
  char *v23; // rax
  __m128 v24; // xmm0
  __int64 v25; // rax
  char *v27; // [rsp+8h] [rbp-80h]
  char *s; // [rsp+10h] [rbp-78h] BYREF
  __m128 v29; // [rsp+18h] [rbp-70h]
  char *v30; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v6 = a3;
  v32 = __readfsqword(0x28u);
  v29 = 0;
  s = nullptr;
  enum_member_expr = get_enum_member_expr(&s, a2, a3);
  if ( !(_BYTE)enum_member_expr
    || v29.m128_u64[0] && (v27 = s, (v12 = strchr(s, 124)) != nullptr) && (v9 = v27, v12 - v27 != -1) )
  {
    if ( a4 != sub_326890(a4, a5, 1) )
    {
      v31 = 0;
      v30 = nullptr;
      v19 = get_enum_member_expr(&v30, a2, v6);
      v20 = v30;
      v21 = v19;
      if ( (_BYTE)v19 )
      {
        if ( !(_BYTE)enum_member_expr || !(_QWORD)v31 || (v22 = strchr(v30, 124)) == nullptr || v22 - v20 == -1 )
        {
          v23 = s;
          v9 = (char *)v29.m128_u64[1];
          enum_member_expr = v21;
          v24 = _mm_loadh_ps((const double *)&v31 + 1);
          s = v20;
          v30 = v23;
          v20 = v23;
          *((_QWORD *)&v31 + 1) = v29.m128_u64[1];
          v29 = v24;
        }
      }
      if ( v20 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v20);
      }
    }
  }
  if ( a1 && (_BYTE)enum_member_expr )
  {
    if ( a6 )
    {
      sub_3266D0(a1, 32, v9, v10);
      if ( !v29.m128_u64[0] )
        goto LABEL_29;
      v13 = v29.m128_u64[0] - 1;
      if ( v29.m128_u64[0] == 1 )
        goto LABEL_29;
    }
    else
    {
      if ( !v29.m128_u64[0] )
        goto LABEL_16;
      v13 = v29.m128_u64[0] - 1;
      if ( v29.m128_u64[0] == 1 )
        goto LABEL_16;
    }
    v14 = a1[1];
    v15 = v13;
    if ( v14 )
      v15 = --v14 + v13;
    v16 = *a1;
    v17 = v15 + 1;
    if ( a1[2] < v15 + 1 )
    {
      v25 = qvector_reserve(a1, v16, v17, 1);
      *a1 = v25;
      v17 = v15 + 1;
      v16 = v25;
    }
    a1[1] = v17;
    *(_BYTE *)(v16 + v15) = 0;
    memcpy((void *)(v14 + *a1), s, v13);
    if ( !a6 )
      goto LABEL_16;
LABEL_29:
    sub_3267B0(a1, 32);
  }
LABEL_16:
  if ( s )
  {
    v29.m128_u64[0] = 0;
    qfree(s);
  }
  return enum_member_expr;
}
