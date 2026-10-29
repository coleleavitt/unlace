/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A0F0
// Address: 0x000000000043A0F0

//----- (000000000043A0F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_43A0F0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  pthread_mutex_t *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 *v13; // rax
  char *v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  const char *v23; // rsi
  __int64 v24; // rax
  void *v25; // rdi
  void *ptr; // [rsp+0h] [rbp-1048h] BYREF
  __int128 v28; // [rsp+8h] [rbp-1040h]
  char v29[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v30; // [rsp+1028h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  sub_481B80((__int64)sub_43A4E0);
  qword_4C8210 = sub_482C40();
  v8 = sub_482C40();
  qword_4C80E0 = (__int64)v8;
  if ( !qword_4C8210 || !v8 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(486);
    goto LABEL_20;
  }
  v9 = (_QWORD *)sub_438630();
  v10 = sub_451490(nullptr, 0, 0, 0);
  v9[4] = v10;
  sub_44A720(v10, (__int64)sub_430D00);
  v9[6] = qword_4C56E0[0];
  v9[5] = qword_4C56E0[1];
  sub_439F40("object", 0);
  sub_439F40("typeinfo", 0);
  sub_439F40("exception", 0);
  if ( qword_4C5700[0] )
    ((void (__fastcall *)(double, double, double, double, double, double, double, double))qword_4C5700[0])(
      a1,
      *(double *)a2.m128_u64,
      *(double *)a3.m128_u64,
      *(double *)a4.m128_u64,
      v11,
      v12,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64);
  if ( !LOBYTE(qword_4C8430[0])
    || (v13 = off_4C61C0(), (v14 = sub_44A370(v13, v29, 4096, (__int64)"idc.idc", nullptr, 0)) == nullptr) )
  {
LABEL_14:
    if ( !(unsigned int)sub_436C30((__int64)qword_4C6140) )
      return v30 - __readfsqword(0x28u);
    if ( !byte_4C94E1 )
      sub_481AC0(1447);
LABEL_20:
    BUG();
  }
  ptr = nullptr;
  v28 = 0;
  if ( (unsigned __int8)sub_4357D0(
                          (__int64)v14,
                          (__int64)&ptr,
                          0,
                          0.0,
                          *(double *)a2.m128_u64,
                          *(double *)a3.m128_u64,
                          a4,
                          v15,
                          v16,
                          a7,
                          a8) )
  {
    v24 = sub_4514E0(v9[4]);
    v25 = ptr;
    v9[3] = v24;
    if ( v25 )
    {
      *(_QWORD *)&v28 = 0;
      j__free(v25);
    }
    goto LABEL_14;
  }
  v23 = s1;
  if ( (_QWORD)v28 )
    v23 = (const char *)ptr;
  sub_4240B0((int)"%s", (__int64)v23, v17, v18, v19, v20, (__m128)0LL, a2, a3, a4, v21, v22, a7, a8, (char)ptr);
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    j__free(ptr);
  }
  return v30 - __readfsqword(0x28u);
}
// 43A1BA: variable 'v11' is possibly undefined
// 43A1BA: variable 'v12' is possibly undefined
// 43A213: variable 'v15' is possibly undefined
// 43A213: variable 'v16' is possibly undefined
// 43A238: variable 'v17' is possibly undefined
// 43A238: variable 'v18' is possibly undefined
// 43A238: variable 'v19' is possibly undefined
// 43A238: variable 'v20' is possibly undefined
// 43A238: variable 'v21' is possibly undefined
// 43A238: variable 'v22' is possibly undefined
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
// 4C5700: using guessed type __int64 qword_4C5700[4];
// 4C6140: using guessed type __int64 qword_4C6140[5];
// 4C61C0: using guessed type __int64 *(*off_4C61C0)();
// 4C80E0: using guessed type __int64 qword_4C80E0;
// 4C8430: using guessed type __int64 qword_4C8430[2];
// 4C94E1: using guessed type char byte_4C94E1;
