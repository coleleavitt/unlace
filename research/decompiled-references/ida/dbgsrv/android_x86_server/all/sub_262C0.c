/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_262C0
// Address: 0x000262C0

//----- (000262C0) --------------------------------------------------------
int __cdecl sub_262C0(int *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  void *v4; // eax
  unsigned int v5; // edi
  void *v6; // eax
  void *v7; // eax

  if ( a1[156] != -1 )
    (*(void (__cdecl **)(int *, _DWORD))(*a1 + 80))(a1, 0);
  a1[156] = -1;
  a1[157] = -1;
  *((_BYTE *)a1 + 632) = 0;
  *((_BYTE *)a1 + 389) = 0;
  *(_WORD *)((char *)a1 + 677) = 0;
  sub_2B710((int)(a1 + 142), (void **)a1[143]);
  a1[144] = 0;
  a1[142] = (int)(a1 + 143);
  a1[143] = 0;
  sub_2B780((int)(a1 + 139), (void **)a1[140]);
  a1[141] = 0;
  a1[139] = (int)(a1 + 140);
  a1[140] = 0;
  sub_2B6C0((int)(a1 + 136), (void **)a1[137]);
  a1[138] = 0;
  a1[136] = (int)(a1 + 137);
  a1[137] = 0;
  sub_1C250(a1 + 14);
  if ( a1[167] )
  {
    qfclose((FILE *)a1[167]);
    a1[167] = 0;
  }
  *((_BYTE *)a1 + 492) = 0;
  sub_1BD50((int)(a1 + 56), (void **)a1[57]);
  a1[58] = 0;
  a1[56] = (int)(a1 + 57);
  a1[57] = 0;
  *((_WORD *)a1 + 317) = 0;
  if ( a1[116] )
  {
    sub_199F0((void *)a1[116]);
    a1[116] = 0;
    sub_2B830((int)&dword_13BCCC, (void **)dword_13BCD0);
    dword_13BCD4 = 0;
    dword_13BCCC = (int)&dword_13BCD0;
    dword_13BCD0 = 0;
  }
  v1 = a1[117];
  if ( v1 )
    (*(void (__cdecl **)(int *, int, int, int *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v1,
      a1 + 118,
      *((unsigned __int8 *)a1 + 473));
  a1[117] = 0;
  *((_BYTE *)a1 + 473) = 0;
  v2 = a1[119];
  if ( v2 )
    (*(void (__cdecl **)(int *, int, int, int *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v2,
      a1 + 120,
      *((unsigned __int8 *)a1 + 481));
  a1[119] = 0;
  *((_BYTE *)a1 + 481) = 0;
  v3 = a1[121];
  if ( v3 )
    (*(void (__cdecl **)(int *, int, int, int *, _DWORD))(*a1 + 160))(
      a1,
      4,
      v3,
      a1 + 122,
      *((unsigned __int8 *)a1 + 489));
  a1[121] = 0;
  *((_BYTE *)a1 + 489) = 0;
  a1[168] = 0;
  v4 = (void *)a1[170];
  if ( v4 )
  {
    a1[171] = 0;
    qfree(v4);
    a1[170] = 0;
    a1[172] = 0;
  }
  a1[174] = 0;
  *((_BYTE *)a1 + 633) = 0;
  if ( a1[134] )
  {
    v5 = 0;
    do
      qfree(*(void **)(a1[133] + 4 * v5++));
    while ( v5 < a1[134] );
  }
  v6 = (void *)a1[130];
  if ( v6 )
  {
    a1[131] = 0;
    qfree(v6);
    a1[130] = 0;
    a1[132] = 0;
  }
  v7 = (void *)a1[133];
  if ( v7 )
  {
    a1[134] = 0;
    qfree(v7);
    a1[133] = 0;
    a1[135] = 0;
  }
  return sub_8A470(a1);
}
// 13BCCC: using guessed type int dword_13BCCC;
// 13BCD0: using guessed type int dword_13BCD0;
// 13BCD4: using guessed type int dword_13BCD4;
