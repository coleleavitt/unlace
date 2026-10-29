__int64 __fastcall sub_17C570(__int64 *a1, unsigned int *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  const char *v7; // r14
  size_t v9; // rax
  size_t v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __m128i v18; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v4 = 0;
  if ( *(_BYTE *)a3 == 64 && *(_BYTE *)(a3 + 1) == 48 && *(_BYTE *)(a3 + 2) == 58 )
  {
    v7 = (const char *)(a3 + 3);
    v9 = strspn((const char *)(a3 + 3), "0123456789");
    v10 = v9;
    if ( v9 )
    {
      if ( *(_BYTE *)(a3 + v9 + 3) == 91 && *(_BYTE *)(a3 + v9 + 4) == 93 && *(_BYTE *)(a3 + v9 + 5) == 10 )
      {
        v11 = strtol(v7, nullptr, 10);
        if ( a2 )
          *a2 = v11;
        *a4 = a3 + v10 + 6;
        v17 = 0;
        v18 = 0;
        if ( a1 && TProgram::application )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)(TProgram::application + 136LL)
                                                                             + 144LL))(
                 TProgram::application + 136LL,
                 &v17,
                 v11) )
          {
            v13 = *a1;
            v14 = a1[2];
            v15 = _mm_loadu_si128(&v18);
            *a1 = v17;
            v12 = v13;
            v17 = v13;
            v18.m128i_i64[1] = v14;
            *(__m128i *)(a1 + 1) = v15;
          }
          else
          {
            v12 = v17;
          }
          if ( v12 )
          {
            v18.m128i_i64[0] = 0;
            qfree();
          }
        }
        return 1;
      }
    }
  }
  return v4;
}

