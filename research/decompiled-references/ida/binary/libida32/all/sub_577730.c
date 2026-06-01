__int64 __fastcall sub_577730(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x110u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 72) = 0;
  memset((void *)(result + 88), 0, 0x80u);
  *(_QWORD *)(result + 216) = 0;
  *(_WORD *)(result + 264) = 0;
  *(_QWORD *)(result + 256) = 0;
  *(_BYTE *)(result + 266) = 0;
  *(_OWORD *)(result + 224) = 0;
  return result;
}

