_QWORD *__fastcall sub_40EB30(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rdi
  const char *v8; // rsi
  __int64 v9; // rdx
  char *v10; // r14
  signed __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rax
  __int64 v16; // [rsp-10h] [rbp-C0h]
  __int64 tinfo_property; // [rsp+18h] [rbp-98h] BYREF
  char *s; // [rsp+20h] [rbp-90h] BYREF
  __int128 v20; // [rsp+28h] [rbp-88h]
  __m128i ptr[2]; // [rsp+40h] [rbp-70h] BYREF
  __m128i v22; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 96);
  v23 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v5, 24);
  if ( (_BYTE)tinfo_property )
  {
    s = nullptr;
    v8 = nullptr;
    v20 = 0;
    print_tinfo(&s, 0, 0, 0, 32, &tinfo_property, 0, 0);
    v9 = v16;
    if ( (unsigned __int64)v20 > 1 )
    {
      v10 = s;
      v11 = v20 - 1;
      if ( !s || v11 < 0 )
      {
        v11 = 0;
        if ( s )
          v11 = strlen(s);
      }
      QT::QString::fromUtf8(ptr, v11, v10);
      sub_40C430(&v22, ptr, 32, a3, a4);
      v8 = " ";
      v12 = (__int64 *)QT::QString::append(&v22, " ", 1);
      v13 = *v12;
      *v12 = 0;
      *a1 = v13;
      v14 = v12[1];
      v12[1] = 0;
      a1[1] = v14;
      v9 = v12[2];
      v12[2] = 0;
      v15 = (volatile signed __int32 *)v22.m128i_i64[0];
      a1[2] = v9;
      if ( v15 && !_InterlockedSub(v15, 1u) )
        free((void *)v22.m128i_i64[0]);
      if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
        free((void *)ptr[0].m128i_i64[0]);
    }
    else
    {
      a1[2] = 0;
      *(_OWORD *)a1 = 0;
    }
    if ( s )
    {
      *(_QWORD *)&v20 = 0;
      qfree(s, v8, v9);
    }
  }
  else
  {
    a1[2] = 0;
    *(_OWORD *)a1 = 0;
  }
  clear_tinfo_t(&tinfo_property);
  return a1;
}
