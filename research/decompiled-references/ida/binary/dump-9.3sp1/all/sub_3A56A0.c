__int64 __fastcall sub_3A56A0(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned __int16 a4, double a5)
{
  __int64 v6; // r13
  __int64 v9; // [rsp+18h] [rbp-70h]
  _DWORD v10[6]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]

  v6 = **(_QWORD **)(a1 + 24);
  v12 = __readfsqword(0x28u);
  v10[4] = 0;
  copy_argloc();
  v11 = v6;
  v9 = -1;
  if ( (unsigned int)(*a3 - 3) > 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC784u, a5);
    BUG();
  }
  sub_1C7740(v10, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), (__int64)a3, a4);
  copy_argloc();
  cleanup_argloc();
  LOBYTE(a3) = (unsigned int)(*a2 - 3) <= 1;
  cleanup_argloc();
  return (unsigned int)a3;
}
