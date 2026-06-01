void __fastcall sub_EC9790(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  *a1 = 0;
  if ( a2 )
  {
    v2 = operator new(0x18u);
    *(_QWORD *)v2 = 0;
    v3 = v2;
    *(_QWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 16) = 0;
    sub_EC6270(v2, a2, 0, v4, v5, v6);
    *a1 = v3;
  }
}
