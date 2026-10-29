/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424DA0
// Address: 0x00424DA0

//----- (00424DA0) --------------------------------------------------------
const CHAR *__stdcall sub_424DA0(int a1, int a2)
{
  int *v2; // eax
  _BYTE *v3; // ebx
  const char *v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // eax
  int v7; // esi
  const char *v8; // eax
  int v9; // esi
  int v10; // eax
  const CHAR *result; // eax
  int v12[3]; // [esp+10h] [ebp-24h] BYREF
  _BYTE *v13; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v14; // [esp+20h] [ebp-14h]
  int v15; // [esp+24h] [ebp-10h]
  int v16; // [esp+30h] [ebp-4h]
  int *v17; // [esp+3Ch] [ebp+8h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v2 = *(int **)(a1 + 8);
  v3 = nullptr;
  v17 = v2;
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  v4 = (const char *)a2;
  v16 = 0;
  if ( a2 )
  {
    v5 = strlen((const char *)a2);
    v6 = v5 + 1;
    if ( v5 != -1 )
    {
      v3 = sub_453B00((int)&v13, nullptr, v5 + 1, 1u);
      v6 = v5 + 1;
      v13 = v3;
    }
    v14 = v6;
    sub_464310((unsigned int)v3, (unsigned int)v4, v5);
    v13[v5] = 0;
    v3 = v13;
    v2 = v17;
  }
  v7 = sub_41C640(v2, v12, (int)&v13)[2];
  a2 = v7;
  v16 = 1;
  if ( v3 )
  {
    v14 = 0;
    sub_453A20(v3);
  }
  if ( v7 == *(_DWORD *)*v17 )
    return nullptr;
  sub_41D030((int **)&a2);
  v8 = MultiByteStr;
  v9 = *(_DWORD *)(a2 + 20);
  if ( v9 )
    v8 = *(const char **)(a2 + 16);
  v10 = strcmp(v8, v4);
  if ( v10 )
    v10 = v10 < 0 ? -1 : 1;
  if ( v10 >= 0 )
    return nullptr;
  result = MultiByteStr;
  if ( v9 )
    return *(const CHAR **)(a2 + 16);
  return result;
}
