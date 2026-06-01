__int64 __fastcall sub_940400(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r13
  __int64 v5; // r12
  char v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v11[48]; // [rsp+10h] [rbp-A8h] BYREF
  int v12; // [rsp+40h] [rbp-78h]
  _BYTE v13[104]; // [rsp+50h] [rbp-68h] BYREF

  v2 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v4 = *(_QWORD *)(a1 + 568);
    v5 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a2;
    v6 = *(_BYTE *)sub_A1A5A0(v4, 8);
    sub_A1A5E0(v4, 8);
    v7 = *(_QWORD *)(a1 + 568);
    v10 = v6;
    v8 = sub_A1A5A0(v7, 56);
    sub_A1C070(v11, v8);
    sub_A1A5E0(v7, 56);
    if ( !v12 )
    {
      sub_8E54E0((__int64)v13, (__int64)v11);
      sub_A1C200(v11, v13, v9);
      sub_A1C0C0(v13);
    }
    v2 = sub_93FF70(a1 + 384, v5, &v10, (__int64)v11, 1);
    sub_A1C0C0(v11);
  }
  return v2;
}

