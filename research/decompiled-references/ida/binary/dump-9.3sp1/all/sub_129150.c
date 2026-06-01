__int64 __fastcall sub_129150(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, unsigned int a7)
{
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  char v20; // al
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __m128i v25; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( (!(unsigned __int8)sub_64880(a2) || a2[3]) && a3 && a3 != a4 )
  {
    while ( 1 )
    {
      sub_127A20((__int64)&v22, a1, a3, a7, v11, v12);
      if ( (unsigned __int8)sub_64780(&v22, a2) )
      {
        v13 = v24;
LABEL_7:
        if ( a5 )
        {
          v14 = *(_QWORD *)a5;
          v15 = _mm_loadu_si128(&v25);
          *(_QWORD *)a5 = v22;
          v22 = v14;
          v16 = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(a5 + 8) = v23;
          v17 = *(_QWORD *)(a5 + 32);
          v23 = v16;
          v18 = *(_QWORD *)(a5 + 16);
          v25.m128i_i64[1] = v17;
          v24 = v18;
          *(_QWORD *)(a5 + 16) = v13;
          v13 = v18;
          *(__m128i *)(a5 + 24) = v15;
        }
        if ( v13 )
        {
          v25.m128i_i64[0] = 0;
          qfree(v13);
        }
        qfree(v22);
        return a3;
      }
      v20 = sub_318470(&v24, a2 + 2);
      v13 = v24;
      if ( v20 )
        goto LABEL_7;
      if ( !--a6 )
        break;
      if ( v24 )
      {
        v25.m128i_i64[0] = 0;
        qfree(v24);
      }
      qfree(v22);
      a3 = *(_QWORD *)(a3 + 16);
      if ( !a3 || a4 == a3 )
        return 0;
    }
    if ( v24 )
    {
      v25.m128i_i64[0] = 0;
      qfree(v24);
    }
    qfree(v22);
  }
  return 0;
}
