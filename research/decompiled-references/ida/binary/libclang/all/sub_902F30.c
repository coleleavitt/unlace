__int64 __fastcall sub_902F30(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  _DWORD v14[6]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-A0h]
  __int64 v16[15]; // [rsp+40h] [rbp-78h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v14, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v14, 2) && (unsigned __int8)sub_9D7120(a1, a2, v14, 2) )
  {
    sub_A1C030(v16, v15, (unsigned int)(a3 + v14[0]), (unsigned int)(a3 + v14[0]));
    v6 = sub_9E4580(a1, a2, v16, 0);
    if ( (_BYTE)v6 )
    {
      v8 = *(_QWORD *)(a1 + 184);
      v9 = (__int64 *)sub_8F8D80(v16);
      v10 = sub_A1A4E0(v8, 24);
      v11 = *v9;
      v12 = v10;
      if ( v11 == sub_2575D20(v8, 24, v13) )
        sub_257CF50(v12, v9);
      else
        sub_25768A0(v12, v9);
    }
    sub_A1C0C0(v16);
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v14);
  return v6;
}

