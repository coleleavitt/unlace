__int64 __fastcall sub_BF5790(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _DWORD *v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  int v14; // eax
  __m128 v15; // [rsp+0h] [rbp-28h] BYREF

  v15 = _mm_loadh_ps((const double *)(a1 + 16));
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v7 )
    {
      if ( *v7 )
      {
        if ( *v7 == 5 )
        {
          sub_14B9B80(*(_QWORD *)(a1 + 8), &v15);
          a2 = v15.m128_u64[0];
        }
      }
      else
      {
        v14 = v7[1];
        if ( v14 == 8 )
        {
          if ( *(_DWORD *)(a2 + 24) == 1 )
          {
            v9 = sub_BF5550(a1, *(_QWORD *)(a2 + 32), 0, a4, a5, a6) ^ 1;
            goto LABEL_10;
          }
        }
        else if ( v14 == 2 )
        {
          v8 = sub_966380(*(_QWORD *)a1, *(_DWORD **)(a2 + 32), *(_DWORD **)(a2 + 40));
          goto LABEL_9;
        }
      }
    }
  }
  sub_966570(*(_QWORD *)a1, (unsigned int *)a2);
  v8 = sub_B645B0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), (unsigned int *)v15.m128_u64[0]);
LABEL_9:
  v9 = v8;
LABEL_10:
  v10 = v15.m128_u64[0];
  if ( v15.m128_u64[0] )
  {
    v11 = v15.m128_u64[1];
    if ( (*(_DWORD *)(v15.m128_u64[0] + 8))-- == 1 )
      sub_15D7BC0(v11, v10);
  }
  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 8872LL) + 16LL * (v9 >> 1);
  *(_BYTE *)(result + 11) = *(_BYTE *)(result + 11) & 0xF3 | (8 * !(v9 & 1) + 4);
  return result;
}

