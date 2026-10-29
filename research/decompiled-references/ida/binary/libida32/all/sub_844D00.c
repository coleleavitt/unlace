__int64 __fastcall sub_844D00(unsigned int *a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  char v6; // r12
  char v7; // al
  char v8; // bp
  char v9; // bl
  char v10; // bl
  unsigned __int64 v11; // rsi
  char *v12; // rax
  unsigned __int8 v13; // dl

  v6 = 2;
  if ( (a2 & 0x10000) == 0 )
    v6 = (a2 & 0x20000) != 0 ? 3 : 0;
  if ( (a2 & 0x100000) != 0 || (v7 = 0, (a2 & 0x80000) != 0) && !a1[36] )
  {
    if ( !v6 )
      v6 = 1;
    v7 = 0x80;
    if ( (a2 & 0x400) == 0 )
      goto LABEL_20;
LABEL_6:
    v7 |= 1u;
    goto LABEL_7;
  }
  if ( (a2 & 0x400) != 0 )
    goto LABEL_6;
LABEL_20:
  if ( (a2 & 0x800) != 0 )
  {
    v7 |= 3u;
  }
  else if ( (a2 & 0x1000) != 0 )
  {
    v7 |= 2u;
  }
LABEL_7:
  v8 = a2;
  if ( (a2 & 0x200000) != 0 )
    v7 |= 4u;
  if ( (a2 & 0x40000) != 0 )
    v9 = (8 * byte_239ED90[a4]) ^ 0x78;
  else
    v9 = (8 * *((_BYTE *)&unk_239EDD0 + a4)) ^ 0x78;
  v10 = v7 | v9;
  v11 = a2 & 0xFFFFFFFFFFFFE300LL;
  if ( v6 )
  {
    v12 = sub_844340((__int64)a1, v11 | 0x103, a3, 0, a5, a6);
    if ( v12 )
    {
      v13 = *(v12 - 1);
      goto LABEL_24;
    }
  }
  else
  {
    v12 = sub_844340((__int64)a1, v11 | 0x8102, a3, 0, a5, a6);
    if ( v12 )
    {
      v13 = *(v12 - 1);
      v6 = 1;
      if ( (v13 & 3) == 0 )
      {
        *(v12 - 1) = -59;
        v12[1] = v8;
        *v12 = v10 | ((v13 >> 2 << 7) + 0x80);
        return 0;
      }
LABEL_24:
      *(v12 - 1) = -60;
      v12[1] = v10;
      v12[2] = v8;
      *v12 = v6 | (32 * v13) ^ 0xE0;
      return 0;
    }
  }
  return *a1;
}

