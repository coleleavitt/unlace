__int64 __fastcall sub_18C620()
{
  unsigned int v0; // ebx
  int v1; // eax

  v1 = sub_92580(0, (__int64)"ICON WARNING\nAUTOHIDE NONE\nHIDECANCEL\n@0:1464[]\nReset hidden messages?");
  LOBYTE(v0) = v1 > 0;
  if ( v1 > 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 200LL))(TProgram::application + 136LL);
  return v0;
}

