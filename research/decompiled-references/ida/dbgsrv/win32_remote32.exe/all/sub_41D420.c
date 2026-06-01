/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D420
// Address: 0x0041D420

//----- (0041D420) --------------------------------------------------------
void __usercall sub_41D420(int a1@<ebx>, int a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  const char *v6; // esi
  LPVOID v7; // eax
  const char *v8; // ecx
  char v9[8]; // [esp+Ch] [ebp-2Ch] BYREF
  __int128 v10; // [esp+14h] [ebp-24h] BYREF
  __int128 *v11; // [esp+24h] [ebp-14h]
  int v12; // [esp+28h] [ebp-10h]
  int v13; // [esp+34h] [ebp-4h]
  unsigned int v14; // [esp+40h] [ebp+8h]

  v12 = sub_45C9E0();
  v3 = sub_428D10("exception");
  if ( a2 )
  {
    sub_423B70(a2);
    *(_BYTE *)a2 = 5;
    v4 = sub_4627C2(0x10u);
    v13 = 0;
    if ( v4 )
    {
      if ( v3 )
        v5 = sub_426170(v4, *(_DWORD *)(v3 + 12));
      else
        v5 = sub_426170(v4, 0);
    }
    else
    {
      v5 = nullptr;
    }
    *(_DWORD *)(a2 + 8) = v5;
  }
  else
  {
    sub_45CC20(1532);
  }
  v9[0] = 2;
  v10 = 0;
  LODWORD(v10) = v12;
  v13 = 1;
  sub_424EF0(a2, "qerrno", v9, 0);
  v6 = sub_45D760(a1, (__m128i)0LL, -1);
  v14 = (unsigned int)v6;
  sub_423B70((int)v9);
  if ( v6 )
    v6 = (const char *)strlen(v6);
  v9[0] = 7;
  v11 = &v10;
  v7 = nullptr;
  *(_QWORD *)&v10 = 0;
  DWORD2(v10) = 0;
  LOBYTE(v13) = 2;
  if ( v6 )
  {
    v8 = v6 + 1;
    if ( v6 != (const char *)-1 )
    {
      v7 = sub_453B00((int)&v10, nullptr, (unsigned int)(v6 + 1), 1u);
      LODWORD(v10) = v7;
      v8 = v6 + 1;
    }
    DWORD1(v10) = v8;
    sub_464310((unsigned int)v7, v14, (unsigned int)v6);
    v6[v10] = 0;
  }
  LOBYTE(v13) = 1;
  sub_424EF0(a2, "description", v9, 0);
  sub_45CC20(v12);
  v13 = 3;
  sub_423B70((int)v9);
}
