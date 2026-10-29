__int64 __fastcall sub_C8830()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = dword_252588;
  dword_252588 = HIDWORD(qword_2524A0);
  dword_2525A8 = v0;
  byte_2525AC = 1;
  result = invoke_callbacks();
  byte_2525AC = 0;
  if ( !v0 || dword_2525A8 )
    dword_252588 = dword_2525A8;
  return result;
}

