__int64 __fastcall sub_20D8880(__int64 a1)
{
  char *v1; // rax
  char *v2; // rdx
  __int64 v3; // rbp
  char v5; // cl
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r12d
  char v10; // al
  char *v11; // rdx
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int16 v17; // dx
  __int16 v18; // si
  __int64 v19; // rax
  __int64 v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( v2 == *(char **)a1 || *v1 != 83 )
    return 0;
  *(_QWORD *)a1 = v1 + 1;
  if ( v1 + 1 == v2 )
  {
LABEL_8:
    v20[0] = 0;
    if ( !(unsigned __int8)sub_20CECD0((char **)a1, v20) )
    {
      v6 = *(char **)a1;
      v7 = ++v20[0];
      if ( v6 != *(char **)(a1 + 8) && *v6 == 95 )
      {
        v8 = *(_QWORD *)(a1 + 296);
        *(_QWORD *)a1 = v6 + 1;
        if ( v7 < (*(_QWORD *)(a1 + 304) - v8) >> 3 )
          return *(_QWORD *)(v8 + 8 * v7);
      }
    }
    return 0;
  }
  v5 = v1[1];
  if ( (unsigned __int8)(v5 - 97) > 0x19u )
  {
    if ( v5 == 95 )
    {
      *(_QWORD *)a1 = v1 + 2;
      v19 = *(_QWORD *)(a1 + 296);
      if ( v19 != *(_QWORD *)(a1 + 304) )
        return *(_QWORD *)v19;
      return 0;
    }
    goto LABEL_8;
  }
  switch ( v1[1] )
  {
    case 'a':
      v9 = 0;
      break;
    case 'b':
      v9 = 1;
      break;
    case 'd':
      v9 = 5;
      break;
    case 'i':
      v9 = 3;
      break;
    case 'o':
      v9 = 4;
      break;
    case 's':
      v9 = 2;
      break;
    default:
      return 0;
  }
  *(_QWORD *)a1 = v1 + 2;
  v3 = sub_20CF970(a1 + 816, 16);
  *(_WORD *)(v3 + 8) = 16432;
  v10 = *(_BYTE *)(v3 + 10);
  *(_DWORD *)(v3 + 12) = v9;
  *(_BYTE *)(v3 + 10) = v10 & 0xF0 | 5;
  *(_QWORD *)v3 = off_2BE78C0;
  v11 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 )
  {
    v12 = v3;
    if ( *v11 == 66 )
    {
      while ( 1 )
      {
        *(_QWORD *)a1 = v11 + 1;
        v13 = sub_20D0070((char **)a1);
        v15 = v14;
        if ( !v13 )
        {
          v20[0] = 0;
          goto LABEL_21;
        }
        v16 = sub_20CF970(a1 + 816, 40);
        v17 = *(_WORD *)(v12 + 9);
        v18 = *(_WORD *)(v16 + 8);
        *(_QWORD *)(v16 + 16) = v12;
        *(_QWORD *)(v16 + 24) = v13;
        *(_QWORD *)(v16 + 32) = v15;
        *(_WORD *)(v16 + 8) = v18 & 0xC000 | 9;
        *(_WORD *)(v16 + 9) = v17 & 0xFC0 | *(_WORD *)(v16 + 9) & 0xF03F;
        *(_QWORD *)v16 = off_2BE6A20;
        v11 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v11 != 66 )
          break;
        v12 = v16;
      }
      v20[0] = v16;
      if ( v3 == v16 )
        return v3;
LABEL_21:
      sub_20D8690((char **)(a1 + 296), v20);
      return v20[0];
    }
  }
  return v3;
}
