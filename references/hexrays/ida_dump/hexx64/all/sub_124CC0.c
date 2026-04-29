__int64 __fastcall sub_124CC0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 *a5, unsigned int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // al
  __int64 v20; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __m128i v23; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !a3 || (unsigned __int8)sub_64880(a2) && !a2[3] )
    return 0;
  v10 = *(_QWORD *)(a3 + 16);
  if ( !v10 || v10 == a4 )
    return 0;
  while ( 1 )
  {
    sub_124680((__int64)&v20, a1, v10, a6);
    if ( (unsigned __int8)sub_64780(&v20, a2) )
      break;
    v17 = sub_318470(&v22, a2 + 2);
    v11 = v22;
    if ( v17 )
      goto LABEL_7;
    if ( v22 )
    {
      v23.m128i_i64[0] = 0;
      qfree(v22);
    }
    qfree(v20);
    v10 = *(_QWORD *)(v10 + 16);
    if ( !v10 || a4 == v10 )
      return 0;
  }
  v11 = v22;
LABEL_7:
  if ( a5 )
  {
    v12 = *a5;
    v13 = _mm_loadu_si128(&v23);
    *a5 = v20;
    v20 = v12;
    v14 = a5[1];
    a5[1] = v21;
    v15 = a5[4];
    v21 = v14;
    v16 = a5[2];
    v23.m128i_i64[1] = v15;
    v22 = v16;
    a5[2] = v11;
    v11 = v16;
    *(__m128i *)(a5 + 3) = v13;
  }
  if ( v11 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v11);
  }
  qfree(v20);
  return v10;
}
