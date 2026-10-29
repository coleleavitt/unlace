__int64 __fastcall sub_5AC560(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x38u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = 35;
  *(_BYTE *)(result + 48) = 0;
  *(_OWORD *)(result + 24) = 0;
  return result;
}

