__int64 __fastcall DockArea::enforceVisibility(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // rax
  int v4; // ebp

  v2 = (_DWORD *)sub_4CE740(a2);
  if ( !a2[44] )
  {
    if ( !v2
      || v2[10] != 2
      || (v4 = v2[14], v4 == (*(unsigned int (__fastcall **)(_DWORD *, _BYTE *))(*(_QWORD *)v2 + 448LL))(v2, a2)) )
    {
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a2 + 104LL))(a2, 1);
    }
  }
  return 0;
}
