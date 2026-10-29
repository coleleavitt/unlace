__int64 __fastcall sub_3A9A90(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // r12d
  int v11; // edx
  __int64 v12; // rdx
  bool v13; // zf

  *(_QWORD *)(a2 + 32) = a3;
  *(_DWORD *)(a2 + 44) = 0;
  v7 = qword_2CCB598;
  *(_QWORD *)(a2 + 56) = a3;
  v8 = *(_QWORD *)(v7 + 1672);
  result = dbg;
  if ( !dbg )
  {
    if ( a4 )
    {
      if ( a3 != -1 )
        goto LABEL_18;
      goto LABEL_25;
    }
LABEL_15:
    v11 = 4;
    v10 = 0;
    goto LABEL_16;
  }
  if ( *(_QWORD *)(dbg + 72LL) && *(_BYTE *)(dbg + 80LL) )
  {
    if ( a4 )
    {
      if ( a3 != -1 )
      {
        result = *(_QWORD *)(dbg + 32LL);
        goto LABEL_10;
      }
LABEL_25:
      v11 = 8;
      v10 = 1;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  result = *(_QWORD *)(dbg + 32LL);
  if ( (result & 0x20000000000LL) == 0 && !a4 )
    goto LABEL_15;
  if ( a3 == -1 )
    goto LABEL_25;
LABEL_10:
  if ( (result & 8) != 0 )
  {
LABEL_11:
    v10 = 1;
    goto LABEL_12;
  }
LABEL_18:
  v12 = sub_3BE900(v8, a3, 4);
  result = v12 & 0x600;
  if ( result != 1024 )
    goto LABEL_11;
  result = sub_3C9650(v8, a3, v12, 0);
  v10 = result;
  if ( !dbg || (*(_BYTE *)(dbg + 34LL) & 0x40) == 0 )
  {
    if ( (int)result > 1 )
    {
      v13 = (_DWORD)result == 2;
      result = 4;
      if ( !v13 )
        v10 = 4;
      goto LABEL_12;
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( a5 || (result = sub_505D70(v8 + 1624, a3), v11 = 3, result) && (*(_BYTE *)(result + 42) & 1) != 0 )
    v11 = 8;
LABEL_16:
  *(_DWORD *)(a2 + 64) = v11;
  *(_DWORD *)(a2 + 80) = v10;
  return result;
}
