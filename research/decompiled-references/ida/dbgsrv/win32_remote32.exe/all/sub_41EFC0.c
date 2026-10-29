/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41EFC0
// Address: 0x0041EFC0

//----- (0041EFC0) --------------------------------------------------------
void __thiscall sub_41EFC0(unsigned int *this, int a2)
{
  int v3; // eax
  unsigned int *v4; // ecx
  const char *v5; // esi
  const CHAR *v6; // eax
  int v7; // ecx
  LPVOID v8; // eax
  int v9; // edi
  unsigned int v10; // esi
  LPVOID v11; // eax
  int v12; // esi
  unsigned int v13; // esi
  char v14[8]; // [esp+Ch] [ebp-3Ch] BYREF
  __int128 v15; // [esp+14h] [ebp-34h] BYREF
  __int128 *v16; // [esp+24h] [ebp-24h]
  int v17; // [esp+28h] [ebp-20h]
  unsigned int *v18; // [esp+2Ch] [ebp-1Ch]
  int v19; // [esp+30h] [ebp-18h] BYREF
  const CHAR *v20; // [esp+34h] [ebp-14h]
  const char *v21; // [esp+38h] [ebp-10h]
  int v22; // [esp+44h] [ebp-4h]

  v18 = this;
  v14[0] = 2;
  v15 = 0;
  LODWORD(v15) = 0;
  v22 = 0;
  v19 = -1;
  v3 = sub_45C9E0();
  v4 = (unsigned int *)*(this + 14);
  v5 = nullptr;
  v17 = v3;
  v21 = nullptr;
  v20 = nullptr;
  if ( v4 )
  {
    v6 = sub_428150(v4, *(this + 15), &v19);
    v7 = *(this + 14);
    v5 = v6;
    v20 = v6;
    if ( *(_DWORD *)(v7 + 4) )
      v21 = *(const char **)v7;
    else
      v21 = MultiByteStr;
  }
  sub_423B70((int)v14);
  if ( v5 )
    v5 = (const char *)strlen(v5);
  v14[0] = 7;
  v16 = &v15;
  v8 = nullptr;
  *(_QWORD *)&v15 = 0;
  DWORD2(v15) = 0;
  LOBYTE(v22) = 1;
  if ( v5 )
  {
    if ( v5 != (const char *)-1 )
    {
      v8 = sub_453B00((int)&v15, nullptr, (unsigned int)(v5 + 1), 1u);
      LODWORD(v15) = v8;
    }
    DWORD1(v15) = v5 + 1;
    sub_464310((unsigned int)v8, (unsigned int)v20, (unsigned int)v5);
    v5[v15] = 0;
  }
  v9 = a2;
  LOBYTE(v22) = 0;
  sub_424EF0(a2, "file", v14, 0);
  sub_423B70((int)v14);
  if ( v21 )
    v10 = strlen(v21);
  else
    v10 = 0;
  v14[0] = 7;
  v16 = &v15;
  v11 = nullptr;
  *(_QWORD *)&v15 = 0;
  DWORD2(v15) = 0;
  LOBYTE(v22) = 2;
  if ( v10 )
  {
    if ( v10 != -1 )
    {
      v11 = sub_453B00((int)&v15, nullptr, v10 + 1, 1u);
      LODWORD(v15) = v11;
    }
    DWORD1(v15) = v10 + 1;
    sub_464310((unsigned int)v11, (unsigned int)v21, v10);
    v9 = a2;
    *(_BYTE *)(v15 + v10) = 0;
  }
  LOBYTE(v22) = 0;
  sub_424EF0(v9, "func", v14, 0);
  v12 = v19;
  sub_423B70((int)v14);
  v14[0] = 2;
  LODWORD(v15) = v12;
  sub_424EF0(v9, "line", v14, 0);
  v13 = v18[15];
  sub_423B70((int)v14);
  v14[0] = 2;
  LODWORD(v15) = v13;
  sub_424EF0(v9, (const char *)&dword_489A54, v14, 0);
  sub_45CC20(v17);
  v22 = 3;
  sub_423B70((int)v14);
}
// 489A54: using guessed type int dword_489A54;
