__int64 __fastcall sub_666FD0(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        double a5,
        __m128i a6,
        double a7)
{
  void *v7; // r14
  unsigned int *v10; // rax
  unsigned int v11; // r12d
  char v13; // al
  __int64 v14; // r8
  int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+0h] [rbp-68h]
  int v28[2]; // [rsp+0h] [rbp-68h]
  unsigned int v29; // [rsp+8h] [rbp-60h]
  char v30; // [rsp+Ch] [rbp-5Ch]
  __int64 v31; // [rsp+10h] [rbp-58h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  void *v33; // [rsp+18h] [rbp-50h]
  int v34[2]; // [rsp+20h] [rbp-48h] BYREF
  int v35[2]; // [rsp+28h] [rbp-40h]
  __int64 v36; // [rsp+30h] [rbp-38h]

  v7 = a1 + 194;
  *(_QWORD *)v35 = __readfsqword(0x28u);
  v10 = sub_4EE820((__int64)(a1 + 194), a2);
  if ( v10 )
  {
    v11 = v10[1];
    if ( a3 == v11 )
      return 1;
    if ( *v10 >= a3 )
      return sub_666DD0((__int64)a1, (unsigned int)a2, a4, a5, *(double *)a6.m128i_i64, a7);
    v27 = (__int64)v10;
    v29 = sub_4EC9F0((__int64)v7, (unsigned int)a2);
    v13 = sub_4ECAB0((__int64)v7, v29, a3);
    v14 = v27;
    if ( !v13 )
      sub_375400();
    v30 = 2 * ((*(_BYTE *)(v27 + 24) & 8) == 0);
    if ( (a4 & 0x40) != 0 )
    {
      v30 |= 4u;
      if ( v11 >= a3 )
        goto LABEL_10;
      v15 = 1;
    }
    else
    {
      v15 = -1;
      if ( v11 >= a3 )
        goto LABEL_10;
    }
    a6 = _mm_cvtsi32_si128(a3);
    *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), a6).m128i_u64[0];
    *(double *)v34 = a5;
    v16 = sub_3BB410((__int64)a1, (__int64 *)v34, v15, v27);
    v14 = v27;
    if ( v16 )
      sub_375400();
LABEL_10:
    v31 = v14;
    sub_396090(0x17u, v14, a3, a4);
    v20 = v31;
    LODWORD(v27) = a4 & 2;
    if ( (a4 & 2) == 0 )
    {
      while ( (unsigned __int8)sub_665D20(a1, v11, a3) )
      {
        if ( (a4 & 4) == 0 )
          sub_375500();
        sub_665A00(a1, v11, a3, 0, 0, a5, *(double *)a6.m128i_i64, a7);
      }
      v20 = v31;
      if ( a3 != -1 )
      {
        sub_665B60((__int64)a1, a3, v21, v22, v31, v23, v27, v29, v31, v7, *(__int64 *)v34, v35[0], v36);
        v20 = v32;
      }
      if ( v11 >= a3 )
      {
        sub_665A00(a1, a3, v11, a4 & 1, 0, a5, *(double *)a6.m128i_i64, a7);
        goto LABEL_20;
      }
LABEL_31:
      if ( (unsigned __int8)sub_665870(a1, v11, a3, v30, v20, a5, *(double *)a6.m128i_i64, a7) )
      {
        LODWORD(v27) = (unsigned int)v27 >> 1;
LABEL_20:
        sub_4EEC40((__int64)v7, v29, a3, a5, *(double *)a6.m128i_i64, a7);
        sub_502670(*a1, v11, a3, (unsigned int)v27);
        callui(1, v11, (int)&callui, v24, v25, v26);
      }
      return 0;
    }
    if ( a3 == -1 )
    {
      if ( v11 == -1 )
      {
LABEL_28:
        LODWORD(v27) = 1;
        goto LABEL_20;
      }
    }
    else
    {
      sub_665B60((__int64)a1, a3, v17, v18, v31, v19, v31, v29, v31, v33, *(__int64 *)v34, v35[0], v36);
      v20 = *(_QWORD *)v28;
      if ( v11 >= a3 )
        goto LABEL_28;
    }
    LODWORD(v27) = 2;
    goto LABEL_31;
  }
  return 0;
}

