__int64 __fastcall sub_84FA80(__m128i *a1, unsigned int *a2, __int64 *a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // r13
  unsigned __int32 v13; // r15d
  _QWORD *v14; // rbp
  void *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r12
  bool v22; // zf
  __int64 v23; // rdi
  std::ios_base *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rdi
  __int64 *v27; // rbx
  unsigned __int64 v28; // r12
  __int64 v29; // rsi
  void (__fastcall ***v30)(_QWORD); // rbx
  __int64 v32; // r12
  __m128i *v33; // rbp
  __int64 v36; // [rsp+10h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  __int64 v39; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v40; // [rsp+48h] [rbp-50h]
  __m128i v41[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a3[9];
  if ( !v5 || !*(_DWORD *)(v5 - 4) )
  {
    LODWORD(v33) = 0;
    return (unsigned int)v33;
  }
  v6 = a1[1].m128i_i64[0];
  v8 = a1[12].m128i_i64[0];
  ptr = nullptr;
  v37 = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 192LL))(v8);
  v10 = a4;
  v11 = (__int64)a1;
  sub_84D6B0((__int64)a1, a4, a3);
  v12 = nullptr;
  v13 = 0;
  if ( !a1[15].m128i_i32[0] )
  {
    LODWORD(v33) = 0;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 200LL))(v37, 1);
    goto LABEL_38;
  }
  do
  {
    while ( 1 )
    {
      ++a1[1].m128i_i32[3];
      if ( (unsigned int)sub_180B130(v11) > 1 )
      {
        if ( (unsigned __int8)sub_186A530(a5) )
        {
          sub_186A4C0(a5);
          v23 = sub_180B150(v11, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v23, "(mbqi.check)\n");
        }
        else
        {
          sub_180B150(v11, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      v24 = (std::ios_base *)a1[12].m128i_i64[0];
      LODWORD(v33) = sub_E60CB0(v24, 0, 0);
      if ( (unsigned int)sub_180B130(v24) <= 1 )
        goto LABEL_5;
      if ( !(unsigned __int8)sub_186A530(a5) )
      {
        v32 = sub_180B150(v24, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F35B0(v32, (unsigned int)v33);
        std::__ostream_insert<char,std::char_traits<char>>();
LABEL_5:
        if ( (_DWORD)v33 != 1 )
          goto LABEL_29;
        goto LABEL_6;
      }
      sub_186A4C0(a5);
      v25 = sub_180B150(v24, 0);
      std::__ostream_insert<char,std::char_traits<char>>();
      v26 = sub_17F35B0(v25, (unsigned int)v33);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v26, ")\n");
      if ( (_DWORD)v33 != 1 )
        goto LABEL_29;
LABEL_6:
      v14 = (_QWORD *)a1[12].m128i_i64[0];
      (*(void (__fastcall **)(_QWORD *, void **))(*v14 + 32LL))(v14, &ptr);
      v15 = ptr;
      if ( ptr )
      {
        v16 = v14[7];
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 32LL))(v16, &ptr);
          v15 = ptr;
        }
      }
      v33 = v41;
      v39 = v6;
      v40 = v12;
      sub_84E6E0(v41, a1, (__int64)v15, a3, &v39, 1);
      v6 = v39;
      v12 = v40;
      if ( !v41[0].m128i_i64[0] )
      {
LABEL_29:
        LOBYTE(v33) = v13 != 0;
        goto LABEL_30;
      }
      sub_84AB10(a1->m128i_i64, a2, v41, a5);
      v17 = a1[1].m128i_i64[0];
      if ( v12 )
        v18 = *((unsigned int *)v12 - 1);
      else
        v18 = 0;
      v19 = sub_15EC1C0(v6, v18);
      v20 = v19;
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v21 = sub_15E1A70(v17);
      v11 = a1[12].m128i_i64[0];
      v36 = a1[1].m128i_i64[0];
      if ( v21 )
      {
        ++*(_DWORD *)(v21 + 8);
        sub_E5EBF0(v11, v21);
        v22 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v22 )
        {
          v11 = v36;
          sub_15D7BC0(v36, v21);
        }
      }
      else
      {
        sub_E5EBF0(v11, 0);
      }
      if ( v20 )
      {
        v22 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v22 )
        {
          v11 = v6;
          sub_15D7BC0(v6, v20);
        }
      }
      v10 = v41[0].m128i_i64[0];
      if ( v41[0].m128i_i64[0] )
      {
        v11 = v41[0].m128i_i64[1];
        v22 = (*(_DWORD *)(v41[0].m128i_i64[0] + 8))-- == 1;
        if ( v22 )
          break;
      }
      if ( ++v13 >= a1[15].m128i_i32[0] )
        goto LABEL_46;
    }
    sub_15D7BC0(v11, v10);
    ++v13;
  }
  while ( v13 < a1[15].m128i_i32[0] );
LABEL_46:
  LODWORD(v33) = 1;
LABEL_30:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 200LL))(v37, 1);
  if ( v12 )
  {
    v27 = v12;
    v28 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
    if ( (unsigned __int64)v12 < v28 )
    {
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v22 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v27 >= v28 )
            goto LABEL_37;
        }
        ++v27;
        sub_15D7BC0(v6, v29);
      }
      while ( (unsigned __int64)v27 < v28 );
    }
LABEL_37:
    sub_186B220(v12 - 1);
  }
LABEL_38:
  v30 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v22 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v22 )
    {
      (**v30)(v30);
      sub_186B220(v30);
    }
  }
  return (unsigned int)v33;
}

