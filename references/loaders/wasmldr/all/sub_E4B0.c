_BYTE *__fastcall sub_E4B0(char *a1, unsigned __int64 a2, int *a3)
{
  char *v5; // rax
  char v6; // cl
  __int64 v7; // r8
  int v8; // r9d
  char v9; // di
  char v10; // dl
  char v11; // di
  char v12; // dl

  if ( (unsigned __int64)a1 >= a2 )
    goto LABEL_10;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *v5++;
    v8 |= (v9 & 0x7F) << v6;
    if ( v9 >= 0 )
      break;
    ++v7;
    v6 += 7;
    if ( v7 == 5 || (unsigned __int64)v5 >= a2 )
      goto LABEL_10;
  }
  if ( v7 == 4 )
  {
    v10 = v9;
    v11 = v9 & 0xF0;
    v12 = v10 & 8;
    if ( v11 == 112 )
    {
      if ( v12 )
        goto LABEL_12;
    }
    else if ( v12 )
    {
LABEL_10:
      *a3 = 0;
      return nullptr;
    }
    if ( v11 )
      goto LABEL_10;
  }
  else
  {
    v8 = v8 << (25 - v6) >> (25 - v6);
  }
LABEL_12:
  *a3 = v8;
  return (_BYTE *)(v5 - a1);
}
