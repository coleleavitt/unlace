__int64 __fastcall sub_21F8120(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r9
  __int64 result; // rax
  char v4; // dl
  char v5; // di
  __int64 v6; // r8
  __int64 v7; // r10
  int v8; // ecx
  _QWORD *v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rsi

  v2 = *(_DWORD **)a2;
  result = a1;
  v4 = *(_BYTE *)(a2 + 20);
  if ( *(_UNKNOWN **)a2 == &unk_26F7BE0 )
  {
    v5 = v4 & 7;
    v6 = 112;
    if ( (v4 & 7) != 1 )
    {
      v6 = 120;
      v7 = 112;
      v8 = 6;
      goto LABEL_4;
    }
    goto LABEL_16;
  }
  v5 = v4 & 7;
  if ( (v4 & 7) == 1 )
  {
    v6 = 120;
    if ( (unsigned int)(v2[2] + 64) > 0x7F )
    {
      v12 = *(_QWORD **)(a2 + 8);
LABEL_17:
      v11 = *v12 & 7LL;
      goto LABEL_13;
    }
LABEL_16:
    v12 = (_QWORD *)(a2 + 8);
    goto LABEL_17;
  }
  v6 = 0;
  v7 = 120;
  v8 = 7;
LABEL_4:
  if ( v5 != 3 && v5 )
  {
    v9 = *(_QWORD **)(a2 + 8);
    v10 = *(_DWORD *)(a2 + 16) + v8;
    if ( (unsigned int)(v2[2] + 64) > 0x7F )
    {
      v9 = (_QWORD *)*v9;
      v11 = (unsigned __int8)v9 & 7;
      if ( v10 == 1 )
        goto LABEL_8;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 8) & 7LL;
      if ( v10 == 1 )
      {
LABEL_8:
        v6 = (unsigned __int8)v9 & 8;
        goto LABEL_13;
      }
    }
    v6 = (8 * (_BYTE)v10) & 0x78;
    goto LABEL_13;
  }
  v11 = 0;
  if ( v5 != 3 )
    v6 = v7;
LABEL_13:
  *(_DWORD *)(result + 8) = 8;
  *(_QWORD *)result = v6 | v11 | ((unsigned __int64)((v4 & 8) != 0) << 7);
  return result;
}
