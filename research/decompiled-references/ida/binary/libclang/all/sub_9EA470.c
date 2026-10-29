__int64 __fastcall sub_9EA470(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  unsigned int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-28h]

  sub_A176A0(v9, *(_QWORD *)(a1 + 200), a3);
  v3 = sub_9E82D0(a1, a2, (__int64)v9);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 184);
    if ( v12 )
      goto LABEL_8;
    v6 = *(_QWORD *)(v10 + 32);
    if ( *(_DWORD *)(v6 + 16) != v11 && v11 )
      v6 = *(_QWORD *)(v10 + v11 + 32);
    if ( !*(_BYTE *)(v6 + 51) || (v7 = v10 + v9[0] + 72, v11 != v9[0]) )
LABEL_8:
      v7 = v10 + v9[0] + 40;
    v8 = sub_A1A4E0(v5, 56);
    sub_A1BFE0(v8, v7);
  }
  sub_A1C0C0(v9);
  return v3;
}

