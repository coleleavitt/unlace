unsigned __int64 __fastcall sub_2096730(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  double v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  if ( *((_BYTE *)a1 + 20) )
    v3 = (_QWORD *)(v2 + 8LL * *((unsigned int *)a1 + 3));
  else
    v3 = (_QWORD *)(v2 + 8LL * *((unsigned int *)a1 + 2));
  if ( a2 != v3 && *a2 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v4 = a2 + 1;
    do
    {
      v5 = v4;
      if ( v4 == v3 )
        break;
      ++v4;
    }
    while ( *v5 >= 0xFFFFFFFFFFFFFFFELL );
  }
  *(_QWORD *)&v7[0] = v3;
  return _mm_loadh_ps(v7).m128_u64[0];
}
