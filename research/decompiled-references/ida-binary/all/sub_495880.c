__int64 __fastcall sub_495880(
        __int64 *a1,
        QT::QAbstractItemView *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 *v10; // r12
  __int64 *v12; // rsi
  unsigned int v13; // r14d
  __int64 *v15; // rsi
  char v16; // al
  __int64 v17; // r13
  const char *v18; // r15
  __int64 (__fastcall *v19)(__int64, __int64, __int64, __int64, unsigned int, __m128, __m128, __m128, __m128, double, double, __m128, __m128, __int64, char); // rax
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  char v28; // [rsp+0h] [rbp-B8h]
  __int64 v29; // [rsp+20h] [rbp-98h] BYREF
  __int128 v30; // [rsp+28h] [rbp-90h]
  const char *v31; // [rsp+40h] [rbp-78h] BYREF
  __int128 v32; // [rsp+48h] [rbp-70h]
  __int128 v33; // [rsp+58h] [rbp-60h]
  __int128 v34; // [rsp+68h] [rbp-50h]
  unsigned __int64 v35; // [rsp+78h] [rbp-40h]

  v10 = a1 + 17;
  v35 = __readfsqword(0x28u);
  v12 = (__int64 *)a1[27];
  if ( !v12 )
    v12 = (__int64 *)a1[26];
  v13 = 0;
  sub_48A5A0(a1 + 17, v12, a3, *(double *)a4.m128_u64, *(double *)a5.m128_u64, *(double *)a6.m128_u64, a7, a8, a9);
  if ( a1[18] )
  {
    v15 = (__int64 *)&v31;
    v32 = 0;
    v31 = nullptr;
    v33 = -1;
    v34 = -1;
    v16 = sub_4956F0(a2, (__int64 *)&v31, 3, NAN, *(double *)a4.m128_u64, a5);
    v17 = (__int64)v31;
    if ( !v16 )
      goto LABEL_10;
    v18 = v31;
    if ( !(_QWORD)v32 )
      v18 = &s1;
    v15 = *(__int64 **)a1[26];
    LOBYTE(v30) = 0;
    v29 = -1;
    dirtree_resolve_path(&v29, v15, v18, NAN);
    if ( v29 != -1 && (v13 = (unsigned __int8)v30, (_BYTE)v30) )
    {
      v29 = 0;
      v30 = 0;
      sub_48A040(v10, (const char **)&v29);
      v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __m128, __m128, __m128, __m128, double, double, __m128, __m128, __int64, char))(*a1 + 464);
      if ( v19 == sub_489F80 )
      {
        v20 = dirtree_bulk_move(*(_QWORD *)a1[26], &v29, v18, 0xFFFFFFFFLL, 0, 0);
        if ( v20 )
        {
          v21 = dirtree_errstr(v20);
          sub_169700(
            (int)"Failed move operation: %s\n",
            v21,
            v22,
            v23,
            v24,
            v25,
            (__m128)0LL,
            a4,
            a5,
            a6,
            v26,
            v27,
            a9,
            a10,
            v28);
        }
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64 *, const char *, _QWORD, __int64, __int64))v19)(
          a1,
          &v29,
          v18,
          0,
          -1,
          1);
      }
      v15 = &v29;
      sub_491150((__int64)a2, &v29, 0xD9u);
      sub_48A4A0((__int64)v10, (const char *)&v29);
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29, (const char *)&v29);
      }
    }
    else
    {
LABEL_10:
      v13 = 0;
    }
    if ( v17 )
      qfree(v17, (const char *)v15);
  }
  return v13;
}
