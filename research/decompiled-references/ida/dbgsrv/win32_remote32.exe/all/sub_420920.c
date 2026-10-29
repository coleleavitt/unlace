/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420920
// Address: 0x00420920

//----- (00420920) --------------------------------------------------------
char __userpurge sub_420920@<al>(_DWORD *a1@<ecx>, __m128i a2@<xmm0>, int *a3, char **a4)
{
  int v5; // eax
  int v6; // esi
  unsigned int *v7; // eax
  int v8; // eax
  char v9; // bl
  int v10; // eax
  const char *v11; // eax
  char *v13; // [esp+10h] [ebp-24h] BYREF
  int v14; // [esp+14h] [ebp-20h]
  const char *v15[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v16; // [esp+30h] [ebp-4h]

  memset(v15, 0, sizeof(v15));
  *a3 = -1;
  v16 = 0;
  v5 = sub_4208A0(a1, (int *)v15);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned int *)sub_427F00(*(_DWORD *)(v5 + 12));
    v8 = sub_420020(v7, v15);
    if ( v8 != -1 )
    {
      *a3 = v8;
      v9 = 1;
      goto LABEL_11;
    }
    if ( sub_4207A0((int)a1, a2, (int *)v6, (unsigned int *)v15, a4) )
    {
      v9 = 1;
      goto LABEL_11;
    }
    sub_45CC20(88);
    v10 = sub_427F00(*(_DWORD *)(v6 + 12));
    sub_402AD0(&v13, (unsigned int *)(v10 + 16));
    LOBYTE(v16) = 3;
    sub_4042E0((int)&v13, 46);
    sub_40CC20((int)&v13, (unsigned int *)v15);
    v11 = MultiByteStr;
    if ( v14 )
      v11 = v13;
    sub_45CB10(0, v11);
    LOBYTE(v16) = 4;
    if ( v13 )
    {
      v14 = 0;
      sub_453A20(v13);
    }
  }
  v9 = 0;
LABEL_11:
  v16 = 5;
  if ( v15[0] )
    sub_453A20((void *)v15[0]);
  return v9;
}
