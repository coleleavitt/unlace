/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D920
// Address: 0x0006D920

//----- (0006D920) --------------------------------------------------------
int __fastcall sub_6D920(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v5; // r5
  signed int v6; // r0
  size_t v7; // r7
  char *v8; // r4
  char *v9; // r1
  unsigned int v10; // r7
  _BYTE *v11; // r0
  unsigned int v12; // r7
  _BYTE *v13; // r0
  int v15; // [sp+Ch] [bp-28h]
  void *v16; // [sp+Ch] [bp-28h]
  unsigned int v18; // [sp+18h] [bp-1Ch] BYREF
  void *v19; // [sp+1Ch] [bp-18h] BYREF
  char *v20; // [sp+20h] [bp-14h] BYREF
  unsigned int v21; // [sp+24h] [bp-10h]
  _BYTE v22[5]; // [sp+28h] [bp-Ch] BYREF
  _BYTE v23[3]; // [sp+2Dh] [bp-7h] BYREF

  v5 = 1;
  if ( *(_DWORD *)(a1 + 20) )
  {
    v20 = (char *)a3;
    v21 = a4;
    v15 = unpack_dd((unsigned int *)&v20, a4);
    v6 = unpack_dd((unsigned int *)&v20, v21);
    v7 = v6;
    v8 = nullptr;
    if ( !v6 || (v8 = (char *)qalloc(v6), v5 = 2, v8) )
    {
      v9 = v20;
      v5 = 1;
      if ( &v20[v7] >= v20 && (unsigned int)&v20[v7] <= v21 )
      {
        v20 += v7;
        qmemcpy(v8, v9, v7);
        if ( v8 )
        {
          v5 = 0;
          v19 = nullptr;
          v18 = 0;
          v10 = (*(int (__fastcall **)(int, int, char *, size_t, void **, unsigned int *, _DWORD))(a1 + 20))(
                  a1,
                  v15,
                  v8,
                  v7,
                  &v19,
                  &v18,
                  *(_DWORD *)(a1 + 20));
          qfree(v8);
          v11 = pack_dd(v22, (unsigned int)v23, v10);
          ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v22, v11 - v22);
          v16 = v19;
          v12 = v18;
          v13 = pack_dd(v22, (unsigned int)v23, v18);
          ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v22, v13 - v22);
          ((void (__fastcall *)(int, void *, unsigned int))loc_30B84)(a2, v16, v12);
          qfree(v19);
        }
      }
    }
  }
  return v5;
}
