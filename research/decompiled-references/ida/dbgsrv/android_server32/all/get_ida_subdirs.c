/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_ida_subdirs
// Address: 0x00079BF0

//----- (00079BF0) --------------------------------------------------------
int __fastcall get_ida_subdirs(int *a1, char *a2, int a3)
{
  char *v4; // r0
  unsigned int v5; // r7
  int v6; // r5
  char *v7; // r2
  int v8; // r1
  char *v9; // r0
  char *v10; // r2
  char *v11; // r0
  int v13; // [sp+10h] [bp-1030h]
  int idp_name; // [sp+20h] [bp-1020h]
  char v15; // [sp+24h] [bp-101Ch]
  char *v17; // [sp+30h] [bp-1010h] BYREF
  int v18; // [sp+34h] [bp-100Ch]
  int v19; // [sp+38h] [bp-1008h]

  v13 = a1[1];
  v15 = a3;
  idp_name = 0;
  if ( a3 << 31 )
    idp_name = get_idp_name();
  if ( (v15 & 2) != 0 )
  {
    v4 = idadir(a2);
    sub_7A110(a1, v15, v4, idp_name, 0);
  }
  sub_7A038();
  if ( dword_DF52C )
  {
    v5 = 0;
    v6 = 4;
    do
    {
      v7 = &byte_B3CBE;
      if ( *(_DWORD *)(dword_DF528 + v6) )
        v7 = *(char **)(dword_DF528 + v6 - 4);
      sub_7A110(a1, v15, v7, a2, idp_name, 0);
      v6 += 12;
      ++v5;
    }
    while ( v5 < dword_DF52C );
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v9 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v9 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v9 = "IDAIDC";
    }
    else
    {
      v8 = strcmp(a2, "til");
      v9 = nullptr;
      if ( !v8 )
        v9 = "IDATIL";
    }
    v18 = 0;
    v17 = nullptr;
    v19 = 0;
    if ( v9 && qgetenv(v9, (int)&v17) )
    {
      v10 = v17;
      if ( !v18 )
        v10 = &byte_B3CBE;
      sub_7A110(a1, v15, v10, idp_name, 0);
    }
    if ( v17 )
    {
      v18 = 0;
      qfree(v17);
      v19 = 0;
      v17 = nullptr;
    }
  }
  if ( (v15 & 2) == 0 )
  {
    v11 = idadir(a2);
    sub_7A110(a1, v15, v11, idp_name, 0);
  }
  return a1[1] - v13;
}
// B3CBE: using guessed type char byte_B3CBE;
// DF528: using guessed type int dword_DF528;
// DF52C: using guessed type int dword_DF52C;
