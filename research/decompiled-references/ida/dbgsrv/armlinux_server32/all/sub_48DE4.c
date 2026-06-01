/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DE4
// Address: 0x00048DE4

//----- (00048DE4) --------------------------------------------------------
int __fastcall sub_48DE4(int a1, int a2, const char **a3, unsigned __int8 *a4)
{
  unsigned int v7; // r1
  int v9; // r0
  int v10; // r2
  unsigned __int8 *v12; // r4
  const char *v13; // r0
  const char *v14; // r1
  const char **v15; // [sp+8h] [bp-8h] BYREF

  v7 = *(_DWORD *)(a2 + 28);
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = sub_3F324(*(_DWORD *)(a1 + 4), v7);
      v10 = *(_DWORD *)(v9 + 48);
      if ( v10 != -1 )
        return sub_48B8C(a1, a2, v10, (int)a3, a4, 0);
      v7 = *(_DWORD *)(v9 + 24);
      if ( !v7 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v12 = (unsigned __int8 *)sub_4253C(*(_DWORD **)(a2 + 8), (_DWORD *)(a2 + 4), (int)a3);
    if ( (unsigned __int8 *)(a2 + 4) == v12
      || (!a3[1] ? (v13 = (const char *)&dword_8DB98) : (v13 = *a3),
          !*((_DWORD *)v12 + 5) ? (v14 = (const char *)&dword_8DB98) : (v14 = *((const char **)v12 + 4)),
          strcmp(v13, v14) < 0) )
    {
      v15 = a3;
      v12 = (unsigned __int8 *)sub_45908((_DWORD *)a2, (int)v12, (int *)&v15);
    }
    sub_45B30(v12 + 32, a4);
    return 1;
  }
}
// 8DB98: using guessed type int dword_8DB98;
