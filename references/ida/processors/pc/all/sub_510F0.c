__int64 __fastcall sub_510F0(_QWORD *a1, unsigned int a2)
{
  __int64 byte; // r12
  __int64 v4; // r13
  void *v6; // rax
  _BYTE *v7; // rdx
  char *v8; // rbp
  char *v9; // r14
  unsigned int v10; // edi
  char v11; // r12
  char v12; // [rsp+1h] [rbp-437h] BYREF
  _BYTE v13[1030]; // [rsp+2h] [rbp-436h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  byte = (unsigned __int8)get_byte();
  v4 = byte + 1;
  if ( (unsigned __int8)get_fixups() )
    return 0;
  if ( byte )
  {
    if ( get_bytes() != v4 )
      return 0;
    if ( (unsigned int)v12 <= 0x7F && (isalpha(v12) || v12 == 95) )
    {
      v8 = v13;
      v9 = &v13[byte - 1];
      if ( byte != 1 )
      {
        do
        {
          v10 = *v8;
          v11 = *v8;
          if ( v10 > 0x7F || !isalnum(v10) && v11 != 95 )
            return 0;
        }
        while ( ++v8 != v9 );
      }
    }
    else
    {
      v6 = &loc_26008;
      if ( !_bittest64((const __int64 *)&v6, a2) )
        return 0;
      if ( byte != 1 )
      {
        v7 = v13;
        while ( (unsigned __int8)(*v7 - 48) <= 9u )
        {
          if ( &v13[byte - 1] == ++v7 )
            goto LABEL_12;
        }
        return 0;
      }
    }
  }
  else if ( (_BYTE)a2 != 8 )
  {
    return 0;
  }
LABEL_12:
  *a1 += v4;
  return 1;
}
