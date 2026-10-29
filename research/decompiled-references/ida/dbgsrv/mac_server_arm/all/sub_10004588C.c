/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004588C
// Address: 0x000000010004588C

//----- (000000010004588C) ----------------------------------------------------
void __fastcall sub_10004588C(__int64 a1, unsigned __int64 a2)
{
  void *v4; // x8
  void *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x8
  unsigned __int64 v8; // x10
  uint8x8_t v9; // d0
  void *v10; // x0
  _QWORD *v11; // x11
  unsigned __int64 v12; // x13

  if ( a2 )
  {
    if ( a2 >> 61 )
      sub_100009D48();
    v4 = operator new(8 * a2);
    v5 = *(void **)a1;
    *(_QWORD *)a1 = v4;
    if ( v5 )
      operator delete(v5);
    v6 = 0;
    *(_QWORD *)(a1 + 8) = a2;
    do
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v6++) = 0;
    while ( a2 != v6 );
    v7 = *(_QWORD **)(a1 + 16);
    if ( v7 )
    {
      v8 = v7[1];
      v9 = (uint8x8_t)vcnt_s8((int8x8_t)a2);
      v9.i16[0] = vaddlv_u8(v9);
      if ( v9.u32[0] > 1uLL )
      {
        if ( v8 >= a2 )
          v8 %= a2;
      }
      else
      {
        v8 &= a2 - 1;
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = a1 + 16;
      v11 = (_QWORD *)*v7;
      if ( *v7 )
      {
        do
        {
          v12 = v11[1];
          if ( v9.u32[0] > 1uLL )
          {
            if ( v12 >= a2 )
              v12 %= a2;
          }
          else
          {
            v12 &= a2 - 1;
          }
          if ( v12 != v8 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v12) )
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v12) = v7;
              goto LABEL_19;
            }
            *v7 = *v11;
            *v11 = **(_QWORD **)(*(_QWORD *)a1 + 8 * v12);
            **(_QWORD **)(*(_QWORD *)a1 + 8 * v12) = v11;
            v11 = v7;
          }
          v12 = v8;
LABEL_19:
          v7 = v11;
          v11 = (_QWORD *)*v11;
          v8 = v12;
        }
        while ( v11 );
      }
    }
  }
  else
  {
    v10 = *(void **)a1;
    *(_QWORD *)a1 = 0;
    if ( v10 )
      operator delete(v10);
    *(_QWORD *)(a1 + 8) = 0;
  }
}
