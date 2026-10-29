/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454E0
// Address: 0x000454E0

//----- (000454E0) --------------------------------------------------------
int __cdecl sub_454E0(int a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // edx
  char v7; // bl
  bool v8; // cf
  _BYTE *v9; // eax
  size_t v10; // eax
  unsigned int v12; // [esp+4h] [ebp-418h]
  char src; // [esp+8h] [ebp-414h] BYREF
  _BYTE v14[1043]; // [esp+9h] [ebp-413h] BYREF

  *(_DWORD *)&v14[1023] = __readgsdword(0x14u);
  src = 0;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 - 2 <= 0x1E )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( !v3 )
      goto LABEL_9;
    v4 = 0;
    v12 = *(_DWORD *)(a1 + 24);
    do
    {
      v5 = v3 / v2;
      v6 = v3 % v2;
      v7 = 48;
      if ( (int)(v3 % v2) > 9 )
        v7 = 55;
      v2 = v12;
      v14[v4++ - 1] = v6 + v7;
      v8 = v3 < v12;
      v3 = v5;
    }
    while ( !v8 );
    if ( v4 )
    {
      v9 = &v14[v4 - 1];
    }
    else
    {
LABEL_9:
      v9 = v14;
      src = 48;
    }
    *v9 = 0;
    memrev(&src, v9 - &src);
  }
  v10 = __strlen_chk(&src, 1024);
  *(_BYTE *)a2 = 7;
  sub_2DCA0((_DWORD *)(a2 + 4), &src, v10);
  return 0;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
