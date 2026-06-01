__int64 __fastcall sub_62B3A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 288);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  sub_157C960(a1 + 296, a2);
  if ( a2 )
    sub_157E920(a1 + 296, a2);
  return sub_62B050(a1);
}

