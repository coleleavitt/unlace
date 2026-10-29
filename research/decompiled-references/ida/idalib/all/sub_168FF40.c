unsigned __int64 __fastcall sub_168FF40(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 8) & 0x7Fu) - 58 <= 3 )
  {
    v2 = v1 - 64;
    if ( v1 != 64 )
    {
      v3 = *(_QWORD *)(v2 + 72);
      if ( (v3 & 0x1000000) != 0 )
        goto LABEL_10;
LABEL_6:
      if ( (v3 & 0x10000) == 0 )
      {
        v4 = *(_QWORD *)(v2 + 40);
        if ( (v4 & 7) != 0 || (v5 = v4 & 0xFFFFFFFFFFFFFFF8LL) == 0 || !**(_DWORD **)(v5 + 16) )
        {
          while ( 1 )
          {
LABEL_10:
            v6 = *(_QWORD *)(sub_B8C1B0(v2 + 64) + 16);
            v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v6 & 4) != 0 )
              v7 = *(_QWORD *)v7;
            if ( (*(_BYTE *)(v7 + 8) & 0x7Fu) - 58 > 3 )
              break;
            v8 = v7 - 64;
            if ( !v8 )
              break;
            v2 = v8;
            v3 = *(_QWORD *)(v8 + 72);
            if ( (v3 & 0x1000000) == 0 )
              goto LABEL_6;
          }
        }
      }
    }
  }
  return v2;
}
