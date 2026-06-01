__int64 __fastcall sub_9E83F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdx
  _QWORD v13[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  unsigned int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v13, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E82D0(a1, a2, (__int64)v13);
  if ( (_BYTE)v4 )
  {
    if ( v16 )
    {
      v4 = 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 184);
      v7 = *(_QWORD *)(v14 + 32);
      if ( *(_DWORD *)(v7 + 16) != v15 && v15 )
        v7 = *(_QWORD *)(v14 + v15 + 32);
      if ( !*(_BYTE *)(v7 + 51) || (v8 = (__int64 *)(v14 + v13[0] + 72), v13[0] != v15) )
        v8 = (__int64 *)(v14 + v13[0] + 40);
      v9 = sub_A1A4E0(v6, 24);
      v10 = *v8;
      v11 = v9;
      if ( v10 == sub_2575D20(v6, 24, v12) )
        sub_257CF50(v11, v8);
      else
        sub_25768A0(v11, v8);
    }
  }
  sub_A1C0C0(v13);
  return v4;
}

