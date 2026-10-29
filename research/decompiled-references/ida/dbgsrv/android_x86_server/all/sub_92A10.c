/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92A10
// Address: 0x00092A10

//----- (00092A10) --------------------------------------------------------
int __cdecl sub_92A10(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  int v8; // [esp+Ch] [ebp-30h]
  int v9; // [esp+10h] [ebp-2Ch] BYREF
  char v10; // [esp+17h] [ebp-25h] BYREF
  _DWORD v11[9]; // [esp+18h] [ebp-24h] BYREF

  v11[4] = __readgsdword(0x14u);
  LOBYTE(v4) = 1;
  v8 = v4;
  if ( !sub_8AF30((int)a1, a2, a3, a4) )
  {
    memset(v11, 0, 12);
    v5 = a1[71];
    if ( !v5 )
      v5 = a1[83];
    sub_849F0((int)v11, v5);
    if ( (*(int (__cdecl **)(_DWORD *, int, int, _DWORD, _DWORD))(*a1 + 112))(a1, a2, 1, v11[0], 0) == 1
      && (*(int (__cdecl **)(_DWORD *, _DWORD, char *, int, _DWORD))(*a1 + 144))(
           a1,
           *(_DWORD *)(v11[0] + 16 * a1[85] + 4),
           &v10,
           1,
           0) == 1
      && (v10 & 0xFE) == 0xC2
      && (v9 = -1,
          (*(int (__cdecl **)(_DWORD *, _DWORD, int *, int, _DWORD))(*a1 + 144))(
            a1,
            *(_DWORD *)(v11[0] + 16 * a1[84] + 4),
            &v9,
            4,
            0) == 4) )
    {
      v6 = a4;
      LOBYTE(v6) = v9 == a4;
      v8 = v6;
    }
    else
    {
      v8 = 0;
    }
    sub_84B00((int)v11);
  }
  return v8;
}
// 92A3D: variable 'v4' is possibly undefined
