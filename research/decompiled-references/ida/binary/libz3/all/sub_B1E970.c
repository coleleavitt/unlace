__int64 *__fastcall sub_B1E970(__int64 *a1, __int64 *a2, int a3, __m128i a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+8h] [rbp-20h]

  v5 = a2[1];
  a1[1] = 0;
  v12 = nullptr;
  *a1 = v5;
  v11 = v5;
  sub_B1E750(a2, &v11, (__int64)a1, a3, 0x7D0u, a4, a5);
  v6 = v12;
  if ( v12 )
  {
    v7 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
    if ( (unsigned __int64)v12 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v6 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v11, v8);
      ++v6;
    }
    while ( (unsigned __int64)v6 < v7 );
LABEL_8:
    v6 = v12;
    if ( v12 )
LABEL_9:
      sub_186B220(v6 - 1);
  }
  return a1;
}

