__int64 __fastcall sub_441300(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  *(_DWORD *)(a1[18] + 48LL) = -1;
  sub_1584740(a1);
  v1 = a1[20];
  if ( v1 )
    *(_DWORD *)(v1 - 4) = 0;
  v2 = a1[66];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  sub_1584740(a1 + 21);
  return sub_1584740(a1 + 41);
}

