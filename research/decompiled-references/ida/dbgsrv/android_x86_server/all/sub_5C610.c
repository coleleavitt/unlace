/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C610
// Address: 0x0005C610

//----- (0005C610) --------------------------------------------------------
char __cdecl sub_5C610(int a1, _DWORD *a2, int a3, char *a4)
{
  unsigned int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v8; // [esp+8h] [ebp-24h] BYREF
  _DWORD v9[7]; // [esp+10h] [ebp-1Ch] BYREF

  v9[2] = __readgsdword(0x14u);
  v4 = a2[4];
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = sub_538B0(*(_DWORD *)(a1 + 4), v4);
      v6 = *(_DWORD *)(v5 + 36);
      if ( v6 != -1 )
        return sub_5E430(a1, a2, v6, a3, a4, 0);
      v4 = *(_DWORD *)(v5 + 12);
      if ( !v4 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v8 = a3;
    sub_68CD0((int)v9, (int)a2, a3, (int)dword_F4D90, &v8);
    copy_idcv((char *)(v9[0] + 28), a4);
    return 1;
  }
}
// F4D90: using guessed type int dword_F4D90[2];
