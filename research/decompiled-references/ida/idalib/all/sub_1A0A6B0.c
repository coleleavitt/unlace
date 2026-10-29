bool __fastcall sub_1A0A6B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 v5; // cl
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  if ( !*(_DWORD *)(a2 + 24) )
    return 0;
  v3 = **(_QWORD **)(a2 + 16);
  if ( !v3 )
    return 0;
  v5 = *(_BYTE *)(v3 + 28) & 0x7F;
  v6 = v5;
  v7 = (unsigned int)v5 - 53;
  if ( (unsigned int)v7 <= 1 || ((v5 + 52) & 0x7Fu) <= 1 )
  {
    v3 = sub_B72ED0(v3);
    if ( !v3 )
      return 0;
    v6 = *(_BYTE *)(v3 + 28) & 0x7F;
  }
  if ( (unsigned int)(v6 - 49) <= 2 )
  {
    v8 = *(_QWORD *)(v3 + 16);
    v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v8 & 4) != 0 )
      v9 = (_QWORD *)*v9;
    v10 = sub_B8EAA0((__int64)v9);
    v15 = *(_QWORD *)(a1 + 32);
    if ( v15 )
    {
      v16 = sub_B91570(v10, v7, v11, v12, v13, v14);
      return v16 == sub_B91570(v15 + 64, v7, v17, v18, v19, v20);
    }
  }
  return 0;
}
