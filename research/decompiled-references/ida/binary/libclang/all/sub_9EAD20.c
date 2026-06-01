__int64 __fastcall sub_9EAD20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  _BYTE *v7; // rbx
  _QWORD v8[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-28h]

  sub_A176A0(v8, *(_QWORD *)(a1 + 200), a3);
  v3 = sub_9E82D0(a1, a2, (__int64)v8);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 184);
    if ( v11 )
      goto LABEL_8;
    v6 = *(_QWORD *)(v9 + 32);
    if ( *(_DWORD *)(v6 + 16) != v10 && v10 )
      v6 = *(_QWORD *)(v9 + v10 + 32);
    if ( !*(_BYTE *)(v6 + 51) || (v7 = (_BYTE *)(v9 + v8[0] + 72), v10 != v8[0]) )
LABEL_8:
      v7 = (_BYTE *)(v9 + v8[0] + 40);
    *(_BYTE *)sub_A1A4E0(v5, 8) = *v7;
  }
  sub_A1C0C0(v8);
  return v3;
}

