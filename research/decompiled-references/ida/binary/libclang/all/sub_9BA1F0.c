__int64 __fastcall sub_9BA1F0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-28h]

  sub_A25550(v8, *(_QWORD *)(a1 + 176), a2);
  v2 = sub_A1C2E0(v8);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(a1 + 184);
    if ( v11 )
      goto LABEL_8;
    v5 = *(_QWORD *)(v9 + 32);
    if ( *(_DWORD *)(v5 + 16) != v10 && v10 )
      v5 = *(_QWORD *)(v9 + v10 + 32);
    if ( !*(_BYTE *)(v5 + 51) || (v6 = v9 + v8[0] + 72, v10 != v8[0]) )
LABEL_8:
      v6 = v9 + v8[0] + 40;
    v7 = sub_A1A4E0(v4, 56);
    sub_A1BFE0(v7, v6);
  }
  sub_A1C0C0(v8);
  return v2;
}

