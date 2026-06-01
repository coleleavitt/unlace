/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441B50
// Address: 0x0000000000441B50

//----- (0000000000441B50) ----------------------------------------------------
__int64 __fastcall sub_441B50(
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
  char v9; // al
  __int64 result; // rax
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // rbp
  void *v14; // rax
  char v15; // al
  _BYTE *v16; // rax
  char v17; // dl
  char v18[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+408h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        v9 = *(_BYTE *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v18[0] = v9;
        if ( !v9 )
          goto LABEL_4;
        v16 = sub_481540(a1 + 8, nullptr, 2u, 1u);
        goto LABEL_9;
      case 3:
        sub_47C900(v18, 1024, (__m128i *)(a1 + 8), 50);
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v11 = strlen(v18);
        v12 = v11 + 1;
        v13 = v11;
        v14 = sub_481540(a1 + 8, nullptr, v11 + 1, 1u);
        *(_QWORD *)(a1 + 8) = v14;
        *(_QWORD *)(a1 + 16) = v12;
        memmove(v14, v18, v13);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v13) = 0;
        goto LABEL_4;
      case 7:
        goto LABEL_5;
      case 9:
        v15 = *(_BYTE *)(a1 + 8);
        *(_OWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 8) = 0;
        v18[0] = v15;
        v16 = sub_481540(a1 + 8, nullptr, 2u, 1u);
LABEL_9:
        v17 = v18[0];
        *(_QWORD *)(a1 + 8) = v16;
        *(_QWORD *)(a1 + 16) = 2;
        *v16 = v17;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL) = 0;
LABEL_4:
        *(_BYTE *)a1 = 7;
LABEL_5:
        result = 0;
        break;
      case 0xA:
        if ( sub_4419D0((unsigned __int8 *)a1, 2, a2, a3, a4, a5, a6, a7, a8, a9) )
          continue;
        result = sub_479E90();
        break;
      default:
        result = sub_479EB0(0x5FBu);
        break;
    }
    return result;
  }
}
// 441CD8: variable 'a6' is possibly undefined
// 441CD8: variable 'a7' is possibly undefined
