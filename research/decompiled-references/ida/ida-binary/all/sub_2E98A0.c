__int64 __fastcall sub_2E98A0(__int64 a1)
{
  const char *v1; // rsi
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r14
  __int128 v13; // xmm1
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // [rsp+0h] [rbp-68h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  __int128 v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v1 = "History/JumpAnywhere";
  v33 = __readfsqword(0x28u);
  v32 = 0;
  v31 = 0;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  reg_read_strlist(&v31, "History/JumpAnywhere");
  v3 = v31;
  v29 = v31 + 24 * v32;
  if ( v29 != v31 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(a1 + 16);
        if ( v7 >= v6 + 1 )
        {
          v4 = *(_QWORD *)a1;
        }
        else
        {
          v8 = nullptr;
          v4 = qvector_reserve(a1, 0, v6 + 1, 48);
          v9 = *(_QWORD *)(a1 + 16);
          v10 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 16) = v7;
          v30 = v9;
          v11 = *(_QWORD *)(a1 + 8) - 1LL;
          if ( v11 >= 0 )
          {
            v12 = v4;
            v13 = 0;
            do
            {
              v14 = *(_QWORD *)v10;
              v15 = _mm_loadu_si128((const __m128i *)(v10 + 8));
              *(_QWORD *)v10 = 0;
              *(_OWORD *)(v10 + 8) = v13;
              *(_QWORD *)v12 = v14;
              *(__m128i *)(v12 + 8) = v15;
              v8 = *(const char **)(v10 + 24);
              v16 = _mm_loadu_si128((const __m128i *)(v10 + 32));
              *(_QWORD *)(v10 + 24) = 0;
              *(_QWORD *)(v12 + 24) = v8;
              *(__m128i *)(v12 + 32) = v16;
              v17 = *(_QWORD *)v10;
              *(_QWORD *)(v10 + 40) = 0;
              if ( v17 )
              {
                *(_QWORD *)(v10 + 8) = 0;
                qfree(v17, v8);
                v13 = 0;
              }
              v10 += 48;
              v12 += 48;
            }
            while ( v11-- != 0 );
            v10 = *(_QWORD *)a1;
          }
          qfree(v10, v8);
          *(_QWORD *)a1 = v4;
          *(_QWORD *)(a1 + 16) = v30;
          v6 = *(_QWORD *)(a1 + 8);
        }
        v1 = &s1;
        v5 = v4 + 48 * v6;
        *(_QWORD *)v5 = 0;
        *(_QWORD *)(v5 + 24) = 0;
        *(_OWORD *)(v5 + 8) = 0;
        *(_OWORD *)(v5 + 32) = 0;
        ++*(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v3 + 8) )
          v1 = *(const char **)v3;
        if ( !(unsigned __int8)sub_2E9440((__int64 *)v5, (__int64)v1) )
        {
          v19 = *(_QWORD *)(a1 + 8);
          if ( v19 )
          {
            v20 = v19 - 1;
            *(_QWORD *)(a1 + 8) = v20;
            v21 = (__int64 *)(*(_QWORD *)a1 + 48 * v20);
            v22 = v21[3];
            if ( v22 )
            {
              v21[4] = 0;
              qfree(v22, v1);
            }
            v23 = *v21;
            if ( *v21 )
              break;
          }
        }
        v3 += 24;
        if ( v29 == v3 )
          goto LABEL_21;
      }
      v21[1] = 0;
      v3 += 24;
      qfree(v23, v1);
    }
    while ( v29 != v3 );
LABEL_21:
    v3 = v31;
  }
  if ( v3 )
  {
    v24 = v32;
    if ( (_QWORD)v32 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v3 + 24 * v25);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27, v1);
          v3 = v31;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v3, v1);
  }
  return a1;
}
