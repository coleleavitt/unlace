unsigned __int64 __fastcall sub_7D76E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // r12
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v3 = qvector_reserve(a1, 0, 12, 16);
  v4 = a1[1];
  *a1 = v3;
  if ( v4 <= 0xB )
  {
    *(_OWORD *)(v3 + 16 * v4) = 0;
    if ( v4 != 11 )
    {
      v5 = 16 * v4 + 16;
      do
      {
        *(_OWORD *)(*a1 + v5) = 0;
        v5 += 16;
      }
      while ( v5 != 192 );
    }
  }
  a1[1] = 12;
  v6 = *(_QWORD *)(a2 + 8) + *(_QWORD *)a2;
  v16 = 0;
  v13 = v6;
  v14 = 0;
  v15 = 0;
  v12 = _mm_loadh_ps((const double *)a2).m128_u64[1];
  while ( 1 )
  {
    v16 = unpack_dd(&v12);
    if ( !v16 )
      break;
    v8 = v13;
    v9 = unpack_dd(&v12);
    v10 = v12;
    if ( __CFADD__(v9, v12) )
      break;
    if ( v8 < v9 + v12 )
      break;
    v12 += v9;
    v14 = v10;
    if ( !v10 )
      break;
    v15 = v9;
    if ( v16 <= 11 )
    {
      v11 = (unsigned __int64 *)(*a1 + 16LL * v16);
      *v11 = v10;
      v11[1] = v12;
    }
  }
  return v17 - __readfsqword(0x28u);
}

