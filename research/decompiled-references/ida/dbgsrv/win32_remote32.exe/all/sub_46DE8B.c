/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DE8B
// Address: 0x0046DE8B

//----- (0046DE8B) --------------------------------------------------------
int __usercall sub_46DE8B@<eax>(
        unsigned __int64 a1@<ebx:ecx>,
        int a2@<edi>,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        _BYTE *a9,
        int a10,
        int a11,
        unsigned __int8 a12)
{
  int v12; // edi
  int v13; // edx
  __int64 v14; // rdi
  int v15; // eax
  char v16; // al
  unsigned int v17; // eax
  char v18; // cl
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // eax
  unsigned __int64 v22; // kr00_8
  int i; // [esp-10h] [ebp-60h]
  int v25; // [esp+8h] [ebp-48h] BYREF
  int v26; // [esp+Ch] [ebp-44h] BYREF
  char v27; // [esp+14h] [ebp-3Ch]
  __int64 v28; // [esp+18h] [ebp-38h]
  __int64 v29; // [esp+20h] [ebp-30h]
  unsigned __int64 v30; // [esp+28h] [ebp-28h]
  unsigned int v31; // [esp+30h] [ebp-20h]
  unsigned __int64 v32; // [esp+34h] [ebp-1Ch]
  int v33; // [esp+3Ch] [ebp-14h]
  unsigned int v34; // [esp+40h] [ebp-10h]
  unsigned int v35; // [esp+44h] [ebp-Ch]
  int v36; // [esp+48h] [ebp-8h]
  int v37; // [esp+4Ch] [ebp-4h]

  if ( !sub_471924(&a4, SHIDWORD(a1), a2) )
    goto LABEL_6;
  v12 = a11;
  if ( a11 && (a11 < 2 || a11 > 36) )
  {
    *sub_46B984() = 22;
    sub_467EF4(SHIDWORD(a1), v12);
LABEL_6:
    v13 = 0;
    goto LABEL_66;
  }
  sub_467FF8((int)&v25, a3);
  v34 = 0;
  HIDWORD(v14) = 0;
  v28 = a8;
  BYTE4(a1) = sub_470F48((int)&a4);
  for ( i = BYTE4(a1); ; i = BYTE4(a1) )
  {
    LOBYTE(v36) = BYTE4(a1);
    if ( !sub_469034(SHIDWORD(a1), i, 8, &v26) )
      break;
    BYTE4(a1) = sub_470F48((int)&a4);
  }
  v37 = a12;
  if ( BYTE4(a1) == 45 )
  {
    v37 = a12 | 2;
  }
  else if ( BYTE4(a1) != 43 )
  {
    goto LABEL_14;
  }
  BYTE4(a1) = sub_470F48((int)&a4);
  LOBYTE(v36) = BYTE4(a1);
LABEL_14:
  v33 = -1;
  if ( !v12 || v12 == 16 )
  {
    if ( (unsigned __int8)(BYTE4(a1) - 48) > 9u )
    {
      if ( (unsigned __int8)(BYTE4(a1) - 97) > 0x19u )
      {
        if ( (unsigned __int8)(BYTE4(a1) - 65) > 0x19u )
          v15 = -1;
        else
          v15 = SBYTE4(a1) - 55;
      }
      else
      {
        v15 = SBYTE4(a1) - 87;
      }
    }
    else
    {
      v15 = SBYTE4(a1) - 48;
    }
    if ( v15 )
    {
      if ( !v12 )
        v12 = 10;
    }
    else
    {
      v16 = sub_470F48((int)&a4);
      LOBYTE(v31) = v16;
      if ( v16 == 120 || v16 == 88 )
      {
        if ( !v12 )
          v12 = 16;
        LOBYTE(v36) = sub_470F48((int)&a4);
      }
      else
      {
        if ( !v12 )
          v12 = 8;
        sub_4718A2(&a4, v31);
      }
    }
  }
  v29 = v12;
  v17 = sub_4828A0(0xFFFFFFFFFFFFFFFFuLL, v12);
  v30 = a1;
  v18 = v36;
  v32 = __PAIR64__(v17, v19);
  while ( 1 )
  {
    if ( (unsigned __int8)(v18 - 48) > 9u )
    {
      if ( (unsigned __int8)(v18 - 97) > 0x19u )
        v20 = (unsigned __int8)(v18 - 65) > 0x19u ? -1 : v18 - 55;
      else
        v20 = v18 - 87;
    }
    else
    {
      v20 = v18 - 48;
    }
    v35 = v20;
    if ( v20 == -1 || v20 >= v12 )
      break;
    v21 = v37 | 8;
    v37 |= 8u;
    if ( HIDWORD(v14) < (unsigned int)v32 || HIDWORD(v14) <= (unsigned int)v32 && v34 < HIDWORD(v32) )
    {
      v35 = v20;
      v31 = 0;
    }
    else if ( __PAIR64__(v34, HIDWORD(v14)) != v32 || (v31 = 0, v20 > v30) )
    {
      v37 = v21 | 4;
      goto LABEL_52;
    }
    v22 = __PAIR64__(v31, v35) + sub_4633C0(v29, __SPAIR64__(HIDWORD(v14), v34));
    HIDWORD(v14) = HIDWORD(v22);
    v34 = v22;
LABEL_52:
    v18 = sub_470F48((int)&a4);
    LOBYTE(v36) = v18;
  }
  sub_4718A2(&a4, v36);
  if ( (v37 & 8) == 0 )
  {
    sub_471328((int)&a4, v28, SHIDWORD(v28));
    v33 = 0;
    goto LABEL_60;
  }
  LODWORD(v14) = v34;
  if ( sub_46848E(v37, __PAIR64__(HIDWORD(v14), v34)) )
  {
    *sub_46B984() = 34;
    if ( (v37 & 1) == 0 )
    {
      LODWORD(v14) = -1;
      goto LABEL_63;
    }
    if ( (v37 & 2) != 0 )
      v33 = 0;
LABEL_60:
    v13 = v33;
  }
  else
  {
    if ( (v37 & 2) != 0 )
      v14 = -v14;
LABEL_63:
    v13 = v14;
  }
  if ( v27 )
    *(_DWORD *)(v25 + 848) &= ~2u;
LABEL_66:
  if ( a9 && !a8 )
    *a9 = 0;
  return v13;
}
// 46E064: conditional instruction was optimized away because ebx.4==0
// 46DFED: variable 'a1' is possibly undefined
// 46DFF8: variable 'v19' is possibly undefined
