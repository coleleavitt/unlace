/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46753C
// Address: 0x0046753C

//----- (0046753C) --------------------------------------------------------
char __usercall sub_46753C@<al>(int a1@<ebx>, int *a2@<edi>, int a3, int *a4)
{
  int v4; // edi
  char v5; // bl
  int v6; // edx
  int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int *v10; // ecx
  int v11; // eax
  int *v13; // [esp+Ch] [ebp-1Ch]
  int v14; // [esp+10h] [ebp-18h]
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+18h] [ebp-10h]
  int *v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]
  int v19; // [esp+24h] [ebp-4h]

  if ( !a4 )
    sub_467F38(a1, a2, 0);
  v4 = *a4;
  v5 = 0;
  if ( *a4 > 0 )
  {
    v6 = 0;
    v19 = 0;
    v15 = *(_DWORD *)(a3 + 28);
    v7 = *(int **)(v15 + 12);
    v8 = *v7;
    v9 = v7 + 1;
    v16 = v8;
    v13 = v9;
    do
    {
      v10 = v9;
      v17 = v9;
      v18 = v16;
      if ( v16 > 0 )
      {
        v11 = v6 + a4[1];
        v14 = v11;
        while ( !sub_466FEA(v11, *v10, (_BYTE *)v15) )
        {
          v10 = v17 + 1;
          --v18;
          ++v17;
          v11 = v14;
          if ( v18 <= 0 )
            goto LABEL_10;
        }
        v5 = 1;
LABEL_10:
        v6 = v19;
      }
      v9 = v13;
      v6 += 16;
      v19 = v6;
      --v4;
    }
    while ( v4 );
  }
  return v5;
}
