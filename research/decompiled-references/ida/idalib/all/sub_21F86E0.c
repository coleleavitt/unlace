__int64 __fastcall sub_21F86E0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r9
  char v3; // dl
  char v4; // al
  __int64 v5; // rcx
  int v6; // r8d
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rsi

  v2 = *(_DWORD **)a2;
  v3 = *(_BYTE *)(a2 + 20);
  if ( *(_UNKNOWN **)a2 == &unk_26F7BE0 )
  {
    v4 = v3 & 7;
    v5 = 120;
    v6 = 7;
    if ( (v3 & 7) == 1 )
      goto LABEL_11;
  }
  else
  {
    v4 = v3 & 7;
    v5 = 0;
    if ( (v3 & 7) == 1 )
      goto LABEL_10;
    v6 = 8;
  }
  if ( v4 == 3 || !v4 )
  {
    v9 = 0;
    if ( v4 == 3 )
      goto LABEL_13;
LABEL_10:
    if ( (unsigned int)(v2[2] + 64) > 0x7F )
    {
      v10 = *(_QWORD **)(a2 + 8);
      goto LABEL_12;
    }
LABEL_11:
    v10 = (_QWORD *)(a2 + 8);
LABEL_12:
    v9 = *v10 & 7LL;
    goto LABEL_13;
  }
  v7 = *(__int64 **)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 16) + v6;
  if ( (unsigned int)(v2[2] + 64) > 0x7F )
  {
    a2 = *v7;
    v9 = *v7 & 7;
    if ( v8 == 1 )
      goto LABEL_8;
LABEL_18:
    v5 = (8 * (_BYTE)v8) & 0x78;
    goto LABEL_13;
  }
  LOBYTE(a2) = *(_QWORD *)(a2 + 8);
  v9 = (unsigned __int8)v7 & 7;
  if ( v8 != 1 )
    goto LABEL_18;
LABEL_8:
  v5 = a2 & 8;
LABEL_13:
  *(_DWORD *)(a1 + 8) = 8;
  *(_QWORD *)a1 = v9 | v5 | ((unsigned __int64)((v3 & 8) != 0) << 7);
  return a1;
}
