__int64 __fastcall sub_20C0C40(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  unsigned int *v4; // rbx
  unsigned int v5; // r13d
  char v6; // al
  __int64 v7; // rdx
  _BYTE *v9; // rdx
  unsigned int v10; // r13d
  __int64 v11; // r12
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  _BYTE *v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v4 = *(unsigned int **)(a1 + 8);
  v13 = a3;
  v14 = a4;
  if ( !(unsigned __int8)sub_2246340(&v13, "x", 1) )
  {
    if ( v14 )
    {
      if ( *v13 == 78 || *v13 == 110 )
      {
        v5 = 1;
        ++v13;
        --v14;
LABEL_5:
        v6 = sub_2247880(&v13, 10, &v12);
        v7 = 0;
        if ( !v6 )
          v7 = v12;
        return sub_2232830(a2, *v4, v7, v5);
      }
      if ( *v13 == 68 || *v13 == 100 )
      {
        ++v13;
        --v14;
      }
    }
    v5 = 0;
    goto LABEL_5;
  }
  if ( v14 <= 1 )
  {
    if ( !v14 )
      goto LABEL_21;
    v9 = v13;
    if ( *v13 != 120 )
    {
LABEL_14:
      if ( *v9 == 88 )
      {
        v13 = v9 + 1;
        --v14;
      }
      goto LABEL_21;
    }
    goto LABEL_34;
  }
  v9 = v13;
  switch ( *(_WORD *)v13 )
  {
    case 0x2D78:
      v10 = 1;
      v13 += 2;
      v14 -= 2LL;
      goto LABEL_23;
    case 0x2D58:
      v10 = 0;
      v13 += 2;
      v14 -= 2LL;
      goto LABEL_23;
    case 0x2B78:
      v13 += 2;
      v14 -= 2LL;
LABEL_32:
      v10 = 3;
      goto LABEL_23;
  }
  if ( *v13 == 120 )
  {
LABEL_34:
    v13 = v9 + 1;
    --v14;
    goto LABEL_32;
  }
  if ( *(_WORD *)v13 != 11096 )
    goto LABEL_14;
  v13 += 2;
  v14 -= 2LL;
LABEL_21:
  v10 = 2;
LABEL_23:
  v11 = 0;
  if ( !(unsigned __int8)sub_2247880(&v13, 10, &v12) )
    v11 = v12;
  if ( (unsigned __int8)sub_2233400(v10) )
    v11 += 2;
  return sub_2232DC0(a2, *v4, v10, v11, 1);
}
