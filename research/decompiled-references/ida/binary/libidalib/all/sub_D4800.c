__int64 sub_D4800()
{
  int v0; // ebx

  v0 = dword_252588;
  qword_245188 = -1;
  sub_C14A0();
  if ( !(unsigned __int8)sub_D3B40((unsigned int)v0, 0) )
    sub_92200((__int64)"AUTOHIDE NONE\nCommand \"SelectThread(%ld)\" failed - registers are not available", v0);
  dword_2526BC |= 1u;
  return 1;
}

