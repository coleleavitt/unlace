__int64 __fastcall sub_765B30(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  unsigned int v3; // ebp
  int v4; // edx

  v1 = *(_QWORD *)(a1 + 288);
  v2 = *(_QWORD *)(a1 + 296);
  v3 = *(_DWORD *)(v1 + 4 * v2 - 4);
  v4 = v3;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 296) = v2 - 1;
    v4 = *(_DWORD *)(v1 + 4 * (v2 - 1) - 4);
    if ( v2 != 1 )
      *(_QWORD *)(a1 + 296) = v2 - 2;
  }
  sub_7659C0(a1, 171, v4);
  if ( v3 )
    sub_76C240(*(_QWORD *)(a1 + 192), v3, *(_DWORD *)(a1 + 200) - 4 - v3);
  return 0;
}

