__int64 __fastcall sub_62B1C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  sub_157C960(a1 + 296, a2);
  if ( a2 )
    sub_157E920(a1 + 296, a2);
  if ( a3 )
    sub_157E920(a1 + 296, a3);
  return sub_62B050(a1);
}

