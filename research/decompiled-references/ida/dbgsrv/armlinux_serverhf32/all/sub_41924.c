/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41924
// Address: 0x00041924

//----- (00041924) --------------------------------------------------------
void __fastcall sub_41924(_DWORD *a1, int a2, int a3, const char **a4)
{
  int v7; // r5
  const char *v9; // r6
  int v10; // r5
  char *v11; // r0
  int v12; // r3
  int (*v13)(); // r3
  char *v14; // r2
  int (*v15)(); // r3

  v7 = a1[11];
  a1[24] = a1[16];
  v9 = *a4;
  v10 = v7 + 24 * a3;
  v11 = strstr(*a4, *(const char **)(v10 + 12));
  if ( v11 )
  {
    v12 = *(_DWORD *)(v10 + 16);
    if ( v12 )
      v11 += v12 - 1;
    *a4 = v11;
    v13 = *(int (**)())(*(_DWORD *)a2 + 20);
    if ( v13 != nullsub_4 )
      ((void (__fastcall *)(int, _DWORD))v13)(a2, 0);
    a1[24] = a1[15];
    v14 = (char *)*a4;
  }
  else
  {
    v14 = (char *)&v9[strlen(v9)];
    *a4 = v14;
    v15 = *(int (**)())(*(_DWORD *)a2 + 20);
    if ( v15 != nullsub_4 )
    {
      ((void (__fastcall *)(int, int))v15)(a2, a3 + 1);
      v14 = (char *)*a4;
    }
  }
  sub_41728((int)a1, a2, v14, a1[16]);
}
// 41704: using guessed type int nullsub_4();
