__int64 __fastcall sub_5D7540(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 2000;
  *(_QWORD *)a1 = &off_1C525A8;
  v2 = *a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 40) = a2 + 82;
  v3 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 56) = 8;
  *(_QWORD *)(a1 + 48) = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  result = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = result;
  *(_QWORD *)(a1 + 104) = 0;
  return result;
}

