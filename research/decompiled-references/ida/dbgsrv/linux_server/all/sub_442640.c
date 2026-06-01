/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442640
// Address: 0x0000000000442640

//----- (0000000000442640) ----------------------------------------------------
__int64 __fastcall sub_442640(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v9; // rax
  double v10; // xmm4_8
  double v11; // xmm5_8
  __m128i v12; // xmm0
  __int64 result; // rax
  char *v14; // [rsp+8h] [rbp-30h] BYREF
  __m128i v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  if ( !a1 )
    return sub_479EB0(0x5FBu);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        sub_47BC50(*(_QWORD *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
        goto LABEL_6;
      case 3:
        goto LABEL_6;
      case 7:
        v9 = (char *)s1;
        if ( *(_QWORD *)(a1 + 16) )
          v9 = *(char **)(a1 + 8);
        v14 = v9;
        sub_47BE00(&v14, &v15);
        sub_441540(a1, a2, a3, a4, a5, v10, v11, a8, a9);
        v12 = _mm_load_si128(&v15);
        *(_BYTE *)a1 = 3;
        *(__m128i *)(a1 + 8) = v12;
        goto LABEL_6;
      case 9:
        sub_47BD10(*(_QWORD *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
LABEL_6:
        result = 0;
        break;
      case 0xA:
        if ( sub_4419D0((unsigned __int8 *)a1, 2, a2, a3, a4, a5, a6, a7, a8, a9) )
          continue;
        result = sub_479E90();
        break;
      default:
        return sub_479EB0(0x5FBu);
    }
    return result;
  }
}
// 4426A1: variable 'v10' is possibly undefined
// 4426A1: variable 'v11' is possibly undefined
// 4426F8: variable 'a6' is possibly undefined
// 4426F8: variable 'a7' is possibly undefined
