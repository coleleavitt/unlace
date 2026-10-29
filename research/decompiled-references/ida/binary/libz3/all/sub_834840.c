__int64 __fastcall sub_834840(_QWORD *a1)
{
  __int64 v2; // rax
  unsigned int i; // r12d
  const __m128i *v4; // rax
  unsigned int v5; // ebp
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10[4]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+20h] [rbp-38h]

  if ( *((_DWORD *)a1 + 26) )
  {
    do
      (*(void (__fastcall **)(_QWORD *))(*a1 + 512LL))(a1);
    while ( (*((_DWORD *)a1 + 26))-- != 1 );
  }
  v2 = a1[30];
  if ( v2 )
  {
    for ( i = 0; i < *(_DWORD *)(v2 - 4); ++i )
    {
      v4 = (const __m128i *)(v2 + 40LL * i);
      *(__m128i *)v10 = _mm_loadu_si128(v4);
      v11 = _mm_loadu_si128(v4 + 1);
      v12 = v4[2].m128i_i64[0];
      v5 = v12;
      if ( (_BYTE)v12 )
      {
        (*(void (__fastcall **)(_QWORD *, int *))(*a1 + 400LL))(a1, v10);
      }
      else if ( (unsigned __int8)sub_834370((__int64)a1, v10[1], v10[2]) )
      {
        sub_88E1D0((_DWORD)a1, v10[1], v10[2], v7, v8, v9);
        return v5;
      }
      v2 = a1[30];
      if ( !v2 )
        return 1;
    }
  }
  return 1;
}

