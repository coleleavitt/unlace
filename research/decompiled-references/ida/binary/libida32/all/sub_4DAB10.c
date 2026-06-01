__int64 __fastcall sub_4DAB10(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x40u);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = result + 16;
  *(_QWORD *)(result + 40) = result + 16;
  *(_QWORD *)(result + 48) = 0;
  *(_BYTE *)(result + 56) = 0;
  return result;
}

