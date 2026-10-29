unsigned __int64 __fastcall sub_FDCB0(__int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  const char *v6; // rsi
  __int64 v7; // r14
  int v8; // r12d
  char v9; // r13
  bool v10; // bp
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  const char *v18; // r12
  __m128i *v19; // rbp
  __m128i v20; // xmm1
  const char *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v27; // rax
  __m128i v29; // [rsp+10h] [rbp-E8h] BYREF
  __int64 (**v30)(); // [rsp+20h] [rbp-D8h] BYREF
  int v31; // [rsp+28h] [rbp-D0h]
  __int64 v32; // [rsp+30h] [rbp-C8h]
  const char *v33; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v34; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-98h]
  __int128 v36; // [rsp+68h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-80h]
  char v38; // [rsp+88h] [rbp-70h]
  int v39; // [rsp+8Ch] [rbp-6Ch]
  __int64 v40; // [rsp+90h] [rbp-68h]
  __int128 v41; // [rsp+98h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+B8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v32 = a2;
  v31 = 0;
  v35 = 0;
  v40 = 0;
  v36 = 0;
  v30 = off_230E18;
  v41 = 0;
  linearray_t_ctr();
  v6 = (const char *)&v30;
  linearray_t_set_place();
LABEL_2:
  if ( (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v37 + 128LL))(v37, v6) < a3 )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      v8 = v39;
      v9 = v38;
      v10 = *(_DWORD *)(v7 + 8) == v42;
      v11 = linearray_t_down();
      if ( !v11 )
        break;
      v12 = a1[1];
      v13 = *a1;
      if ( a1[2] < (unsigned __int64)(v12 + 1) )
      {
        v29.m128i_i64[0] = v11;
        v27 = qvector_reserve();
        *a1 = v27;
        v13 = v27;
        v11 = v29.m128i_i64[0];
        v12 = a1[1];
      }
      v14 = 48 * v12 + v13;
      *(_QWORD *)v14 = v7;
      *(_QWORD *)(v14 + 8) = 0;
      *(_BYTE *)(v14 + 32) = v9;
      *(_DWORD *)(v14 + 36) = v8;
      *(_BYTE *)(v14 + 40) = v10;
      *(_OWORD *)(v14 + 16) = 0;
      v6 = s1;
      ++a1[1];
      if ( *(_QWORD *)(v11 + 8) )
        v6 = *(const char **)v11;
      sub_FDA20(&v33, v6, a4);
      v15 = a1[1];
      v16 = *a1;
      v17 = _mm_loadu_si128(&v34);
      v34 = 0;
      v18 = v33;
      v33 = nullptr;
      v19 = (__m128i *)(v16 + 48 * v15 - 48);
      if ( !v19->m128i_i64[1] )
      {
        v19->m128i_i64[1] = (__int64)v18;
        v19[1] = v17;
        goto LABEL_2;
      }
      v19[1].m128i_i64[0] = 0;
      v29 = v17;
      qfree();
      v20 = _mm_load_si128(&v29);
      v21 = v33;
      v19->m128i_i64[1] = (__int64)v18;
      v19[1] = v20;
      if ( !v21 )
        goto LABEL_2;
      v34.m128i_i64[0] = 0;
      qfree();
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 128LL))(v37) >= a3 )
        goto LABEL_11;
    }
    qfree();
  }
LABEL_11:
  linearray_t_dtr();
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  v22 = v35;
  if ( v35 )
  {
    v23 = v36;
    if ( (_QWORD)v36 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 24 * v24);
        if ( *v25 )
        {
          v25[1] = 0;
          qfree();
          v22 = v35;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return v43 - __readfsqword(0x28u);
}

