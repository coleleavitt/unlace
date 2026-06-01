/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4684CF
// Address: 0x004684CF

//----- (004684CF) --------------------------------------------------------
unsigned int __usercall sub_4684CF@<eax>(
        char a1@<bl>,
        int a2@<edi>,
        _DWORD *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned __int8 *v10; // eax
  unsigned __int8 v11; // bl
  unsigned __int8 *v12; // edi
  int v13; // eax
  unsigned __int8 v14; // al
  unsigned __int8 *v15; // edi
  int v16; // edx
  unsigned int v17; // ecx
  char v18; // bl
  int v19; // edi
  int v20; // [esp-8h] [ebp-38h]
  int v21; // [esp+8h] [ebp-28h] BYREF
  int v22; // [esp+Ch] [ebp-24h] BYREF
  char v23; // [esp+14h] [ebp-1Ch]
  unsigned __int8 *v24; // [esp+18h] [ebp-18h]
  unsigned __int64 v25; // [esp+1Ch] [ebp-14h]
  unsigned int v26; // [esp+24h] [ebp-Ch]
  int v27; // [esp+28h] [ebp-8h]
  int v28; // [esp+2Ch] [ebp-4h]

  if ( !sub_468FF7(&a4, a1, a2) )
    goto LABEL_6;
  v7 = a6;
  if ( a6 && (a6 < 2 || a6 > 36) )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  sub_467FF8((int)&v21, a3);
  v10 = a4;
  v26 = 0;
  v24 = a4;
  while ( 1 )
  {
    v11 = *v10;
    a4 = v10 + 1;
    LOBYTE(v28) = v11;
    if ( !sub_469034(v11, v11, 8, &v22) )
      break;
    v10 = a4;
  }
  v27 = a7;
  if ( v11 == 45 )
  {
    v27 = a7 | 2;
  }
  else if ( v11 != 43 )
  {
    v12 = a4;
    goto LABEL_18;
  }
  v11 = *a4;
  v12 = a4 + 1;
  LOBYTE(v28) = *a4++;
LABEL_18:
  if ( !v7 || v7 == 16 )
  {
    if ( (unsigned __int8)(v11 - 48) > 9u )
    {
      if ( (unsigned __int8)(v11 - 97) > 0x19u )
      {
        if ( (unsigned __int8)(v11 - 65) > 0x19u )
          v13 = -1;
        else
          v13 = (char)v11 - 55;
      }
      else
      {
        v13 = (char)v11 - 87;
      }
    }
    else
    {
      v13 = (char)v11 - 48;
    }
    if ( v13 )
    {
      if ( !v7 )
        v7 = 10;
    }
    else
    {
      v14 = *v12;
      v15 = v12 + 1;
      BYTE4(v25) = v14;
      a4 = v15;
      if ( v14 == 120 || v14 == 88 )
      {
        if ( !v7 )
          v7 = 16;
        v11 = *v15;
        v12 = v15 + 1;
        LOBYTE(v28) = v11;
        a4 = v12;
      }
      else
      {
        if ( !v7 )
          v7 = 8;
        sub_468FA0(&a4, v11, (int)v15, SBYTE4(v25));
        v12 = a4;
      }
    }
  }
  LODWORD(v25) = 0xFFFFFFFF % v7;
  v16 = v27;
  HIDWORD(v25) = 0xFFFFFFFF / v7;
  while ( 1 )
  {
    if ( (unsigned __int8)(v11 - 48) > 9u )
    {
      if ( (unsigned __int8)(v11 - 97) > 0x19u )
        v17 = (unsigned __int8)(v11 - 65) > 0x19u ? -1 : (char)v11 - 55;
      else
        v17 = (char)v11 - 87;
    }
    else
    {
      v17 = (char)v11 - 48;
    }
    if ( v17 == -1 || v17 >= v7 )
      break;
    if ( __PAIR64__(v26, v17) <= v25 )
    {
      v20 = 8;
      v26 = v17 + v7 * v26;
    }
    else
    {
      v20 = 12;
    }
    v11 = *v12++;
    LOBYTE(v28) = v11;
    v16 |= v20;
    a4 = v12;
  }
  v27 = v16;
  sub_468FA0(&a4, v11, (int)v12, v28);
  v18 = v27;
  if ( (v27 & 8) == 0 )
  {
    v8 = 0;
    a4 = v24;
    goto LABEL_63;
  }
  v19 = v26;
  if ( !sub_46845D(v27, v26) )
  {
    if ( (v18 & 2) != 0 )
      v19 = -v19;
    goto LABEL_62;
  }
  *sub_46B984() = 34;
  if ( (v18 & 1) == 0 )
  {
    v19 = -1;
LABEL_62:
    v8 = v19;
    goto LABEL_63;
  }
  if ( (v18 & 2) != 0 )
    v8 = 0x80000000;
  else
    v8 = 0x7FFFFFFF;
LABEL_63:
  if ( v23 )
    *(_DWORD *)(v21 + 848) &= ~2u;
LABEL_7:
  if ( a5 )
    *a5 = a4;
  return v8;
}
