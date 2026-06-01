__int64 __fastcall sub_50C1E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r13d
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v16; // rsi
  void *v17; // r12
  void *v18; // rbx
  char v19; // [rsp+17h] [rbp-59h] BYREF
  _QWORD v20[2]; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+28h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 1;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    if ( v3 >= *(_DWORD *)(v2 - 4) )
      return 1;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL);
    v7 = v3;
    do
    {
      v8 = v7;
      v9 = v7;
      v7 = *(_DWORD *)(v6 + 4LL * v7);
    }
    while ( v9 != v7 );
    if ( *(_QWORD *)(v2 + 8 * v8) != *(_QWORD *)(v2 + 8LL * v3) )
      break;
    v10 = v3;
    do
    {
      v11 = v10;
      v12 = v10;
      v10 = *(_DWORD *)(v6 + 4LL * v10);
    }
    while ( v12 != v10 );
    v13 = **(_QWORD **)(a1 + 144) + 112 * v11;
    v14 = v13;
    if ( *(_DWORD *)(v13 + 48) == 1 || *(_DWORD *)(v13 + 8) == 1 )
    {
      v16 = *(_QWORD *)(v2 + 8LL * v3);
      v20[0] = 0;
      v20[1] = 0;
      v21[0] = 1;
      v21[1] = 0;
      if ( (unsigned __int8)sub_1666AE0(v5 + 224, v16, v20, &v19) && !(unsigned __int8)sub_B2E7C0(v14, v20) )
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20);
        sub_182CBA0(v18, v21);
        return 0;
      }
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v20);
      sub_182CBA0(v17, v21);
      v2 = *(_QWORD *)(a2 + 8);
    }
    ++v3;
    if ( !v2 )
      return 1;
  }
  return 0;
}

