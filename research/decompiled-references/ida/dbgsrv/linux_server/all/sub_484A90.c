/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_484A90
// Address: 0x0000000000484A90

//----- (0000000000484A90) ----------------------------------------------------
void __fastcall sub_484A90(__m128i *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rdx

  if ( a1 )
  {
    if ( a4 )
    {
      sub_484A10((unsigned __int64 *)a1, a1, a2);
      switch ( a2 )
      {
        case 1u:
          a1->m128i_i8[0] += a3;
          goto LABEL_11;
        case 2u:
          a1->m128i_i16[0] += a3;
          goto LABEL_11;
        case 4u:
          a1->m128i_i32[0] += a3;
          goto LABEL_11;
        case 8u:
          a1->m128i_i64[0] += a3;
          goto LABEL_11;
        case 0x10u:
LABEL_5:
          v6 = a1->m128i_i64[0];
          v7 = __CFADD__(a1->m128i_i64[0], a3);
          v8 = a1->m128i_i64[0] + a3;
          a1->m128i_i64[0] = v8;
          if ( a3 > 0 && v7 )
          {
            ++a1->m128i_i64[1];
          }
          else if ( a3 < 0 && v6 < v8 )
          {
            --a1->m128i_i64[1];
          }
          if ( !a4 )
            return;
          goto LABEL_11;
        default:
LABEL_11:
          sub_484A10((unsigned __int64 *)a1, a1, a2);
          break;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 1u:
          a1->m128i_i8[0] += a3;
          break;
        case 2u:
          a1->m128i_i16[0] += a3;
          break;
        case 4u:
          a1->m128i_i32[0] += a3;
          break;
        case 8u:
          a1->m128i_i64[0] += a3;
          break;
        case 0x10u:
          goto LABEL_5;
        default:
          return;
      }
    }
  }
}
