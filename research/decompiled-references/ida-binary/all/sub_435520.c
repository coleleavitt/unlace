__int64 __fastcall diff_vault_local_action_t__::vfunc_0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // rax
  unsigned int v11; // eax
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned int v14; // r12d
  __int64 v15; // rbx
  __int64 v16; // rbp
  const char *v17; // rdi

  v10 = sub_426230(a1, a2);
  LOBYTE(v11) = sub_4175A0((__int64)v10);
  if ( (_BYTE)v11 )
  {
    v14 = v11;
    v15 = *(_QWORD *)a2;
    v16 = *(_QWORD *)a2 + 48LL * *((_QWORD *)a2 + 1);
    if ( v16 == *(_QWORD *)a2 )
      return v14;
    while ( 1 )
    {
      v17 = &s1;
      if ( *(_QWORD *)(v15 + 8) )
        v17 = *(const char **)v15;
      if ( !(unsigned __int8)sub_434EE0(
                               v17,
                               (const char *)0xFFFFFFFDLL,
                               (__int64)v17,
                               0xFFFFFFFC,
                               a3,
                               a4,
                               a5,
                               a6,
                               v12,
                               v13,
                               a9,
                               a10) )
        break;
      v15 += 48;
      if ( v16 == v15 )
        return v14;
    }
  }
  return 0;
}
