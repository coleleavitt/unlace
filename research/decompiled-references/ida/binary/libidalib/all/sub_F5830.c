__int64 __fastcall sub_F5830(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rax

  if ( a2 )
  {
    v2 = sub_163F30(a1, 1);
    return sub_F5490(a1, v2);
  }
  else
  {
    v4 = sub_15D8D0(a1 + 440);
    return sub_F5490(a1, *(_QWORD *)(v4 + 40));
  }
}

