__int64 __fastcall sub_BF5650(__int64 **a1, unsigned __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned __int64 v6; // rsi
  __int64 *v7; // rbp
  _DWORD *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  int v15; // eax
  __m128 v16; // [rsp+0h] [rbp-28h] BYREF

  v6 = *a2;
  v7 = *a1;
  v16 = _mm_loadh_ps((const double *)*a1 + 2);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  if ( !*(_WORD *)(v6 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( v8 )
    {
      if ( *v8 )
      {
        if ( *v8 == 5 )
        {
          sub_14B9B80(v7[1], &v16);
          v6 = v16.m128_u64[0];
        }
      }
      else
      {
        v15 = v8[1];
        if ( v15 == 8 )
        {
          if ( *(_DWORD *)(v6 + 24) == 1 )
          {
            v10 = sub_BF5550((__int64)v7, *(_QWORD *)(v6 + 32), 0, a4, a5, a6) ^ 1;
            goto LABEL_10;
          }
        }
        else if ( v15 == 2 )
        {
          v9 = sub_966380(*v7, *(_DWORD **)(v6 + 32), *(_DWORD **)(v6 + 40));
          goto LABEL_9;
        }
      }
    }
  }
  sub_966570(*v7, (unsigned int *)v6);
  v9 = sub_B645B0(*(_QWORD *)(*v7 + 16), (unsigned int *)v16.m128_u64[0]);
LABEL_9:
  v10 = v9;
LABEL_10:
  v11 = v16.m128_u64[0];
  if ( v16.m128_u64[0] )
  {
    v12 = v16.m128_u64[1];
    if ( (*(_DWORD *)(v16.m128_u64[0] + 8))-- == 1 )
      sub_15D7BC0(v12, v11);
  }
  result = *(_QWORD *)(*(_QWORD *)(*v7 + 16) + 8872LL) + 16LL * (v10 >> 1);
  *(_BYTE *)(result + 11) = *(_BYTE *)(result + 11) & 0xF3 | (8 * !(v10 & 1) + 4);
  return result;
}

