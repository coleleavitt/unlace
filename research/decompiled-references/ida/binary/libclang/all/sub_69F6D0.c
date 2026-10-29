__int64 __fastcall sub_69F6D0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0;
  result = operator new(0x38u);
  *(_BYTE *)(result + 4) &= ~1u;
  *(_DWORD *)result = 0;
  a1[1] = result;
  return result;
}

