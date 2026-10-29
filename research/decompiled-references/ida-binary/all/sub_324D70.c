__int64 __fastcall sub_324D70(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  const char *v16; // rdi
  char v18; // [rsp+0h] [rbp-68h]
  __int16 v19; // [rsp+4h] [rbp-64h] BYREF
  __int16 v20; // [rsp+6h] [rbp-62h] BYREF
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  const char *v22; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a1 )
  {
    v19 = 0;
    v20 = 0;
    v22 = nullptr;
    v23 = 0;
    get_segm_name(&v22, a1, 0);
    v21 = *a1;
    while ( 1 )
    {
      v9 = &s1;
      if ( (_QWORD)v23 )
        v9 = v22;
      if ( !(unsigned int)sub_507F10(
                            1040,
                            (_DWORD)v9,
                            (unsigned int)&v21,
                            (int)a1 + 8,
                            (unsigned int)&v19,
                            (unsigned int)&v20) )
        break;
      if ( v19 )
      {
        v9 = (const char *)(v20 != 0);
        del_segm(v21, v9);
        v16 = v22;
        if ( !v22 )
          return 1;
LABEL_9:
        *(_QWORD *)&v23 = 0;
        qfree(v16, v9);
        return 1;
      }
      sub_169630(
        (int)"Please check \"CONFIRM DELETION\" checkbox",
        (__int64)v9,
        v10,
        v11,
        v12,
        v13,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v14,
        v15,
        a8,
        a9,
        v18);
    }
    v16 = v22;
    if ( !v22 )
      return 1;
    goto LABEL_9;
  }
  return 1;
}
