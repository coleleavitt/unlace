/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F0F0
// Address: 0x000000010004F0F0

//----- (000000010004F0F0) ----------------------------------------------------
__int64 __fastcall sub_10004F0F0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rax

  v3 = a2[1];
  v4 = a3[1];
  v5 = (0x101010101010101LL
      * ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
       & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( v5 > 1 )
  {
    if ( v4 >= v3 )
    {
      if ( (v3 | v4) >> 32 )
        v4 %= v3;
      else
        v4 = (unsigned int)v4 % (unsigned int)v3;
    }
  }
  else
  {
    v4 &= v3 - 1;
  }
  v6 = *(_QWORD **)(*a2 + 8 * v4);
  do
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != a3 );
  if ( v7 != a2 + 2 )
  {
    v8 = v7[1];
    if ( (unsigned int)v5 > 1 )
    {
      if ( v8 >= v3 )
      {
        if ( !((v3 | v8) >> 32) )
        {
          if ( (unsigned int)v8 % (unsigned int)v3 == v4 )
            goto LABEL_26;
          goto LABEL_17;
        }
        v8 %= v3;
      }
      if ( v8 == v4 )
        goto LABEL_26;
    }
    else if ( ((v3 - 1) & v8) == v4 )
    {
      goto LABEL_26;
    }
  }
LABEL_17:
  if ( !*a3 )
    goto LABEL_25;
  v9 = *(_QWORD *)(*a3 + 8LL);
  if ( (unsigned int)v5 <= 1 )
  {
    if ( ((v3 - 1) & v9) == v4 )
      goto LABEL_26;
LABEL_25:
    *(_QWORD *)(*a2 + 8 * v4) = 0;
    goto LABEL_26;
  }
  if ( v9 < v3 )
  {
LABEL_24:
    if ( v9 == v4 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( (v3 | v9) >> 32 )
  {
    v9 %= v3;
    goto LABEL_24;
  }
  if ( (unsigned int)v9 % (unsigned int)v3 != v4 )
    goto LABEL_25;
LABEL_26:
  v10 = *a3;
  if ( *a3 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( (unsigned int)v5 <= 1 )
    {
      v11 &= v3 - 1;
      if ( v11 == v4 )
        goto LABEL_36;
      goto LABEL_35;
    }
    if ( v11 >= v3 )
    {
      if ( !((v3 | v11) >> 32) )
      {
        v11 = (unsigned int)v11 % (unsigned int)v3;
        if ( v11 == v4 )
          goto LABEL_36;
        goto LABEL_35;
      }
      v11 %= v3;
    }
    if ( v11 != v4 )
    {
LABEL_35:
      *(_QWORD *)(*a2 + 8 * v11) = v7;
      v10 = *a3;
    }
  }
  else
  {
    v10 = 0;
  }
LABEL_36:
  *v7 = v10;
  *a3 = 0;
  --a2[3];
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a2 + 2;
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}
