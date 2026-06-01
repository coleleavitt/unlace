__int64 __fastcall sub_7A2DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0x8007FF8000203380LL;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  result = (unsigned int)v2 & 0xFE000000 | 0x1C054LL;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  return result;
}

