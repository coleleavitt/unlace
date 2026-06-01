__int64 __fastcall sub_9E1270(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 **v4; // rax
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-30h] BYREF
  __int64 v8; // [rsp+8h] [rbp-28h] BYREF
  char v9; // [rsp+10h] [rbp-20h]

  if ( a3 != 0xFFFFFFFFLL )
    return 1;
  v7 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v4 = (unsigned __int8 **)sub_A2E0C0(a1, &v7, 2264, 0);
  v5 = (__int64 *)v4;
  if ( v4 )
  {
    sub_9B5410(v4, 2);
    v6 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    v9 = 1;
    v8 = v6;
    sub_839C90(v5, &v8);
  }
  else
  {
    sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
  }
  return 0;
}

