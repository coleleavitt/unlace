unsigned __int64 __fastcall sub_B53F40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *i; // r9
  unsigned __int8 v7; // dl
  unsigned int v8; // esi

  result = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = a3;
  v4 = (unsigned __int64 *)(a1 + 16);
  v5 = *(_QWORD **)a2;
  *((_DWORD *)v4 - 4) = result;
  for ( i = &v5[result]; i != v5; ++v4 )
  {
    while ( 1 )
    {
      result = *v5 & 0xFFFFFFFFFFFFFFF8LL;
      v7 = *(_BYTE *)(result + 28) & 0x7F;
      v8 = v7 - 53;
      if ( ((v7 + 52) & 0x7Fu) > 1 && v8 > 1 )
        goto LABEL_4;
      if ( v8 <= 1 )
      {
        result = *(_QWORD *)(result + 64);
        v7 = *(_BYTE *)(result + 28) & 0x7F;
      }
      if ( v7 != 76 )
        break;
      result = *(_QWORD *)(result + 48);
LABEL_4:
      ++v5;
      *v4++ = result;
      if ( i == v5 )
        return result;
    }
    if ( v7 != 77 )
      goto LABEL_4;
    do
      result = *(_QWORD *)(result + 88);
    while ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4D );
    ++v5;
    *v4 = result;
  }
  return result;
}

