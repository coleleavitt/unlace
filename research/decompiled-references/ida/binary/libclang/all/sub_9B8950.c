__int64 __fastcall sub_9B8950(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // r13d
  __int64 v5; // r14
  char v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v10; // [rsp+10h] [rbp-78h]
  _QWORD v11[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  unsigned int v13; // [rsp+40h] [rbp-48h]
  int v14; // [rsp+50h] [rbp-38h]

  sub_A1BF70(v11, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = *(_QWORD *)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v6 = *(_BYTE *)(v3 + 12);
  v10 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  if ( v14 )
    goto LABEL_6;
  v7 = *(_QWORD *)(v12 + 32);
  if ( *(_DWORD *)(v7 + 16) != v13 && v13 )
    v7 = *(_QWORD *)(v12 + v13 + 32);
  if ( !*(_BYTE *)(v7 + 51) || (v8 = v12 + v11[0] + 72, v13 != v11[0]) )
LABEL_6:
    v8 = v12 + v11[0] + 40;
  if ( *(_DWORD *)(v8 + 8) > 0x40u && *(_QWORD *)v8 )
    operator delete[](*(void **)v8);
  *(_QWORD *)v8 = v5;
  *(_DWORD *)(v8 + 8) = v4;
  *(_BYTE *)(v8 + 12) = v6;
  *(_DWORD *)(v8 + 16) = v10;
  sub_A1DB00(v11);
  return sub_A1C0C0(v11);
}

