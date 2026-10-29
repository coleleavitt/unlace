unsigned __int64 __fastcall sub_7810B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  _QWORD *v4; // rcx
  unsigned __int64 *v5; // rdi
  _QWORD *v6; // r9
  char v7; // si
  int v8; // edx

  result = *(unsigned int *)(a2 + 8);
  v4 = *(_QWORD **)a2;
  *(_QWORD *)(a1 + 8) = a3;
  v5 = (unsigned __int64 *)(a1 + 16);
  v6 = &v4[result];
  *((_DWORD *)v5 - 4) = result;
  if ( v4 != v6 )
  {
    while ( 1 )
    {
      result = *v4 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = *(_BYTE *)(result + 28) & 0x7F;
      v7 = *(_BYTE *)(result + 28) & 0x7F;
      if ( (unsigned int)(v8 - 51) <= 1 )
        break;
      if ( (unsigned int)(v8 - 74) > 1 )
        goto LABEL_5;
      if ( v7 == 74 )
      {
LABEL_4:
        result = *(_QWORD *)(result + 48);
LABEL_5:
        ++v4;
        *v5++ = result;
        if ( v4 == v6 )
          return result;
      }
      else
      {
LABEL_9:
        if ( v7 != 75 )
          goto LABEL_5;
        do
          result = *(_QWORD *)(result + 88);
        while ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4B );
        ++v4;
        *v5++ = result;
        if ( v4 == v6 )
          return result;
      }
    }
    result = *(_QWORD *)(result + 64);
    v7 = *(_BYTE *)(result + 28) & 0x7F;
    if ( v7 != 74 )
      goto LABEL_9;
    goto LABEL_4;
  }
  return result;
}

