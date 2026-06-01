__int64 sub_D32C0()
{
  int v0; // ebx

  v0 = dword_251408;
  dword_244128 = -1;
  sub_C0300();
  if ( !(unsigned __int8)sub_D2660((unsigned int)v0, 0) )
    sub_92120((__int64)"AUTOHIDE NONE\nCommand \"SelectThread(%ld)\" failed - registers are not available", v0);
  dword_251538 |= 1u;
  return 1;
}

