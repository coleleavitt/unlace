unsigned __int64 __fastcall sub_7DDA60(__int64 a1, int a2, unsigned __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-58h]
  unsigned __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v15 = 0;
  v6 = *(_QWORD *)(v4 + 8) + *(_QWORD *)v4;
  v13 = 0;
  v12 = v6;
  v14 = 0;
  v11 = _mm_loadh_ps((const double *)v4).m128_u64[1];
  do
  {
    v15 = unpack_dd(&v11);
    if ( !v15 )
      return 0;
    v7 = v12;
    v8 = (unsigned int)unpack_dd(&v11);
    result = v11;
    v10 = v8 + v11;
    if ( __CFADD__(v8, v11) )
      return 0;
    if ( v7 < v10 )
      return 0;
    v11 += v8;
    v13 = result;
    if ( !result )
      return 0;
    v14 = v8;
  }
  while ( a2 != v15 );
  if ( a3 )
    *a3 = v10;
  return result;
}
