__int64 __fastcall sub_818CA0(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v5; // r10
  __int64 v7; // r9
  _BYTE *v8; // rcx
  unsigned __int64 v9; // r8
  char *v10; // r11
  _BYTE *v11; // rdx
  _BYTE *v12; // rsi
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  v4 = *a1;
  v5 = a1[64];
  v7 = a1[38];
  if ( a1[65] == 4 )
    v7 = a1[37];
  v8 = (_BYTE *)(v4 + a1[1]);
  v9 = a2 - 1;
  v10 = nullptr;
  while ( 1 )
  {
    v11 = (_BYTE *)(v4 + v9);
    v12 = (_BYTE *)(v5 + v4);
    v13 = v12;
    if ( v12 < v8 )
    {
      while ( *v13 == *v11 )
      {
        ++v13;
        ++v11;
        if ( v8 == v13 )
        {
          if ( (unsigned __int64)v10 >= v8 - v12 )
            goto LABEL_11;
          *a3 = v9;
          v10 = (char *)(v8 - v12);
          goto LABEL_18;
        }
      }
      if ( (unsigned __int64)v10 < v13 - v12 )
      {
        *a3 = v9;
        v10 = (char *)(v13 - v12);
        if ( v8 == v13 || v13 - v12 >= (unsigned __int64)a1[40] )
          break;
      }
    }
LABEL_11:
    if ( !--v7 )
      break;
    v14 = a1[12];
    v15 = *(_QWORD *)(a1[49] + 8 * (v14 & v9));
    if ( !v15 )
      break;
    v16 = v15 - 1;
    if ( v9 < v16 )
      break;
    v5 = a1[64];
    if ( ((v5 - v16) & ~v14) != 0 )
      break;
    v4 = *a1;
    v9 = v16;
  }
LABEL_18:
  if ( v10 == &byte_4 )
    return 4LL * (a1[64] - *a3 <= 0x3FFF);
  if ( v10 != &byte_5 )
    return (__int64)v10;
  if ( a1[64] - *a3 >= (unsigned __int64)&stru_200000 )
    return 0;
  return (__int64)v10;
}
