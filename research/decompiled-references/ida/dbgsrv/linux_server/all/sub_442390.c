/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442390
// Address: 0x0000000000442390

//----- (0000000000442390) ----------------------------------------------------
__int64 __fastcall sub_442390(
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
  char *v11; // rdi
  double v12; // xmm4_8
  double v13; // xmm5_8
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+0h] [rbp-18h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( !a1 )
    return sub_479EB0(0x5FBu);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        return 0;
      case 3:
        v14 = sub_47BBB0(v17, (const __m128i *)(a1 + 8), 0);
        switch ( v14 )
        {
          case 1:
            v16 = v17[0];
            *(_BYTE *)a1 = 2;
            *(_QWORD *)(a1 + 8) = v16;
            return 0;
          case 4:
            v15 = 86;
            return sub_479EB0(v15);
          case 5:
            v15 = 98;
            return sub_479EB0(v15);
        }
        v15 = 97;
        if ( v14 != 2 )
          return 0;
        return sub_479EB0(v15);
      case 7:
        v11 = (char *)s1;
        if ( *(_QWORD *)(a1 + 16) )
          v11 = *(char **)(a1 + 8);
        v17[0] = 0;
        sub_485540(v11, "%lli", v17);
        sub_441540(a1, a2, a3, a4, a5, v12, v13, a8, a9);
        *(_QWORD *)(a1 + 8) = v17[0];
        return 0;
      case 9:
        *(_BYTE *)a1 = 2;
        return 0;
      case 0xA:
        if ( sub_4419D0((unsigned __int8 *)a1, 2, a2, a3, a4, a5, a6, a7, a8, a9) )
          continue;
        return sub_479E90();
      default:
        return sub_479EB0(0x5FBu);
    }
  }
}
// 44241E: variable 'v12' is possibly undefined
// 44241E: variable 'v13' is possibly undefined
// 442458: variable 'a6' is possibly undefined
// 442458: variable 'a7' is possibly undefined
