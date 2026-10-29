__int64 __fastcall sub_D30DE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  sub_1584740(a1);
  v1 = *(_QWORD *)(a1 + 160);
  if ( v1 )
    *(_DWORD *)(v1 - 4) = 0;
  v2 = *(_QWORD *)(a1 + 528);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  sub_1584740(a1 + 168);
  return sub_1584740(a1 + 328);
}

