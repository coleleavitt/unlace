__int64 __fastcall sub_270C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 segm_para; // rax

  v2 = getseg(a2);
  result = 0;
  if ( v2 )
  {
    segm_para = get_segm_para(v2);
    *(_QWORD *)(a1 + 352) = 0;
    memset(
      (void *)((a1 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 360) >> 3));
    *(_QWORD *)a1 = segm_para;
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 8) = a2 - 16 * segm_para;
    *(_BYTE *)(a1 + 44) = 8;
    *(_BYTE *)(a1 + 84) = 8;
    *(_BYTE *)(a1 + 124) = 8;
    *(_BYTE *)(a1 + 164) = 8;
    *(_BYTE *)(a1 + 204) = 8;
    *(_BYTE *)(a1 + 244) = 8;
    *(_BYTE *)(a1 + 284) = 8;
    *(_BYTE *)(a1 + 324) = 8;
    *(_BYTE *)(a1 + 80) = 1;
    *(_BYTE *)(a1 + 120) = 2;
    *(_BYTE *)(a1 + 160) = 3;
    *(_BYTE *)(a1 + 200) = 4;
    *(_BYTE *)(a1 + 240) = 5;
    *(_BYTE *)(a1 + 280) = 6;
    *(_BYTE *)(a1 + 320) = 7;
    if ( *(_BYTE *)(v2 + 43) == 2 )
      *(_WORD *)(a1 + 34) = 4;
    return 1;
  }
  return result;
}
