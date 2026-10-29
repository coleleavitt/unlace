__int64 __fastcall sub_9023E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // r14
  _DWORD *v9; // rbx
  _DWORD v10[6]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-90h]
  __int64 v12[13]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v10, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v10, 2) && (unsigned __int8)sub_9D7120(a1, a2, v10, 2) )
  {
    sub_A1C030(v12, v11, (unsigned int)(a3 + v10[0]), (unsigned int)(a3 + v10[0]));
    v6 = sub_9E4580(a1, a2, v12, 0);
    if ( (_BYTE)v6 )
    {
      v8 = *(_QWORD *)(a1 + 184);
      v9 = (_DWORD *)sub_8F7480(v12);
      *(_DWORD *)sub_A1A4E0(v8, 8) = *v9;
    }
    sub_A1C0C0(v12);
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v10);
  return v6;
}

