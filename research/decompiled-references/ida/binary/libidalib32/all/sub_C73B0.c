__int64 __fastcall sub_C73B0()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = dword_251408;
  dword_251408 = HIDWORD(qword_251320);
  dword_251428 = v0;
  byte_25142C = 1;
  result = invoke_callbacks();
  byte_25142C = 0;
  if ( !v0 || dword_251428 )
    dword_251408 = dword_251428;
  return result;
}

