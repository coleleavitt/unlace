/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E0E0
// Address: 0x0044E0E0

//----- (0044E0E0) --------------------------------------------------------
_DWORD *__cdecl sub_44E0E0(_DWORD *a1, unsigned int *a2, const char *a3, _OWORD *a4)
{
  _DWORD *v4; // edi
  char *v5; // esi
  char *v6; // ecx
  const char *v7; // eax
  unsigned int v8; // esi
  LPVOID v9; // eax
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // esi
  LPVOID v13; // edx
  unsigned int v14; // eax
  __int128 v15; // xmm0
  unsigned int v17; // [esp+1Ch] [ebp-10h]

  v4 = sub_4627C2(0x58u);
  if ( v4 )
  {
    v5 = (char *)(v4 + 3);
    *(_QWORD *)v4 = 0;
    v6 = (char *)(v4 + 6);
    v4[2] = 0;
    v4[1] = 1;
    v4[2] = 1;
    *v4 = off_48FD1C;
    v17 = *a2;
    v7 = (const char *)*a2;
    v4[3] = 0;
    v4[6] = 0;
    v4[7] = 0;
    v4[8] = 0;
    if ( v7 )
    {
      v8 = strlen(v7);
      v9 = nullptr;
      v10 = v8 + 1;
      if ( v8 != -1 )
      {
        v9 = sub_453B00((int)(v4 + 6), nullptr, v8 + 1, 1u);
        v6 = (char *)(v4 + 6);
        v4[6] = v9;
        v10 = v8 + 1;
      }
      *((_DWORD *)v6 + 1) = v10;
      sub_464310((unsigned int)v9, v17, v8);
      *(_BYTE *)(v8 + v4[6]) = 0;
      v5 = (char *)(v4 + 3);
    }
    v11 = (int)(v5 + 24);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 7) = 0;
    *((_DWORD *)v5 + 8) = 0;
    if ( a3 )
    {
      v12 = strlen(a3);
      v13 = nullptr;
      v14 = v12 + 1;
      if ( v12 != -1 )
      {
        v13 = sub_453B00(v11, nullptr, v12 + 1, 1u);
        v11 = (int)(v4 + 9);
        v4[9] = v13;
        v14 = v12 + 1;
      }
      *(_DWORD *)(v11 + 4) = v14;
      sub_464310((unsigned int)v13, (unsigned int)a3, v12);
      *(_BYTE *)(v12 + v4[9]) = 0;
      v5 = (char *)(v4 + 3);
    }
    *(_OWORD *)(v5 + 36) = *a4;
    v15 = a4[1];
    *((_DWORD *)v5 + 17) = 0;
    v5[72] = 0;
    *(_OWORD *)(v5 + 52) = v15;
    *((_DWORD *)v5 + 1) = sub_456280();
    *((_DWORD *)v5 + 2) = sub_456310(nullptr, 0);
  }
  else
  {
    v4 = nullptr;
  }
  *a1 = v4 + 3;
  a1[1] = v4;
  return a1;
}
// 48FD1C: using guessed type int (*off_48FD1C[2])();
