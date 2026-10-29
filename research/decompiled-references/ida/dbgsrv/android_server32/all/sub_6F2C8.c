/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F2C8
// Address: 0x0006F2C8

//----- (0006F2C8) --------------------------------------------------------
int __fastcall sub_6F2C8(_DWORD *a1, _BYTE *a2)
{
  _BYTE *v3; // r6
  int v4; // r5
  void *v5; // r0
  void **v6; // r7
  size_t v7; // r0
  unsigned int v8; // r2
  void *v9; // r0
  void **v10; // r7
  size_t v11; // r0
  unsigned int v12; // r2
  void *v13; // r0
  const void *v14; // r1
  size_t v15; // r6
  int v16; // r0
  const void *v17; // r1
  unsigned int v19; // [sp+0h] [bp-1Ch]
  unsigned int v20; // [sp+0h] [bp-1Ch]
  size_t v21; // [sp+4h] [bp-18h]
  size_t v22; // [sp+4h] [bp-18h]
  _DWORD v23[3]; // [sp+Ch] [bp-10h] BYREF

  if ( *a2 != 45 )
  {
    if ( !under_debugger )
      interr(2756);
    __debugbreak();
  }
  v3 = a2 + 2;
  v4 = 0;
  switch ( a2[1] )
  {
    case 'P':
      a1[21] |= 0x402u;
      sub_1B09C((int)v23, a2 + 2);
      sub_6F488((int)(a1 + 11), (int)v23, 1);
      v5 = (void *)v23[0];
      if ( !v23[0] )
        return 1;
      goto LABEL_10;
    case 'h':
      sub_1B09C((int)v23, a2 + 2);
      sub_6F488((int)(a1 + 1), (int)v23, 1);
      v5 = (void *)v23[0];
      if ( v23[0] )
      {
LABEL_10:
        v23[1] = 0;
        qfree(v5);
        v23[2] = 0;
        v23[0] = 0;
      }
      return 1;
    case 'p':
      v6 = (void **)(a1 + 8);
      v4 = 1;
      if ( a2 == (_BYTE *)-2 || (v7 = strlen(a2 + 2)) == 0 )
      {
        a1[9] = 0;
        return v4;
      }
      v21 = v7;
      v8 = v7 + 1;
      if ( a1[10] >= v7 + 1 )
      {
        v9 = *v6;
      }
      else
      {
        v19 = v7 + 1;
        v9 = qvector_reserve((int)(a1 + 8), *v6, v8, 1u);
        v8 = v19;
        *v6 = v9;
      }
      a1[9] = v8;
      v14 = v3;
      v15 = v21;
      memmove(v9, v14, v21);
      v16 = a1[8];
      goto LABEL_22;
    case 'u':
      v10 = (void **)(a1 + 5);
      v4 = 1;
      if ( a2 == (_BYTE *)-2 || (v11 = strlen(a2 + 2)) == 0 )
      {
        a1[6] = 0;
      }
      else
      {
        v22 = v11;
        v12 = v11 + 1;
        if ( a1[7] >= v11 + 1 )
        {
          v13 = *v10;
        }
        else
        {
          v20 = v11 + 1;
          v13 = qvector_reserve((int)(a1 + 5), *v10, v12, 1u);
          v12 = v20;
          *v10 = v13;
        }
        a1[6] = v12;
        v17 = v3;
        v15 = v22;
        memmove(v13, v17, v22);
        v16 = a1[5];
LABEL_22:
        *(_BYTE *)(v16 + v15) = 0;
      }
      return v4;
    default:
      return v4;
  }
}
// E0550: using guessed type char under_debugger;
