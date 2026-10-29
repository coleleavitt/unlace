/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BD30
// Address: 0x0041BD30

//----- (0041BD30) --------------------------------------------------------
int __stdcall sub_41BD30(int a1, const char *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  LPVOID v4; // eax
  int v5; // esi
  char v7[8]; // [esp+Ch] [ebp-28h] BYREF
  __int128 v8; // [esp+14h] [ebp-20h] BYREF
  __int128 *v9; // [esp+24h] [ebp-10h]
  int v10; // [esp+30h] [ebp-4h]

  v2 = sub_428D10("exception");
  sub_4248E0(a1, v2);
  v7[0] = 2;
  v8 = 0;
  LODWORD(v8) = 0;
  v10 = 0;
  sub_423B70((int)v7);
  if ( a2 )
    v3 = strlen(a2);
  else
    v3 = 0;
  v7[0] = 7;
  v9 = &v8;
  v4 = nullptr;
  *(_QWORD *)&v8 = 0;
  DWORD2(v8) = 0;
  LOBYTE(v10) = 1;
  if ( v3 )
  {
    if ( v3 != -1 )
    {
      v4 = sub_453B00((int)&v8, nullptr, v3 + 1, 1u);
      LODWORD(v8) = v4;
    }
    DWORD1(v8) = v3 + 1;
    sub_464310((unsigned int)v4, (unsigned int)a2, v3);
    *(_BYTE *)(v8 + v3) = 0;
  }
  LOBYTE(v10) = 0;
  sub_424EF0(a1, "description", v7, 0);
  v5 = sub_45CC20(90);
  v10 = 2;
  sub_423B70((int)v7);
  return v5;
}
