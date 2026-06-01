__m128i *__fastcall sub_222F080(__m128i *a1, void *a2, size_t a3)
{
  size_t v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  size_t v9; // rax
  _BYTE *v10; // [rsp+8h] [rbp-B0h]
  __pid_t pid; // [rsp+10h] [rbp-A8h]
  __m128i v12; // [rsp+20h] [rbp-98h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-88h] BYREF
  char v14; // [rsp+40h] [rbp-78h]
  void *s2; // [rsp+50h] [rbp-68h] BYREF
  size_t n; // [rsp+58h] [rbp-60h]
  __m128i v17; // [rsp+60h] [rbp-58h] BYREF
  __pid_t v18; // [rsp+70h] [rbp-48h]

  LOWORD(v18) = 261;
  s2 = a2;
  n = a3;
  sub_2230FD0(v13, &s2, 0, 1, 0, 0);
  if ( (v14 & 1) != 0 )
    goto LABEL_6;
  v12 = 0u;
  sub_22447A0(&s2, *(_QWORD *)(v13[0] + 8), *(_QWORD *)(v13[0] + 16) - *(_QWORD *)(v13[0] + 8), " ", 1);
  v4 = n;
  v10 = s2;
  v12 = _mm_load_si128(&v17);
  v5 = sub_2246F60(&v12, 32, 0);
  v6 = v12.m128i_u64[1];
  v7 = 0;
  if ( v5 <= v12.m128i_i64[1] )
  {
    v6 = v5;
    v7 = v12.m128i_i64[1] - v5;
  }
  v12.m128i_i64[0] += v6;
  v12.m128i_i64[1] = v7;
  if ( (unsigned __int8)sub_2247A50(v12.m128i_i64[0], v7, 10, &s2) )
    goto LABEL_6;
  pid = (int)s2;
  if ( s2 != (void *)(int)s2 )
    goto LABEL_6;
  s2 = &v17;
  n = 0;
  v17.m128i_i8[0] = 0;
  sub_99BDC0(&s2, 0, 0, v10, v4);
  v18 = pid;
  if ( !(unsigned __int8)sub_222EBE0(s2, n, pid) )
  {
    if ( s2 != &v17 )
      operator delete(s2);
LABEL_6:
    s2 = a2;
    LOWORD(v18) = 261;
    n = a3;
    sub_228BF70(&s2, 1);
    a1[2].m128i_i8[8] = 0;
    goto LABEL_7;
  }
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( s2 == &v17 )
  {
    a1[1] = _mm_load_si128(&v17);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)s2;
    a1[1].m128i_i64[0] = v17.m128i_i64[0];
  }
  v9 = n;
  a1[2].m128i_i8[8] = 1;
  a1->m128i_i64[1] = v9;
  a1[2].m128i_i32[0] = v18;
LABEL_7:
  sub_FC2AF0(v13);
  return a1;
}
