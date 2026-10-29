void *__fastcall sub_31C20(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // r14
  __int64 v13; // rax
  void *v14; // rbx
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  double v19; // xmm4_8
  double v20; // xmm5_8

  v11 = 1705691;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = sub_6CF10(a1, a2, a3);
      v14 = (void *)v13;
      if ( v13 )
        break;
      if ( !*(_QWORD *)(a3 + 8) || !*(_QWORD *)(a1 + 256) || !(unsigned __int8)sub_31530(a1) )
        return v14;
    }
    if ( !*(_BYTE *)(a1 + 69) )
      break;
    v15 = *(unsigned __int8 *)(v13 + 4);
    if ( (_BYTE)v15 != 12 )
    {
      v16 = (unsigned int)(v15 - 91);
      if ( (unsigned __int8)v16 > 0x14u || !_bittest64(&v11, v16) )
        break;
    }
    v17 = sub_6D410(a1, v14);
    if ( !v17 )
      break;
    j__free(v14);
    sub_301E0(a1, v17, a4, a5, a6, a7, v19, v20, a10, a11);
    *(_QWORD *)(a3 + 8) = 0;
  }
  return v14;
}

