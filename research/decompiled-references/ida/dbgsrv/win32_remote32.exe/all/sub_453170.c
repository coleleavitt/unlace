/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453170
// Address: 0x00453170

//----- (00453170) --------------------------------------------------------
int __stdcall sub_453170(int a1)
{
  void **v1; // esi
  void *v2; // ecx
  _DWORD *v3; // eax
  struct _RTL_CRITICAL_SECTION *v4; // esi
  int (*v5)(void); // edi
  int (**v6)(void); // eax
  int v7; // ecx
  _DWORD *v8; // edx
  void *v9; // eax
  int (**v11)(void); // [esp+10h] [ebp-10h]

  v1 = (void **)dword_4B70F4;
  if ( dword_4B70F4 )
  {
    do
    {
      v2 = v1[1];
      if ( !v2 )
        break;
      v3 = *v1;
      v4 = dword_4B70F8;
      v5 = (int (*)(void))v3[(_DWORD)v2 - 1];
      sub_4562D0(dword_4B70F8);
      if ( dword_4B70F4 )
      {
        v6 = *(int (***)(void))dword_4B70F4;
        v7 = 4 * *(_DWORD *)(dword_4B70F4 + 4);
        v11 = v6;
        if ( v6 != &v6[v7 / 4u] )
        {
          while ( 1 )
          {
            v8 = v6 + 1;
            if ( v5 == *v6 )
              break;
            ++v6;
            if ( v8 == (_DWORD *)(v7 + *(_DWORD *)dword_4B70F4) )
              goto LABEL_9;
          }
          sub_464310((unsigned int)v6, (unsigned int)(v6 + 1), 4 * ((((int)v11 + v7 - (int)v6) >> 2) - 1));
          --*(_DWORD *)(dword_4B70F4 + 4);
        }
      }
LABEL_9:
      sub_4562F0(v4);
      sub_453300(v5);
      v1 = (void **)dword_4B70F4;
    }
    while ( dword_4B70F4 );
    if ( v1 )
    {
      v9 = *v1;
      if ( *v1 )
      {
        v1[1] = nullptr;
        sub_453A20(v9);
        *v1 = nullptr;
        v1[2] = nullptr;
      }
      sub_453A20(v1);
    }
  }
  dword_4B70F4 = 0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    sub_46BC95(*(_DWORD *)(a1 + 12));
    JUMPOUT(0x4532A9);
  }
  return 0;
}
// 4532A4: control flows out of bounds to 4532A9
// 4B70F4: using guessed type int dword_4B70F4;
