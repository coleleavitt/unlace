/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4182E0
// Address: 0x004182E0

//----- (004182E0) --------------------------------------------------------
void __stdcall sub_4182E0(DWORD *a1)
{
  DWORD v1; // ecx
  const char *v2; // eax
  void **v3; // edi
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // esi
  int v7; // eax
  _BYTE *v8; // ecx
  unsigned int v9; // kr00_4
  void **v10; // ebx
  unsigned int v11; // edi
  int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // [esp+10h] [ebp-1Ch]
  _BYTE *v15; // [esp+14h] [ebp-18h] BYREF
  unsigned int v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  int v18; // [esp+28h] [ebp-4h]
  char v19[1024]; // [esp+2Ch] [ebp+0h] BYREF

  if ( sub_418D10(a1, (unsigned int)v19, 1024) && !a1[4] )
    a1[4] = 4;
  v1 = a1[4];
  if ( v1 == 4 )
  {
    v2 = "[32]";
  }
  else
  {
    v2 = "[x]";
    if ( v1 == 8 )
      v2 = "[64]";
  }
  v14 = (unsigned int)v2;
  v3 = (void **)(a1 + 5);
  v4 = strlen(v2);
  if ( v4 )
  {
    v5 = v4 + 1;
    if ( v4 + 1 > a1[7] )
    {
      *v3 = sub_453B00((int)(a1 + 5), *v3, v4 + 1, 1u);
      v5 = v4 + 1;
    }
    a1[6] = v5;
    sub_464310((unsigned int)*v3, v14, v4);
    *((_BYTE *)*v3 + v4) = 0;
  }
  else
  {
    a1[6] = 0;
  }
  if ( a1[6] > 1 )
  {
    v6 = a1[6] != 0 ? a1[6] - 1 : 0;
    v7 = v6 + 2;
    if ( v6 + 2 > a1[7] )
    {
      *v3 = sub_453B00((int)(a1 + 5), *v3, v6 + 2, 1u);
      v7 = v6 + 2;
    }
    a1[6] = v7;
    *((_BYTE *)*v3 + v6) = 32;
    *((_BYTE *)*v3 + v6 + 1) = 0;
  }
  v8 = nullptr;
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v9 = strlen(v19);
  if ( v9 != -1 )
  {
    v8 = sub_453B00((int)&v15, nullptr, v9 + 1, 1u);
    v15 = v8;
  }
  v16 = v9 + 1;
  sub_464310((unsigned int)v8, (unsigned int)v19, v9);
  v15[v9] = 0;
  v10 = (void **)(a1 + 5);
  v18 = 1;
  v11 = v16 != 0 ? v16 - 1 : 0;
  if ( v11 )
  {
    v12 = a1[6] != 0 ? a1[6] - 1 : 0;
    v13 = v12 + v11 + 1;
    if ( v13 > a1[7] )
    {
      *v10 = sub_453B00((int)v10, *v10, v12 + v11 + 1, 1u);
      v13 = v12 + v11 + 1;
    }
    a1[6] = v13;
    *((_BYTE *)*v10 + v12 + v11) = 0;
    sub_464310((unsigned int)*v10 + v12, (unsigned int)v15, v11);
  }
  v18 = 2;
  if ( v15 )
  {
    v16 = 0;
    sub_453A20(v15);
  }
}
