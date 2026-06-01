__int64 __fastcall sub_2279560(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  const __m128i *v5; // rsi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 **v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rdx
  char *v12; // rsi
  char *v13; // rsi
  __int64 *v14; // rax
  __int64 ***v15; // rax
  __int64 ***v17; // rdi
  __int64 v18; // rax
  __int64 *v19[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v20; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 672);
  v5 = *(const __m128i **)v4;
  v6 = *(_DWORD *)(*(_QWORD *)v4 + 32LL) == 4;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v6 )
  {
    sub_2279100(v19, *(__int64 **)(v4 + 8), *(_DWORD *)(v4 + 16) == 0);
    v7 = v19[0];
    sub_2279100(v19, (__int64 *)(*(_QWORD *)(v4 + 8) + 8LL * *(unsigned int *)(v4 + 16)), 1);
    v8 = v19[0];
    if ( v19[0] != v7 )
    {
      v9 = (__int64 **)*v7;
      do
      {
        while ( 1 )
        {
          v10 = *v9;
          v11 = (__int64 *)(v9 + 4);
          v12 = *(char **)(a1 + 8);
          v19[0] = v11;
          v19[1] = v10;
          if ( v12 == *(char **)(a1 + 16) )
          {
            sub_1075D80(a1, v12, v19);
          }
          else
          {
            *(_QWORD *)v12 = v11;
            v13 = v12 + 16;
            *((_QWORD *)v13 - 1) = v10;
            *(_QWORD *)(a1 + 8) = v13;
          }
          v9 = (__int64 **)v7[1];
          v14 = v7 + 1;
          if ( !v9 || v9 == (__int64 **)-8LL )
            break;
          ++v7;
          if ( v8 == v14 )
            return a1;
        }
        v15 = (__int64 ***)(v7 + 2);
        do
        {
          do
          {
            v9 = *v15;
            v7 = (__int64 *)v15++;
          }
          while ( v9 == (__int64 **)-8LL );
        }
        while ( !v9 );
      }
      while ( v8 != v7 );
    }
    return a1;
  }
  else
  {
    v17 = *(__int64 ****)(a2 + 80);
    v20 = 259;
    v19[0] = (__int64 *)"not a mapping";
    sub_226EEF0(v17, v5, (__int64)v19, 0);
    v18 = std::_V2::generic_category((std::_V2 *)v17);
    *(_DWORD *)(a2 + 96) = 22;
    *(_QWORD *)(a2 + 104) = v18;
    return a1;
  }
}
