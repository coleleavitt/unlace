/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7546C
// Address: 0x0007546C

//----- (0007546C) --------------------------------------------------------
int __fastcall sub_7546C(void **a1, const char *a2, unsigned __int8 *a3, int a4, int a5)
{
  char v5; // r10
  unsigned __int8 *v6; // r6
  unsigned int v7; // r9
  void *v8; // r1
  unsigned int v9; // r7
  int v10; // r8
  unsigned int v11; // r4
  unsigned int v12; // r5
  unsigned __int8 *v13; // r3
  __int16 v14; // r2
  unsigned __int8 v15; // r3
  void *v16; // r1
  int v17; // r4
  unsigned __int8 v19; // r3
  unsigned __int8 *v20; // r3
  int v21; // r2
  void *ptra; // [sp+10h] [bp-1Ch]
  void *ptrb; // [sp+10h] [bp-1Ch]
  int v26; // [sp+18h] [bp-14h] BYREF
  unsigned int v27; // [sp+1Ch] [bp-10h]
  unsigned int v28; // [sp+20h] [bp-Ch]

  v6 = a3;
  v7 = (unsigned int)&a3[a4];
  v8 = nullptr;
  if ( a3 < &a3[a4] )
    v5 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( (unsigned int)a3 >= v7 )
    goto LABEL_33;
  while ( 1 )
  {
    v12 = *v6;
    v13 = v6 + 1;
    if ( (v12 & 0x80) != 0 )
    {
      if ( (v12 & 0xE0) == 0xC0 )
      {
        if ( v7 <= (unsigned int)v13 )
          goto LABEL_32;
        v19 = v6[1];
        v6 += 2;
        if ( (v19 & 0xC0) != 0x80 || (v12 = (v12 << 6) & 0x7C0 | v19 & 0x3F, v12 - 1 <= 0x7E) )
        {
LABEL_20:
          ptra = v8;
          *_errno_location() = 84;
          v16 = ptra;
LABEL_21:
          v17 = -1;
          goto LABEL_22;
        }
      }
      else
      {
        if ( (v12 & 0xF0) != 0xE0 )
          goto LABEL_20;
        if ( v7 <= (unsigned int)v13 )
          goto LABEL_32;
        v14 = v6[1];
        if ( (v14 & 0xC0) != 0x80 )
          goto LABEL_20;
        if ( v7 <= (unsigned int)(v6 + 2) )
        {
LABEL_32:
          ptrb = v8;
          *_errno_location() = 22;
          v16 = ptrb;
          goto LABEL_21;
        }
        v15 = v6[2];
        v6 += 3;
        if ( (v15 & 0xC0) != 0x80 )
          goto LABEL_20;
        v12 = v15 & 0x3F | (unsigned __int16)((_WORD)v12 << 12) | (v14 << 6) & 0xFC0;
        if ( v12 < 0x800 )
          goto LABEL_20;
      }
    }
    else
    {
      ++v6;
    }
    if ( v27 )
    {
      v9 = v27 - 1;
      v10 = v27 + 1;
      v11 = v27 + 2;
      if ( v27 + 2 <= v28 )
        goto LABEL_6;
    }
    else
    {
      v9 = 0;
      v11 = 3;
      v10 = 2;
      if ( v28 >= 3 )
        goto LABEL_6;
    }
    v8 = sub_78018((int)&v26, v8, v11, 1u);
    v26 = (int)v8;
LABEL_6:
    v27 = v11;
    *((_BYTE *)v8 + v10) = v5;
    *(_WORD *)(v26 + v9) = v12;
    if ( (unsigned int)v6 >= v7 )
      break;
    v8 = (void *)v26;
  }
  if ( !v27 )
  {
LABEL_33:
    v21 = 0;
    v20 = (unsigned __int8 *)&dword_8DB98;
    goto LABEL_31;
  }
  v20 = (unsigned __int8 *)v26;
  v21 = v27 - 1;
LABEL_31:
  v17 = sub_6FCF0(a1, "UTF-16LE", a2, v20, v21, a5);
  v16 = (void *)v26;
LABEL_22:
  if ( v16 )
  {
    v27 = 0;
    sub_77F70(v16);
  }
  return v17;
}
// 754B4: variable 'v5' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
