/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DDA0
// Address: 0x000000000008DDA0

//----- (000000000008DDA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_8DDA0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  char **v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  char *v9; // rax
  char *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  char *v13; // rax
  unsigned __int64 result; // rax
  char **v15; // [rsp+0h] [rbp-38h]

  *(_QWORD *)a1 = &off_14E3B0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 4144) = -1;
  *(_QWORD *)(a1 + 4152) = a1 + 4152;
  *(_QWORD *)(a1 + 4160) = a1 + 4152;
  *(__m128i *)(a1 + 4168) = _mm_slli_si128((__m128i)0xFFFFFFFFFFFFFFFFLL, 8);
  v15 = (char **)(a1 + 4184);
  v6 = (char **)(a1 + 4208);
  *(_OWORD *)(a1 + 4216) = 0;
  *(_OWORD *)(a1 + 4200) = 0;
  *(_OWORD *)(a1 + 4184) = 0;
  if ( a4[1] )
  {
    v7 = 0;
    do
    {
      if ( *(_QWORD *)(*a4 + 80 * v7 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && !*(_QWORD *)(*a4 + 80 * v7 + 32) )
        {
          v8 = *(_QWORD *)(a1 + 4192);
          if ( *(_QWORD *)(a1 + 4200) >= (unsigned __int64)(v8 + 1) )
          {
            v10 = &(*v15)[4 * v8];
          }
          else
          {
            v9 = (char *)qvector_reserve((__int64)v15, *v15, v8 + 1, 4u);
            *v15 = v9;
            v10 = &v9[4 * *(_QWORD *)(a1 + 4192)];
          }
          v11 = (_QWORD *)(a1 + 4192);
        }
        else
        {
          v12 = *(_QWORD *)(a1 + 4216);
          if ( *(_QWORD *)(a1 + 4224) >= (unsigned __int64)(v12 + 1) )
          {
            v13 = *v6;
          }
          else
          {
            v13 = (char *)qvector_reserve((__int64)v6, *v6, v12 + 1, 4u);
            *v6 = v13;
            v12 = *(_QWORD *)(a1 + 4216);
          }
          v10 = &v13[4 * v12];
          v11 = (_QWORD *)(a1 + 4216);
        }
        *(_DWORD *)v10 = v7;
        ++*v11;
      }
      v7 = (int)v7 + 1;
      a4 = *(_QWORD **)(a1 + 24);
    }
    while ( a4[1] > v7 );
  }
  memset((void *)(a1 + 48), 0, 0x1000u);
  result = (unsigned __int64)qtime64() >> 32;
  *(_DWORD *)(a1 + 4232) = result;
  return result;
}
// 14E3B0: using guessed type __int64 (__fastcall *off_14E3B0)();
