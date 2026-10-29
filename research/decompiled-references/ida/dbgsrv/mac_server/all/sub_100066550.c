/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066550
// Address: 0x0000000100066550

//----- (0000000100066550) ----------------------------------------------------
__int64 __fastcall sub_100066550(void **a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // r14

  sub_100032FE0(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
  sub_100032FE0(a1, *(_DWORD *)a2);
  sub_100032FE0(a1, *(_DWORD *)(a2 + 4));
  sub_10005A320(a1, *(_QWORD *)(a2 + 8) + 1LL);
  result = sub_100032FE0(a1, *(unsigned __int8 *)(a2 + 16));
  switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      sub_100055750((__int64)a1, a2 + 24);
      sub_10005A320(a1, *(_QWORD *)(a2 + 48) + 1LL);
      sub_10005A320(a1, *(_QWORD *)(a2 + 56) + 1LL);
      v3 = *(_QWORD *)(a2 + 64);
      return sub_10005A320(a1, v3 + 1);
    case 2:
    case 4:
      return sub_100032FE0(a1, *(_DWORD *)(a2 + 24));
    case 3:
    case 9:
    case 0xA:
      v4 = a2 + 24;
      goto LABEL_6;
    case 5:
      sub_10005A320(a1, *(_QWORD *)(a2 + 24) + 1LL);
      v3 = *(_QWORD *)(a2 + 32);
      return sub_10005A320(a1, v3 + 1);
    case 7:
      sub_100032FE0(a1, *(_DWORD *)(a2 + 24));
      sub_100032FE0(a1, *(unsigned __int8 *)(a2 + 28));
      sub_10005A320(a1, *(_QWORD *)(a2 + 32) + 1LL);
      v4 = a2 + 40;
LABEL_6:
      result = sub_100055750((__int64)a1, v4);
      break;
    default:
      return result;
  }
  return result;
}
