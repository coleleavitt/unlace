__int64 __fastcall sub_B31730(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  sub_BDD210();
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)a1 = off_1C72170;
  v2 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = a1;
  *(_QWORD *)(a1 + 264) = v2 + 396;
  *(_QWORD *)(a1 + 336) = a1 + 384;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = off_1C56E00;
  *(_QWORD *)(a1 + 376) = a1 + 328;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  result = sub_180C0A0(a1 + 400);
  *(_DWORD *)(a1 + 440) = 0;
  return result;
}

