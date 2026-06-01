/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465710
// Address: 0x0000000000465710

//----- (0000000000465710) ----------------------------------------------------
__int64 __fastcall sub_465710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0

  sub_475870(a1, a2, 0);
  sub_46F120(a1 + 192, 0, 1000);
  *(_QWORD *)(a1 + 296) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 304) = -1;
  *(_QWORD *)a1 = off_51DF50;
  *(_QWORD *)(a1 + 192) = off_51DFA8;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 376) = -1;
  *(_BYTE *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a3;
  sub_475A18((_QWORD *)a1);
  v5 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 232) = sub_462B18;
  return sub_4770C8(v5);
}
// 51DF50: using guessed type __int64 (__fastcall *off_51DF50[9])();
// 51DFA8: using guessed type __int64 (__fastcall *off_51DFA8[9])();
