/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424C30
// Address: 0x00424C30

//----- (00424C30) --------------------------------------------------------
const CHAR *__stdcall sub_424C30(int a1, const char *a2)
{
  _DWORD *v2; // eax
  _BYTE *v3; // edx
  unsigned int v4; // ebx
  unsigned int v5; // esi
  int *v6; // edi
  int *i; // esi
  const char *v8; // eax
  const char *v9; // ecx
  int v10; // eax
  const CHAR *result; // eax
  _BYTE *v12; // [esp+10h] [ebp-18h] BYREF
  unsigned int v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]
  _DWORD *v16; // [esp+30h] [ebp+8h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v2 = *(_DWORD **)(a1 + 8);
  v3 = nullptr;
  v4 = 0;
  v16 = v2;
  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( a2 )
  {
    v5 = strlen(a2);
    if ( v5 != -1 )
    {
      v3 = sub_453B00((int)&v12, nullptr, v5 + 1, 1u);
      v12 = v3;
    }
    v13 = v5 + 1;
    sub_464310((unsigned int)v3, (unsigned int)a2, v5);
    v12[v5] = 0;
    v4 = v13;
    v3 = v12;
    v2 = v16;
  }
  v6 = (int *)*v2;
  for ( i = *(int **)(*v2 + 4); !*((_BYTE *)i + 13); v3 = v12 )
  {
    v8 = MultiByteStr;
    if ( i[5] )
      v8 = (const char *)i[4];
    v9 = MultiByteStr;
    if ( v4 )
      v9 = v3;
    v10 = strcmp(v9, v8);
    if ( v10 )
      v10 = v10 < 0 ? -1 : 1;
    if ( v10 >= 0 )
    {
      i = (int *)i[2];
    }
    else
    {
      v6 = i;
      i = (int *)*i;
    }
  }
  v15 = 1;
  if ( v12 )
  {
    v13 = 0;
    sub_453A20(v12);
    v12 = nullptr;
    v14 = 0;
  }
  if ( v6 == (int *)*v16 )
    return nullptr;
  result = MultiByteStr;
  if ( v6[5] )
    return (const CHAR *)v6[4];
  return result;
}
