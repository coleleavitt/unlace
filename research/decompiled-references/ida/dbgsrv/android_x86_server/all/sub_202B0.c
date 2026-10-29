/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_202B0
// Address: 0x000202B0

//----- (000202B0) --------------------------------------------------------
int __cdecl sub_202B0(int a1, _DWORD *a2, int a3)
{
  char *v3; // eax
  int v4; // ecx
  FILE *v5; // esi
  int v6; // eax
  char *v7; // esi
  int *v8; // eax
  void *v9; // eax
  int v11; // [esp+14h] [ebp-28h]
  int v12; // [esp+14h] [ebp-28h]
  char *v13; // [esp+18h] [ebp-24h] BYREF
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  unsigned int v16; // [esp+28h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  sub_1F400((int)&v13, "/proc/%d/task/%d/comm", *(_DWORD *)(a1 + 624), a3);
  if ( v14 )
    v3 = v13;
  else
    v3 = byte_EF875;
  v5 = fopenRT(v3);
  if ( v5 )
  {
    v6 = qgetline(a2, v5);
    LOBYTE(v6) = 1;
    v11 = v6;
    qfclose(v5);
  }
  else
  {
    v7 = v13;
    v12 = v14;
    v8 = (int *)__errno(v4);
    v9 = winerr(*v8);
    if ( !v12 )
      v7 = byte_EF875;
    sub_1C9D0(a1, "%s: %s\n", v7, v9);
    v11 = 0;
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v13 = nullptr;
    v15 = 0;
  }
  return v11;
}
// 20361: variable 'v4' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
