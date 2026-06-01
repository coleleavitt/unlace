/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D350
// Address: 0x000000000009D350

//----- (000000000009D350) ----------------------------------------------------
__int64 *__fastcall sub_9D350(__int64 *a1, __int64 *a2)
{
  __int64 v3; // x23
  void *v5; // x21
  __int64 v6; // x24
  __int64 v7; // x25
  __int64 v8; // x8
  void *ptr; // [xsp+8h] [xbp-78h]
  __int64 v11; // [xsp+10h] [xbp-70h]
  __int64 v12; // [xsp+18h] [xbp-68h]
  __int128 v13; // [xsp+20h] [xbp-60h]
  __int64 v14; // [xsp+30h] [xbp-50h]
  __int64 v15; // [xsp+38h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = 0;
  v12 = 0;
  ptr = nullptr;
  v3 = a2[1];
  if ( v3 )
  {
    ptr = qalloc_or_throw(80 * v3);
    v12 = v3;
    v5 = ptr;
    sub_9D490(ptr, *a2);
    v6 = v3 - 1;
    if ( v3 != 1 )
    {
      v7 = 80;
      do
      {
        sub_9D490((char *)ptr + v7, *a2 + v7);
        --v6;
        v7 += 80;
      }
      while ( v6 );
    }
    v11 = v3;
  }
  else
  {
    v5 = nullptr;
  }
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v3;
  ptr = nullptr;
  v11 = 0;
  v14 = v3;
  v12 = 0;
  if ( *a1 )
  {
    sub_3967C(a1, 0);
    qfree((void *)*a1);
    v8 = v14;
    *(_OWORD *)a1 = v13;
    a1[2] = v8;
  }
  else
  {
    *a1 = (__int64)v5;
    a1[1] = v3;
    a1[2] = v3;
  }
  return a1;
}
// 9D41C: conditional instruction was optimized away because x9.8==0
