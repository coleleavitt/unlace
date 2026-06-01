/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67F00
// Address: 0x00067F00

//----- (00067F00) --------------------------------------------------------
void *__fastcall sub_67F00(int a1, int a2, int *a3, char a4)
{
  void *v6; // r5
  void *v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  void *v11; // r0
  void *v12; // r0
  int v13; // r1
  int v14; // r3
  int *v15; // r6
  void (*v16)(int, ...); // r2
  const char *v17; // r1
  int v19; // [sp+8h] [bp-28h]
  _BYTE *v20; // [sp+Ch] [bp-24h]
  void *v22; // [sp+14h] [bp-1Ch] BYREF
  int v23; // [sp+18h] [bp-18h]
  int v24; // [sp+1Ch] [bp-14h]
  int v25; // [sp+20h] [bp-10h]
  int v26; // [sp+24h] [bp-Ch]
  int v27; // [sp+28h] [bp-8h]

  v19 = a4 & 1;
  v20 = (_BYTE *)(a1 + 37);
  while ( 1 )
  {
    if ( !a3[1] )
      goto LABEL_8;
    if ( sub_6D398((void **)a1, a3) )
      break;
    v6 = nullptr;
    if ( v19 )
      goto LABEL_34;
    if ( *(_BYTE *)(*a3 + 4) == 52 )
      qexit(1);
LABEL_8:
    v7 = sub_6D608(a1, a2);
    if ( !v7 )
    {
      if ( *(_BYTE *)(a1 + 36) )
        v16 = (void (*)(int, ...))sub_1BBA0;
      else
        v16 = (void (*)(int, ...))sub_6F20C;
      if ( !*(_DWORD *)(a1 + 12) )
      {
        v17 = &byte_B3CBE;
        goto LABEL_26;
      }
      goto LABEL_25;
    }
    v6 = v7;
    switch ( *((_BYTE *)v7 + 4) )
    {
      case 0:
        goto LABEL_34;
      case 1:
        sub_5FA34((_BYTE *)a1, "rpc: remote did not understand our request");
        goto LABEL_32;
      case 2:
        sub_5FA34((_BYTE *)a1, "rpc: no remote memory");
        goto LABEL_32;
      case 6:
        sub_1BBA0((int)"rpc: user cancelled the operation\n");
        goto LABEL_32;
      default:
        if ( !*v20 )
        {
          sub_6F20C("Exploit packet has been detected and ignored\n");
LABEL_32:
          qfree(v6);
          goto LABEL_33;
        }
        (*(void (__fastcall **)(void **, int, void *))(*(_DWORD *)a1 + 28))(&v22, a1, v7);
        v8 = (int)v22;
        v25 = (int)v22;
        v22 = nullptr;
        v9 = v23;
        v23 = 0;
        v26 = v9;
        v10 = v24;
        v24 = 0;
        v27 = v10;
        v11 = (void *)*a3;
        if ( *a3 )
        {
          a3[1] = 0;
          qfree(v11);
          v12 = v22;
          v13 = v27;
          v14 = v26;
          *a3 = v25;
          a3[1] = v14;
          v15 = a3 + 2;
          *v15 = v13;
          a3 = v15 - 2;
          if ( v12 )
          {
            v23 = 0;
            qfree(v12);
            v24 = 0;
            v22 = nullptr;
          }
        }
        else
        {
          *a3 = v8;
          a3[1] = v9;
          a3[2] = v10;
        }
        qfree(v6);
        break;
    }
  }
  if ( *(_BYTE *)(a1 + 36) )
    v16 = (void (*)(int, ...))sub_1BBA0;
  else
    v16 = (void (*)(int, ...))sub_6F20C;
  if ( *(_DWORD *)(a1 + 12) )
  {
LABEL_25:
    v17 = *(const char **)(a1 + 8);
    goto LABEL_26;
  }
  v17 = &byte_B3CBE;
LABEL_26:
  v16((int)"%s\n", v17);
LABEL_33:
  v6 = nullptr;
LABEL_34:
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 32))(a1, v6);
  return v6;
}
// B3CBE: using guessed type char byte_B3CBE;
