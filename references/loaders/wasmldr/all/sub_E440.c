_BYTE *__fastcall sub_E440(char *a1, unsigned __int64 a2, _DWORD *a3)
{
  char *v3; // rax
  char v4; // cl
  __int64 v5; // r9
  int v6; // r10d
  char v7; // r8

  if ( (unsigned __int64)a1 >= a2 )
    goto LABEL_9;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *v3++;
    v6 |= (v7 & 0x7F) << v4;
    if ( v7 >= 0 )
      break;
    ++v5;
    v4 += 7;
    if ( v5 == 5 || (unsigned __int64)v3 >= a2 )
      goto LABEL_9;
  }
  if ( v5 == 4 && (unsigned __int8)v7 > 0xFu )
  {
LABEL_9:
    *a3 = 0;
    return nullptr;
  }
  else
  {
    *a3 = v6;
    return (_BYTE *)(v3 - a1);
  }
}
