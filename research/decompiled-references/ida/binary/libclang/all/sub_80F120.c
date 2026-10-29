unsigned __int64 __fastcall sub_80F120(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rdx
  unsigned __int16 v3; // dx

  for ( result = a1; ; result = v2 )
  {
    v3 = *(_WORD *)result & 0x1FF;
    if ( v3 == 80 )
    {
      v2 = *(_QWORD *)(result + 16);
LABEL_3:
      if ( result == v2 )
        return result;
      continue;
    }
    if ( v3 > 0x3Cu )
      break;
    if ( v3 != 49 )
      return result;
    v2 = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(result + 16) & 4) == 0 )
      goto LABEL_3;
    v2 = *(_QWORD *)(v2 + 40);
    if ( result == v2 )
      return result;
LABEL_4:
    ;
  }
  if ( v3 > 0x3Eu )
  {
    if ( v3 != 117 )
      return result;
    v2 = *(_QWORD *)(result + 24);
    goto LABEL_3;
  }
  v2 = *(_QWORD *)(result + 16);
  if ( v2 != result )
    goto LABEL_4;
  return result;
}

