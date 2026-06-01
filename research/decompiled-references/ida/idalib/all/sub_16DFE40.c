__int64 __fastcall sub_16DFE40(__int64 a1, int a2, unsigned __int64 a3, double a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // eax
  _DWORD *v9; // r14
  char *v10; // rbp
  char *v11; // r15
  __int64 v12; // rdi
  __int64 v13[2]; // [rsp+10h] [rbp-328h] BYREF
  void *ptr; // [rsp+20h] [rbp-318h] BYREF
  __int64 v15; // [rsp+28h] [rbp-310h]
  _BYTE v16[776]; // [rsp+30h] [rbp-308h] BYREF

  LOBYTE(v4) = (unsigned int)(a2 - 5) > 4 && (unsigned int)(a2 - 1) > 1;
  if ( (_BYTE)v4 )
    return v4;
  v13[0] = a3;
  ptr = v16;
  v13[1] = 0;
  v15 = 0x900000000LL;
  v8 = sub_16BBF50(a1, v13, a2, 1, (__int64)&ptr);
  if ( !(_BYTE)v8 )
    goto LABEL_11;
  v9 = ptr;
  v10 = (char *)ptr + 80 * (unsigned int)v15;
  if ( ptr != v10 )
  {
    while ( 1 )
    {
      v11 = (char *)(v9 + 20);
      if ( v9 + 20 == (_DWORD *)v10 )
        break;
      if ( ((v9[38] >> 4) & 0x3FFF) == ((v9[18] >> 4) & 0x3FFF) )
      {
        do
        {
          v12 = (__int64)v11;
          v11 += 80;
          v4 |= sub_16DF960(v12, a1, (unsigned __int64)v9, a3, 1, a4) ^ 1;
          if ( v11 == v10 )
            goto LABEL_10;
        }
        while ( ((v9[18] >> 4) & 0x3FFF) == ((*((_DWORD *)v11 + 18) >> 4) & 0x3FFF) );
      }
      v9 = v11;
    }
LABEL_10:
    v4 ^= 1u;
LABEL_11:
    v10 = (char *)ptr;
    goto LABEL_12;
  }
  v4 = v8;
LABEL_12:
  if ( v10 != v16 )
    free(v10);
  return v4;
}
