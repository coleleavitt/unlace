__int64 __fastcall sub_1E1410(__int64 a1, unsigned __int8 a2, _DWORD *a3)
{
  _DWORD *v4; // rax
  __int64 v5; // r11
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+Ch] [rbp-2Ch]
  int v9; // [rsp+14h] [rbp-24h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_1E1330((__int64)&v7, a1, a2);
  if ( a3 )
    *a3 = v8;
  v4 = sub_1E0240(*(_QWORD *)(a1 + 728), v8);
  if ( v4 == *(_DWORD **)(v5 + 8) || v9 < 0 || (unsigned __int64)v9 >= *((_QWORD *)v4 + 3) )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(*((_QWORD *)v4 + 2) + 4LL * v9);
}
