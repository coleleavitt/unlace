__int64 __fastcall sub_13F340(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  unsigned __int16 v4; // ax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d

  result = TWindow::handleEvent(a1);
  if ( *a2 == 256 && a2[4] == 9 )
  {
    result = (unsigned int)dword_252E98;
    if ( !dword_252E98 )
    {
      v3 = *(_QWORD *)(a1 + 8);
      dword_252E98 = 1;
      v4 = (*(__int64 (__fastcall **)(__int64))(v3 + 64))(a1 + 8);
      sub_144300(a1, v4, v5, v6, v7, v8);
      result = TView::clearEvent(a1 + 8, a2);
      dword_252E98 = 0;
    }
  }
  return result;
}

