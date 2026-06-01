__int64 __fastcall sub_9E8130(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v5; // eax
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  char v9; // [rsp+8h] [rbp-70h]
  _BYTE v10[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v10, v3);
  sub_A1A5E0(v2, 56);
  if ( (unsigned __int8)sub_9E4580(a1, a2, (__int64)v10, 4) )
  {
    sub_A2CB40(a1);
    v5 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
    v6 = (__int64 *)sub_A2E1A0(a1, v5, 110, 0);
    v7 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    if ( v6 )
    {
      v8 = v7;
      v9 = 1;
      sub_839C90(v6, &v8);
    }
  }
  return sub_A1C0C0(v10);
}

