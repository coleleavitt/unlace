__int64 __fastcall sub_501BE0(
        __int64 a1,
        __int64 a2,
        char *a3,
        void *a4,
        char a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // r15
  const QT::QObject *v23; // rbp
  int v24; // edi
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  char v35; // [rsp+0h] [rbp-58h]
  unsigned __int8 v36; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v37[9]; // [rsp+10h] [rbp-48h] BYREF

  v37[1] = __readfsqword(0x28u);
  v17 = sub_4F9180(a1, a2, &v36, v37);
  if ( !v17 )
    return 0;
  v22 = v37[0];
  v23 = (const QT::QObject *)v17;
  v24 = *(char *)(v37[0] + 52);
  if ( *(_BYTE *)(v37[0] + 52) != 32 )
  {
    if ( (unsigned __int8)(v24 - 65) <= 0x27u && (v18 = 0xA000880021LL, _bittest64(&v18, (unsigned int)(v24 - 65))) )
    {
      if ( a5 )
      {
        if ( a4 )
        {
LABEL_7:
          v25 = (unsigned int)(v24 - 68);
          if ( (unsigned __int8)v25 <= 0x2Au )
          {
            v26 = 0x60000200E11LL;
            if ( _bittest64(&v26, v25) )
            {
              if ( *(_DWORD *)(v22 + 48) == 1 )
                *(_QWORD *)a3 = **(_QWORD **)(v22 + 32);
            }
          }
          return sub_500EB0(
                   *(_QWORD *)(a1 + 8),
                   v23,
                   v36,
                   a3,
                   a4,
                   v22,
                   a6,
                   a7,
                   a8,
                   a9,
                   v20,
                   v21,
                   a12,
                   a13,
                   *(_BYTE *)(a1 + 40) ^ 1u,
                   nullptr);
        }
        return 0;
      }
    }
    else if ( !a5 )
    {
      v28 = sub_4F9070(v37[0], a2, *(double *)a6.m128_u64, v18, v19);
      v24 = *(unsigned __int8 *)(v22 + 52);
      a4 = (void *)v28;
      goto LABEL_7;
    }
    goto LABEL_15;
  }
  if ( !a5 )
  {
LABEL_15:
    v29 = sub_4F9230(v24, a2, *(double *)a6.m128_u64);
    sub_169630(
      (int)"Bad 'get' method for the field with id %d. You should use the get_%s_value() method",
      *(unsigned int *)(v22 + 56),
      (__int64)v29,
      v30,
      v31,
      v32,
      a6,
      a7,
      a8,
      a9,
      v33,
      v34,
      a12,
      a13,
      v35);
    return 0;
  }
  if ( a4 )
    return sub_500EB0(
             *(_QWORD *)(a1 + 8),
             v23,
             v36,
             a3,
             a4,
             v22,
             a6,
             a7,
             a8,
             a9,
             v20,
             v21,
             a12,
             a13,
             *(_BYTE *)(a1 + 40) ^ 1u,
             nullptr);
  return 0;
}
