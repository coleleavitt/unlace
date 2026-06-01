__int64 __fastcall sub_DB1930(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int64 v4; // rbp
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+4h] [rbp-34h] BYREF
  char v10; // [rsp+Ch] [rbp-2Ch]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_QWORD *)sub_DFDA20(v1, 8);
  sub_DFDA50(v1, 8);
  v3 = *(_QWORD *)(a1 + 176);
  v4 = *(_QWORD *)sub_DFDA20(v3, 8);
  sub_DFDA50(v3, 8);
  if ( v2 )
  {
    *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v4 / v2;
    return 1;
  }
  else
  {
    v6 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v7 = (__int64 *)sub_E0FED0(a1, v6, 2508, 0);
    v8 = sub_EC8B80(*(_QWORD *)(v6 + 24));
    if ( v7 )
    {
      v9 = v8;
      v10 = 1;
      sub_AC88D0(v7, &v9);
    }
    return 0;
  }
}

