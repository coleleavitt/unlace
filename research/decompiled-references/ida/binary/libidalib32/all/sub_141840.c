__int64 __fastcall sub_141840(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax

  sub_174BF0((TApplication *)a1);
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_QWORD *)(a1 + 280) = off_230688;
  *(_QWORD *)(a1 + 304) = off_236E80;
  v2 = *a2;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = &unk_237DD0;
  *(_QWORD *)(a1 + 136) = &unk_237E98;
  *(_QWORD *)(a1 + 280) = &unk_237FB0;
  *(_QWORD *)(a1 + 304) = off_238040;
  *(_WORD *)(a1 + 352) = 257;
  *(_OWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  return 257;
}

