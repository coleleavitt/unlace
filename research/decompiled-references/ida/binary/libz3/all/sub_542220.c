char *__fastcall sub_542220(_QWORD *a1, const void *a2, const void *a3)
{
  void *v5; // rax
  __int64 v6; // r12
  void *v7; // r13
  __int64 v8; // r15
  _QWORD *(__fastcall *v9)(__int64, __int64, _QWORD *); // rax
  char *v10; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm0
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rax
  unsigned int *v21; // r8
  _DWORD *v22; // r9
  int v23; // ecx

  v5 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  if ( !v5
    || (v6 = (__int64)v5,
        (v7 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD *(__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v8 + 64LL);
  if ( v9 == sub_536B50 )
  {
    v10 = (char *)sub_186B270(0x98u);
    *(_QWORD *)v10 = qword_1C665B0;
    v11 = a1[1];
    *((_QWORD *)v10 + 1) = v8;
    *((_QWORD *)v10 + 2) = 0;
    if ( v11 )
    {
      v12 = _mm_loadl_epi64((const __m128i *)(v11 - 8));
      v13 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v12) + 8);
      v14 = (_QWORD *)a1[1];
      *((_QWORD *)v10 + 2) = v13 + 1;
      *v13 = v12.m128i_i64[0];
      if ( v14 )
      {
        v15 = 8LL * *((unsigned int *)v14 - 1);
        if ( v15 <= 8 )
        {
          if ( v15 == 8 )
            v13[1] = *v14;
        }
        else
        {
          memmove(v13 + 1, v14, v15);
        }
      }
    }
    v16 = *(_DWORD *)(v8 + 8);
    v17 = *(_QWORD *)(v8 + 24);
    *((_QWORD *)v10 + 4) = v8;
    *((_DWORD *)v10 + 6) = v16;
    *(_QWORD *)v10 = &off_1C67178;
    v18 = sub_4D6490(v17);
    *((_QWORD *)v10 + 5) = v18;
    sub_16669D0(v10 + 48, v18);
    v19 = *((_QWORD *)v10 + 5);
    v10[80] = 0;
    *((_QWORD *)v10 + 8) = 0;
    *((_QWORD *)v10 + 9) = v19;
    *((_QWORD *)v10 + 13) = 0;
    v10[112] = 1;
    *((_QWORD *)v10 + 17) = 0;
    v10[144] = 0;
    *(_OWORD *)(v10 + 88) = 0;
    *(_OWORD *)(v10 + 120) = 0;
  }
  else
  {
    v10 = (char *)v9(*(_QWORD *)(v6 + 32), 0, a1 + 1);
    if ( !v10 )
    {
      v21 = (unsigned int *)a1[2];
      v22 = (_DWORD *)a1[3];
      if ( v21 )
        goto LABEL_10;
LABEL_14:
      v23 = 0;
      goto LABEL_11;
    }
  }
  v20 = (char *)__dynamic_cast(
                  v10,
                  (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                  (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
                  0);
  v21 = (unsigned int *)a1[2];
  v22 = (_DWORD *)a1[3];
  v10 = v20;
  if ( !v21 )
    goto LABEL_14;
LABEL_10:
  v23 = *(v21 - 1);
LABEL_11:
  sub_53F740((__int64)v10, v6, (__int64)v7, v23, v21, v22);
  return v10;
}

