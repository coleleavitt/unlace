/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60C8C
// Address: 0x00060C8C

//----- (00060C8C) --------------------------------------------------------
void *__fastcall sub_60C8C(int a1, int a2, int *a3, char a4)
{
  int v5; // r9
  void *v8; // r0
  void *v9; // r11
  void (*v10)(int, ...); // r2
  const char *v11; // r1
  int (*v12)(); // r2
  void *v14; // r0
  void *v15; // r0
  void *v16; // r1
  int v17; // r2
  int v18; // r3
  void *v19; // r0
  void (*v20)(int, ...); // r3
  const char *v21; // r1
  int v22; // [sp+4h] [bp-20h]
  int v23; // [sp+8h] [bp-1Ch]
  int v24; // [sp+Ch] [bp-18h]
  void *ptr; // [sp+10h] [bp-14h] BYREF
  int v26; // [sp+14h] [bp-10h]
  int v27; // [sp+18h] [bp-Ch]

  v5 = a4 & 1;
  while ( 2 )
  {
    if ( a3[1] )
    {
      if ( sub_66FA8(a1, a3) )
      {
        if ( *(_BYTE *)(a1 + 36) )
          v20 = (void (*)(int, ...))sub_171B0;
        else
          v20 = (void (*)(int, ...))sub_695E4;
        if ( *(_DWORD *)(a1 + 12) )
          v21 = *(const char **)(a1 + 8);
        else
          v21 = (const char *)&dword_8DB98;
        v9 = nullptr;
        v20((int)"%s\n", v21);
        goto LABEL_13;
      }
      if ( v5 )
      {
        v9 = nullptr;
        goto LABEL_13;
      }
      if ( *(_BYTE *)(*a3 + 4) == 52 )
        sub_78CAC(1);
    }
    v8 = sub_67944(a1, a2);
    v9 = v8;
    if ( !v8 )
    {
      if ( *(_BYTE *)(a1 + 36) )
        v10 = (void (*)(int, ...))sub_171B0;
      else
        v10 = (void (*)(int, ...))sub_695E4;
      if ( *(_DWORD *)(a1 + 12) )
        v11 = *(const char **)(a1 + 8);
      else
        v11 = (const char *)&dword_8DB98;
      v10((int)"%s\n", v11);
      goto LABEL_13;
    }
    switch ( *((_BYTE *)v8 + 4) )
    {
      case 0:
        goto LABEL_13;
      case 1:
        sub_583DC((_BYTE *)a1, "rpc: remote did not understand our request");
        goto LABEL_17;
      case 2:
        sub_583DC((_BYTE *)a1, "rpc: no remote memory");
        goto LABEL_17;
      case 6:
        sub_171B0((int)"rpc: user cancelled the operation\n");
        goto LABEL_17;
      default:
        if ( *(_BYTE *)(a1 + 37) )
        {
          (*(void (__fastcall **)(void **, int, void *))(*(_DWORD *)a1 + 28))(&ptr, a1, v8);
          v15 = (void *)*a3;
          v16 = ptr;
          v17 = v26;
          v18 = v27;
          ptr = nullptr;
          v26 = 0;
          v27 = 0;
          if ( v15 )
          {
            a3[1] = 0;
            v23 = v17;
            v24 = v18;
            v22 = (int)v16;
            sub_77F70(v15);
            v19 = ptr;
            *a3 = v22;
            a3[1] = v23;
            a3[2] = v24;
            if ( v19 )
            {
              v26 = 0;
              sub_77F70(v19);
            }
          }
          else
          {
            *a3 = (int)v16;
            a3[1] = v17;
            a3[2] = v18;
          }
          sub_77F70(v9);
          continue;
        }
        sub_695E4("Exploit packet has been detected and ignored\n");
LABEL_17:
        v14 = v9;
        v9 = nullptr;
        sub_77F70(v14);
LABEL_13:
        v12 = *(int (**)())(*(_DWORD *)a1 + 32);
        if ( v12 != nullsub_6 )
          ((void (__fastcall *)(int, void *))v12)(a1, v9);
        return v9;
    }
  }
}
// 57930: using guessed type int nullsub_6();
// 8DB98: using guessed type int dword_8DB98;
