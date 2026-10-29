__int64 __fastcall create_bytearray_linput(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = operator new(0x20u);
  *(_QWORD *)v2 = &off_2B3CC28;
  *(_QWORD *)(v2 + 24) = a1;
  *(_QWORD *)(v2 + 8) = a2;
  *(_DWORD *)(v2 + 16) = 0;
  return create_generic_linput(v2);
}
