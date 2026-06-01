__int64 __fastcall sub_149EC70(__int64 **a1)
{
  __int64 result; // rax
  const __m128i *v2; // rbp
  int v3; // r14d
  __int64 v4; // r13
  __int64 *v5; // rax
  int v6; // r15d
  __int64 *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-80h]
  __int64 v9; // [rsp+0h] [rbp-80h]
  __int64 v10; // [rsp+8h] [rbp-78h]
  __int64 v11; // [rsp+10h] [rbp-70h]
  __int64 v12; // [rsp+18h] [rbp-68h] BYREF
  _BYTE v13[8]; // [rsp+20h] [rbp-60h] BYREF
  void *ptr; // [rsp+28h] [rbp-58h]
  int v15; // [rsp+34h] [rbp-4Ch]
  __m128i v16; // [rsp+38h] [rbp-48h]

  if ( *((_BYTE *)*a1 + 8) )
    return 0;
  v2 = (const __m128i *)a1[3];
  v10 = **a1;
  v8 = *(_QWORD *)(a1[1][12] + 656);
  v3 = *((_DWORD *)a1[6] + 12);
  v4 = *a1[5];
  v5 = a1[4];
  v6 = *((_DWORD *)v5 + 2);
  v11 = *v5;
  v12 = v2->m128i_i64[0];
  sub_E90750((__int64)v13, &v2->m128i_i64[1]);
  v7 = a1[2];
  v16 = _mm_loadu_si128(v2 + 2);
  result = sub_1740220(v8, *v7, (unsigned int)&v12, v10, v11, v6, v4, v3, 0);
  if ( v15 )
  {
    v9 = result;
    free(ptr);
    result = v9;
  }
  *((_BYTE *)a1[1] + 368) = 1;
  return result;
}
