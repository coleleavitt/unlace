__int64 __fastcall sub_27DCD0(
        const __m128i *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int16 a4,
        int a5,
        unsigned int a6,
        double a7)
{
  __int64 v8; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  const __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  const char *v16; // rsi
  unsigned int v17; // r12d
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r15
  int flags; // eax
  __int64 i; // rbx
  const char **v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  int v33; // [rsp+14h] [rbp-C4h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-C0h] BYREF
  __int64 *v35; // [rsp+20h] [rbp-B8h] BYREF
  int v36; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+30h] [rbp-A8h]
  __int64 v38; // [rsp+40h] [rbp-98h] BYREF
  __int128 v39; // [rsp+48h] [rbp-90h]
  __m128i v40; // [rsp+60h] [rbp-78h] BYREF
  __m128i v41; // [rsp+70h] [rbp-68h]
  __int64 v42; // [rsp+80h] [rbp-58h]
  __int64 **v43; // [rsp+88h] [rbp-50h]
  unsigned __int64 v44; // [rsp+98h] [rbp-40h]

  v8 = a2;
  v44 = __readfsqword(0x28u);
  v37 = a3;
  v36 = a4;
  v35 = &idaplace_t___vtable;
  if ( sub_27D380(a3) == -1 && a1[46].m128i_i8[5] )
  {
    a2 = a1[45].m128i_i64[1];
    idaplace_t__adjust(&v35, a2);
  }
  v13 = (const __m128i *)sub_1EA6A0((__int64)a1[24].m128i_i64, a2, v11, v12, a7);
  v43 = &v35;
  v40 = _mm_loadu_si128(v13);
  v14 = _mm_loadu_si128(v13 + 1);
  v15 = v13[2].m128i_i64[0];
  v41 = v14;
  v42 = v15;
  v43 = (__int64 **)idaplace_t__clone(&v35);
  if ( a5 >= 0 )
    v41.m128i_i16[7] = a5;
  v16 = (const char *)v8;
  v17 = sub_1EB7C0(a1, v8, (__int64)&v40, a6, v14);
  if ( v17 == 1 )
  {
    v16 = *(const char **)(v8 + 40);
    v19 = sub_27DC40((__int64)a1, (__int64)v16);
    v20 = a1[46].m128i_i8[5] == 0;
    v33 = -1;
    v21 = v19;
    if ( !v20 && a3 != v19 && a4 )
    {
      flags = get_flags_ex(v19, 4);
      if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
        clr_abits(v21, &stru_80000);
      v16 = (const char *)&v33;
      v39 = 0;
      v38 = 0;
      generate_disassembly(&v38, &v33, v21, 0x7FFFFFFF, 2);
      v34 = -1;
      if ( (_QWORD)v39 )
      {
        for ( i = 0; ; ++i )
        {
          v16 = &s1;
          v34 = -1;
          v24 = (const char **)(v38 + 24 * i);
          if ( v24[1] )
            v16 = *v24;
          addr_from_tag(&v34, v16);
          v25 = v34;
          if ( a3 < v34 )
          {
            v26 = i - 1;
            goto LABEL_22;
          }
          if ( i + 1 >= (unsigned __int64)v39 )
            break;
        }
        v26 = i;
      }
      else
      {
        v25 = -1;
        v26 = -1;
      }
LABEL_22:
      if ( v21 != v25 )
        v33 = v26;
      v27 = v38;
      if ( v38 )
      {
        v28 = v39;
        if ( (_QWORD)v39 )
        {
          v29 = 0;
          do
          {
            v30 = (__int64 *)(v27 + 24 * v29);
            v31 = *v30;
            if ( *v30 )
            {
              v30[1] = 0;
              qfree(v31, v16);
              v27 = v38;
            }
            ++v29;
          }
          while ( v28 != v29 );
        }
        *(_QWORD *)&v39 = 0;
        qfree(v27, v16);
      }
      if ( v33 != -1 )
        *(_DWORD *)(*(_QWORD *)(v8 + 40) + 8LL) = v33;
    }
  }
  if ( v43 )
    qfree(v43, v16);
  return v17;
}
