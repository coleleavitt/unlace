/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BD50
// Address: 0x0042BD50

//----- (0042BD50) --------------------------------------------------------
int __stdcall sub_42BD50(_DWORD *a1)
{
  const char *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  unsigned int v6; // esi
  LPVOID v7; // eax
  unsigned int v8; // ecx
  int v10; // [esp+14h] [ebp-14h]
  unsigned int v11; // [esp+18h] [ebp-10h]

  v1 = MultiByteStr;
  v10 = *(_DWORD *)(a1[46] + 4 * a1[47] - 4);
  if ( a1[5] )
    v1 = (const char *)a1[4];
  v11 = (unsigned int)v1;
  v2 = sub_4627C2(0x10u);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0;
    v2[3] = 0;
  }
  else
  {
    v3 = nullptr;
  }
  *v3 = 5;
  v4 = sub_4627C2(0xCu);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    if ( v1 )
    {
      v6 = strlen(v1);
      v7 = nullptr;
      v8 = v6 + 1;
      if ( v6 != -1 )
      {
        v7 = sub_453B00((int)v5, nullptr, v6 + 1, 1u);
        *v5 = v7;
        v8 = v6 + 1;
      }
      v5[1] = v8;
      sub_464310((unsigned int)v7, v11, v6);
      *(_BYTE *)(v6 + *v5) = 0;
    }
  }
  else
  {
    v5 = nullptr;
  }
  v3[2] = v10;
  v3[1] = v5;
  *(_DWORD *)(a1[46] + 4 * a1[47] - 4) = v3;
  return 0;
}
