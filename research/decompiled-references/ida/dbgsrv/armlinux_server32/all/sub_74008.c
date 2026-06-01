/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74008
// Address: 0x00074008

//----- (00074008) --------------------------------------------------------
int __fastcall sub_74008(int a1, char *a2, char a3)
{
  char v3; // r7
  int v4; // r10
  int *v7; // r6
  char v8; // r3
  int v9; // r4
  int v10; // r7
  unsigned int v11; // r5
  char v12; // r10
  unsigned __int8 *v13; // r2
  char v14; // r3
  const char *v15; // r0
  unsigned __int8 *v16; // r0
  unsigned __int8 *v18; // r0
  int v19; // [sp+Ch] [bp-1020h]
  int v20; // [sp+10h] [bp-101Ch]
  unsigned __int8 *v21; // [sp+18h] [bp-1014h] BYREF
  int v22; // [sp+1Ch] [bp-1010h]
  int v23; // [sp+20h] [bp-100Ch]

  v3 = a3;
  v4 = a3 & 1;
  v20 = *(_DWORD *)(a1 + 4);
  if ( (a3 & 1) != 0 )
    v4 = sub_6AEA0();
  v19 = v3 & 2;
  if ( (v3 & 2) != 0 )
  {
    v18 = (unsigned __int8 *)idadir(a2);
    sub_734F8((char **)a1, v3, v18, v4, 0);
  }
  v7 = sub_73EB4();
  if ( v7[1] )
  {
    v8 = v3;
    v9 = 0;
    v10 = v4;
    v11 = 0;
    v12 = v8;
    do
    {
      if ( *(_DWORD *)(*v7 + v9 + 4) )
        v13 = *(unsigned __int8 **)(*v7 + v9);
      else
        v13 = (unsigned __int8 *)&dword_8DB98;
      ++v11;
      sub_734F8((char **)a1, v12, v13, a2, v10, 0);
      v9 += 12;
    }
    while ( v11 < v7[1] );
    v14 = v12;
    v4 = v10;
    v3 = v14;
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v15 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v15 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v15 = "IDAIDC";
    }
    else
    {
      if ( strcmp(a2, "til") )
        goto LABEL_20;
      v15 = "IDATIL";
    }
    v21 = nullptr;
    v22 = 0;
    v23 = 0;
    if ( sub_7A894(v15, (int)&v21) )
    {
      if ( v22 )
        sub_734F8((char **)a1, v3, v21, v4, 0);
      else
        sub_734F8((char **)a1, v3, (unsigned __int8 *)&dword_8DB98, v4, 0);
    }
    if ( v21 )
    {
      v22 = 0;
      sub_77F70(v21);
    }
  }
LABEL_20:
  if ( !v19 )
  {
    v16 = (unsigned __int8 *)idadir(a2);
    sub_734F8((char **)a1, v3, v16, v4, 0);
  }
  return *(_DWORD *)(a1 + 4) - v20;
}
// 8DB98: using guessed type int dword_8DB98;
