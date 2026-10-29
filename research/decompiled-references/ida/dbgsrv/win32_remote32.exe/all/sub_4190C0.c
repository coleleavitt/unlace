/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4190C0
// Address: 0x004190C0

//----- (004190C0) --------------------------------------------------------
char __userpurge sub_4190C0@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  double v9; // rcx
  unsigned int v10; // eax
  int **v11; // eax
  int i; // eax
  int *j; // ecx
  unsigned int v15; // [esp-8h] [ebp-18h]
  int v16; // [esp-4h] [ebp-14h]
  unsigned int v17; // [esp+Ch] [ebp-4h] BYREF

  v6 = 0;
  v7 = (_DWORD *)a1[62];
  v8 = (_DWORD *)*v7;
  if ( (_DWORD *)*v7 == v7 )
    return 0;
  v16 = a2;
  do
  {
    LODWORD(v9) = v8[6];
    if ( LODWORD(v9) + v8[9] > a3 )
    {
      if ( LODWORD(v9) >= a4 )
        break;
      if ( v8[10] )
      {
        HIDWORD(v9) = v8[11];
        if ( *a5 == HIDWORD(v9) )
        {
          v6 = v8[10];
          goto LABEL_12;
        }
        sub_43C900(
          (int)a1,
          (int)"mask_page_bpts: app changed our page protection for %a (expected: 0x%x, actual: 0x%x)\n",
          v9,
          *a5,
          v16);
        v10 = *a5;
        v17 = v10;
        if ( v10 == 8 )
        {
          if ( v8[11] == 4 )
            goto LABEL_19;
        }
        else if ( v10 == 128 && v8[11] == 64 )
        {
LABEL_19:
          sub_43C900((int)a1, (int)"   ignoring changes to WRITECOPY protection\n");
          goto LABEL_12;
        }
        if ( sub_419450(&v17, v8[12], a1[114], a1[113]) )
        {
          v15 = v17;
          v8[11] = v17;
          v8[10] = 0;
          sub_43C900((int)a1, (int)"   will re-set protection to 0x%x\n", v15);
        }
      }
    }
LABEL_12:
    v11 = (int **)v8[2];
    if ( *((_BYTE *)v11 + 13) )
    {
      for ( i = v8[1]; !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
      {
        if ( v8 != *(_DWORD **)(i + 8) )
          break;
        v8 = (_DWORD *)i;
      }
      v8 = (_DWORD *)i;
    }
    else
    {
      v8 = (_DWORD *)v8[2];
      for ( j = *v11; !*((_BYTE *)j + 13); j = (int *)*j )
        v8 = j;
    }
  }
  while ( v8 != (_DWORD *)a1[62] );
  if ( v6 )
  {
    *a5 = v6;
    return 1;
  }
  return 0;
}
// 4190C0: could not find valid save-restore pair for ebx
// 41911D: variable 'v16' is possibly undefined
