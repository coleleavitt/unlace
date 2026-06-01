__int64 __fastcall sub_7B2390(_DWORD *a1)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( a1[2] == -2 )
  {
    v3 = sub_11CA540(*(_QWORD *)(*(_QWORD *)a1 + 24LL), 0, 0);
    v7[1] = 0;
    a1[2] = 2 * v3;
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    v7[0] = 0xFFFFFFFF00000001LL;
    sub_11C4C20(v4, 1, a1 + 2, v7, v5, v6);
    if ( a1[2] == -2 )
    {
      sub_1872CE0("");
      sub_1873130(114, 2096);
    }
  }
  return (unsigned int)a1[2];
}

