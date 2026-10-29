__int64 __fastcall sub_902B60(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  _DWORD v13[6]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-A0h]
  _QWORD v15[4]; // [rsp+40h] [rbp-78h] BYREF
  int v16; // [rsp+60h] [rbp-58h]
  int v17; // [rsp+70h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v13, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v13, 2) && (unsigned __int8)sub_9D7120(a1, a2, v13, 2) )
  {
    sub_A1C030(v15, v14, (unsigned int)(a3 + v13[0]), (unsigned int)(a3 + v13[0]));
    v6 = sub_9E4580(a1, a2, v15, 0);
    if ( (_BYTE)v6 )
    {
      v8 = *(_QWORD *)(a1 + 184);
      v9 = v15[3];
      v10 = v15[0];
      if ( !v17 && *(_BYTE *)(sub_8E5480((__int64)v15) + 51) && v10 == v16 )
        v11 = v9 + v10 + 72;
      else
        v11 = v9 + v10 + 40;
      v12 = sub_A1A4E0(v8, 56);
      sub_A1BFE0(v12, v11);
      sub_A1C0C0(v15);
    }
    else
    {
      sub_A1C0C0(v15);
    }
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v13);
  return v6;
}

