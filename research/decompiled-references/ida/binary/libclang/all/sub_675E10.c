__int64 __fastcall sub_675E10(__int64 *a1, __int64 a2, __int64 a3, double a4, double a5, __m128i a6, __m128 a7)
{
  unsigned int v8; // r14d
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // r15
  __m128i v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r15
  __m128 v23; // [rsp+0h] [rbp-98h]
  __m128i v24; // [rsp+10h] [rbp-88h] BYREF
  __int64 v25; // [rsp+20h] [rbp-78h]
  __m128i v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-48h]

  v23 = 0;
  if ( (*(_BYTE *)(a2 + 2) & 0x10) != 0 )
  {
    a6 = _mm_loadu_si128((const __m128i *)(a2 + 48));
    v23 = (__m128)a6;
  }
  if ( (unsigned __int8)sub_674510(a1, v23.m128_i64[0], v23.m128_i64[1], a4, (__m128i)0LL, *(double *)a6.m128i_i64, a7) )
  {
    v8 = sub_675910(
           a1,
           *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL),
           *(__int64 **)(a2 + 32),
           a4,
           (__m128i)0LL,
           *(double *)a6.m128i_i64,
           a7);
    if ( (_BYTE)v8 )
    {
      v10 = *(_BYTE *)(a2 + 2);
      if ( (v10 & 0x40) != 0
        && (v19 = 16LL * ((v10 & 0x10) != 0) + 8LL * ((v10 & 0x20) != 0), *(_DWORD *)(a2 + v19 + 48))
        && (v20 = *(unsigned int *)(a2 + v19 + 60), v21 = a2 + v19 + 64, (_DWORD)v20) )
      {
        v22 = v21 + 32 * v20;
        while ( (unsigned __int8)sub_674590(a1, v21, a4, (__m128i)0LL, *(double *)a6.m128i_i64, a7) )
        {
          v21 += 32;
          if ( v21 == v22 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        sub_AC4830(&v26);
        v14 = _mm_load_si128(&v26);
        v15 = v28;
        v16 = v29;
        v25 = v27;
        v17 = v14;
        v24 = v14;
LABEL_9:
        if ( v15 == v17.m128i_i64[0] )
        {
LABEL_15:
          if ( v16 == v17.m128i_i64[1] )
            return v8;
        }
        v18 = v17.m128i_i8[8] & 3;
        if ( (_DWORD)v18 )
          v17.m128i_i64[0] = sub_ACE280(&v24, a2, v18, v11, v12, v13);
        while ( 1 )
        {
          a2 = *(_QWORD *)v17.m128i_i64[0];
          if ( !(unsigned __int8)sub_672860(
                                   a1,
                                   *(_QWORD *)v17.m128i_i64[0],
                                   a3,
                                   *(double *)v14.m128i_i64,
                                   (__m128i)0LL,
                                   *(double *)a6.m128i_i64,
                                   a7) )
            break;
          v17.m128i_i64[1] = v24.m128i_i64[1];
          if ( (v24.m128i_i8[8] & 3) != 0 )
          {
            if ( v24.m128i_i64[1] <= 3uLL )
            {
              a2 = 1;
              sub_ACE0F0(&v24, 1);
            }
            else
            {
              sub_ACE150(&v24);
            }
            v17 = v24;
            goto LABEL_9;
          }
          v17.m128i_i64[0] = v24.m128i_i64[0] + 8;
          v24.m128i_i64[0] = v17.m128i_i64[0];
          if ( v15 == v17.m128i_i64[0] )
            goto LABEL_15;
        }
      }
    }
  }
  return 0;
}

