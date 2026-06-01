__int64 __fastcall sub_501F10(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  void (*v14)(void); // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 result; // rax

  v14 = *(void (**)(void))(*a1 + 424LL);
  if ( v14 != nullsub_293 )
    v14();
  v15 = a1[5];
  v16 = 0xFFFFFDBFFFFFFFFELL;
  v17 = v15 + 72LL * a1[6];
  if ( v17 == v15 )
    return 1;
  while ( 1 )
  {
    if ( !*(_QWORD *)(v15 + 32) )
      goto LABEL_6;
    v18 = *(unsigned __int8 *)(v15 + 52);
    if ( (unsigned __int8)(v18 - 66) <= 0x29u )
      break;
    if ( (_BYTE)v18 != 32 )
      goto LABEL_10;
LABEL_6:
    v15 += 72;
    if ( v17 == v15 )
      return 1;
  }
  if ( !_bittest64((const __int64 *)&v16, (unsigned int)(v18 - 66)) )
    goto LABEL_6;
LABEL_10:
  result = sub_501D70((__int64)a1, v15, a2, a3, a4, a5, a6, a7, a8, a9, v18, a12, a13, a14);
  if ( (_BYTE)result )
    goto LABEL_6;
  if ( *(_QWORD *)v15 )
    a1[38] = *(_QWORD *)v15;
  return result;
}
