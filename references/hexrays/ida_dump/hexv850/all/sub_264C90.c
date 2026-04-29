__int64 __fastcall sub_264C90(_QWORD *a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  char v4; // al
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v7[0] = 0;
  v7[0] = get_tinfo_property(*a1, 13);
  v2 = v7[0];
  if ( LOBYTE(v7[0]) )
  {
    v3 = 4;
  }
  else
  {
    copy_tinfo_t(v7, a1);
    v2 = v7[0];
    v3 = 0;
  }
  v4 = get_tinfo_property(v2, 2) & 0x3F;
  if ( v4 == 9 )
  {
    v5 = v3 + 1;
  }
  else if ( v4 == 25 )
  {
    v5 = v3 + 2;
  }
  else
  {
    v5 = v3 + 3;
    if ( v4 != 41 )
      v5 = 0;
  }
  clear_tinfo_t(v7);
  return v5;
}
