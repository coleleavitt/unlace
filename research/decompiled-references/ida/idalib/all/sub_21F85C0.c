__int64 __fastcall sub_21F85C0(__int64 a1, __int64 a2)
{
  char v2; // dl
  _DWORD *v3; // r9
  char v4; // r8
  __int64 v5; // rax
  __int64 v6; // r10
  int v7; // ecx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rsi

  v2 = *(_BYTE *)(a2 + 20);
  v3 = *(_DWORD **)a2;
  v4 = v2 & 7;
  if ( *(_UNKNOWN **)a2 == &unk_26F7BE0 )
  {
    v6 = 112;
    if ( v4 == 1 )
      goto LABEL_11;
    v5 = 120;
    v6 = 112;
    v7 = 6;
  }
  else
  {
    if ( v4 == 1 )
    {
      v6 = 120;
      goto LABEL_10;
    }
    v5 = 0;
    v6 = 120;
    v7 = 7;
  }
  if ( v4 == 3 || !v4 )
  {
    v10 = 0;
    if ( v4 == 3 )
      goto LABEL_13;
LABEL_10:
    if ( (unsigned int)(v3[2] + 64) > 0x7F )
    {
      v11 = *(_QWORD **)(a2 + 8);
      v5 = v6;
      goto LABEL_12;
    }
LABEL_11:
    v11 = (_QWORD *)(a2 + 8);
    v5 = v6;
LABEL_12:
    v10 = *v11 & 7LL;
    goto LABEL_13;
  }
  v8 = v7 + *(_DWORD *)(a2 + 16);
  v9 = *(_QWORD **)(a2 + 8);
  if ( (unsigned int)(v3[2] + 64) > 0x7F )
  {
    v9 = (_QWORD *)*v9;
    v10 = (unsigned __int8)v9 & 7;
    if ( v8 == 1 )
      goto LABEL_8;
LABEL_20:
    v5 = (8 * (_BYTE)v8) & 0x78;
    goto LABEL_13;
  }
  v10 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( v8 != 1 )
    goto LABEL_20;
LABEL_8:
  v5 = (unsigned __int8)v9 & 8;
LABEL_13:
  *(_DWORD *)(a1 + 8) = 8;
  *(_QWORD *)a1 = v5 | v10 | ((unsigned __int64)((v2 & 8) != 0) << 7);
  return a1;
}
