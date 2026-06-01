/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A699
// Address: 0x0046A699

//----- (0046A699) --------------------------------------------------------
char __usercall sub_46A699@<al>(__m128i *a1@<ecx>, int a2@<ebx>, int a3@<edi>, __m128i a4@<xmm0>)
{
  char v4; // al
  _BYTE *v6; // eax
  int v7; // eax
  char *v8; // edx
  char v9; // al
  _BYTE *v10; // eax
  int v11; // [esp-4h] [ebp-4h]

  v4 = a1[3].m128i_i8[1];
  if ( v4 == 70 )
  {
    if ( (a1->m128i_i32[0] & 8) == 0 )
    {
      a1[1].m128i_i32[3] = 7;
      return sub_46AA19(a1, a3, a4);
    }
    return 1;
  }
  if ( v4 == 78 )
  {
    if ( (a1->m128i_i32[0] & 8) == 0 )
    {
      a1[1].m128i_i32[3] = 8;
LABEL_7:
      *sub_46B984() = 22;
      sub_467EF4(a2, a3);
      return 0;
    }
    return 1;
  }
  if ( a1[2].m128i_i32[3] )
    goto LABEL_7;
  if ( v4 > 106 )
  {
    if ( v4 != 108 )
    {
      switch ( v4 )
      {
        case 't':
          a1[2].m128i_i32[3] = 7;
          break;
        case 'w':
          a1[2].m128i_i32[3] = 12;
          break;
        case 'z':
          a1[2].m128i_i32[3] = 6;
          break;
      }
      return 1;
    }
    v10 = (_BYTE *)a1[1].m128i_i32[0];
    if ( *v10 == 108 )
    {
      a1[1].m128i_i32[0] = (__int32)(v10 + 1);
      v11 = 4;
    }
    else
    {
      v11 = 3;
    }
    goto LABEL_44;
  }
  switch ( v4 )
  {
    case 'j':
      a1[2].m128i_i32[3] = 5;
      return 1;
    case 'I':
      v8 = (char *)a1[1].m128i_i32[0];
      v9 = *v8;
      if ( *v8 == 51 && v8[1] == 50 )
      {
        a1[2].m128i_i32[3] = 10;
        a1[1].m128i_i32[0] = (__int32)(v8 + 2);
      }
      else if ( v9 == 54 && v8[1] == 52 )
      {
        a1[2].m128i_i32[3] = 11;
        a1[1].m128i_i32[0] = (__int32)(v8 + 2);
      }
      else if ( v9 == 100 || v9 == 105 || v9 == 111 || v9 == 117 || v9 == 120 || v9 == 88 )
      {
        a1[2].m128i_i32[3] = 9;
      }
      return 1;
    case 'L':
      a1[2].m128i_i32[3] = 8;
      return 1;
    case 'T':
      a1[2].m128i_i32[3] = 13;
      return 1;
    case 'h':
      v6 = (_BYTE *)a1[1].m128i_i32[0];
      if ( *v6 == 104 )
      {
        a1[1].m128i_i32[0] = (__int32)(v6 + 1);
        v7 = 1;
LABEL_45:
        a1[2].m128i_i32[3] = v7;
        return 1;
      }
      v11 = 2;
LABEL_44:
      v7 = v11;
      goto LABEL_45;
  }
  return 1;
}
