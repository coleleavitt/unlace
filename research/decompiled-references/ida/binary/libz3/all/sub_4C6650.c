__int64 __fastcall sub_4C6650(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rbx
  unsigned int *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi

  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)v7 + 208LL);
  if ( v8 == sub_4C9880 || (v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v8)(v7, a2, a3)) == 0 )
  {
    v9 = sub_186B270(0x50u);
    *(_QWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 16) = 0;
    *(_QWORD *)v9 = &off_1C4F2A8;
    *(_QWORD *)(v9 + 24) = 0;
    if ( a3 )
    {
      v10 = a4;
      do
        sub_4C54F0((_QWORD *)(v9 + 24), v10++);
      while ( &a4[a3] != v10 );
    }
    v11 = *(_QWORD *)(a2 + 16);
    if ( v11 )
    {
      *(_QWORD *)(v9 + 32) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v11 - 4)), _mm_cvtsi32_si128(a3)).m128i_u64[0];
      v12 = *(_DWORD *)(v11 - 4);
    }
    else
    {
      *(_DWORD *)(v9 + 32) = 0;
      v12 = 0;
      *(_DWORD *)(v9 + 36) = a3;
    }
    *(_DWORD *)(v9 + 40) = v12 - a3;
    *(_OWORD *)(v9 + 64) = 0;
    *(_QWORD *)(v9 + 48) = a5;
    sub_4D7960(a2 + 16, a3, a4, v9 + 8);
    v13 = *(_QWORD *)(v9 + 8);
    v14 = *(_DWORD *)(v9 + 16);
    if ( v13 )
    {
      *(_DWORD *)(v9 + 56) = *(_DWORD *)(v13 - 4) - v14;
      v15 = *(unsigned int *)(v13 - 4);
    }
    else
    {
      v15 = 0;
      *(_DWORD *)(v9 + 56) = -v14;
    }
    sub_4CED80(v9 + 64, v15);
    v16 = *(_QWORD *)(v9 + 8);
    if ( v16 )
      v17 = *(unsigned int *)(v16 - 4);
    else
      v17 = 0;
    sub_4CED80(v9 + 72, v17);
  }
  return v9;
}

