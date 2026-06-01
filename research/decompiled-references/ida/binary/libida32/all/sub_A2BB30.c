__int64 __fastcall sub_A2BB30(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0;
  result = operator new(0x38u);
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) &= ~1u;
  a1[1] = result;
  return result;
}

