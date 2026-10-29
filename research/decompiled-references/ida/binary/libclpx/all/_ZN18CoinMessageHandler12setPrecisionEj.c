char *__fastcall CoinMessageHandler::setPrecision(CoinMessageHandler *this, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // edx
  unsigned int v4; // edx
  int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // edx
  unsigned int v10; // edx
  char src[16]; // [rsp+8h] [rbp-10h] BYREF

  *(_QWORD *)src = 1714957861;
  if ( a2 > 0x3E6 )
  {
    *((_DWORD *)this + 398) = 999;
    LOBYTE(v4) = 9;
    v2 = 99;
    goto LABEL_6;
  }
  if ( a2 )
  {
    *((_DWORD *)this + 398) = a2;
    v4 = a2 / 0x64;
    v2 = a2 % 0x64;
    if ( !(_BYTE)v4 )
    {
      v10 = v2 % 0xA;
      v6 = v2 / 0xA;
      v2 %= 0xAu;
      if ( !(_BYTE)v6 )
      {
        if ( !(_BYTE)v10 )
        {
          v8 = 2;
          goto LABEL_9;
        }
        goto LABEL_4;
      }
      v5 = 2;
LABEL_7:
      src[v5] = v6 + 48;
      v3 = v5 + 1;
      goto LABEL_8;
    }
LABEL_6:
    v5 = 3;
    src[2] = v4 + 48;
    v6 = v2 / 0xA;
    LOBYTE(v2) = v2 % 0xA;
    goto LABEL_7;
  }
  *((_DWORD *)this + 398) = 1;
  LOBYTE(v2) = 1;
LABEL_4:
  v3 = 2;
LABEL_8:
  v7 = v3;
  v8 = v3 + 1;
  src[v7] = v2 + 48;
LABEL_9:
  src[v8] = 103;
  return strcpy((char *)this + 1584, src);
}

