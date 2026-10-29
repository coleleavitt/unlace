/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140050870
// Address: 0x0000000140050870

//----- (0000000140050870) ----------------------------------------------------
void *__fastcall sub_140050870(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edx
  int v5; // eax
  void *result; // rax

  sub_140002D20(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
  sub_140002D20(a1, *(_DWORD *)a2);
  sub_140002D20(a1, *(_DWORD *)(a2 + 4));
  sub_140002DC0(a1, *(_QWORD *)(a2 + 8) + 1LL);
  sub_140002D20(a1, *(unsigned __int8 *)(a2 + 16));
  v4 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  switch ( v4 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      if ( v4 > 0xB || (v5 = 2306, !_bittest(&v5, v4)) )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3295);
      }
      sub_1400068C0(a1, a2 + 24);
      sub_140002DC0(a1, *(_QWORD *)(a2 + 48) + 1LL);
      sub_140002DC0(a1, *(_QWORD *)(a2 + 56) + 1LL);
      result = sub_140002DC0(a1, *(_QWORD *)(a2 + 64) + 1LL);
      break;
    case 2u:
    case 4u:
      if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3296);
      }
      result = sub_140002D20(a1, *(_DWORD *)(a2 + 24));
      break;
    case 3u:
    case 9u:
    case 0xAu:
      if ( v4 != 3 && v4 - 9 > 1 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3297);
      }
      result = sub_1400068C0(a1, a2 + 24);
      break;
    case 5u:
      sub_140002DC0(a1, *(_QWORD *)(a2 + 24) + 1LL);
      result = sub_140002DC0(a1, *(_QWORD *)(a2 + 32) + 1LL);
      break;
    case 7u:
      sub_140002D20(a1, *(_DWORD *)(a2 + 24));
      sub_140002D20(a1, *(unsigned __int8 *)(a2 + 28));
      sub_140002DC0(a1, *(_QWORD *)(a2 + 32) + 1LL);
      result = sub_1400068C0(a1, a2 + 40);
      break;
    default:
      result = (void *)(v4 - 1);
      break;
  }
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
