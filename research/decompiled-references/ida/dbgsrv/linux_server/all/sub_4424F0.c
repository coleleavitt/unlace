/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4424F0
// Address: 0x00000000004424F0

//----- (00000000004424F0) ----------------------------------------------------
__int64 __fastcall sub_4424F0(
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
  __int64 result; // rax
  char *v11; // rdi
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  _QWORD v17[3]; // [rsp+0h] [rbp-18h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( !a1 )
    return sub_479EB0(0x5FBu);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        *(_BYTE *)a1 = 9;
        return 0;
      case 3:
        v15 = sub_47BC00(v17, (const __m128i *)(a1 + 8), 0);
        switch ( v15 )
        {
          case 1:
            goto LABEL_7;
          case 4:
            v16 = 86;
            break;
          case 5:
            v16 = 98;
            break;
          default:
            v16 = 97;
            if ( v15 != 2 )
              return 0;
            break;
        }
        result = sub_479EB0(v16);
        break;
      case 7:
        v11 = (char *)s1;
        if ( *(_QWORD *)(a1 + 16) )
          v11 = *(char **)(a1 + 8);
        v17[0] = 0;
        sub_485540(v11, "%lli", v17);
        sub_441540(a1, a2, a3, a4, a5, v12, v13, a8, a9);
LABEL_7:
        v14 = v17[0];
        *(_BYTE *)a1 = 9;
        *(_QWORD *)(a1 + 8) = v14;
        return 0;
      case 9:
        return 0;
      case 0xA:
        if ( sub_4419D0((unsigned __int8 *)a1, 2, a2, a3, a4, a5, a6, a7, a8, a9) )
          continue;
        return sub_479E90();
      default:
        return sub_479EB0(0x5FBu);
    }
    return result;
  }
}
// 44257E: variable 'v12' is possibly undefined
// 44257E: variable 'v13' is possibly undefined
// 4425B8: variable 'a6' is possibly undefined
// 4425B8: variable 'a7' is possibly undefined
