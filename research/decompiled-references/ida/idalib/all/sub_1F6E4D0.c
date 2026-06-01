__int64 __fastcall sub_1F6E4D0(_QWORD *a1, int a2)
{
  int v3; // eax
  int v4; // r11d

  if ( !a2 )
    return 0;
  v3 = sub_1F6E410(a1, a2 & 0x7FFFFFFF);
  return (unsigned int)(v4 - v3);
}
