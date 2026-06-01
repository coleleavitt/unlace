__int64 __fastcall sub_401220(int a1)
{
  char v2[7]; // [rsp+11h] [rbp-17h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( a1 != 1 )
  {
    if ( (unsigned int)init_library() )
      sub_401160();
    qexit();
  }
  strcpy(v2, "--help");
  return init_library();
}

