__int64 __fastcall sub_C4F870(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, __int64 a5)
{
  char v5; // al
  __int64 v7; // rax
  int v8; // r9d
  int v9; // eax
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  unsigned __int16 *v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  __m128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v10 = a3;
  if ( (*((_BYTE *)a4 + 1) & 6) != 0 )
    return sub_C39A10(a1, a2, (unsigned __int64)a4, (__int64)a4, a5);
  v13 = *((_QWORD *)a4 + 1);
  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v5 - 2) <= 4u )
  {
    v11 = a2;
    v15 = a1;
    v14 = _mm_loadh_ps((const double *)&v10);
    return sub_C802B0(&v14, a4);
  }
  if ( v5 != 48 )
  {
    if ( v5 == 7 )
    {
      v12 = a4;
      v11 = a2;
      v7 = sub_F64D20(&v13);
      a4 = v12;
      v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL);
      if ( (unsigned __int8)(v9 - 2) <= 4u || (_BYTE)v9 == 48 )
      {
        v15 = a1;
        v14 = _mm_loadh_ps((const double *)&v10);
        return sub_C4E190((__int64 *)&v14, v12, (unsigned int)(v9 - 2), (__int64)v12, a5, v8);
      }
    }
    return sub_C39A10(a1, a2, (unsigned __int64)a4, (__int64)a4, a5);
  }
  v11 = a2;
  v15 = a1;
  v14 = _mm_loadh_ps((const double *)&v10);
  return sub_C76C00(&v14, a4);
}
