void __fastcall sub_323CD0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbp
  unsigned int v15; // r15d
  unsigned __int64 v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // eax
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned __int64 v22; // rbx
  __int64 prev_seg; // rax
  unsigned int v24; // r14d
  __int64 next_seg; // rax
  unsigned __int64 v26; // r15
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  unsigned int v29; // eax
  double v30; // xmm4_8
  double v31; // xmm5_8
  unsigned int v32; // eax
  double v33; // xmm4_8
  double v34; // xmm5_8

  v13 = a2;
  v14 = a1;
  if ( a3 < 0 )
  {
    v24 = 2 * (a4 == 0);
    do
    {
LABEL_15:
      if ( v14 >= a2 )
        break;
      next_seg = get_next_seg(v14);
      if ( next_seg )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(next_seg + 8);
          v27 = (_QWORD *)getseg(v14);
          v28 = v27;
          if ( !v27 )
          {
            v14 = v26;
            goto LABEL_15;
          }
          if ( v26 >= a2 )
            break;
          *(double *)a5.m128_u64 = move_segm(v27, a3 + *v27, v24 | 4);
          if ( (unsigned __int8)sub_323BF0((__int64)v28, v29, a5, a6, a7, a8, v30, v31, a11, a12) )
            return;
          v14 = v26;
          next_seg = get_next_seg(v26);
          if ( !next_seg )
            goto LABEL_21;
        }
        v14 = v26;
      }
      else
      {
LABEL_21:
        v28 = (_QWORD *)getseg(v14);
        if ( !v28 )
          return;
        v14 = -1;
      }
      *(double *)a5.m128_u64 = move_segm(v28, a3 + *v28, v24);
    }
    while ( !(unsigned __int8)sub_323BF0((__int64)v28, v32, a5, a6, a7, a8, v33, v34, a11, a12) );
  }
  else if ( a3 && a1 < a2 )
  {
    v15 = 2 * (a4 == 0);
    while ( 1 )
    {
      v22 = v13 - 1;
      prev_seg = get_prev_seg(v13 - 1);
      if ( !prev_seg )
        break;
      v13 = *(_QWORD *)(prev_seg + 8);
      v16 = v13 + 1;
      v17 = (_QWORD *)getseg(v22);
      if ( v17 )
      {
        v18 = v15 | 4;
        if ( a1 >= v13 )
          v18 = v15;
LABEL_8:
        *(double *)a5.m128_u64 = move_segm(v17, a3 + *v17, v18);
        if ( (unsigned __int8)sub_323BF0((__int64)v17, v19, a5, a6, a7, a8, v20, v21, a11, a12) )
          return;
        v13 = v16 - 1;
      }
      if ( a1 >= v13 )
        return;
    }
    v17 = (_QWORD *)getseg(v13 - 1);
    if ( !v17 )
      return;
    v18 = v15;
    v16 = 1;
    goto LABEL_8;
  }
}
