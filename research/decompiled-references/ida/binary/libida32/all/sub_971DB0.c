unsigned __int64 __fastcall sub_971DB0(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int16 v3; // dx

  result = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !result )
    return 0;
  v3 = *(_WORD *)result & 0x1FF;
  if ( v3 == 131 )
  {
    result = *(_QWORD *)(result + 8LL * (((*(_QWORD *)result & 0x200) != 0) + ((*(_QWORD *)result & 0x400) != 0)) + 24);
    goto LABEL_15;
  }
  if ( v3 <= 0x83u )
  {
    if ( v3 == 118 )
      goto LABEL_20;
    if ( v3 <= 0x76u )
    {
      if ( v3 != 1 )
      {
        if ( v3 != 77 )
          return 0;
        goto LABEL_20;
      }
      result = *(_QWORD *)(result + 8LL * ((*(_WORD *)result & 0x200) != 0) + 16);
    }
    else
    {
      if ( v3 == 128 )
        goto LABEL_28;
      if ( v3 != 129 )
        return 0;
      result = *(_QWORD *)(result + 32);
    }
LABEL_15:
    if ( !a2 )
      return result;
    goto LABEL_16;
  }
  if ( v3 == 241 )
  {
    result = *(_QWORD *)(result + 8LL * (((*(_QWORD *)result & 0x4000) != 0) + ((*(_QWORD *)result & 0x2000) != 0)) + 16);
    goto LABEL_15;
  }
  if ( v3 <= 0xF1u )
  {
    if ( v3 == 154 )
      return result;
    if ( v3 != 240 )
      return 0;
    goto LABEL_20;
  }
  if ( v3 == 244 )
  {
LABEL_20:
    result = *(_QWORD *)(result + 16);
    if ( !a2 )
      return result;
LABEL_16:
    if ( !result )
      return 0;
    return sub_BD7CB0(result);
  }
  if ( v3 != 252 )
  {
    if ( v3 != 243 )
      return 0;
LABEL_28:
    result = *(_QWORD *)(result + 24);
    if ( !a2 )
      return result;
    goto LABEL_16;
  }
  result = *(_QWORD *)(result + 40);
  if ( !result )
    return 0;
  if ( a2 )
    return sub_BD7CB0(result);
  return result;
}

