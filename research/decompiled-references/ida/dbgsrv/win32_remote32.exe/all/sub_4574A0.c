/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4574A0
// Address: 0x004574A0

//----- (004574A0) --------------------------------------------------------
const CHAR *__stdcall sub_4574A0(__int8 *a1, int a2, int a3, char *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  int v6; // ebx
  const CHAR *v7; // eax
  bool v8; // al
  const CHAR *result; // eax
  char *v10; // ebx
  int v11; // edi
  void *v12; // eax
  char *v13; // [esp+10h] [ebp-18h] BYREF
  unsigned int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+24h] [ebp-4h]
  const CHAR *v17; // [esp+3Ch] [ebp+14h]

  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_4570F0((int)&v13, a4, 0);
  v4 = v14;
  v5 = 0;
  if ( v14 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD *)&v13[v6 + 4]
         ? sub_4569C0(a1, a2, *(char **)&v13[v6], a3, 0)
         : sub_4569C0(a1, a2, (char *)MultiByteStr, a3, 0);
      v17 = v7;
      v8 = sub_457B00(v7);
      v4 = v14;
      if ( v8 )
        break;
      ++v5;
      v6 += 12;
      if ( v5 >= v14 )
        goto LABEL_8;
    }
    result = v17;
  }
  else
  {
LABEL_8:
    result = nullptr;
    v17 = nullptr;
  }
  v10 = v13;
  v16 = 2;
  if ( v13 )
  {
    if ( v4 )
    {
      v11 = 0;
      do
      {
        v12 = *(void **)&v10[v11];
        LOBYTE(v16) = 3;
        if ( v12 )
        {
          *(_DWORD *)&v10[v11 + 4] = 0;
          sub_453A20(v12);
          *(_DWORD *)&v10[v11] = 0;
          *(_DWORD *)&v10[v11 + 8] = 0;
          v10 = v13;
        }
        v11 += 12;
        LOBYTE(v16) = 2;
        --v4;
      }
      while ( v4 );
    }
    v14 = 0;
    sub_453A20(v10);
    return v17;
  }
  return result;
}
