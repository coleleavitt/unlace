__int64 __fastcall sub_62B000(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned int *v4; // rbp
  char v5; // cl
  unsigned int v6; // r13d
  char v7; // al
  __int64 v8; // rdx
  char v10; // cl
  unsigned int v11; // r13d
  __int64 v12; // r12
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rax
  char *v15; // rdx
  char *v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h] BYREF
  __int64 v19; // [rsp+18h] [rbp-30h]

  v4 = *(unsigned int **)(a1 + 8);
  v16 = a3;
  v17 = a4;
  if ( (unsigned __int8)sub_25E4080(&v16, "x", 1) )
  {
    if ( v17 <= 1 )
    {
      if ( !v17 )
        goto LABEL_20;
      v5 = *v16;
      if ( *v16 != 120 )
      {
LABEL_8:
        if ( v5 == 88 )
        {
          ++v16;
          --v17;
        }
        goto LABEL_20;
      }
    }
    else
    {
      switch ( *(_WORD *)v16 )
      {
        case 0x2D78:
          v11 = 1;
          v16 += 2;
          v17 -= 2LL;
          goto LABEL_21;
        case 0x2D58:
          v11 = 0;
          v16 += 2;
          v17 -= 2LL;
          goto LABEL_21;
        case 0x2B78:
          v14 = v17 - 2;
          v15 = v16 + 2;
LABEL_30:
          v16 = v15;
          v11 = 3;
          v17 = v14;
          goto LABEL_21;
      }
      v5 = *v16;
      if ( *v16 != 120 )
      {
        if ( *(_WORD *)v16 != 11096 )
          goto LABEL_8;
        v16 += 2;
        v17 -= 2LL;
LABEL_20:
        v11 = 2;
LABEL_21:
        v12 = 0;
        if ( !(unsigned __int8)sub_25E5260(&v16, 10, &v18) )
          v12 = v18;
        v13 = sub_25D0200(v11);
        LOBYTE(v19) = 1;
        v18 = v12 + 2LL * v13;
        return sub_25CFC60(a2, *v4, v11, v18, v19);
      }
    }
    v14 = v17 - 1;
    v15 = v16 + 1;
    goto LABEL_30;
  }
  if ( v17 )
  {
    v10 = *v16;
    if ( *v16 == 78 || v10 == 110 )
    {
      v6 = 1;
      ++v16;
      --v17;
      goto LABEL_12;
    }
    if ( v10 == 68 || v10 == 100 )
    {
      ++v16;
      --v17;
    }
  }
  v6 = 0;
LABEL_12:
  v7 = sub_25E5260(&v16, 10, &v18);
  v8 = 0;
  if ( !v7 )
    v8 = v18;
  return sub_25CF9E0(a2, *v4, v8, v6);
}

