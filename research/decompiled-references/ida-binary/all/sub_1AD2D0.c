unsigned __int64 __fastcall sub_1AD2D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rdi
  unsigned int tid_ordinal; // eax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 *v22; // rdi
  unsigned int ordinal_limit; // r13d
  unsigned int i; // ebx
  __int64 tinfo_tid; // rax
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // r8
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+18h] [rbp-80h] BYREF
  __int64 v34; // [rsp+20h] [rbp-78h] BYREF
  __int128 v35; // [rsp+28h] [rbp-70h]
  __int64 idati; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  __int16 v38; // [rsp+50h] [rbp-48h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v13 = *a1;
  v35 = 0;
  v34 = 0;
  if ( v13 == -1 )
  {
    v22 = nullptr;
    ordinal_limit = get_ordinal_limit(0, a2, a3, a4);
    if ( ordinal_limit > 1 )
    {
      for ( i = 1; i != ordinal_limit; ++i )
      {
        v33 = 0;
        v38 = 257;
        v37 = i;
        a2 = 61;
        idati = get_idati(v22);
        if ( (unsigned __int8)create_tinfo(&v33, 61, 189, &idati) )
        {
          a2 = 2;
          if ( (get_tinfo_property(v33, 2) & 0x2F) == 0xD )
          {
            a2 = i;
            if ( (unsigned __int8)is_type_choosable(0, i) )
            {
              a2 = 0;
              tinfo_tid = get_tinfo_tid(&v33, 0);
              v28 = tinfo_tid;
              if ( tinfo_tid != -1 )
              {
                v29 = (_QWORD *)v34;
                *(_QWORD *)&v35 = 0;
                if ( !*((_QWORD *)&v35 + 1) )
                {
                  v32 = tinfo_tid;
                  v31 = qvector_reserve(&v34, v34, 1, 8);
                  v28 = v32;
                  v34 = v31;
                  v29 = (_QWORD *)(v31 + 8 * v35);
                }
                *v29 = v28;
                v30 = a1[1];
                a2 = (__int64)&v34;
                *(_QWORD *)&v35 = v35 + 1;
                sub_1ACC50((__int64)a1, (__int64)&v34, (__int64)&v33, v30, (__m128)0LL, a6, a7, a8, v26, v27, a11, a12);
              }
            }
          }
        }
        v22 = &v33;
        clear_tinfo_t(&v33);
      }
    }
  }
  else
  {
    tid_ordinal = get_tid_ordinal(v13);
    if ( tid_ordinal )
    {
      v33 = 0;
      v38 = 257;
      v37 = tid_ordinal;
      a2 = 61;
      idati = get_idati(v13);
      if ( (unsigned __int8)create_tinfo(&v33, 61, 189, &idati) )
      {
        a2 = 2;
        if ( (get_tinfo_property(v33, 2) & 0x2F) == 0xD )
        {
          v18 = v35;
          v19 = *a1;
          v20 = v34;
          if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
          {
            v34 = qvector_reserve(&v34, v34, v35 + 1, 8);
            v18 = v35;
            v20 = v34;
          }
          *(_QWORD *)(v20 + 8 * v18) = v19;
          v21 = a1[1];
          a2 = (__int64)&v34;
          *(_QWORD *)&v35 = v35 + 1;
          sub_1ACC50((__int64)a1, (__int64)&v34, (__int64)&v33, v21, (__m128)0LL, a6, a7, a8, v16, v17, a11, a12);
        }
      }
      clear_tinfo_t(&v33);
    }
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, (const char *)a2);
  }
  return v39 - __readfsqword(0x28u);
}
