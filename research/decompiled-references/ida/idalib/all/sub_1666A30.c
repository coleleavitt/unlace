void __fastcall sub_1666A30(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = *(_QWORD *)(a1 + 2008);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 18 <= 0x3F )
    {
      if ( (unsigned __int8)(sub_B7E780(a2, 1) >> 32) )
        return;
      v2 = *(_QWORD *)(a1 + 2008);
    }
    v4 = *(_QWORD *)(v2 + 8);
    v5 = *(_DWORD *)(v4 - 8);
    if ( v5 != -1 )
    {
      v6 = sub_B31EA0(
             *(_QWORD *)(a1 + 248),
             v5,
             ((unsigned __int64)*(unsigned int *)(v4 - 4) << 32) | *(unsigned int *)(v4 - 4),
             0);
      sub_B8CC60(a2, v6, v7, v8, v9, v10);
    }
  }
}
