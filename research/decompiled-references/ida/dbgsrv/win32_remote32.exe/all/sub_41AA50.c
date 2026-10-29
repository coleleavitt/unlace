/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41AA50
// Address: 0x0041AA50

//----- (0041AA50) --------------------------------------------------------
int __userpurge sub_41AA50@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  char *v3; // eax
  const char *v4; // esi
  int v5; // eax
  LPVOID v6; // eax
  int v7; // esi
  char v9[8]; // [esp+Ch] [ebp-34h] BYREF
  __int128 v10; // [esp+14h] [ebp-2Ch] BYREF
  char *v11; // [esp+24h] [ebp-1Ch] BYREF
  int v12; // [esp+28h] [ebp-18h]
  int v13; // [esp+2Ch] [ebp-14h]
  __int128 *v14; // [esp+30h] [ebp-10h]
  int v15; // [esp+3Ch] [ebp-4h]
  unsigned int v16; // [esp+48h] [ebp+8h]

  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  if ( *(_DWORD *)(a2 + 12) )
    v3 = *(char **)(a2 + 8);
  else
    v3 = (char *)MultiByteStr;
  if ( sub_428B60(a1, nullptr, v3, (int)&v11, 0) )
  {
    v7 = 0;
    *(_DWORD *)(a3 + 8) = 1;
  }
  else
  {
    v4 = MultiByteStr;
    if ( v12 )
      v4 = v11;
    v16 = (unsigned int)v4;
    v5 = sub_428D10("exception");
    sub_4248E0(a3, v5);
    v9[0] = 2;
    v10 = 0;
    LODWORD(v10) = 0;
    LOBYTE(v15) = 1;
    sub_423B70((int)v9);
    if ( v4 )
      v4 = (const char *)strlen(v4);
    v9[0] = 7;
    v14 = &v10;
    v6 = nullptr;
    *(_QWORD *)&v10 = 0;
    DWORD2(v10) = 0;
    LOBYTE(v15) = 2;
    if ( v4 )
    {
      if ( v4 != (const char *)-1 )
      {
        v6 = sub_453B00((int)&v10, nullptr, (unsigned int)(v4 + 1), 1u);
        LODWORD(v10) = v6;
      }
      DWORD1(v10) = v4 + 1;
      sub_464310((unsigned int)v6, v16, (unsigned int)v4);
      v4[v10] = 0;
    }
    LOBYTE(v15) = 1;
    sub_424EF0(a3, "description", v9, 0);
    v7 = sub_45CC20(90);
    LOBYTE(v15) = 3;
    sub_423B70((int)v9);
  }
  v15 = 5;
  if ( v11 )
  {
    v12 = 0;
    sub_453A20(v11);
  }
  return v7;
}
