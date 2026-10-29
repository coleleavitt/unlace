__int64 sub_22C00A0()
{
  size_t v0; // rbx
  __int64 result; // rax

  v0 = j__strlen(&byte_22F0C30);
  result = operator new(0x58u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = &unk_2D0CB38;
  *(_DWORD *)(result + 24) = 2;
  *(_QWORD *)result = &off_2C77480;
  *(_QWORD *)(result + 32) = &byte_22F0C30;
  *(_QWORD *)(result + 40) = v0;
  *(_QWORD *)(result + 48) = &byte_22F0C30;
  *(_QWORD *)(result + 56) = v0;
  *(_OWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 80) = 1;
  *(_BYTE *)(result + 84) = 0;
  return result;
}
