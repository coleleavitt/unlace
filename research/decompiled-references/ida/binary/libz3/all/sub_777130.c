__int64 *__fastcall sub_777130(__int64 *a1, _QWORD *a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v8 = a2[1];
  *a1 = 0;
  a1[1] = v8;
  sub_1584740(a2);
  v9 = a2[20];
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  v10 = a2[66];
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  sub_1584740(a2 + 21);
  sub_1584740(a2 + 41);
  sub_76E0F0((__int64)a2, a4, a5);
  sub_773AA0((__int64)a2, a3, a1, a2 + 62);
  return a1;
}

