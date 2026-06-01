__int64 __fastcall sub_484EF0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_2B02688;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_BYTE *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 328) = -1;
  *(_WORD *)(a1 + 332) = 0;
  *(_BYTE *)(a1 + 334) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 360) = a1 + 408;
  *(_QWORD *)(a1 + 368) = 1;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 1065353216;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_WORD *)(a1 + 472) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 424) = 0;
  *(_OWORD *)(a1 + 448) = 0;
  switch_dbctx(a3);
  sub_480FC0(a1 + 64, a4);
  result = *(unsigned int *)(a1 + 240);
  if ( (_DWORD)result )
  {
    result = sub_47F2B0((_QWORD *)(a1 + 64), a1 + 8, 0);
    if ( !(_BYTE)result )
    {
      result = sub_47F2B0((_QWORD *)(a1 + 64), a1 + 8, 0x80u);
      if ( !(_BYTE)result && ((*(_BYTE *)(a1 + 464) & 1) != 0 || a3 != *(_DWORD *)(a2 + 24)) )
      {
        if ( !under_debugger )
          interr(2937);
        BUG();
      }
    }
  }
  return result;
}

