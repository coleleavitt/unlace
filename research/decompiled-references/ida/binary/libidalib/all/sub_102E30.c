__int64 __fastcall sub_102E30(__int64 a1, char a2)
{
  __int64 v3; // rax

  if ( !a2 )
    return 1;
  if ( (unsigned __int8)sub_1023A0(a1, nullptr) )
  {
    sub_100EC0(a1);
    if ( *(_BYTE *)(a1 + 1250) )
    {
      v3 = *(_QWORD *)a1;
      *(_BYTE *)(a1 + 1250) = 0;
      (*(void (__fastcall **)(__int64))(v3 + 384))(a1);
    }
    return 1;
  }
  else
  {
    TScreen::makeBeep(nullptr);
    return 0;
  }
}

