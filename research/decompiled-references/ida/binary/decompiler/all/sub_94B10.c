__int64 __fastcall sub_94B10(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r14
  _QWORD v7[10]; // [rsp+0h] [rbp-50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v7[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 72) )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = *(_QWORD *)(a1 + 64);
    if ( !v3 )
      v3 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = v1;
  }
  sub_122180(v7, *(_QWORD *)(a1 + 8), v1, 1);
  v4 = sub_126C30(*(_QWORD *)(a1 + 8), (unsigned int)v7, *(_QWORD *)(v3 + 16), *(_QWORD *)(v2 + 16), 0, 0, 257);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 64) && *(_QWORD *)(a1 + 24) == v4 && *(_DWORD *)(a1 + 72) == 1 )
    v5 = sub_126C30(*(_QWORD *)(a1 + 8), (unsigned int)v7, *(_QWORD *)(v4 + 16), *(_QWORD *)(v2 + 16), 0, 0, 257);
  if ( v7[2] )
  {
    v7[3] = 0;
    qfree();
  }
  qfree();
  return v5;
}
