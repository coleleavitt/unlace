__int64 sub_22BFF70()
{
  size_t v0; // rbx
  __int64 result; // rax

  v0 = j__strlen(&byte_22F0C30);
  result = operator new(0x40u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = &unk_2D0CBF8;
  *(_DWORD *)(result + 24) = 4;
  *(_QWORD *)result = &off_2C772B8;
  *(_QWORD *)(result + 32) = &byte_22F0C30;
  *(_QWORD *)(result + 40) = v0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = 1;
  return result;
}
