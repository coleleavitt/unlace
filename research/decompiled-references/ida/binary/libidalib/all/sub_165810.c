__int64 __fastcall sub_165810(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int32 v9; // eax
  __m128i v10; // xmm0
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  _QWORD *v15; // rax
  int v17; // [rsp+Ch] [rbp-ACh] BYREF
  __int64 v18; // [rsp+10h] [rbp-A8h]
  __int128 v19; // [rsp+18h] [rbp-A0h]
  __int64 (**v20)(); // [rsp+30h] [rbp-88h]
  int v21; // [rsp+38h] [rbp-80h]
  __int64 v22; // [rsp+40h] [rbp-78h]
  __m128i v23; // [rsp+50h] [rbp-68h] BYREF
  __m128i v24; // [rsp+60h] [rbp-58h] BYREF
  __int64 v25; // [rsp+70h] [rbp-48h]
  unsigned __int64 v26; // [rsp+88h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v3 = a3[2].m128i_i64[1];
  if ( !v3 )
    return 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 128LL))(v3);
  v6 = sub_F5000(v5);
  if ( v6 == -1 )
  {
    return 0;
  }
  else
  {
    v18 = 0;
    v19 = 0;
    if ( (int)generate_disassembly() <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v22 = v6;
      v21 = v17;
      v20 = off_230E18;
      v7 = a3[2].m128i_i64[0];
      v23 = _mm_loadu_si128(a3);
      v25 = v7;
      v24 = _mm_loadu_si128(a3 + 1);
      v8 = idaplace_t__clone();
      if ( a2[2].m128i_i64[1] )
      {
        qfree();
        a2[2].m128i_i64[1] = 0;
      }
      v9 = v25;
      *a2 = _mm_load_si128(&v23);
      v10 = _mm_load_si128(&v24);
      a2[2].m128i_i32[0] = v9;
      a2[1] = v10;
      if ( v8 )
      {
        a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 16LL))(v8, &v17);
        qfree();
      }
      v11 = 1;
    }
    v12 = v18;
    if ( v18 )
    {
      v13 = v19;
      if ( (_QWORD)v19 )
      {
        v14 = 0;
        do
        {
          v15 = (_QWORD *)(v12 + 24 * v14);
          if ( *v15 )
          {
            v15[1] = 0;
            qfree();
            v12 = v18;
          }
          ++v14;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v19 = 0;
      qfree();
    }
  }
  return v11;
}

