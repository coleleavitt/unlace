/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AF1A
// Address: 0x0046AF1A

//----- (0046AF1A) --------------------------------------------------------
char __userpurge sub_46AF1A@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, unsigned int a4, char a5)
{
  int v6; // eax
  int v8; // eax
  unsigned int v9; // edi
  signed int v10; // ebx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // [esp-4h] [ebp-14h]
  int v21; // [esp+Ch] [ebp-4h]

  v6 = sub_46AC80(*(_DWORD *)(a1 + 44));
  v21 = v6;
  switch ( v6 )
  {
    case 1:
      v17 = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 20) += 4;
      v12 = (v17 & 0x10) == 0;
      v18 = *(_DWORD *)(a1 + 20);
      if ( v12 )
        v14 = *(unsigned __int8 *)(v18 - 4);
      else
        v14 = *(char *)(v18 - 4);
      goto LABEL_16;
    case 2:
      v15 = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 20) += 4;
      v12 = (v15 & 0x10) == 0;
      v16 = *(_DWORD *)(a1 + 20);
      if ( v12 )
        v14 = *(unsigned __int16 *)(v16 - 4);
      else
        v14 = *(__int16 *)(v16 - 4);
LABEL_16:
      v10 = v14 >> 31;
      v9 = v14;
      goto LABEL_17;
    case 4:
      v11 = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 20) += 4;
      v12 = (v11 & 0x10) == 0;
      v13 = *(_DWORD *)(a1 + 20);
      if ( v12 )
      {
        v9 = *(_DWORD *)(v13 - 4);
        v10 = 0;
        goto LABEL_17;
      }
      v14 = *(_DWORD *)(v13 - 4);
      goto LABEL_16;
  }
  if ( v6 != 8 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a2, a3);
    return 0;
  }
  *(_DWORD *)(a1 + 20) += 8;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(v8 - 8);
  v10 = *(_DWORD *)(v8 - 4);
LABEL_17:
  v19 = *(_DWORD *)(a1 + 32);
  if ( (v19 & 0x10) != 0 && v10 < 0 )
  {
    v9 = -v9;
    v10 = (unsigned __int64)-__SPAIR64__(v10, v9) >> 32;
    v19 |= 0x40u;
    *(_DWORD *)(a1 + 32) = v19;
  }
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v20 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 32) = v19 & 0xFFFFFFF7;
    sub_469AA4(a1 + 64, v20);
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 1;
  }
  if ( !(v10 | v9) )
    *(_DWORD *)(a1 + 32) &= ~0x20u;
  *(_BYTE *)(a1 + 60) = 0;
  if ( v21 == 8 )
    sub_469BE3((int *)a1, v9, v10, a4, a5);
  else
    sub_469B70((int *)a1, v9, a4, a5);
  if ( (*(_DWORD *)(a1 + 32) & 0x80) != 0 && (!*(_DWORD *)(a1 + 56) || **(_BYTE **)(a1 + 52) != 48) )
  {
    *(_BYTE *)--*(_DWORD *)(a1 + 52) = 48;
    ++*(_DWORD *)(a1 + 56);
  }
  return 1;
}
