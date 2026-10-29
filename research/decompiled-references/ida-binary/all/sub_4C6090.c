__int64 __fastcall sub_4C6090(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-20h]
  char v6; // [rsp+Ch] [rbp-1Ch]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v4 = DockArea::countDockWidgets;
  v5 = 0;
  v6 = a2;
  if ( a3 || (result = 0, **(_QWORD **)(a1 + 40)) )
  {
    sub_4CF2F0(&v4);
    return v5;
  }
  return result;
}
