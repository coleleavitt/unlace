void __fastcall sub_F7FA10(__m128 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, char a5)
{
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  double v8[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v8[0] = a3;
  *a1 = _mm_loadh_ps(v8);
  if ( !a5 && a2 != a3 )
  {
    v5 = a2 + 1;
    v6 = *(v5 - 1);
    if ( v6 == -4096 )
      goto LABEL_9;
LABEL_4:
    if ( v6 == -8192 && *v5 == -8192 )
    {
      do
      {
        v7 = v5 + 2;
        v5 += 3;
        a1->m128_u64[0] = (unsigned __int64)v7;
        if ( a3 == v7 )
          break;
        v6 = *(v5 - 1);
        if ( v6 != -4096 )
          goto LABEL_4;
LABEL_9:
        ;
      }
      while ( *v5 == -4096 );
    }
  }
}
