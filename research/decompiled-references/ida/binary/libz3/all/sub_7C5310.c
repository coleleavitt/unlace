__int64 __fastcall sub_7C5310(_QWORD *a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1429);
    }
    v5 = sub_81AF20(a2);
    return sub_7C47C0((__int64)a1, v5, a3);
  }
  else
  {
    v7 = sub_828140(a2);
    return sub_7B1C80(a1, v7, a3, v8);
  }
}

