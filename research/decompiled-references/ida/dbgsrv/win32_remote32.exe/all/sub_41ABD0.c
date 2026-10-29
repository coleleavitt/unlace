/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41ABD0
// Address: 0x0041ABD0

//----- (0041ABD0) --------------------------------------------------------
int __stdcall sub_41ABD0(int a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char *v5; // esi
  char v6; // cl
  unsigned int v7; // kr00_4
  _DWORD *v8; // edi
  LPVOID v9; // eax
  char v11[1024]; // [esp+14h] [ebp-410h] BYREF
  int v12; // [esp+420h] [ebp-4h]

  v2 = a2;
  v11[0] = 0;
  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 - 2 <= 0x1E )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v5 = v11;
    if ( !v4 )
      goto LABEL_7;
    do
    {
      v6 = 55;
      if ( (int)(v4 % v3) <= 9 )
        v6 = 48;
      *v5++ = v4 % v3 + v6;
      v4 /= v3;
    }
    while ( v4 );
    if ( v5 == v11 )
LABEL_7:
      *v5++ = 48;
    *v5 = 0;
    sub_45AD70(v11, v5 - v11);
    v2 = a2;
  }
  v7 = strlen(v11);
  v8 = (_DWORD *)(v2 + 8);
  *(_BYTE *)v2 = 7;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  v12 = 0;
  if ( v7 )
  {
    v9 = nullptr;
    if ( v7 != -1 )
    {
      v9 = sub_453B00((int)v8, nullptr, v7 + 1, 1u);
      *v8 = v9;
    }
    v8[1] = v7 + 1;
    sub_464310((unsigned int)v9, (unsigned int)v11, v7);
    *(_BYTE *)(v7 + *v8) = 0;
  }
  return 0;
}
