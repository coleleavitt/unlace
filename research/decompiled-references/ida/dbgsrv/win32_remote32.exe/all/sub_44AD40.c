/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44AD40
// Address: 0x0044AD40

//----- (0044AD40) --------------------------------------------------------
_BYTE *__userpurge sub_44AD40@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>, __m128i a3@<xmm0>, char a4, int *a5, char a6)
{
  int *v7; // esi
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  void *v11; // eax
  int v12; // eax
  void (*v13)(const char *, ...); // eax
  const CHAR *v14; // ecx
  void *v16[3]; // [esp+10h] [ebp-24h] BYREF
  int v17; // [esp+1Ch] [ebp-18h]
  int v18; // [esp+20h] [ebp-14h]
  int v19; // [esp+24h] [ebp-10h]
  int v20; // [esp+30h] [ebp-4h]

  v7 = a5;
  while ( 1 )
  {
    if ( v7[1] )
    {
      if ( sub_44BD70((_BYTE *)a1, v7) )
        break;
      if ( (a6 & 1) != 0 )
        goto LABEL_23;
      if ( *(_BYTE *)(*v7 + 4) == 52 )
        sub_4535B0((int)v7, 1u);
    }
    a2 = sub_44BC10(a1, (int)a2, a3, a4);
    if ( !a2 )
      break;
    switch ( a2[4] )
    {
      case 0:
        goto LABEL_24;
      case 1:
        sub_441F00((_BYTE *)a1, (int)"rpc: remote did not understand our request");
        sub_453A20(a2);
        goto LABEL_23;
      case 2:
        sub_441F00((_BYTE *)a1, (int)"rpc: no remote memory");
        sub_453A20(a2);
        goto LABEL_23;
      case 6:
        sub_402760("rpc: user cancelled the operation\n");
        sub_453A20(a2);
        goto LABEL_23;
      default:
        if ( !*(_BYTE *)(a1 + 37) )
        {
          sub_44D450((int)a2, a3, "Exploit packet has been detected and ignored\n");
          sub_453A20(a2);
          goto LABEL_23;
        }
        v8 = (int *)(*(int (__thiscall **)(int, void **, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v16, a2);
        v9 = *v8;
        v10 = v8[1];
        v17 = v8[2];
        v7 = a5;
        *v8 = 0;
        v8[1] = 0;
        v8[2] = 0;
        v11 = (void *)*a5;
        v20 = 3;
        v19 = v9;
        v18 = v10;
        if ( v11 )
        {
          a5[1] = 0;
          sub_453A20(v11);
          v9 = v19;
          v10 = v18;
          a5[2] = 0;
        }
        v12 = v17;
        *a5 = v9;
        a5[1] = v10;
        a5[2] = v12;
        v20 = 5;
        if ( v16[0] )
        {
          v16[1] = nullptr;
          sub_453A20(v16[0]);
          v16[0] = nullptr;
          v16[2] = nullptr;
        }
        v20 = -1;
        sub_453A20(a2);
        break;
    }
  }
  v13 = (void (*)(const char *, ...))sub_44D450;
  if ( *(_BYTE *)(a1 + 36) )
    v13 = (void (*)(const char *, ...))sub_402760;
  v14 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 12) )
    v14 = *(const CHAR **)(a1 + 8);
  v13("%s\n", v14);
LABEL_23:
  a2 = nullptr;
LABEL_24:
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, a2);
  return a2;
}
