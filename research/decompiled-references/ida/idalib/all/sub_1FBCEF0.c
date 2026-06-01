char __fastcall sub_1FBCEF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // dl

  sub_1FBCB60((__int64 *)a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 68) & 2) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 68) & 1 | (2 * ((*(_BYTE *)(a2 + 68) >> 2) & 3)));
  v5 = *(_BYTE *)(a2 + 68);
  if ( (v5 & 0xC) == 0xC )
  {
    sub_1F85840(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF0LL,
      *(_QWORD **)(a1 + 24),
      v3,
      v4);
  }
  else if ( (v5 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 72);
    if ( (v5 & 0xC) != 0 )
      v9 = *(_QWORD *)(v9 + 8);
    sub_183F100(a1 + 32, v9);
  }
  if ( !*(_QWORD *)(a2 + 40) || (v6 = sub_1F6E380(*(_QWORD *)a1), sub_B72A20(a2, v6)) )
  {
    v8 = sub_A62C50(*(_QWORD *)(a1 + 8), a2);
    sub_1F92A90(*(_QWORD *)(a1 + 16), v8, *(_QWORD *)(a1 + 24));
    v7 = *(_QWORD *)(a2 + 16);
    if ( (v7 & 4) == 0 )
      goto LABEL_6;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( (v7 & 4) == 0 )
      goto LABEL_6;
  }
  v7 &= 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)v7 )
    goto LABEL_7;
LABEL_6:
  if ( (*(_BYTE *)(a2 + 29) & 3) == 0 )
  {
    LOBYTE(v7) = sub_B8C400(a2, 0);
    if ( !(_BYTE)v7 && *(char *)(a2 + 28) >= 0 )
    {
      LOBYTE(v7) = sub_B8C090((_BYTE *)a2);
      if ( !(_BYTE)v7 && (*(_BYTE *)(a2 + 29) & 0x10) == 0 )
      {
        v7 = *(_QWORD *)(a2 + 8) & 7LL;
        if ( v7 != 4 )
        {
          LOBYTE(v7) = *(_BYTE *)(a2 + 68);
          v10 = v7 & 0xC;
          if ( (v7 & 1) != 0 )
          {
            if ( v10 == 12 || (v7 & 0xC) != 0 || *(_QWORD *)(a2 + 72) )
              goto LABEL_7;
          }
          else if ( v10 == 12 )
          {
            goto LABEL_7;
          }
          if ( (v7 & 0xC) == 0 && (*(_BYTE *)(a2 + 56) & 4) == 0 )
          {
            LODWORD(v7) = (*(_BYTE *)(a2 + 28) & 0x7F) - 50;
            if ( (unsigned int)v7 > 1 )
            {
              if ( *(_QWORD *)(a2 + 40) )
              {
                LODWORD(v7) = *(_DWORD *)(*(_QWORD *)a1 + 3496LL);
                *(_DWORD *)(a1 + 228) = v7;
              }
            }
          }
        }
      }
    }
  }
LABEL_7:
  *(_DWORD *)(a1 + 224) = 68;
  return v7;
}
