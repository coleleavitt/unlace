__int64 __fastcall sub_3C7A60(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 result; // rax

  v4 = a4;
  result = qalloc_or_throw(24, a2, a3, a4);
  *(_QWORD *)result = &off_4E8B80;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = a3 >> 16;
  *(_DWORD *)(result + 16) = (unsigned __int16)a3;
  return result;
}
