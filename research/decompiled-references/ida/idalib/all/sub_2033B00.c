__int64 __fastcall sub_2033B00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v9; // rbx
  __int64 i; // r15
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v22; // [rsp+18h] [rbp-60h]
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h]

  v9 = (a3 - 1) / 2;
  v22 = a3 & 1;
  if ( a2 >= v9 )
  {
    v12 = a1 + 16 * a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v11 = a2;
    goto LABEL_16;
  }
  for ( i = a2; ; i = v11 )
  {
    v11 = 2 * (i + 1);
    v12 = a1 + 32 * (i + 1);
    if ( (unsigned __int8)sub_2033A10((__int64)&a7, *(_QWORD *)v12, *(_QWORD *)(v12 - 16)) )
    {
      --v11;
      v12 = a1 + 16 * v11;
    }
    v13 = a1 + 16 * i;
    *(_QWORD *)v13 = *(_QWORD *)v12;
    *(_DWORD *)(v13 + 8) = *(_DWORD *)(v12 + 8);
    if ( v11 >= v9 )
      break;
  }
  if ( !v22 )
  {
LABEL_16:
    if ( (a3 - 2) / 2 == v11 )
    {
      v17 = v11 + 1;
      v11 = 2 * (v11 + 1) - 1;
      v18 = a1 + 32 * v17 - 16;
      v19 = *(_QWORD *)v18;
      LODWORD(v18) = *(_DWORD *)(v18 + 8);
      *(_QWORD *)v12 = v19;
      *(_DWORD *)(v12 + 8) = v18;
      v12 = a1 + 16 * v11;
    }
  }
  v24 = a8;
  v23 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      v15 = a1 + 16 * v14;
      v12 = a1 + 16 * v11;
      if ( !(unsigned __int8)sub_2033A10((__int64)&v23, *(_QWORD *)v15, a4) )
        break;
      v11 = v14;
      *(_QWORD *)v12 = *(_QWORD *)v15;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v15 + 8);
      if ( a2 >= v14 )
      {
        v12 = a1 + 16 * v14;
        break;
      }
      v14 = (v14 - 1) / 2;
    }
  }
LABEL_13:
  *(_QWORD *)v12 = a4;
  *(_DWORD *)(v12 + 8) = a5;
  return a5;
}
