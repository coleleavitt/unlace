__int64 __fastcall sub_787700(__int64 a1, char a2, int a3)
{
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned int v5; // ebp

  v3 = *(_QWORD *)(a1 + 352);
  v4 = *(_DWORD **)(*(_QWORD *)(a1 + 344) + 8 * v3 - 8);
  if ( v3 )
    *(_QWORD *)(a1 + 352) = v3 - 1;
  if ( !a3 || (v5 = 58, (*v4 & 0xFFFFFFFB) == 1) )
    v5 = sub_787320(a1, (__int64)v4, a2, a3);
  if ( v4 )
  {
    sub_786620((__int64)v4);
    operator delete(v4, 0x20u);
  }
  return set_qerrno(v5);
}
