/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D7E0
// Address: 0x0006D7E0

//----- (0006D7E0) --------------------------------------------------------
int __fastcall sub_6D7E0(int a1, unsigned int a2, int a3, unsigned int a4, _DWORD *a5, size_t *a6)
{
  _BYTE *v9; // r0
  _BYTE *v10; // r0
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r5
  int v13; // r4
  int v14; // r0
  signed int v15; // r0
  size_t v16; // r7
  char *v17; // r6
  char *v18; // r1
  int v20; // [sp+8h] [bp-28h]
  int v22; // [sp+14h] [bp-1Ch]
  void *v23[3]; // [sp+18h] [bp-18h] BYREF
  char *v24; // [sp+24h] [bp-Ch] BYREF
  unsigned __int8 *v25; // [sp+28h] [bp-8h] BYREF

  sub_6DA58((int)v23, 39);
  v9 = pack_dd(&v24, (unsigned int)&v25 + 1, a2);
  ((void (__fastcall *)(void **, char **, int))loc_30B84)(v23, &v24, v9 - (_BYTE *)&v24);
  v10 = pack_dd(&v24, (unsigned int)&v25 + 1, a4);
  ((void (__fastcall *)(void **, char **, int))loc_30B84)(v23, &v24, v10 - (_BYTE *)&v24);
  ((void (__fastcall *)(void **, int, unsigned int))loc_30B84)(v23, a3, a4);
  v11 = (unsigned __int8 *)(*(int (__fastcall **)(int, int, void **))(*(_DWORD *)a1 + 8))(a1, 39, v23);
  v12 = v11;
  v13 = -1;
  if ( v11 )
  {
    v22 = -1;
    v14 = (((v11[3] << 8) + v11[2]) << 16) + (v11[1] << 8) + *v11;
    v24 = (char *)(v12 + 5);
    v25 = &v12[v14 + 5];
    v20 = unpack_dd((unsigned int *)&v24, (unsigned int)v25);
    v15 = unpack_dd((unsigned int *)&v24, (unsigned int)v25);
    v16 = v15;
    if ( a5 )
    {
      if ( v15 >= 1 )
      {
        v17 = (char *)qalloc(v15);
        *a5 = v17;
        if ( v17 )
        {
          v18 = v24;
          if ( &v24[v16] < v24 || &v24[v16] > (char *)v25 )
          {
LABEL_11:
            v13 = v22;
            goto LABEL_12;
          }
          v24 += v16;
          qmemcpy(v17, v18, v16);
        }
      }
    }
    if ( a6 )
      *a6 = v16;
    qfree(v12);
    v22 = v20;
    goto LABEL_11;
  }
LABEL_12:
  if ( v23[0] )
  {
    v23[1] = nullptr;
    qfree(v23[0]);
    v23[2] = nullptr;
    v23[0] = nullptr;
  }
  return v13;
}
// 6D8B4: conditional instruction was optimized away because r6.4!=0
