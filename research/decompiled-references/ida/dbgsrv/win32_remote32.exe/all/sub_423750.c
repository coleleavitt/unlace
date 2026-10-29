/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423750
// Address: 0x00423750

//----- (00423750) --------------------------------------------------------
int __stdcall sub_423750(int a1, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int **v8; // edx
  int *i; // ecx
  int v10; // ecx
  int j; // eax

  if ( *(_BYTE *)a2 != 5 )
    return sub_423670((char *)a1, (char *)a2);
  v3 = sub_4627C2(0x10u);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD **)(a2 + 8);
    *v3 = 0;
    v3[1] = 0;
    v6 = sub_4627C2(0x38u);
    *v6 = v6;
    v6[1] = v6;
    v6[2] = v6;
    *((_WORD *)v6 + 6) = 257;
    *v4 = v6;
    *(_DWORD *)(*v4 + 4) = sub_41C180(v4, *(_DWORD *)(*v5 + 4), (int)v6);
    v7 = (_DWORD *)*v4;
    v4[1] = v5[1];
    v8 = (int **)v7[1];
    if ( *((_BYTE *)v8 + 13) )
    {
      *v7 = v7;
      *(_DWORD *)(*v4 + 8) = *v4;
      v4[2] = 1;
      v4[3] = v5[3];
    }
    else
    {
      for ( i = *v8; !*((_BYTE *)i + 13); i = (int *)*i )
        v8 = (int **)i;
      *v7 = v8;
      v10 = *(_DWORD *)(*v4 + 4);
      for ( j = *(_DWORD *)(v10 + 8); !*(_BYTE *)(j + 13); j = *(_DWORD *)(j + 8) )
        v10 = j;
      *(_DWORD *)(*v4 + 8) = v10;
      v4[2] = 1;
      v4[3] = v5[3];
    }
  }
  else
  {
    v4 = nullptr;
  }
  sub_423B70(a1);
  *(_BYTE *)a1 = 5;
  *(_DWORD *)(a1 + 8) = v4;
  return 0;
}
