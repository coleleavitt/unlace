__int64 __fastcall sub_90E540(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdi
  _BYTE v13[64]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-68h] BYREF
  int v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+70h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v13, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v6, 2) && (unsigned __int8)sub_9D7120(a1, a2, v6, 2) )
  {
    sub_A1C030(v14, *(_QWORD *)(v6 + 24), (unsigned int)(a3 + *(_DWORD *)v6), (unsigned int)(a3 + *(_DWORD *)v6));
    v7 = sub_9E26A0(a1, a2, v14);
    if ( (_BYTE)v7 )
    {
      sub_A1DB00(v14);
      v10 = v14[3];
      v11 = v14[0];
      if ( v16 || !*(_BYTE *)(sub_8E5480((__int64)v14) + 51) || (v12 = v10 + v11 + 72, v11 != v15) )
        v12 = v10 + v11 + 40;
      sub_A1C120(v12, v13, v9);
      sub_A1C0C0(v14);
    }
    else
    {
      sub_A1C0C0(v14);
    }
  }
  else
  {
    v7 = 0;
  }
  sub_A1C0C0(v13);
  return v7;
}

