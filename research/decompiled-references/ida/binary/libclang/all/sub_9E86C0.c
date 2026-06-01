__int64 __fastcall sub_9E86C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  unsigned int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v10, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E82D0(a1, a2, (__int64)v10);
  if ( (_BYTE)v4 )
  {
    if ( v13 )
    {
      v4 = 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 184);
      v7 = *(_QWORD *)(v11 + 32);
      if ( *(_DWORD *)(v7 + 16) != v12 && v12 )
        v7 = *(_QWORD *)(v11 + v12 + 32);
      if ( !*(_BYTE *)(v7 + 51) || (v8 = v11 + v10[0] + 72, v10[0] != v12) )
        v8 = v11 + v10[0] + 40;
      v9 = sub_A1A4E0(v6, 56);
      sub_A1BFE0(v9, v8);
    }
  }
  sub_A1C0C0(v10);
  return v4;
}

