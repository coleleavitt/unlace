/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B99C
// Address: 0x0005B99C

//----- (0005B99C) --------------------------------------------------------
int __fastcall sub_5B99C(int a1, signed int *a2)
{
  _DWORD *v4; // r2
  char *v5; // r5
  unsigned int v7; // r1
  unsigned int v8; // r3
  void *v9; // r0
  int v10; // r9
  unsigned int v11; // r5
  void *v12; // r1
  char v13; // r10
  int v14; // r5
  void *v15; // r0
  char v16; // [sp+Fh] [bp-11h] BYREF
  char *s1; // [sp+10h] [bp-10h] BYREF
  int v18; // [sp+14h] [bp-Ch]
  int v19; // [sp+18h] [bp-8h]

  v4 = *(_DWORD **)(a1 + 8);
  s1 = nullptr;
  v18 = 0;
  v19 = 0;
  sub_5AB34((int)&s1, a2, v4);
  if ( v18 )
    v5 = s1;
  else
    v5 = (char *)&dword_8DB98;
  if ( !strcmp(v5, ".debug_info") )
  {
    *(_BYTE *)(a1 + 12) = 1;
    goto LABEL_5;
  }
  if ( !strcmp(v5, ".note.gnu.build-id") )
  {
    v7 = a2[4];
    if ( v7 < 0x10000 )
    {
      v8 = *(_DWORD *)(a1 + 20);
      if ( v7 > v8 )
      {
        sub_5B970(a1 + 16, v7);
      }
      else if ( v7 < v8 )
      {
        *(_DWORD *)(a1 + 20) = v7;
      }
      sub_74D98(*(_DWORD *)(a1 + 4), a2[5], 0);
      if ( sub_74B94(*(_DWORD *)(a1 + 4), *(void **)(a1 + 16), a2[4]) != a2[4] )
      {
        v9 = *(void **)(a1 + 16);
        if ( v9 )
        {
          *(_DWORD *)(a1 + 20) = 0;
          sub_77F70(v9);
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      goto LABEL_5;
    }
  }
  if ( strcmp(v5, ".gnu_debuglink") )
    goto LABEL_5;
  sub_74D98(*(_DWORD *)(a1 + 4), a2[5], 0);
  while ( sub_74B94(*(_DWORD *)(a1 + 4), &v16, 1) == 1 )
  {
    v13 = v16;
    if ( !v16 )
      goto LABEL_5;
    v14 = *(_DWORD *)(a1 + 32);
    if ( v14 )
    {
      v10 = v14 - 1;
      v11 = v14 + 1;
      v12 = *(void **)(a1 + 28);
      if ( *(_DWORD *)(a1 + 36) >= v11 )
        goto LABEL_20;
    }
    else
    {
      v10 = 0;
      v11 = 2;
      v12 = *(void **)(a1 + 28);
      if ( *(_DWORD *)(a1 + 36) >= 2u )
        goto LABEL_20;
    }
    v12 = sub_78018(a1 + 28, v12, v11, 1u);
    *(_DWORD *)(a1 + 28) = v12;
LABEL_20:
    *(_DWORD *)(a1 + 32) = v11;
    *((_BYTE *)v12 + v10) = v13;
    *(_BYTE *)(*(_DWORD *)(a1 + 28) + v10 + 1) = 0;
  }
  v15 = *(void **)(a1 + 28);
  if ( v15 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    sub_77F70(v15);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
LABEL_5:
  if ( s1 )
  {
    v18 = 0;
    sub_77F70(s1);
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
