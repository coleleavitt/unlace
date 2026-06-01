__int64 __fastcall sub_9DD390(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v9, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9DD130(a1, a2, (__int64)v9, 64);
  if ( (_BYTE)v4 )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v7 = v9[0];
    if ( v12 == 1 )
    {
      if ( v10 )
        v7 = *(unsigned int *)(v10 + 8) * v9[0];
      v8 = v11 + v7;
    }
    else
    {
      v8 = v10 + v9[0];
    }
    *(_QWORD *)sub_A1A4E0(v6, 8) = v8;
  }
  sub_A1C0C0(v9);
  return v4;
}

