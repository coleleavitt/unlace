/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424EF0
// Address: 0x00424EF0

//----- (00424EF0) --------------------------------------------------------
int __stdcall sub_424EF0(int a1, const char *a2, char *a3, char a4)
{
  char *v4; // eax
  _BYTE *v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // eax
  char *v9; // eax
  int v10; // esi
  _DWORD *v11[20]; // [esp+10h] [ebp-68h] BYREF
  _BYTE *v12; // [esp+60h] [ebp-18h] BYREF
  unsigned int v13; // [esp+64h] [ebp-14h]
  int v14; // [esp+68h] [ebp-10h]
  int v15; // [esp+74h] [ebp-4h]

  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v6 = nullptr;
      v12 = nullptr;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      if ( a2 )
      {
        v7 = strlen(a2);
        v8 = v7 + 1;
        if ( v7 != -1 )
        {
          v6 = sub_453B00((int)&v12, nullptr, v7 + 1, 1u);
          v8 = v7 + 1;
          v12 = v6;
        }
        v13 = v8;
        sub_464310((unsigned int)v6, (unsigned int)a2, v7);
        v12[v7] = 0;
      }
      v15 = 1;
      if ( a4 )
      {
        sub_41C8A0((char *)v11, 0, 1);
        LOBYTE(v15) = 3;
        if ( sub_4232D0(v11, (int)a2, *(int **)(a1 + 8), (unsigned int *)&v12, a3) )
          v10 = 0;
        else
          v10 = sub_45C9E0();
        sub_41CD20(v11);
      }
      else
      {
        v9 = (char *)sub_41CF00(*(int **)(a1 + 8), (unsigned int *)&v12);
        sub_423670(v9, a3);
        v10 = 0;
      }
      v15 = 5;
      if ( v12 )
      {
        v13 = 0;
        sub_453A20(v12);
      }
      return v10;
    }
    else
    {
      return sub_45CC20(1532);
    }
  }
  else
  {
    v4 = (char *)sub_428D20(a2);
    if ( v4 )
    {
      sub_423670(v4, a3);
      return 0;
    }
    else
    {
      sub_45CB10(0, a2);
      return sub_45CC20(1538);
    }
  }
}
