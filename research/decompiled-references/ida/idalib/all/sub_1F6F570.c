__int64 __fastcall sub_1F6F570(_QWORD *a1, int a2, __int64 a3)
{
  int v3; // r11d
  unsigned __int64 v5; // rax
  int v7; // eax
  int v8; // r11d

  v3 = a2;
  if ( a2 )
  {
    v7 = sub_1F6E410(a1, a2 & 0x7FFFFFFF);
    v3 = v8 - v7;
  }
  v5 = sub_1F6E500((__int64)a1, v3);
  return sub_9B9C90(a3, v5);
}
