__int64 __fastcall sub_3A53C0(__int64 a1, _DWORD *a2, unsigned int a3, char a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // r12d
  int v11; // edx
  __int64 v12; // rdx

  a2[8] = a3;
  a2[10] = 0;
  v7 = qword_2CA1698;
  a2[13] = a3;
  v8 = *(_QWORD *)(v7 + 1480);
  result = dbg;
  if ( !dbg )
  {
    if ( a4 )
    {
      if ( a3 != -1 )
        goto LABEL_18;
      goto LABEL_23;
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
LABEL_23:
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
    goto LABEL_23;
LABEL_10:
  if ( (result & 8) != 0 )
  {
LABEL_11:
    v10 = 1;
    goto LABEL_12;
  }
LABEL_18:
  v12 = sub_3B9AA0(v8, a3, 4);
  result = v12 & 0x600;
  if ( result != 1024 )
    goto LABEL_11;
  v10 = sub_3C4370(v8, a3, v12, 0);
  result = dbg;
  if ( !dbg || (*(_BYTE *)(dbg + 34LL) & 0x40) == 0 )
  {
    if ( v10 > 1 )
    {
      v10 = 2 * (v10 != 2) + 2;
      goto LABEL_12;
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( a5 || (result = sub_4EE820(v8 + 1552, a3), v11 = 3, result) && (*(_BYTE *)(result + 22) & 1) != 0 )
    v11 = 8;
LABEL_16:
  a2[14] = v11;
  a2[18] = v10;
  return result;
}

