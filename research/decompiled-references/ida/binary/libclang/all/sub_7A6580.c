char __fastcall sub_7A6580(__int64 a1, char a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  __int64 v4; // rdx
  char result; // al
  unsigned __int64 v6; // rax
  __int64 v7; // rdi

  v2 = sub_777D70(a1);
  v3 = *(_BYTE *)(v2 + 87);
  if ( (v3 & 0x40) != 0 )
    v4 = *(_QWORD *)(v2 + 16LL * ((v3 & 0x20) != 0) + 176) & 3LL;
  else
    v4 = v3 >> 7;
  result = a2 | (v4 != 1);
  if ( result )
  {
    if ( (unsigned int)sub_77F620(a1) )
    {
      return (unsigned int)sub_7803B0(a1) <= 1;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v7 = *(_QWORD *)v6;
      if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 26 )
        v7 = sub_B0D320(v7);
      return (*(_BYTE *)(v7 + 23) & 0x10) != 0;
    }
  }
  return result;
}

