/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475180
// Address: 0x0000000000475180

//----- (0000000000475180) ----------------------------------------------------
__int64 __fastcall sub_475180(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  char *v11; // r13
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 result; // rax
  __int64 v15; // rax
  pthread_mutex_t *v16; // rbx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // r15
  __int64 v20; // r12

  v10 = *(_QWORD *)(a2 + 40);
  if ( !v10 || (v11 = *(char **)(a2 + 64), !sub_480B00(*(char **)(a2 + 40))) )
  {
    a1[8] = "certchain_not_found";
    return 0;
  }
  if ( !v11 || !sub_480B00(v11) )
  {
    a1[8] = "privkey_not_found";
    return 0;
  }
  if ( !(unsigned __int8)sub_474AE0(&qword_4C83E0, a1 + 8, a3, a4, a5, a6, v12, v13, a9, a10) )
    return 0;
  v15 = sub_46EFB0(0);
  a1[4] = v15;
  if ( !(unsigned __int8)sub_46F030(v15) )
  {
    a1[8] = "irs";
    return 0;
  }
  v16 = (pthread_mutex_t *)qword_4C83F0;
  sub_482EC0((pthread_mutex_t *)qword_4C83F0);
  v19 = qword_4C8410;
  if ( qword_4C8410 )
  {
    sub_482F10(v16);
    a1[10] = v19;
  }
  else
  {
    v20 = sub_474C30((__int64 **)&qword_4C83E0, 0, v10, (__int64)v11, a3, a4, a5, a6, v17, v18, a9, a10);
    qword_4C8410 = v20;
    sub_482F10(v16);
    a1[10] = v20;
    if ( !v20 )
      goto LABEL_15;
  }
  result = sub_475090((__int64)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}
// 4751FE: variable 'v12' is possibly undefined
// 4751FE: variable 'v13' is possibly undefined
// 47528B: variable 'v17' is possibly undefined
// 47528B: variable 'v18' is possibly undefined
// 4C83E0: using guessed type __int64 qword_4C83E0;
// 4C83F0: using guessed type __int64 qword_4C83F0;
// 4C8410: using guessed type __int64 qword_4C8410;
