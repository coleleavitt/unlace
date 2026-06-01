__int64 clang_createCXCursorSet()
{
  __int64 result; // rax

  result = operator new(0x18u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

