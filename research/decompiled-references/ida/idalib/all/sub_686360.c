__int64 __fastcall sub_686360(
        __int64 *a1,
        unsigned __int64 a2,
        char *a3,
        unsigned int a4,
        __m128 a5,
        double a6,
        double a7)
{
  unsigned __int64 *v9; // rax
  char *v10; // r12
  unsigned __int64 *v11; // r14
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v18; // rax
  unsigned __int64 *v19; // rbx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  int v24; // eax
  __int64 v25; // [rsp+0h] [rbp-78h]
  _QWORD *v26; // [rsp+0h] [rbp-78h]
  int v27; // [rsp+8h] [rbp-70h]
  unsigned int v28; // [rsp+Ch] [rbp-6Ch]
  unsigned int v29; // [rsp+10h] [rbp-68h]
  unsigned int v30; // [rsp+10h] [rbp-68h]
  char v31; // [rsp+14h] [rbp-64h]
  unsigned __int64 *v32; // [rsp+18h] [rbp-60h]
  _BYTE ptr[24]; // [rsp+20h] [rbp-58h] BYREF
  int v34[2]; // [rsp+38h] [rbp-40h]
  __int64 v35; // [rsp+40h] [rbp-38h]

  *(_QWORD *)v34 = __readfsqword(0x28u);
  v25 = (__int64)(a1 + 203);
  v9 = sub_505D70((__int64)(a1 + 203), a2);
  if ( v9 )
  {
    v10 = (char *)*v9;
    v11 = v9;
    if ( (char *)*v9 == a3 )
      return 1;
    if ( (unsigned __int64)a3 >= v9[1] )
      return sub_685C90(a1, a2, a4, *(double *)a5.m128_u64, a6, a7);
    if ( (unsigned __int64)a3 < get_segm_base(v9) )
    {
      memset(ptr, 0, sizeof(ptr));
      sub_510BD0((__int64)a1, (__int64 *)ptr, v11, 0);
      v23 = haystack;
      if ( *(_QWORD *)&ptr[8] )
        v23 = *(const char **)ptr;
      sub_387D20(1277, (__int64)v23, (unsigned int)(2 * *(_DWORD *)(a1[3] + 24)), *v11);
    }
    v29 = sub_503EE0(v25, a2);
    if ( !(unsigned __int8)sub_504020(v25, v29, (unsigned __int64)a3) )
      sub_378D50();
    if ( (a4 & 0x40) != 0 )
    {
      if ( a3 < v10 )
      {
        v13 = 1;
LABEL_9:
        a6 = *(double *)&v10;
        a5 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)v10);
        *(__m128 *)ptr = a5;
        if ( (unsigned int)sub_3C0380((__int64)a1, (unsigned __int64 *)ptr, v13, (__int64)v11) )
          sub_378D50();
      }
    }
    else
    {
      v13 = -1;
      if ( a3 < v10 )
        goto LABEL_9;
    }
    sub_39ADA0(0x15u, v11, a3, a4);
    if ( (a4 & 2) == 0 )
    {
      v32 = v11;
      while ( (unsigned __int8)sub_684B60(a1, (unsigned __int64)v10, (unsigned __int64)a3) )
      {
        if ( (a4 & 4) == 0 )
          sub_378E50();
        sub_684820(a1, v10, a3, 0, 0, *(double *)a5.m128_u64, a6, a7);
      }
    }
    if ( (a4 & 0x20) == 0 )
    {
      sub_63D7C0((__int64)v10, (__int64)a3, 1000);
      sub_63D7C0((__int64)v10, (__int64)a3, 2000);
      sub_63D5F0(a1, v10, 1000);
      sub_63D5F0(a1, v10, 2000);
    }
    sub_6849A0(
      a1,
      (unsigned __int64)a3,
      v14,
      v15,
      v16,
      v17,
      v25,
      v27,
      v29,
      v32,
      *(__int64 *)ptr,
      *(int *)&ptr[8],
      *(int *)&ptr[16],
      v34[0],
      v35);
    if ( a3 >= v10 )
    {
      if ( !v28 )
        sub_684820(a1, v10, a3, a4 & 1, 0, *(double *)a5.m128_u64, a6, a7);
LABEL_21:
      sub_684A90((__int64)a1, (unsigned __int64)v10, (__int64)a3);
      sub_506920(v26, v30, (unsigned __int64)a3, *(double *)a5.m128_u64, a6, a7);
      sub_51A2E0(*a1, (unsigned __int64)v10, (unsigned __int64)a3, v28 >> 1);
      sub_685AC0((__int64)a1, (__int64)v10, (__int64)a3);
      v18 = sub_505DE0((__int64)v26, v30);
      v19 = v18;
      if ( v18 )
      {
        if ( (*((_BYTE *)v18 + 44) & 8) == 0 )
        {
          v24 = getinf(4);
          setinf(4, (unsigned int)(v24 + 1));
        }
        sub_50E830(*a1, v19, (__int64)v10);
        if ( (a4 & 8) != 0 || (unsigned __int8)sub_684D70((__int64)a1, (__int64)v19) )
        {
          sub_39ADA0(0x16u, v19, v10);
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
    if ( (unsigned __int8)sub_684690(
                            a1,
                            (unsigned __int64)a3,
                            (unsigned __int64)v10,
                            v31,
                            (__int64)v11,
                            *(double *)a5.m128_u64,
                            a6,
                            a7) )
      goto LABEL_21;
  }
  return 0;
}
