void __fastcall sub_1AFD000(__m128 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, char a5)
{
  _QWORD *i; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  double v8[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v8[0] = a3;
  *a1 = _mm_loadh_ps(v8);
  if ( !a5 && a2 != a3 && (*a2 == -8192 || *a2 == -4096) )
  {
    for ( i = a2 + 2; ; i += 2 )
    {
      v6 = i;
      if ( a3 == i )
        break;
      v7 = *i;
      if ( v7 != -4096 && v7 != -8192 )
      {
        a1->m128_u64[0] = (unsigned __int64)v6;
        return;
      }
    }
    a1->m128_u64[0] = (unsigned __int64)a3;
  }
}
