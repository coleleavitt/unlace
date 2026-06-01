__int64 __fastcall sub_F4A00(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rax

  if ( a2 )
  {
    v2 = sub_1635F0(a1, 1);
    return sub_F4670(a1, v2);
  }
  else
  {
    v4 = sub_15CFF0(a1 + 440);
    return sub_F4670(a1, *(_QWORD *)(v4 + 40));
  }
}

