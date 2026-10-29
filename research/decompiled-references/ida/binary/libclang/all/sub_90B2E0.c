__int64 __fastcall sub_90B2E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v11; // [rsp+0h] [rbp-78h]
  unsigned int v12; // [rsp+8h] [rbp-70h]
  _QWORD v13[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned int v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v12 = v4;
  v11 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v13, v6);
  sub_A1A5E0(v5, 56);
  v7 = sub_9D5470(a1, a2, v13);
  if ( (_BYTE)v7 )
  {
    sub_A1C490(v13);
    sub_A1DB00(v13);
    if ( v16 )
      goto LABEL_11;
    v9 = *(_QWORD *)(v14 + 32);
    if ( *(_DWORD *)(v9 + 16) != v15 && v15 )
      v9 = *(_QWORD *)(v14 + v15 + 32);
    if ( !*(_BYTE *)(v9 + 51) || (v10 = v14 + v13[0] + 72, v15 != v13[0]) )
LABEL_11:
      v10 = v14 + v13[0] + 40;
    *(_DWORD *)(v10 + 8) = v12;
    if ( v12 > 0x40 )
      sub_2585B30(v10);
    else
      *(_QWORD *)v10 = v11;
  }
  sub_A1C0C0(v13);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v7;
}

