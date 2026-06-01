void __fastcall sub_1366780(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  char v5; // dl
  unsigned __int64 v6; // rdx
  int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // [rsp+8h] [rbp-10h] BYREF

  v3 = *(_BYTE *)(a1 + 48) == 0;
  v9 = a3;
  if ( !v3 )
  {
    if ( a3 )
    {
      v5 = *(_BYTE *)(a3 + 28);
      if ( (v5 & 0x7B) != 0 && (v5 & 0x7F) != 0x18 )
      {
        v6 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        {
          v6 = *(_QWORD *)v6;
          if ( !v6 )
            return;
        }
        else if ( !v6 )
        {
          return;
        }
        v7 = *(_BYTE *)(v6 + 8) & 0x7F;
        if ( !v7 || v7 == 24 )
        {
          v8 = *(__int64 **)(a1 + 32);
          if ( v8 == *(__int64 **)(a1 + 40) )
          {
            sub_1366630(a1 + 24, v8, &v9);
          }
          else
          {
            *v8 = a3;
            *(_QWORD *)(a1 + 32) = v8 + 1;
          }
        }
      }
    }
  }
}
