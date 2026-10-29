__int64 sub_22C0040()
{
  size_t v0; // rbx
  __int64 result; // rax

  v0 = j__strlen(&byte_22F0C30);
  result = operator new(0x40u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = &unk_2D0CB78;
  *(_DWORD *)(result + 24) = 2;
  *(_QWORD *)result = &off_2C77350;
  *(_QWORD *)(result + 32) = &byte_22F0C30;
  *(_QWORD *)(result + 40) = v0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = 1;
  return result;
}
