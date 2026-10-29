__int64 __fastcall sub_8C3B00(_QWORD *a1, bool a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  void (__fastcall *v4)(_QWORD *); // rax

  v2 = sub_8C39E0(a1[1], *((_DWORD *)a1 + 4), a2);
  a1[1] = 0;
  v3 = v2;
  if ( !a1 )
    return v3;
  v4 = *(void (__fastcall **)(_QWORD *))(*a1 + 8LL);
  if ( v4 == sub_8BD7B0 )
  {
    operator delete(a1, 0x18u);
    return v3;
  }
  v4(a1);
  return v3;
}
