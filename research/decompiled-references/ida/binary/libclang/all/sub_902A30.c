__int64 __fastcall sub_902A30(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // eax
  _DWORD v12[6]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-90h]
  __int64 v14[13]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v12, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v12, 2) && (unsigned __int8)sub_9D7120(a1, a2, v12, 2) )
  {
    sub_A1C030(v14, v13, (unsigned int)(a3 + v12[0]), (unsigned int)(a3 + v12[0]));
    v6 = sub_9E4580(a1, a2, v14, 0);
    if ( (_BYTE)v6 )
    {
      v8 = *(_QWORD *)(a1 + 184);
      v9 = sub_8FA0E0(v14);
      v10 = sub_A1A4E0(v8, 24);
      v11 = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v10 + 8) = v11;
      if ( v11 > 0x40 )
        sub_2585B30(v10);
      else
        *(_QWORD *)v10 = *(_QWORD *)v9;
      *(_BYTE *)(v10 + 12) = *(_BYTE *)(v9 + 12);
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v9 + 16);
      sub_A1C0C0(v14);
    }
    else
    {
      sub_A1C0C0(v14);
    }
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v12);
  return v6;
}

