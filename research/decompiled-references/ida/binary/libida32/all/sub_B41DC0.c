__int64 __fastcall sub_B41DC0(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  char v5; // r14
  __int64 result; // rax
  int v7; // ecx
  int v8; // edx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
  v3 = v2 + 16;
  v4 = v2 + 16 + 32LL * *(unsigned int *)(v2 + 8);
  if ( v2 + 16 != v4 )
  {
    v5 = 0;
    do
    {
      v5 |= sub_EF9570(v3) & 3;
      if ( v5 == 3 )
      {
        LODWORD(result) = a2 == 0 ? 2 : 10;
        goto LABEL_6;
      }
      v3 += 32;
    }
    while ( v4 != v3 );
    v7 = v5 & 1;
    result = a2 == 0 ? 2 : 10;
    v8 = a2 != 0 ? 8 : 0;
    if ( (v5 & 2) == 0 )
      goto LABEL_12;
    if ( (_BYTE)v7 )
LABEL_6:
      result = (unsigned int)result | 1;
LABEL_7:
    if ( a2 )
      return result;
    goto LABEL_8;
  }
  result = 0;
  if ( a2 )
  {
    v7 = 0;
    v8 = 8;
LABEL_12:
    result = v8 | (unsigned int)v7;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 8LL) & 2) != 0 )
    return (unsigned int)result | 0x10;
  return result;
}

