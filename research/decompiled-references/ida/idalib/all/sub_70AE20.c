__int64 __fastcall sub_70AE20(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  _QWORD *i; // rbp
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rax
  __int64 v22; // rbx
  char v23; // r13
  __int64 v24; // rax
  __int64 *v25; // rdi
  _QWORD *v26; // rax
  __int64 result; // rax

  v11 = sub_BC37C0(a2);
  v12 = *(_QWORD *)(v11 + 16) + 8LL * *(unsigned int *)(v11 + 24);
  v17 = *(_QWORD *)(sub_BC37C0(a2) + 16);
  if ( v17 != v12 )
  {
    while ( 1 )
    {
      for ( i = sub_7052B0(
                  (__int64 *)(*(_QWORD *)(*(_QWORD *)v17 + 104LL) + 96LL),
                  *(_QWORD *)(*(_QWORD *)v17 + 104LL),
                  v13,
                  v14,
                  v15,
                  v16); (unsigned __int8)sub_B97450(i); i = sub_7052B0(i + 12, (__int64)i, v13, v14, v15, v16) )
      {
        while ( 1 )
        {
          v21 = i[12];
          if ( (v21 & 1) == 0 && (v21 & 2) == 0 )
            break;
          i = nullptr;
          if ( !(unsigned __int8)sub_B97450(0) )
            goto LABEL_6;
        }
      }
LABEL_6:
      if ( i )
        break;
LABEL_14:
      v17 += 8;
      if ( v12 == v17 )
        return 1;
    }
    v22 = (__int64)i;
    v23 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v22 + 180) & 7u) <= 1 )
      {
        result = sub_709840(a1, v22, a3, a4, a5, a6, v19, v20, a9, a10);
        if ( !(_BYTE)result )
          return result;
        v24 = *(_QWORD *)(v22 + 96);
        v25 = (__int64 *)(v22 + 96);
        if ( (v24 & 1) != 0 )
        {
LABEL_10:
          if ( v23 )
            goto LABEL_14;
          v23 = 1;
          goto LABEL_12;
        }
      }
      else
      {
        v24 = *(_QWORD *)(v22 + 96);
        v25 = (__int64 *)(v22 + 96);
        if ( (v24 & 1) != 0 )
          goto LABEL_10;
      }
      if ( (v24 & 2) != 0 )
        goto LABEL_10;
LABEL_12:
      v26 = sub_7052B0(v25, v22, v13, v14, v15, v16);
      v22 = (__int64)v26;
      if ( i == v26 || !v26 )
        goto LABEL_14;
    }
  }
  return 1;
}
