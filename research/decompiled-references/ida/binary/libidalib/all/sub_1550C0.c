__int64 __fastcall sub_1550C0(__int64 a1)
{
  __int64 result; // rax
  int v2; // eax
  __int64 v3; // rax

  result = sub_10E500();
  if ( !(_BYTE)result )
  {
    TWindow::handleEvent();
    v2 = *(_DWORD *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 44) >= v2 )
    {
      *(_BYTE *)(a1 + 961) = 1;
      *(_DWORD *)(a1 + 44) = v2 - 1;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 976) + 104LL) = v2;
    sub_15F200(a1, 0);
    v3 = sub_15E9E0(a1);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, 0, 0);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  }
  return result;
}

