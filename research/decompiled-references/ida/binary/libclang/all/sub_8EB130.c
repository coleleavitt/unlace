__int64 __fastcall sub_8EB130(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11[4]; // [rsp+0h] [rbp-58h] BYREF
  void *v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+2Ch] [rbp-2Ch]
  int v15; // [rsp+30h] [rbp-28h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a3;
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v13 = v6;
  v12 = *(void **)v5;
  LOBYTE(v6) = *(_BYTE *)(v5 + 12);
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  v14 = v6;
  v15 = v5;
  sub_A1A5E0(v4, 24);
  v7 = *(_QWORD *)(a1 + 568);
  sub_2574510(v11, &v12, a2);
  v8 = sub_A1A4E0(v7, 24);
  v10 = sub_2575D20(v7, 24, v9);
  if ( v11[0] == v10 )
    sub_257CF50(v8, v11);
  else
    sub_25768A0(v8, v11);
  sub_5FF3B0(v11);
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
  return 1;
}

