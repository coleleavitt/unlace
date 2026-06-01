unsigned __int64 __fastcall sub_20BEF00(unsigned int *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rsi
  __int64 v13; // rdx

  result = *a1;
  if ( (_DWORD)result == 127 )
  {
    v13 = *(_QWORD *)(a2 + 32);
    result = *(_QWORD *)(a2 + 24) - v13;
    if ( result > 4 )
    {
      *(_DWORD *)v13 = 1935762976;
      *(_BYTE *)(v13 + 4) = 116;
      *(_QWORD *)(a2 + 32) += 5LL;
      return result;
    }
    v11 = 5;
    v12 = " fast";
    return sub_227BF10(a2, v12, v11);
  }
  if ( (result & 1) != 0 )
  {
    v4 = *(_QWORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v4 > 7u )
    {
      *v4 = 0x636F737361657220LL;
      *(_QWORD *)(a2 + 32) += 8LL;
    }
    else
    {
      sub_227BF10(a2, " reassoc", 8);
    }
    result = *a1;
    if ( (result & 2) == 0 )
    {
LABEL_4:
      if ( (result & 4) == 0 )
        goto LABEL_5;
      goto LABEL_16;
    }
  }
  else if ( (result & 2) == 0 )
  {
    goto LABEL_4;
  }
  v5 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v5) > 4 )
  {
    *(_DWORD *)v5 = 1634627104;
    *(_BYTE *)(v5 + 4) = 110;
    *(_QWORD *)(a2 + 32) += 5LL;
  }
  else
  {
    sub_227BF10(a2, " nnan", 5);
  }
  result = *a1;
  if ( (result & 4) == 0 )
  {
LABEL_5:
    if ( (result & 8) == 0 )
      goto LABEL_6;
    goto LABEL_19;
  }
LABEL_16:
  v6 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v6) > 4 )
  {
    *(_DWORD *)v6 = 1852403232;
    *(_BYTE *)(v6 + 4) = 102;
    *(_QWORD *)(a2 + 32) += 5LL;
  }
  else
  {
    sub_227BF10(a2, " ninf", 5);
  }
  result = *a1;
  if ( (result & 8) == 0 )
  {
LABEL_6:
    if ( (result & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_22;
  }
LABEL_19:
  v7 = *(_DWORD **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 > 3u )
  {
    *v7 = 2054385184;
    *(_QWORD *)(a2 + 32) += 4LL;
  }
  else
  {
    sub_227BF10(a2, " nsz", 4);
  }
  result = *a1;
  if ( (result & 0x10) == 0 )
  {
LABEL_7:
    if ( (result & 0x20) == 0 )
      goto LABEL_8;
    goto LABEL_25;
  }
LABEL_22:
  v8 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v8) > 4 )
  {
    *(_DWORD *)v8 = 1668440352;
    *(_BYTE *)(v8 + 4) = 112;
    *(_QWORD *)(a2 + 32) += 5LL;
  }
  else
  {
    sub_227BF10(a2, " arcp", 5);
  }
  result = *a1;
  if ( (result & 0x20) == 0 )
  {
LABEL_8:
    if ( (result & 0x40) == 0 )
      return result;
    goto LABEL_28;
  }
LABEL_25:
  v9 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v9) > 8 )
  {
    *(_BYTE *)(v9 + 8) = 116;
    *(_QWORD *)v9 = 0x636172746E6F6320LL;
    *(_QWORD *)(a2 + 32) += 9LL;
  }
  else
  {
    sub_227BF10(a2, " contract", 9);
  }
  result = *a1;
  if ( (result & 0x40) != 0 )
  {
LABEL_28:
    v10 = *(_DWORD **)(a2 + 32);
    result = *(_QWORD *)(a2 + 24) - (_QWORD)v10;
    if ( result > 3 )
    {
      *v10 = 1852203296;
      *(_QWORD *)(a2 + 32) += 4LL;
      return result;
    }
    v11 = 4;
    v12 = " afn";
    return sub_227BF10(a2, v12, v11);
  }
  return result;
}
