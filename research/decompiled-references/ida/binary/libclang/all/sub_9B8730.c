void __fastcall sub_9B8730(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // r12
  void *v9; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-70h]
  _QWORD v11[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  unsigned int v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+40h] [rbp-38h]

  v4 = a3;
  v5 = sub_A1A5A0(a1, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v10 = v6;
  v9 = *(void **)v5;
  sub_A1A5E0(a1, 16);
  sub_A176A0(v11, a2, (unsigned int)v4);
  if ( v14 )
    goto LABEL_6;
  v7 = *(_QWORD *)(v12 + 32);
  if ( *(_DWORD *)(v7 + 16) != v13 && v13 )
    v7 = *(_QWORD *)(v12 + v13 + 32);
  if ( !*(_BYTE *)(v7 + 51) || (v8 = v12 + v11[0] + 72, v13 != v11[0]) )
LABEL_6:
    v8 = v12 + v11[0] + 40;
  sub_A1C0C0(v11);
  if ( *(_DWORD *)(v8 + 8) <= 0x40u && v10 <= 0x40 )
  {
    *(_QWORD *)v8 = v9;
    *(_DWORD *)(v8 + 8) = v10;
  }
  else
  {
    sub_2585EA0(v8, &v9);
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 176) + v4 + 4) |= 2u;
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

