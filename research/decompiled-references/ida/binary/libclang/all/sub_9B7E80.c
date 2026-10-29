void __fastcall sub_9B7E80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rdi
  void *v8; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-60h]
  _QWORD v10[3]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  unsigned int v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+40h] [rbp-28h]

  v4 = sub_A1A5A0(a1, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v9 = v5;
  v8 = *(void **)v4;
  sub_A1A5E0(a1, 16);
  sub_A176C0(v10, a2, a3);
  if ( v13 )
    goto LABEL_6;
  v6 = *(_QWORD *)(v11 + 32);
  if ( *(_DWORD *)(v6 + 16) != v12 && v12 )
    v6 = *(_QWORD *)(v11 + v12 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = v11 + v10[0] + 72, v12 != v10[0]) )
LABEL_6:
    v7 = v11 + v10[0] + 40;
  if ( *(_DWORD *)(v7 + 8) <= 0x40u && v9 <= 0x40 )
  {
    *(_QWORD *)v7 = v8;
    *(_DWORD *)(v7 + 8) = v9;
  }
  else
  {
    sub_2585EA0(v7, &v8);
  }
  sub_A1C0C0(v10);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

