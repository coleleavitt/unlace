__int64 __fastcall sub_59B256(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+38h] [rbp-178h]
  _BYTE v14[256]; // [rsp+40h] [rbp-170h] BYREF
  __int64 v15; // [rsp+140h] [rbp-70h]
  unsigned __int64 v16; // [rsp+148h] [rbp-68h]
  unsigned __int64 v17; // [rsp+150h] [rbp-60h]
  unsigned __int64 v18; // [rsp+158h] [rbp-58h]
  unsigned __int64 v19; // [rsp+160h] [rbp-50h]
  __int64 v20; // [rsp+168h] [rbp-48h]
  __int64 v21; // [rsp+170h] [rbp-40h]
  int v22; // [rsp+178h] [rbp-38h]
  int v23; // [rsp+17Ch] [rbp-34h]
  int v24; // [rsp+180h] [rbp-30h]
  int v25; // [rsp+184h] [rbp-2Ch]
  unsigned __int64 *k; // [rsp+188h] [rbp-28h]
  unsigned __int64 j; // [rsp+190h] [rbp-20h]
  unsigned __int64 i; // [rsp+198h] [rbp-18h]
  __int64 v29; // [rsp+1A0h] [rbp-10h]
  __int64 v30; // [rsp+1A8h] [rbp-8h]

  v15 = 0xDEFACED0DEFACEDLL;
  v25 = 11;
  v24 = 256;
  v23 = 255;
  v22 = 21;
  v30 = 0;
  v29 = 0;
  v21 = sub_59B77E(a1, a4);
  v20 = 4096;
  sub_5ADF07(v14, 0, 256);
  for ( i = 0; ; ++i )
  {
    v5 = sub_5986F2(a1 + 160);
    if ( i >= v5 )
      break;
    if ( *(_BYTE *)(*(_QWORD *)sub_59C126(a1 + 160, i) + 40LL) == 1 )
    {
      v17 = **(_QWORD **)sub_59C126(a1 + 160, i);
      v6 = sub_59C126(a1 + 160, i);
      v16 = *(_QWORD *)(*(_QWORD *)v6 + 8LL) + v17;
      v17 >>= 21;
      v16 >>= 21;
      for ( j = v17; j <= v16; ++j )
        v14[(unsigned __int8)(j >> 3)] |= 1 << (j & 7);
    }
  }
  v19 = (a5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v19 )
    sub_5ADF07(a2, 0, v19);
  for ( k = (unsigned __int64 *)(a2 + v19); (unsigned __int64)k <= a3 - 8 + a2; ++k )
  {
    v13 = *k;
    if ( ((__int64)*k > 4096 || (__int64)v13 < -4096)
      && (!v21 || !sub_599EC0(v21, v13))
      && (!v30 || !sub_599EC0(v30, v13)) )
    {
      v18 = v13 >> 21;
      if ( (((char)v14[BYTE3(v13)] >> ((v13 >> 21) & 7)) & 1) != 0
        && (v29 = sub_59B77E(a1, v13)) != 0
        && *(_BYTE *)(v29 + 40) )
      {
        v30 = v29;
      }
      else
      {
        *k = v15;
      }
    }
  }
  result = a2 + a3;
  if ( (unsigned __int64)k < a2 + a3 )
    return sub_5ADF07(k, 0, a2 + a3 - (_QWORD)k);
  return result;
}
