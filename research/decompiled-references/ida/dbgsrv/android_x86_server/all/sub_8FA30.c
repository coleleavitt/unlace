/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FA30
// Address: 0x0008FA30

//----- (0008FA30) --------------------------------------------------------
void *__cdecl sub_8FA30(int a1, unsigned __int8 a2, int *a3, char a4)
{
  int *v4; // esi
  int v5; // edi
  void *v6; // eax
  void *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  void *v11; // edi
  int v12; // edx
  int v13; // edi
  void (__cdecl *v14)(_UNKNOWN **, char *); // ecx
  char *v15; // eax
  void *v17; // [esp+Ch] [ebp-40h]
  int v18; // [esp+14h] [ebp-38h]
  int v19; // [esp+18h] [ebp-34h] BYREF
  int v20; // [esp+1Ch] [ebp-30h]
  int v21; // [esp+24h] [ebp-28h]
  int v22; // [esp+28h] [ebp-24h]
  int v23; // [esp+2Ch] [ebp-20h]
  unsigned int v24; // [esp+38h] [ebp-14h]

  v4 = a3;
  v24 = __readgsdword(0x14u);
  v5 = a1;
  v18 = a2;
  if ( !a3[1] )
    goto LABEL_8;
  while ( 2 )
  {
    if ( sub_96020(v5, v4) )
    {
LABEL_14:
      if ( *(_BYTE *)(v5 + 36) )
      {
        v14 = (void (__cdecl *)(_UNKNOWN **, char *))sub_1C900;
        if ( *(_DWORD *)(v5 + 12) )
          goto LABEL_16;
      }
      else
      {
        v14 = (void (__cdecl *)(_UNKNOWN **, char *))sub_98F70;
        if ( *(_DWORD *)(v5 + 12) )
        {
LABEL_16:
          v15 = *(char **)(v5 + 8);
LABEL_20:
          v14(&off_EC379, v15);
          goto LABEL_26;
        }
      }
      v15 = byte_EF875;
      goto LABEL_20;
    }
    if ( (a4 & 1) != 0 )
      goto LABEL_26;
    if ( *(_BYTE *)(*v4 + 4) == 52 )
      qexit(1);
LABEL_8:
    v6 = sub_96440(v5, v18);
    if ( !v6 )
      goto LABEL_14;
    v7 = v6;
    switch ( *((_BYTE *)v6 + 4) )
    {
      case 0:
        goto LABEL_27;
      case 1:
        sub_84F60((_BYTE *)v5, "rpc: remote did not understand our request");
        goto LABEL_25;
      case 2:
        sub_84F60((_BYTE *)v5, "rpc: no remote memory");
        goto LABEL_25;
      case 6:
        sub_1C900();
        goto LABEL_25;
      default:
        if ( *(_BYTE *)(v5 + 37) )
        {
          (*(void (__cdecl **)(int *, int, void *))(*(_DWORD *)v5 + 28))(&v19, v5, v6);
          v8 = v18;
          v9 = v19;
          v21 = v18;
          v18 = 0;
          v22 = v19;
          v19 = 0;
          v10 = v20;
          v23 = v20;
          v20 = 0;
          v11 = (void *)*a3;
          if ( *a3 )
          {
            a3[1] = 0;
            qfree(v11);
            v12 = v22;
            v13 = v23;
            *a3 = v21;
            a3[1] = v12;
            a3[2] = v13;
          }
          else
          {
            *a3 = v8;
            a3[1] = v9;
            a3[2] = v10;
          }
          v5 = a1;
          qfree(v17);
          v4 = a3;
          if ( a3[1] )
            continue;
          goto LABEL_8;
        }
        sub_98F70("Exploit packet has been detected and ignored\n");
LABEL_25:
        qfree(v7);
LABEL_26:
        v7 = nullptr;
LABEL_27:
        (*(void (__cdecl **)(int, void *))(*(_DWORD *)v5 + 32))(v5, v7);
        return v7;
    }
  }
}
// 8FB80: conditional instruction was optimized away because %0x1C.4==0
// 8FAB2: variable 'v17' is possibly undefined
// EC379: using guessed type _UNKNOWN *off_EC379;
