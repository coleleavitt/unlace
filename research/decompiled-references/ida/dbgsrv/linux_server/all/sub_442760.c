/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442760
// Address: 0x0000000000442760

//----- (0000000000442760) ----------------------------------------------------
unsigned __int64 __fastcall sub_442760(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned __int64 v14; // rdx
  unsigned __int64 result; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax

  if ( !sub_4419D0(a1, 2, a3, a4, a5, a6, a7, a8, a9, a10) || !sub_4419D0(a2, 2, a3, a4, a5, a6, v10, v11, a9, a10) )
    return 0xFFFFFFFFLL;
  v14 = *a1;
  result = (unsigned int)(char)*a2;
  if ( (_BYTE)v14 == *a2 )
    return result;
  if ( (unsigned __int8)v14 > 9u )
    return 0xFFFFFFFFLL;
  v16 = 654;
  if ( !_bittest64(&v16, v14) || *a2 > 9u || !_bittest64(&v16, result) )
    return 0xFFFFFFFFLL;
  if ( (_BYTE)v14 == 7 )
  {
    if ( *a2 == 7 )
      return result;
    if ( (char)*a2 > 7 )
    {
      if ( *a2 != 9 )
        goto LABEL_16;
      if ( *((_QWORD *)a2 + 1) )
        goto LABEL_39;
    }
    else
    {
      if ( *a2 != 2 )
        goto LABEL_23;
      if ( *((_QWORD *)a2 + 1) )
      {
        v17 = sub_442390((__int64)a1, a3, a4, a5, a6, v12, v13, a9, a10);
        goto LABEL_13;
      }
    }
    v17 = sub_441D50((__int64)a2, a3, a4, a5, a6, v12, v13, a9, a10);
    goto LABEL_13;
  }
  if ( (char)v14 > 7 )
  {
    if ( (_BYTE)v14 != 9 )
      goto LABEL_16;
    if ( *a2 == 7 )
    {
      if ( !*((_QWORD *)a1 + 1) )
        goto LABEL_41;
    }
    else
    {
      if ( (char)*a2 > 7 )
      {
        if ( *a2 == 9 )
          return result;
        goto LABEL_16;
      }
      if ( *a2 != 2 )
        goto LABEL_23;
    }
    v17 = sub_4424F0((__int64)a2, a3, a4, a5, a6, v12, v13, a9, a10);
    goto LABEL_13;
  }
  if ( (_BYTE)v14 != 2 )
  {
    if ( (_BYTE)v14 == 3 )
    {
      v17 = sub_442640((__int64)a2, a3, a4, a5, a6, v12, v13, a9, a10);
      goto LABEL_13;
    }
LABEL_16:
    v17 = 61;
LABEL_17:
    sub_479EB0(v17);
    return 0xFFFFFFFFLL;
  }
  if ( *a2 == 7 )
  {
    if ( *((_QWORD *)a1 + 1) )
    {
      v17 = sub_442390((__int64)a2, a3, a4, a5, a6, v12, v13, a9, a10);
      goto LABEL_13;
    }
LABEL_41:
    v17 = sub_441D50((__int64)a1, a3, a4, a5, a6, v12, v13, a9, a10);
    goto LABEL_13;
  }
  if ( (char)*a2 > 7 )
  {
    if ( *a2 != 9 )
      goto LABEL_16;
LABEL_39:
    v17 = sub_4424F0((__int64)a1, a3, a4, a5, a6, v12, v13, a9, a10);
    goto LABEL_13;
  }
  if ( *a2 != 2 )
  {
LABEL_23:
    if ( *a2 != 3 )
      goto LABEL_16;
    v17 = sub_442640((__int64)a1, a3, a4, a5, a6, v12, v13, a9, a10);
LABEL_13:
    if ( !v17 )
      return (unsigned int)(char)*a1;
    goto LABEL_17;
  }
  return result;
}
// 442787: variable 'v10' is possibly undefined
// 442787: variable 'v11' is possibly undefined
// 4427CE: variable 'v12' is possibly undefined
// 4427CE: variable 'v13' is possibly undefined
