__int64 __fastcall sub_9D7120(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  unsigned __int8 **v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  char v11; // [rsp+18h] [rbp-30h]

  result = 1;
  if ( *a3 == 0xFFFFFFFFLL )
  {
    v9 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v6 = (unsigned __int8 **)sub_A2E0C0(a1, &v9, 2264, 0);
    v7 = (__int64 *)v6;
    if ( v6 )
    {
      sub_9B5410(v6, a4);
      v8 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
      v11 = 1;
      v10 = v8;
      sub_839C90(v7, &v10);
    }
    else
    {
      sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    }
    return 0;
  }
  return result;
}

