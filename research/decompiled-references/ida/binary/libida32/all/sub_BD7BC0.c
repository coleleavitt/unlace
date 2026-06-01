unsigned __int64 __fastcall sub_BD7BC0(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rdx
  __int16 v3; // dx
  __int64 v4; // rdx

  for ( result = a1; ; result = v2 )
  {
    v3 = *(_WORD *)result & 0x1FF;
    if ( v3 == 79 || ((v3 + 452) & 0x1FFu) <= 1 )
    {
      v2 = *(_QWORD *)(result + 16);
      goto LABEL_3;
    }
    if ( v3 != 48 )
      break;
    v4 = *(_QWORD *)(result + 16);
    if ( (v4 & 4) != 0 )
    {
      v2 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      goto LABEL_3;
    }
    v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v2 == result )
      return result;
LABEL_4:
    ;
  }
  if ( v3 == 116 )
  {
    v2 = *(_QWORD *)(result + 24);
LABEL_3:
    if ( v2 == result )
      return result;
    goto LABEL_4;
  }
  return result;
}

