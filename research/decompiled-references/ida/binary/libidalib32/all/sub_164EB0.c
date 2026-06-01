__int64 __fastcall sub_164EB0(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // eax
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int32 v9; // eax
  __m128i v10; // xmm0
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  _QWORD *v15; // rax
  int v17; // [rsp+Ch] [rbp-9Ch] BYREF
  __int64 (**v18)(); // [rsp+10h] [rbp-98h]
  int v19; // [rsp+18h] [rbp-90h]
  int v20; // [rsp+1Ch] [rbp-8Ch]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int128 v22; // [rsp+28h] [rbp-80h]
  __m128i v23; // [rsp+40h] [rbp-68h] BYREF
  __m128i v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+60h] [rbp-48h]
  unsigned __int64 v26; // [rsp+78h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v3 = a3[2].m128i_i64[1];
  if ( !v3 )
    return 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 128LL))(v3);
  v6 = sub_F4210(v5);
  if ( v6 == -1 )
  {
    return 0;
  }
  else
  {
    v22 = 0;
    v21 = 0;
    if ( (int)generate_disassembly() <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v20 = v6;
      v19 = v17;
      v18 = off_22FD98;
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
    v12 = v21;
    if ( v21 )
    {
      v13 = v22;
      if ( (_QWORD)v22 )
      {
        v14 = 0;
        do
        {
          v15 = (_QWORD *)(v12 + 24 * v14);
          if ( *v15 )
          {
            v15[1] = 0;
            qfree();
            v12 = v21;
          }
          ++v14;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  return v11;
}

