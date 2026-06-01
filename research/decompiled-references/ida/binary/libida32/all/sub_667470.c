__int64 __fastcall sub_667470(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        double a5,
        __m128i a6,
        double a7)
{
  unsigned int *v9; // rax
  unsigned int v10; // r12d
  unsigned int *v11; // r14
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // rax
  unsigned int *v19; // rbx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  int v24; // eax
  __int64 v25; // [rsp+0h] [rbp-78h]
  unsigned int *v26; // [rsp+0h] [rbp-78h]
  int v27; // [rsp+8h] [rbp-70h]
  unsigned int v28; // [rsp+Ch] [rbp-6Ch]
  unsigned int v29; // [rsp+10h] [rbp-68h]
  unsigned int v30; // [rsp+10h] [rbp-68h]
  char v31; // [rsp+14h] [rbp-64h]
  unsigned int *v32; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v34; // [rsp+28h] [rbp-50h]
  int v35[2]; // [rsp+38h] [rbp-40h]

  *(_QWORD *)v35 = __readfsqword(0x28u);
  v25 = (__int64)(a1 + 194);
  v9 = sub_4EE820((__int64)(a1 + 194), a2);
  if ( v9 )
  {
    v10 = *v9;
    v11 = v9;
    if ( *v9 == a3 )
      return 1;
    if ( a3 >= v9[1] )
      return sub_666DD0((__int64)a1, (unsigned int)a2, a4, a5, *(double *)a6.m128i_i64, a7);
    if ( a3 < (unsigned int)get_segm_base(v9) )
    {
      v34 = 0;
      ptr = nullptr;
      sub_4F9200((__int64)a1, (__int64 *)&ptr, v11, 0);
      v23 = haystack;
      if ( (_QWORD)v34 )
        v23 = (const char *)ptr;
      sub_384000(1277, (__int64)v23, (unsigned int)(2 * *(_DWORD *)(a1[3] + 8)), *v11);
    }
    v29 = sub_4EC9F0(v25, (unsigned int)a2);
    if ( !(unsigned __int8)sub_4ECB10(v25, v29, a3) )
      sub_375400();
    if ( (a4 & 0x40) != 0 )
    {
      if ( a3 < v10 )
      {
        v13 = 1;
LABEL_9:
        a6 = _mm_cvtsi32_si128(v10);
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), a6).m128i_u64[0];
        ptr = *(void **)&a5;
        if ( (unsigned int)sub_3BB410((__int64)a1, (__int64 *)&ptr, v13, (__int64)v11) )
          sub_375400();
      }
    }
    else
    {
      v13 = -1;
      if ( a3 < v10 )
        goto LABEL_9;
    }
    sub_396090(0x15u, v11, a3, a4);
    if ( (a4 & 2) == 0 )
    {
      v32 = v11;
      while ( (unsigned __int8)sub_665D20(a1, v10, a3) )
      {
        if ( (a4 & 4) == 0 )
          sub_375500();
        sub_665A00(a1, v10, a3, 0, 0, a5, *(double *)a6.m128i_i64, a7);
      }
    }
    if ( (a4 & 0x20) == 0 )
    {
      sub_620610(v10, a3, 1000);
      sub_620610(v10, a3, 2000);
      sub_620480(a1, v10, 0x3E8u);
      sub_620480(a1, v10, 0x7D0u);
    }
    sub_665B60((__int64)a1, a3, v14, v15, v16, v17, v25, v27, v29, v32, (__int64)ptr, v34, *((__int64 *)&v34 + 1));
    if ( a3 >= v10 )
    {
      if ( !v28 )
        sub_665A00(a1, v10, a3, a4 & 1, 0, a5, *(double *)a6.m128i_i64, a7);
LABEL_21:
      sub_665C50((__int64)a1, v10, a3);
      sub_4EF380(v26, v30, a3, a5, *(double *)a6.m128i_i64, a7);
      sub_5025E0(*a1, v10, a3, v28 >> 1);
      sub_666C00((__int64)a1, v10, a3);
      v18 = sub_4EE890((__int64)v26, v30);
      v19 = v18;
      if ( v18 )
      {
        if ( (v18[6] & 8) == 0 )
        {
          v24 = getinf(4);
          setinf(4, (unsigned int)(v24 + 1));
        }
        sub_4F70D0(*a1, v19, v10);
        if ( (a4 & 8) != 0 || (unsigned __int8)sub_665F10((__int64)a1, (__int64)v19) )
        {
          sub_396090(0x16u, v19, v10);
          callui(1, (int)v19, (int)&callui, v20, v21, v22);
        }
        if ( !under_debugger )
          interr(1252);
      }
      else if ( !under_debugger )
      {
        interr(153);
      }
      BUG();
    }
    if ( (unsigned __int8)sub_665870(a1, a3, v10, v31, (__int64)v11, a5, *(double *)a6.m128i_i64, a7) )
      goto LABEL_21;
  }
  return 0;
}

